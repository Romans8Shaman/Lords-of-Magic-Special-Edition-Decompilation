#!/bin/bash
# Build lomse_sa.exe and smackw32.dll from source with official llvm-mingw.
# No /tmp outputs. Vanilla game/LoM is never written.
# Usage: ./build.sh [hookset] [out-dir]
set -euo pipefail
cd "$(dirname "$0")"
export PATH="${LLVM_MINGW:-/opt/llvm-mingw}/bin:$PATH"
CC="${CC:-/opt/llvm-mingw/bin/i686-w64-mingw32-clang}"
if [ ! -x "$CC" ]; then
  echo "official compiler not found: $CC (llvm-mingw 20261104)" >&2
  exit 1
fi
HS="${1:-hookset_r149.txt}"
OUT="${2:-build/release}"
mkdir -p "$OUT" build/rawbin build/harness build/obj/fn build/obj/asm build/obj/asmfn build/obj/rt

echo "== generate .rsrc / .rdata / .data / PE header + imports =="
python3 tools/gen_rsrc.py --rebuild
python3 tools/gen_data.py
python3 tools/gen_pe.py --no-thunks
python3 tools/test_import_thunks.py

echo "== compile sources =="
python3 tools/cc.py fn
python3 tools/cc.py asm
python3 tools/cc.py asmfn
python3 tools/cc.py rt

echo "== rawtext bins from src/rawtext =="
# Produce raw_ranges via a first standalone (no SA_RAWSRC), then assemble
# src/rawtext against those ranges (byte-compared to vanilla).
SA_STRICT=0 python3 tools/build_standalone.py "$HS" "$OUT/lomse_sa_ranges.exe"
python3 tools/gen_rawtext.py "$OUT/raw_ranges.tsv" "$OUT/rawbin"

echo "== official standalone (SA_PE + sourced data/rsrc + rawtext) =="
SA_STRICT=0 SA_PE=1 \
  SA_RAWSRC="$OUT/rawbin" \
  SA_RDATA=src/rdata/rdata.bin \
  SA_DATA=src/data/data.bin \
  SA_RSRC=src/rsrc/rsrc.bin \
  python3 tools/build_standalone.py "$HS" "$OUT/lomse_sa.exe"

echo "== harness DLL =="
python3 tools/build_harness.py "$HS" fn
cp -a build/harness/smackw32.dll "$OUT/smackw32.dll"

echo "== step 9.1 / 9.4 / 9.5 =="
python3 tools/equiv_suite.py \
  --exe "$OUT/lomse_sa.exe" \
  --ranges "$OUT/raw_ranges.tsv" \
  --hookset "$HS" \
  --report "$OUT/report.txt" || true

echo "built $OUT/lomse_sa.exe and $OUT/smackw32.dll"
echo "Install only into game/LoM_rb and game/LoM_rb2; never into game/LoM."
