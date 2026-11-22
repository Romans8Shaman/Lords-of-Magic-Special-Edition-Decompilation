#!/bin/bash
# bisect.sh CANDIDATES_FILE : find a hooked function that makes the smoke test die.
# Uses lomrb_only.txt in game/LoM_rb/English. Writes logs/bisect_*.txt.
set -u
G=/workspace/lom_project/game/LoM_rb/English
cp "$1" /tmp/bis_cand.txt
n=0
while [ $(wc -l < /tmp/bis_cand.txt) -gt 1 ]; do
  k=$(( $(wc -l < /tmp/bis_cand.txt) / 2 ))
  head -n $k /tmp/bis_cand.txt > /tmp/bis_a.txt; tail -n +$((k+1)) /tmp/bis_cand.txt > /tmp/bis_b.txt
  cp /tmp/bis_a.txt $G/lomrb_only.txt; n=$((n+1))
  r=$(/workspace/lom_project/smoke.sh bis$n | head -1)
  echo "step $n: first half ($k) -> $r" | tee -a /workspace/lom_project/logs/bisect_log.txt
  if [ "$r" = "DEAD" ]; then cp /tmp/bis_a.txt /tmp/bis_cand.txt; else cp /tmp/bis_b.txt /tmp/bis_cand.txt; fi
done
rm -f $G/lomrb_only.txt
echo "CULPRIT $(cat /tmp/bis_cand.txt)" | tee -a /workspace/lom_project/logs/bisect_log.txt
