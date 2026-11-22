#!/bin/bash
# promote_hand.sh SRCDIR JSONL TAG : copy hand-written C from SRCDIR into src/gen (+src/hand_done), promote PASSes,
# compile into build/obj/fn. Backups: src/gen_<TAG>pre_backup, src/fn_<TAG>pre_files, STATUS + hookset_fn backups
set -e
cd /workspace/lom_project/rebuild
D=$1; J=$2; T=$3
mkdir -p src/gen_${T}pre_backup src/hand_done
for f in $D/*.c; do b=$(basename $f); [ -f src/gen/$b ] && cp src/gen/$b src/gen_${T}pre_backup/; cp $f src/gen/$b; cp $f src/hand_done/$b; done
# g159: do not copy all of src/fn (thousands of inodes per promote; filled the filesystem).
# Keep hookset + STATUS backups, plus copies of just the files being promoted.
cp build/hookset_fn.txt build/hookset_fn_${T}pre.txt
cp src/fn/STATUS.tsv src/fn/STATUS.tsv_${T}pre
mkdir -p src/fn_${T}pre_files
A=$(ls $D | sed 's/\.c$//')
for a in $A; do
  [ -f src/fn/$a.c ] && cp src/fn/$a.c src/fn_${T}pre_files/
done
A=$(ls $D | sed 's/\.c$//')
python3 tools/cc.py gen $A
python3 tools/promote.py $J --exclude build/exclude.txt | tail -1
python3 tools/cc.py fn $A
