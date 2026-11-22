/* Rebuilt from lomse.exe FUN_004d35a0 @ 0x004d35a0 (365 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004d35a0 1
undefined4 __thiscall rb_004d35a0(void *this,uint param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_c;
#define local_c (*(_t_local_c *)(_fr + 0x4))
  
  if (((char)param_1 != '\x06') || ((param_1 & 0x100) != 0)) {
    return 0;
  }
  piVar1 = *(int **)(*(int *)((int)this + 0x5c) + -4 + *(int *)((int)this + 100) * 4);
  local_c = 0;
  if (0 < param_2[1]) {
    do {
      iVar2 = *param_2;
      uVar3 = *(uint *)(iVar2 + 4 + local_c * 8);
      puVar4 = (uint *)(iVar2 + local_c * 8);
      uVar5 = *(uint *)(iVar2 + local_c * 8);
      if ((uVar5 & 0x100) == 0) {
        uVar5 = uVar5 & 0xff;
        if (uVar5 == 5) {
          iVar2 = *(int *)(*(int *)((int)this + 0x80) + uVar3 * 4);
          if ((((piVar1 == *(int **)(*(int *)((int)this + 0x5c) + -4 + *(int *)((int)this + 100) * 4
                                    )) && (-1 < (int)uVar3)) && ((int)uVar3 < piVar1[1])) &&
             (*(uint *)(*piVar1 + 4 + uVar3 * 0x10) == uVar3)) {
            *(int **)(iVar2 + 0x10) = piVar1;
            *(uint *)(iVar2 + 0x14) = uVar3;
            puVar4 = (uint *)(*piVar1 + uVar3 * 0x10);
          }
          else if (((piVar1 != *(int **)(iVar2 + 0x10)) || (piVar1[1] <= *(int *)(iVar2 + 0x14))) ||
                  ((puVar4 = (uint *)(*(int *)(iVar2 + 0x14) * 0x10 + *piVar1), puVar4[1] != uVar3
                   || ((char)*puVar4 != '\x05')))) {
            if (((-1 < piVar1[3]) && (piVar1[2] <= (int)uVar3)) && ((int)uVar3 <= piVar1[3])) {
              iVar6 = 0;
              if (0 < piVar1[1]) {
                puVar4 = (uint *)*piVar1;
                do {
                  if ((puVar4[1] == uVar3) && ((*puVar4 & 0xff) == 5)) {
                    if (iVar2 != 0) {
                      *(int **)(iVar2 + 0x10) = piVar1;
                      *(int *)(iVar2 + 0x14) = iVar6;
                    }
                    goto LAB_004d36b0;
                  }
                  iVar6 = iVar6 + 1;
                  puVar4 = puVar4 + 4;
                } while (iVar6 < piVar1[1]);
              }
            }
            puVar4 = (uint *)0x0;
          }
LAB_004d36b0:
          if (puVar4 != (uint *)0x0) {
            iVar2 = *param_2;
            *(uint *)(iVar2 + local_c * 8) = puVar4[2];
            *(uint *)(iVar2 + 4 + local_c * 8) = puVar4[3];
          }
        }
        else if (uVar5 == 6) {
          rb_004d35a0(this,*puVar4,(int *)puVar4[1]);
        }
      }
      local_c = local_c + 1;
    } while (local_c < param_2[1]);
  }
  return 1;
#undef local_c
}
