/* Rebuilt from lomse.exe FUN_004066e0 @ 0x004066e0 (293 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)
#define FUN_00521e00 ((int (__fastcall *)(int *))0x00521e00)
#define FUN_00522080 ((undefined4 (__thiscall *)(void *, int, undefined4, undefined4))0x00522080)

#define LOM_SELF_004066e0 1
int __thiscall rb_004066e0(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_1c;
  typedef int _t_local_18;
#define local_1c (*(_t_local_1c *)(_fr + 0x4))
#define local_18 (*(_t_local_18 *)(_fr + 0x8))
  
  iVar7 = *(int *)((int)this + 0x40);
  iVar1 = *(int *)((int)this + 0x34);
  local_18 = 0;
  for (; iVar7 <= iVar1; iVar7 = iVar7 + 1) {
    iVar3 = FUN_004f6000(&DAT_005ae974,iVar7);
    iVar5 = 0;
    if ((((iVar3 != 0) && (*(int *)(iVar3 + 4) == 0)) && (*(int *)(iVar3 + 0x48) == param_1)) &&
       (iVar4 = FUN_00407d50(iVar3), iVar4 == 0)) {
      local_1c = 0;
      if (0 < *(int *)(iVar3 + 0x4c)) {
        piVar6 = (int *)(iVar3 + 0xcc);
        do {
          uVar2 = *(undefined4 *)(iVar3 + 0x28);
          if ((piVar6[7] & 8U) == 0) {
            iVar4 = *piVar6;
          }
          else {
            piVar6[7] = piVar6[7] & 0xfffffff7;
            iVar4 = FUN_00521e00(piVar6 + -2);
            if (iVar4 == 0) {
              *piVar6 = 1;
              iVar4 = 1;
            }
            else if (((char)*(uint *)(iVar4 + 0x104) == '\x06') &&
                    ((*(uint *)(iVar4 + 0x104) & 0x100) == 0)) {
              iVar4 = FUN_00522080(piVar6 + -2,iVar4,uVar2,iVar5);
            }
            else {
              *piVar6 = 1;
              iVar4 = 1;
            }
          }
          piVar6 = piVar6 + 0x13;
          local_1c = local_1c + iVar4;
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(iVar3 + 0x4c));
      }
      local_18 = local_18 + local_1c;
    }
  }
  return local_18;
#undef local_1c
#undef local_18
}
