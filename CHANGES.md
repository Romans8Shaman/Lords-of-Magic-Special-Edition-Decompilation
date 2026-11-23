# CHANGES

Lords of Magic Special Edition 3.01 (`lomse.exe`, md5 `92a0d830e54a9d2934bb3e9b71dcad80`) rebuilt from source.

## v1.01 — Script Engine and Multiplayer Fixes

Official image: standalone `lomse_sa.exe` 1.01, md5 `4a65e1b2d31caacf8cf14ab1682a19af`,
SHA256 `8d8b8cb2980be2085767b31334462ca3cf228661b5fc10a2de37055da64f9ceb`
(3256832 bytes). Hookset `hookset_r149.txt` (unchanged from 1.0). Official
compiler: llvm-mingw 20261104 (msvcrt, clang 23.1.5). No new PE imports.
The sidecar `lomse_sa.exe.manifest` is unchanged from 1.0.

### Bug fixes versus v1.0

This 1.01 image includes 23 decompiled-C bug fixes versus the v1.0
`lomse_sa.exe` (SHA256
`73d0e0ad50dc3a55e6558c57a8a128713db0fbb2c906909a872d065360edf893`).
Each was confirmed against the vanilla 3.01 `lomse.exe` (md5
`92a0d830e54a9d2934bb3e9b71dcad80`).

**Script-engine uninitialized stack (22 functions).** When a script tried
to read a value from an empty operand stack, the rebuilt code used leftover
garbage, or a previous function's return value, instead of a defined
result. That leftover could feed a bad type or value into a script, or
drop a later use of the value. The rebuilt functions now treat an empty
stack as zero, which is a stable, defined value.

The five the compiler flagged as sometimes-uninitialized:

- `004bf800` — an empty VM pop left `local_4` undefined; the compiled
  code could store a callee's return into an out-parameter.
- `004bf9b0` — an empty VM pop left `uStack_4` undefined; the compiled
  code could write a leftover register into a global.
- `004d3e20` — an empty VM pop left `local_4` undefined; the compiled
  code could store a callee's return into a VM slot.
- `0050d2a0` — an empty VM pop left `local_40` undefined; the compiled
  code could copy that garbage into `local_24`.
- `0051d200` — same class as `004bf800`: an empty VM pop left `local_4`
  undefined, so a callee's return could be stored into an out-parameter.

The seventeen of the same class, each zero-initialized on the empty-stack
path so later uses are defined:

- `00410760`
- `004895d0`
- `004ab290`
- `004b0ff0`
- `004cc430`
- `004cc2a0`
- `004cc140`
- `004cd700`
- `004cd7f0`
- `004d1720`
- `004d7140`
- `004da690`
- `004da840`
- `004e54f0`
- `004eeea0`
- `004f01b0`
- `00505d80`

**Multiplayer provider setup (`0044abc0`).** `SelectProvider` called
`DirectSoundCreate` (the sound system, `DSOUND.DLL` ordinal 1 at
`00533858`) instead of `DirectPlayCreate` (the networking system,
`DPLAYX.DLL` ordinal 1 at `00533852`). The decompiler mixed up two
Windows imports that were both labeled `Ordinal_1`. Multiplayer provider
setup would fail or hit the sound API. The thunk now points at
`DirectPlayCreate`.

`python3 tools/equiv_suite.py` and a 33-function regression smoke test
both PASS on this 1.01 image.

## v1.0 — First Public Release

Official images: standalone `lomse_sa.exe` 1.0, md5 `317aee03b0dcce517dfde70ffa773b1c`,
SHA256 `73d0e0ad50dc3a55e6558c57a8a128713db0fbb2c906909a872d065360edf893`
(3256832 bytes). Hookset `hookset_r149.txt` (6777 entries: 6123 fn + 3 asmfn +
651 asm; same membership as earlier hooksets in this tree). Official compiler:
llvm-mingw 20261104 (msvcrt, clang 23.1.5). No new PE imports. A sidecar
`lomse_sa.exe.manifest` (dpiAware / per-monitor v2, supportedOS through
Windows 10/11) is shipped next to the exe, not embedded, so vanilla `.rsrc`
stays byte-identical.

