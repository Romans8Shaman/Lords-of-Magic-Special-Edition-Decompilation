# lomse.exe rebuild tree (vanilla only — no mods here)

Goal: C source for every function of Lords of Magic SE 3.01 `lomse.exe` that behaves the same as the
original, proven one function at a time, then a standalone relink.

**Current entry point:** `./build.sh` produces `lomse_sa.exe` and `smackw32.dll` from source
(official llvm-mingw 20261104, default hookset `hookset_r149.txt`). Equivalence checks:
`python3 tools/equiv_suite.py --help`. Layout and release notes: `CHANGES.md`. Source-only
data/header emitters: `tools/gen_rsrc.py`, `tools/gen_data.py`, `tools/gen_pe.py`.
Never write into vanilla `game/LoM`.

**Current release:** v1.01. It is built on the v1.0 complete decompile
and adds 23 bug fixes versus that release: 22 script-engine cases where
an empty stack read leftover garbage instead of zero, and one multiplayer
setup bug where `SelectProvider` (`0044abc0`) called the sound API
(`DirectSoundCreate`) instead of the networking API (`DirectPlayCreate`).
See `CHANGES.md` for the function-level notes.

v1.0 was the first public release. It is a complete
decompile of Lords of Magic Special Edition 3.01, rebuilt so a standalone
`lomse_sa.exe` can run natively on Windows 11 from a legitimate install,
without a CD or Sierra registry keys. It includes fixes from internal
development builds: direct exe launch (no DPStub handoff), No-CD path
handling, a 16-bit fake-primary color fix, Special-mpq / announcer
fallbacks, and the sample-playback fix. `IDirectSoundBuffer::Play` in
`00478c00` now passes vanilla's third `dwFlags` argument (`uStack_14`).
An earlier two-argument `Play(buf, 0, 0)` call left Windows 11 dropping
every static sample (menu clicks and announcer) while menu music (correct
3-arg Play) still worked. 8-bit SFX are always upsampled to 16-bit before
CreateSoundBuffer, with music-like `0xE0|LOCSOFTWARE|GLOBALFOCUS` flags
first. `lomse_sa_audio.log` records every play request, volume/gate,
CSB/Lock/Play HRESULT, and MPQ open. See `CHANGES.md`.

Official inputs (read-only): vanilla `lomse.exe` md5 `92a0d830e54a9d2934bb3e9b71dcad80`,
vanilla `smackw32.dll` md5 `069f9a1bb3a768e2e42ccd2b66c0f77d`. The tools default to
`/workspace/lom_project/game/LoM/English/lomse.exe`. The harness forwards all 39 Smack
exports to `smackw32_orig.dll` (copy the vanilla DLL to that name next to the rebuilt
`smackw32.dll`).

## Layout
- `ghidra_out/` – exported by `ghidra_scripts/ExportRebuildInfo.java` + `ExportExternals.java`
  (read-only on the Ghidra project): `funcs.tsv`, `globals.tsv`, `externals.tsv`, `types.h`,
  `code/<addr>.c` (raw decomp), `overrides.tsv`.
- `include/lom.h` – prelude: Ghidra types, CONCAT/SUB/ZEXT/CARRY helpers, minimal Win32 types.
- `src/fn/<addr>.c` – accepted C (6123 functions).
- `src/asm/<addr>.c` – generated naked C for 651 EH funclets.
- `src/asmfn/<addr>.c` – three stay-asmfn helpers (`004d5735`, `00539630`, `005399b0`).
- `src/rt/rt.c` – memcpy/memset/memmove/memcmp for the freestanding build.
- `src/rdata`, `src/data`, `src/rsrc`, `src/pe` – sourced sections and the PE/IAT script.
- `src/rawtext` – remaining `.text` gaps (padding, jump tables, mid-entry tails) as assemblable bytes.
- `harness/` – `hook.c` (proxy `smackw32.dll` that patches rebuilt functions into `lomse.exe` at load)
  and `smackw32.def` (forwards all 39 exports to `smackw32_orig.dll`).
- `hookset_r149.txt` – official hookset (6777 entries: 6123 fn + 3 asmfn + 651 asm; same
  membership as r142 / r141 / r140). Sidecar `lomse_sa.exe.manifest` (dpiAware,
  supportedOS Win10/11) is shipped next to the exe, not embedded, so vanilla `.rsrc`
  stays byte-identical.
- `tools/` – pipeline (below), including `tools/test_0053cff0.py` (native `_output` difftest).
  `build/` – objects, test DLLs, reports (regenerable; not required in a clean checkout).

## How to build

Official compiler: llvm-mingw 20261104 (`/opt/llvm-mingw`). From this directory:

    ./build.sh

or `./build.sh hookset_r149.txt build/release`. Install the resulting `lomse_sa.exe` /
`smackw32.dll` only into `game/LoM_rb` and `game/LoM_rb2`. The harness also needs
`smackw32_orig.dll` (vanilla) in the same English directory.

Rebuild flags used for the official 1.01 / hookset_r149 images include
`-Wl,--no-insert-timestamp` and `-Wl,--build-id=none` on the rb_part and harness links.
The shipped Ready to Play `lomse_sa.exe` is md5 `4a65e1b2d31caacf8cf14ab1682a19af`,
SHA256 `8d8b8cb2980be2085767b31334462ca3cf228661b5fc10a2de37055da64f9ceb`.

This 1.01 image includes 23 decompiled-C bug fixes versus the v1.0
`lomse_sa.exe` (SHA256
`73d0e0ad50dc3a55e6558c57a8a128713db0fbb2c906909a872d065360edf893`). See
`CHANGES.md` for the function-level notes.

## Pipeline (lower-level)

```
export PATH=/opt/llvm-mingw/bin:$PATH
python3 tools/cc.py fn
python3 tools/cc.py asm
python3 tools/cc.py asmfn
python3 tools/cc.py rt
SA_STRICT=0 SA_PE=1 SA_RAWSRC=... SA_RDATA=src/rdata/rdata.bin \
  SA_DATA=src/data/data.bin SA_RSRC=src/rsrc/rsrc.bin \
  python3 tools/build_standalone.py hookset_r149.txt build/release/lomse_sa.exe
python3 tools/build_harness.py hookset_r149.txt fn
```

Harness env vars: `LOMRB_HOOKS=none` (load but patch nothing), `LOMRB_SKIP=addr,addr`,
`LOMRB_ONLY=addr,addr`.

## Equivalence

`python3 tools/equiv_suite.py --exe lomse_sa.exe --hookset hookset_r149.txt` runs the
section / thunk / hook-hit / no-original-`.text` checks (see `CHANGES.md` and
`tools/equiv_*.py`). A live three-way compare of turn screenshots is
`tools/equiv_threeway.py`. In-game tests must use copies (`LoM_rb` / `LoM_rb2` or isolated
test trees), never vanilla `game/LoM`.
