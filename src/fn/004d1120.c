/* Rebuilt from lomse.exe FUN_004d1120 @ 0x004d1120 (351 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

/* register-held (not in _fr, see gen.py regvar_locals): local_4 */
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004d1120 1
void __fastcall rb_004d1120(void *param_1)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_8;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
  uint local_4;
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar2 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar2;
    uVar4 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar2 * 8);
    local_4 = *(uint *)(*(int *)((int)param_1 + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    uVar4 = 0;
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
  }
  piVar1 = *(int **)(*(int *)((int)param_1 + 0x5c) + *(int *)((int)param_1 + 0x60) * 4);
  if ((uVar4 & 0xff) == 5) {
    local_8 = *(int *)(*(int *)((int)param_1 + 0x80) + local_4 * 4);
    if ((((piVar1 == *(int **)(*(int *)((int)param_1 + 0x5c) + -4 + *(int *)((int)param_1 + 100) * 4
                              )) && (-1 < (int)local_4)) && ((int)local_4 < piVar1[1])) &&
       (*(uint *)(*piVar1 + 4 + local_4 * 0x10) == local_4)) {
      *(int **)(local_8 + 0x10) = piVar1;
      *(uint *)(local_8 + 0x14) = local_4;
      puVar3 = (uint *)(*piVar1 + local_4 * 0x10);
      goto LAB_004d11eb;
    }
    if (((piVar1 == *(int **)(local_8 + 0x10)) && (*(int *)(local_8 + 0x14) < piVar1[1])) &&
       ((puVar3 = (uint *)(*(int *)(local_8 + 0x14) * 0x10 + *piVar1), puVar3[1] == local_4 &&
        ((char)*puVar3 == '\x05')))) goto LAB_004d11eb;
    if (((-1 < piVar1[3]) && (piVar1[2] <= (int)local_4)) && ((int)local_4 <= piVar1[3]))
    goto LAB_004d123f;
  }
  else {
    local_8 = 0;
LAB_004d123f:
    iVar2 = 0;
    if (0 < piVar1[1]) {
      puVar3 = (uint *)*piVar1;
      do {
        if ((puVar3[1] == local_4) && ((*puVar3 & 0xff) == (uVar4 & 0xff))) {
          if (local_8 != 0) {
            *(int **)(local_8 + 0x10) = piVar1;
            *(int *)(local_8 + 0x14) = iVar2;
          }
          goto LAB_004d11eb;
        }
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 4;
      } while (iVar2 < piVar1[1]);
    }
  }
  puVar3 = (uint *)0x0;
LAB_004d11eb:
  if (puVar3 == (uint *)0x0) {
    *(undefined4 *)((int)param_1 + 0x90) = 0x11;
  }
  else {
    if ((char)puVar3[2] == '\x01') {
      puVar3[3] = puVar3[3] + 1;
      return;
    }
    *(undefined4 *)((int)param_1 + 0x90) = 0xe;
  }
  FUN_004d4550(param_1);
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  return;
#undef local_8
}
