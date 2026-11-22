# Whole-game equivalence suite (NEXT_PHASE step 9)

Run from `rebuild/`:

```
python3 tools/equiv_suite.py --exe build/sa80/lomse_sa.exe \
    --ranges build/sa80/raw_ranges.tsv --hookset build/hookset_r138.txt \
    --report build/sa80/report.txt
```

1. `tools/equiv_sections.py` — `.rdata` / initialized `.data` / `.rsrc` and PE
   directories vs vanilla; `.text` jmp+int3 mode plus raw-range identity.
2. `tools/equiv_threeway.py` — turn-screenshot compare of vanilla / harness /
   standalone directories. Do not write into `game/LoM`. For a live vanilla
   lane, make a test tree whose MPQs are symlinks and whose exe/dll are copies.
   Differences are reported, not waved off (unseeded RNG/timing is a diagnosis
   only when every lane had unique turns and no crash).
3. `src/equiv/corpus.tsv` — other faiths / starts / caps. Official checkpoint
   remains Fire Mage `CLS=325 195` cap 80. Broader rows use `play_lane_cls.sh`
   on `LoM_rb` / `LoM_rb2` only, never during an official in-progress pair.
4. `tools/test_import_thunks.py` and `tools/test_eh_funclets.py` — 33 IAT
   thunk encodings; six EH funclet templates plus every generated funclet.
   `tools/equiv_hits.py` compares `lomrb_hits.log` to a prior CLEAN baseline.
5. `tools/equiv_text_gate.py` — no-original-`.text` milestone: raw ranges must
   be padding or documented tables, not uncovered tails or uncompiled mid-entry
   bodyref bodies.

Wine prefixes for these tests live under `build/wineprefix_*` (set
`WINEPREFIX`). Do not put build outputs in `/tmp`.