### Bug fixes versus the previously published 1.0

The previously published 1.0 `lomse_sa.exe` was SHA256
`827320ca6d91616d7a1bbc4cf9f2d6128f7e9170cdefdebd9ff331977304409b`,
md5 `73ce4d82d85460d153117871c9a3835b`. This 1.0 image includes five
decompiled-C bug fixes versus that build. Each was confirmed against the
vanilla 3.01 `lomse.exe` (md5 `92a0d830e54a9d2934bb3e9b71dcad80`).

1. `004638d0` — An uninitialized C register let clang `-O2` delete the
   function tail, so the rebuilt code skipped work the vanilla function
   always finished. The source now keeps that tail so the compiled path
   matches vanilla.

2. `00539bc0` — Inline assembly shifted ESP, so later stack accesses used
   the wrong slots. The assembly now keeps ESP stable and the stack layout
   matches vanilla.

3. `0046a150` — The x87 / rounding sequence did not match vanilla. It is
   now a naked stream with an indirect `__ftol` call, so the compiled
   rounding path matches vanilla.

4. `004cc5c0` — An `else` path left a register uninitialized, so compiled
   control flow diverged from vanilla. The source now initializes that path
   so the compiled function matches vanilla.

5. `004cfed0` — The same class of uninitialized-`else` bug as `004cc5c0`.
   The source now initializes that path so the compiled function matches
   vanilla.

`python3 tools/equiv_suite.py` and a 10-function regression smoke test both
PASS on this 1.0 image.

This is the first public release of the complete decompilation. You need a
legitimate copy of Lords of Magic Special Edition to play; this package is
the rebuilt standalone exe and its sidecar manifest, not the original game
data. It includes fixes from internal development builds. The list below is
what this release actually does.

### Complete decompile and relink

Every function of Lords of Magic SE 3.01 is present as C or sourced assembly
and can be relinked into a standalone `lomse_sa.exe`. See "What is in this
tree" below.

### Direct exe launch (no DPStub handoff)

Vanilla WinMain (`src/fn/004ff8b0.c`) treats a command line that does not
start with `/*` by probing the DirectPlay lobby and, if that returns 0,
`ShellExecute`s `DPStub.exe` and exits so DPStub can re-launch the game. A
double-click of `lomse_sa.exe` took that path. Against the rebuilt exe,
DPStub page-faults; if `DPStub.exe` is missing, Windows shows that it cannot
find it.

This build takes the vanilla `/*` path unconditionally: it only sets
`DAT_005d1e88 = 1` and does not call `00477dd0` or `00477c70`. A no-args
double-click of `lomse_sa.exe` starts the game directly. DirectPlay lobby
startup via DPStub is intentionally not used for the standalone.

### No CD and no Sierra registry keys

`src/fn/004fec80.c` still reads `HKLM\SOFTWARE\Sierra OnLine\Setup\LOMSE`
value `CDPath` into the game object at offset `0x110`. If that key is
missing or the query fails, it falls back to the directory of
`lomse_sa.exe` (`GetModuleFileNameA`, keep the trailing slash). Steam and
GOG English folders already contain the MPQs and other game data.

