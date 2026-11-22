# Mid-entry bodyrefs (NEXT_PHASE 9.5)

**Status (dry): PASS.** Official sa80 and the pre-built sa81/r139 (SA_PE only, md5 cc5fd5c9)
do not include this work. Dry image `build/sa_brdry/lomse_sa.exe` (md5 6b154c596931ade9972a6b96f3fb4b9b,
size 3250176) with SA_STRICT=0 SA_PE=1 SA_RAWSRC=build/sa_brdry/rawbin (assembled padding/tables,
57589 bytes) plus sourced .rdata/.data/.rsrc: `jmp 6777`, `raw_bodyref 0`, `rawbytes 0`,
`midjmp 19`, `raw_uncovered 0`, `rb symbols 6803`. tools/equiv_suite.py OVERALL PASS (9.1, 33
thunks, 9.5). EH funclets already ALL NATIVE + MUTANTS PASS under build/wineprefix_test.

Held source changes (not in official sa80 / pre-built sa81). Backups:
`src/fn.bak_bodyref_20261119_1450/`. Official sa81/r139 must be installed as the pre-built
SA_PE binary if sa80/r138 is CLEAN; do not silently rebuild sa81 over it with this held work
until a later official after play validation.


## Work log
The no-original-.text gate fails while `build_standalone.py` (SA_STRICT=0) keeps a
function's original body because a rebuilt source constant points mid-body.
Padding, jump tables, and post-ret gaps may stay in `src/rawtext`.

## Held source changes (not in official sa80 / sa81)

Backups: `src/fn.bak_bodyref_20261119_1450/`. Official sa81/r139 was pre-built
from the pre-change objects (SA_PE only) and must be installed as that binary
if sa80/r138 is CLEAN. Do not rebuild sa81 over it until a later official.

Dry image: `build/sa_brdry/lomse_sa.exe`. After the changes below:
`jmp 6768`, `raw_bodyref 9`, `rawbytes 4788`, `midjmp 2`, `raw_uncovered 0`,
`rb symbols 6784` (hookset membership unchanged). 9.1 on this dry image PASS.

### Dropped (decompiler leftovers / retargeted labels)

- `0046d4c0`, `00478570`, `00495370`, `004f7c50`, `004f9c00`, `005099f0`:
  `uStack_10 = <return-address after alloca_probe 00539630>` was a Ghidra
  leftover; the probe is replaced by `_fr` injection. Assignment removed.
- `004c05a0`: `iStack_c = 0x4c05af` was the return address of `FUN_004bdce0`,
  then used as a resource delta. `FUN_00522350` writes five dwords at
  `auStack_14`; vanilla uses `[0]`, `[2]`, `[3]`. C now matches that.
- `00539af0`: `g254_mid_cont` was only a bodyref anchor; the shim already
  stores its own `1:` label at `[ebp-0x10]`.
- `005399c0`: RtlUnwind TargetIp is now source label `rb_005399ec` in the
  shim (same ebp frame), not the original mid VA.
- `00539cd0`: `__global_unwind2` is a naked shim; TargetIp is `rb_00539ce8`.
- `004ff8b0`: `rb_004ffa41` (jmp to rb_004ff890) and `rb_004ffa47` (catch); mid-entry stubs in the dry image.

### Remaining (9)

`004d4b10` is special: stay-asmfn `004d5735` is `mov eax,[esi]; jmp 0x004d5399`
into the original mid-body. The C `LAB_004d5399` is not register-safe as a
live landing pad. Needs a folded mid-entry (asm tail or verified C) before
that jump can be retargeted. No .rdata pointer.

The other eight have **scope-table (or similar) dwords in vanilla .rdata**
pointing at filter/catch mid-entries. Step 7 requires `.rdata` to stay
byte-identical, so those original VAs must remain valid landing pads. Plan:
emit a 5-byte `jmp rb_<mid>` stub at each mid VA (same rule as entry hooks),
int3 the rest of the body, and add a source label that implements the
filter/catch. Do not retarget the .rdata dwords. Do not drop the source
anchors until the stubs exist, or an unwind would land on int3.

| fn | mid VAs | in .rdata |
|---|---|---|
| 00539f60 | 00539fa0, 00539fad | yes |
| 0053ab20 | 0053ab87, 0053ab9c | yes |
| 0053c2c0 | 0053c41d, 0053c432 | yes |
| 0053e930 | 0053e962 (loop, source only), 0053e9a6, 0053e9b3 | last two yes |
| 0053ec10 | 0053edeb, 0053edf1 | yes |
| 0053ee20 | 0053ee6a, 0053ee75 | yes |
| 0053f0d0 | 0053f11a, 0053f120 | yes |
| 0053f160 | 0053f1a1, 0053f1a7 | yes |
