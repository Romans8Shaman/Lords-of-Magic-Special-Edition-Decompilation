# lomse.exe import table (vanilla LoM SE 3.01)

Source of truth for NEXT_PHASE step 2.

- `iat.tsv` — all 210 IAT slots (VA, dll, symbol, name, ordinal, thunk VA if a .text `jmp *IAT` exists).
- `thunks.tsv` — the 33 `.text` import thunks (6-byte `jmp *IAT`).
- `lomse_imports.def` — the same table as a commented module-definition listing for a later source-only link.

`tools/gen_import_thunks.py` writes `src/asm/<addr>.c` from `thunks.tsv`. Each thunk is a named
`__imp_<DLL>_<symbol>` `.set` to the vanilla IAT VA so the encoding stays `ff 25 <iat>` (no reloc).

These thunks must jump to **lomse.exe's** IAT at 0x0054d000. The harness patches them inside the
running game, and `build_standalone.py` still copies the vanilla import directory and rejects
imports on rb_part. A linker-emitted IAT at that VA is NEXT_PHASE step 8; do not point the thunks
at a smackw32.dll IAT.
