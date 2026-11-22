# lomse.exe PE header and imports (vanilla LoM SE 3.01)

Source of truth for NEXT_PHASE step 8. Nothing here is a memcpy of the
vanilla header or import directory; `tools/gen_pe.py` rebuilds both from
these tables and the documented layout, then byte-compares to vanilla.

- `import_order.tsv` — hint/name stream in .rdata (named imports + the 12
  DLL name strings), starting at VA 0x00553b6c, packed 2-byte aligned.
  KERNEL32 names are split: 47 game imports, the `KERNEL32.dll` string,
  the other 11 DLLs, then 66 CRT KERNEL32 names.
- `import_descriptors.tsv` — expected IMAGE_IMPORT_DESCRIPTOR fields
  (documentation / compare aid). The generator computes them.
- `header.bin`, `iat.bin`, `imports.bin` — emitted by `tools/gen_pe.py`.
- `lomse.ld` — linker script documenting ImageBase 0x400000, entry
  0x0053c2c0, IAT at 0x0054d000, and the four section VAs.
- `iat_symbols.s`, `thunks.s` — IAT slot symbols and the 33 `.text`
  `jmp *__imp_*` thunks (no hand-written `.set` VAs). Assembled and
  compared to vanilla encodings.

IAT groups (and the ILT) are packed in ASCII order of the stored DLL
name; the import directory itself is in the link/descriptor order
recorded in `import_descriptors.tsv`. Slot contents come from
`src/imports/iat.tsv`.