Steam's `installscript.vdf` can also write `CDPath=c:\` (the drive root,
which has no MPQs). If a registry CDPath is present but does not contain
`special.mpq` or `sndfx.mpq`, it is ignored and the exe folder is used, or
`exe\English\` if the exe sits at the game root. The process then
`SetCurrentDirectory`s to that data folder (safe: it has the MPQs, so it
will not prompt for a CD).

`src/fn/004feb10.c`: if opening an MPQ from cwd and from CDPath both fail,
retry the exe folder and `exe\English\`.

Vanilla `src/fn/004fed50.c` chdirs to CDPath, looks for the CD token
`lomse.dat` (not present in the Steam English folder), and calls
`GetDriveType`. `SetCurrentDirectory` on an empty optical drive raises
Windows' "Please insert a disk / CD-ROM" dialog. This build makes that
function always return 1 and does not touch any drive.

### Native Windows 11 display (no XP compatibility mode)

Exclusive DirectDraw `DDSCL_EXCLUSIVE|DDSCL_FULLSCREEN` plus
`SetDisplayMode(640, 480, 16)` often fails on Windows 11 without the XP
compat shim; vanilla then destroys the window and exits (~2 seconds, no
window, exit code 0).

`src/fn/004751e0.c` still tries exclusive 640x480x16 first. If that fails,
it tries exclusive 640x480x32 (what current Windows usually still allows,
and a fullscreen primary so selection tooltips are not subject to a 16-bit
windowed GetDC/DWM path). If exclusive modes fail, it sets offset `0x6ac`
to 0 and retries the already-existing windowed `DDSCL_NORMAL` path. No
ddraw wrapper (dgVoodoo / cnc-ddraw) is shipped.

On real Windows 11, exclusive 16-bit often fails, so the 32-bit exclusive
retry succeeds. The primary then becomes 32-bpp, but the game still assumes
16-bit surfaces: `00474f30` (555/565 detection) mis-reads 888 masks as a
16-bit layout, software blitters and Smacker (`005319b0`) write `ushort`
pixels at a 640-pixel pitch, and `004e4460` fills `width*height*2` bytes.
That produces noisy magenta/purple and lime-green speckles, with the
picture occupying only the left part of the frame.

After the primary is created, if `GetSurfaceDesc` reports a bit count other
than 16, the real primary is stashed at object+`0x900` (a field vanilla
only zeroed and never read) and slot 0 is replaced with a 16-bit RGB565
offscreen "fake primary". `src/fn/004750b0.c`: when +`0x900` is set, 16-bit
`CreateSurface` requests explicit RGB565 so offscreens stay 16-bit on a
32-bpp display. When the real primary is already 16-bit, the vanilla
inherit-format path is used (so 555 vs 565 still comes from the display).
`00474f30` then runs on the 16-bit fake primary and records the correct
masks. Present sites (`004753d0`, `00504c30`, `00504ce0`, `00530f00`,
`00531030`, `0043b280`, `00476980`, `004e4460`) `Blt` the 16-bit fake
primary onto the real 32-bpp primary with dest rect `{0,0,640,480}`
(`DDBLT_WAIT`), which is DirectDraw's own 16→32 conversion. `00475360`
Restores the stashed primary; `00475370` Releases it. A `LOM_FORCE32`
compile switch exists only to verify this path in Wine; it is not set in
the shipped image.

Class and faith hover labels are script tooltip strings from `gs.mpq`,
drawn with bitmap fonts also stored in the MPQs. They appear on hover (the
same as vanilla). Copy both the exe and the sidecar manifest, and turn XP
compatibility off, so the native path is the one that runs.

### Selection voice and Special-mpq without a Sierra Special key

Class names (Warrior / Mage / Thief) and faith names (Order, Chaos, Life, …)
are also spoken. The announcer is script-driven, not CD-audio; the clips
live inside both `special.mpq` and `sndfx.mpq`.

The retail MPQ set (the one that opens `special.mpq`) is chosen by
`004fec10`, which reads `HKLM\SOFTWARE\Sierra OnLine\Setup\LOM` value
`Special` (note LOM, not LOMSE). Steam's `installscript.vdf` writes only
`LOMSE\cdpath=c:\` and never writes `Special`. Without `Special`, vanilla
did not open `special.mpq`.

`src/fn/004fec10.c`: initialize the registry result to 0; treat a missing
or odd-sized `Special` query as 0; if `Special` is non-zero, keep it;
otherwise, if `special.mpq` can be opened in the current directory or in
the exe folder, return 1 so the retail MPQ set including `special.mpq` is
opened.

`src/fn/004d6ef0.c`: `op_fileexists` also tries `004fe670` (the existing
CDPath / exe-folder prefix open) after the raw cwd open fails, so
`"special.mpq"fileexists` works when cwd is not the English folder.

`src/fn/004783d0.c`: if `SetCooperativeLevel(DSSCL_NORMAL)` fails, retry
`DSSCL_PRIORITY` on the same hwnd. If the stored hwnd is NULL or both coop
levels fail, retry `DSSCL_NORMAL` / `DSSCL_PRIORITY` with
`GetForegroundWindow`, so DirectSound / speech can still initialize on a
modern DWM window.

`src/fn/00478570.c`: if `CreateSoundBuffer` fails, retry with
`LOCSOFTWARE|GLOBALFOCUS`, then drop `CTRLFREQUENCY`/`CTRLPAN`; if the WAV
is 8-bit and still fails, upsample to 16-bit signed PCM and create that
buffer. This release always upsamples 8-bit PCM to signed 16-bit *before*
CreateSoundBuffer (do not wait for a CSB failure), because Windows 11 can
return DS_OK for an 8-bit `DSBCAPS_STATIC` buffer that then mixes silence.
Prefer music-like flags `0xE0|LOCSOFTWARE|GLOBALFOCUS`, then `0xE0`, then
the STATIC retries.

### Menu clicks and announcer (sample Play flags)

The music path (`004b36d0` / `004b3320`) creates a streaming secondary
buffer with flags `0xE0` (CTRLFREQUENCY|CTRLPAN|CTRLVOLUME, no STATIC) and
calls `IDirectSoundBuffer::Play(reserved=0, priority=0, flags=1)` with all
three arguments.

The sample path goes through `00478c00`. Vanilla at `00478e2e` calls Play
with three arguments, including `dwFlags` (`uStack_14` = 1 for LOOPING, 0
for once). The Ghidra/gen rebuild of `00478c00` called `Play(buf, 0, 0)` —
only two arguments — and then *returned* `uStack_14` as the function
result. That left `dwFlags` as leftover stack. Wine's DirectSound often
treats that leftover as 0 (play once), so earlier internal builds still
spoke in Wine. Windows 11 DirectSound rejects a garbage flag
(`DSERR_INVALIDPARAM`) or otherwise fails to start the buffer, so every
static sample was silent while music (correct 3-arg Play) kept working.
The "upsample only if CreateSoundBuffer fails" path never ran in that
situation, because CSB itself was succeeding.

`src/fn/00478c00.c`: call `Play(buf, 0, 0, uStack_14)` matching vanilla.
Log every play request (name, id, IDirectSound pointer, table count,
volume at `0x13a0` and `0x136c`, the `0x13ac` loop gate), the Play
HRESULT, and dwFlags / SetVolume.

`src/fn/004fe720.c`: log each sample/file open (name, `DAT_00584c14`
use-MPQ flag, pointer, status, size). This also logs GS/LBM loads, so the
log can be a few hundred KB after a menu visit.

`src/fn/004fec80.c`: add `v16_audio_log_i` for signed decimal volumes.

A `lomse_sa_audio.log` is written next to the exe. It uses only
already-imported APIs (`CreateFileA` / `WriteFile`).

### 0053cff0 (`_output`) cdecl fix

`src/fn/0053cff0.c` (printf-family `_output`) had called `PTR_FUN_00574968`
(`_cfltcvt`) as `__stdcall`, but vanilla at `0x0053d4cd` is `call dword ptr
[0x574968]` followed by `add esp, 0x14` (cdecl, five arguments, including
the format character). Leftover stack made the post-call `strlen` of the
converted buffer dereference `ecx=0x67` (`'g'`). The game's only float
formats in the image are `"%g"` at `0x0055e360` and `"%f%n"` at
`0x0055e71c`. A first-run install (vanilla-default `lom.cfg` `6cb919a4`,
help flags on) raises the PARTY MOVEMENT scroll; Escape on that path
exercised `%g` and page-faulted. Vanilla does not fault. The call is now
`__cdecl`. `tools/test_0053cff0.py` compares original `0053cff0` to the
rebuilt function on those formats plus help-scroll `%s` / `%d` variants:
PASS 375 cases; a stdcall mutant is killed with the same `00000067` page
fault. After this fix, the first-run Escape path is CLEAN on vanilla,
harness, and standalone.

### Proof

- `python3 tools/equiv_suite.py` on the official 1.0 / `hookset_r149.txt`
  image: OVERALL PASS (9.1, 9.4, 9.5). Intended differences live only in
  `.rbtext`.
- Wine, 32-bit prefix, only `HKLM\Software\Sierra OnLine\Setup\LOMSE`
  `CDPath=c:\` (no LOM\Special, no Path), process cwd `D:\English`, 1.0
  installed in LoM_rb: dummy CDPath was ignored, all MPQs opened from cwd,
  DS init 0/0. The log shows `wav/welcome.wav` upsampled 8-to-16 (22050 Hz,
  16-bit, stereo, 500196 bytes), CreateSoundBuffer `E0|SW|GF` 0, Lock 0,
  Play 0, dwFlags 0, SetVolume 0; then `wav/button.wav`, `wav/warrior.wav`,
  `wav/mage.wav`, `wav/thief.wav` (and faith clips) with the same Play 0.
  Pulse capture matched `welcome.wav` (peak_corr 0.744 at 4.63s on a 0–15s
  window, same 0.72+ threshold used in earlier internal tests). Registry
  keys were restored after the test.
- The Play-arity bug cannot be fully reproduced as silence in Wine
  (leftover dwFlags is often 0 there), which is why earlier internal
  builds still spoke in Wine and not on a Windows 11 test machine.
- Color path: Wine exclusive (16-bit granted) main-menu crop was
  pixel-identical to the prior no-CD menu reference (corr 1.000); intro
  Smacker and class / faith screens had correct colors. A Wine forced
  32-bpp path (unshipped `LOM_FORCE32` build) also matched (menu corr
  1.000; faith panel 0.999).
- Earlier internal development tests also confirmed no-registry voice
  (Pulse capture matched welcome / warrior / mage / thief / button clips
  extracted from `special.mpq`), class and faith hover labels, and a
  no-args start with Sierra keys removed and no CD probe.

To test on Windows 11, turn off XP compatibility on `lomse_sa.exe` and
copy both `lomse_sa.exe` and `lomse_sa.exe.manifest` into the English
folder. After you run it, `lomse_sa_audio.log` appears next to the exe;
if Welcome, menu clicks, or the announcer are still silent, please send
that log. It also helps to say whether the original `lomse.exe` (vanilla,
via Steam) speaks the class and faith names on the same PC.

### What to install

Copy `Ready to Play/lomse_sa.exe` and `Ready to Play/lomse_sa.exe.manifest`
into the `English` folder of an installed Lords of Magic Special Edition
(leave the original `lomse.exe` untouched; replace any older
`lomse_sa.exe`). Turn off XP compatibility mode on `lomse_sa.exe` before
testing. No Sierra registry keys and no CD are required. Follow
`Ready to Play/HOW TO PLAY.txt`.

## What is in this tree

- 6123 functions as C (`src/fn`), 651 EH funclets as generated naked C (`src/asm`),
  and 3 stay-asmfn helpers as assembly (`src/asmfn`: `004d5735`, `005399b0`, `00539630`).
- Mid-entry bodyrefs are implemented: 19 mid-entry `jmp` stubs at original VAs so
  vanilla-identical `.rdata` scope tables still land (`raw_bodyref` 0). `00544d57`
  is a mid-byte false start, not a hook.
- Sourced `.rsrc` (`tools/gen_rsrc.py`), `.rdata` / initialized `.data` / BSS
  (`tools/gen_data.py`), and a generated PE header + import directory / IAT at
  `0x0054d000` (`tools/gen_pe.py`, `src/pe/lomse.ld`) — compared to vanilla.
  The official standalone has expected structural diffs vs vanilla: 9 sections
  vs 4, larger SizeOfImage. 33 `.text` jmp*IAT thunks match vanilla.
- Remaining `.text` gaps (padding, jump tables, mid-entry tails) as assemblable
  `src/rawtext` (`tools/gen_rawtext.py`; about 57589 gap bytes).
- A standalone exe (`tools/build_standalone.py`, `SA_STRICT=0`, `SA_PE=1`,
  `SA_RAWSRC`, `SA_RDATA` / `SA_DATA` / `SA_RSRC`) and a hook harness DLL
  (`tools/build_harness.py`). Links use `-Wl,--no-insert-timestamp` and
  `-Wl,--build-id=none`.
- Whole-game equivalence tools under `tools/equiv_*.py` (section identity,
  three-way screenshot compare, hook-hit / thunk / EH tests, no-original-`.text` gate).

## What is not claimed

- The official standalone is not a byte-identical copy of vanilla `lomse.exe`
  (extra `.rbtext` / `.rbrdata` / `.rbbuild` / `.rbdata` / `.rbpad` sections).
  Behavioural equivalence is the target.
- Remaining `src/rawtext` bytes are padding, tables, and tails — they are
  expected to stay as sourced bytes.
- Three-way vanilla / harness / standalone screenshot identity can (and in an
  earlier help-off Fire Mage run did) diverge from turn 2 because world-gen and
  unit placement are unseeded. That is a WARN, not automatically a FAIL, when
  every lane has unique turns and no crash. A crash on only some lanes is a FAIL.
- Vanilla `game/LoM` and `Lords_of_Magic_Special_Edition` are never edited.

## How to build

Official compiler: llvm-mingw 20261104 (`/opt/llvm-mingw`). From this directory:

    ./build.sh

or `./build.sh hookset_r149.txt build/release`. `hookset_r149.txt` is the
default if you just run `./build.sh`. Install the resulting `lomse_sa.exe` /
`smackw32.dll` only into `game/LoM_rb` and `game/LoM_rb2`. For the harness,
also copy vanilla `smackw32.dll` to `smackw32_orig.dll` in that English
directory.

## Play-suite results (2026-11-19)

These results were collected during internal development of the `_output`
fix and earlier standalone / harness images (sa83 / r141 and the sa82 /
r140 images they replaced). They still stand as evidence for that fix.

- Official Fire Mage pair on sa83 / r141: CLEAN (sa83M1a cap 80, unique 80/80, still in play; r141M2a real GAME OVER at iteration 57, unique 56/56, 6777 hooks, 3290 unique hits, only benign 40010006).
- First-run three-way with vanilla-default `lom.cfg` `6cb919a4` (test copies only): CLEAN on all three lanes — no `0053cff0` page fault after Escape on the PARTY MOVEMENT scroll. fr2Van (vanilla) cap 15; fr2DLL (r141 harness) cap 15, including a second Escape; fr3SA (sa83 standalone) cap 15, three Escape/Resume cycles. (Escape opens Options; turnsL Resumes and may return to the still-visible scroll. That is a turnsL/UI limitation, not a product crash.)
- Earlier sa82 / r140 evidence still stands as history: official Fire Mage pair CLEAN (GAME OVER 44 / 42); help-off three-way tw2SA / tw2DLL CLEAN at cap 25 with a WARN for unseeded turn-2 screenshot divergence; corpus Chaos/Earth standalone cap 30 and Water harness real GAME OVER 28, all CLEAN. Those images were replaced by sa83 / r141 after the `0053cff0` fix.
- A clean checkout of the sa83 / r141 tree, built with `./build.sh hookset_r141.txt build/release` and official llvm-mingw 20261104, reproduced md5s `15ef228b0071cee22b8c74fb2a8a4bac` / `94e629176adb02e108c00a7dd7801b65` and `equiv_suite` OVERALL PASS.
