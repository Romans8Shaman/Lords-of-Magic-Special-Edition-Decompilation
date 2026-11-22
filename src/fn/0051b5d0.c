/* Rebuilt from lomse.exe FUN_0051b5d0 @ 0x0051b5d0 (251 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_0051b4e0 ((undefined4 (__thiscall *)(void *, int, int))0x0051b4e0)

#define LOM_SELF_0051b5d0 1
void __thiscall rb_0051b5d0(void *this,void *param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (0 < *(int *)((int)this + 0x202c4)) {
    do {
      iVar4 = 0;
      if (0 < *(int *)((int)this + 0x202c0)) {
        do {
          iVar1 = FUN_0051b4e0(this,iVar4,iVar3);
          if (iVar1 != 2) {
            if (*(int *)((int)param_1 + 0x54) == 0) {
              *(undefined4 *)((int)param_1 + 0x90) = 3;
              FUN_004d4550(param_1);
              *(undefined4 *)((int)param_1 + 0x90) = 0;
              *(undefined4 *)((int)param_1 + 0xa4) = 0;
            }
            else {
              iVar1 = *(int *)((int)param_1 + 0x50);
              iVar2 = *(int *)((int)param_1 + 0x54) + -1;
              *(int *)((int)param_1 + 0x54) = iVar2;
              *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
              *(int *)(iVar1 + 4 + iVar2 * 8) = iVar4;
            }
            if (*(int *)((int)param_1 + 0x54) == 0) {
              *(undefined4 *)((int)param_1 + 0x90) = 3;
              FUN_004d4550(param_1);
              *(undefined4 *)((int)param_1 + 0x90) = 0;
              *(undefined4 *)((int)param_1 + 0xa4) = 0;
            }
            else {
              iVar1 = *(int *)((int)param_1 + 0x50);
              iVar2 = *(int *)((int)param_1 + 0x54) + -1;
              *(int *)((int)param_1 + 0x54) = iVar2;
              *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
              *(int *)(iVar1 + 4 + iVar2 * 8) = iVar3;
            }
            FUN_004d05e0(param_1,param_2,param_3);
            iVar1 = *(int *)((int)param_1 + 0x6c);
            *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)((int)param_1 + 0x70);
            if (iVar1 != 0) {
              return;
            }
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)((int)this + 0x202c0));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((int)this + 0x202c4));
  }
  return;
}
