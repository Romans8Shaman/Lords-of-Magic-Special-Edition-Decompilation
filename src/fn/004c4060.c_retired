/* Rebuilt from lomse.exe FUN_004c4060 @ 0x004c4060 (240 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004c3be0 ((undefined1 (__fastcall *)(int))0x004c3be0)
#define FUN_004c3ed0 ((int (__thiscall *)(void *, int))0x004c3ed0)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004c4060 1
void __thiscall rb_004c4060(void *this,uint param_1,int *param_2,void *param_3)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_8;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
  
  local_8 = 0;
  if (0 < *(int *)((int)this + 4)) {
    do {
      piVar3 = (int *)FUN_004c3ed0(this,local_8);
      if ((piVar3 != (int *)0x0) && (iVar1 = *piVar3, -1 < iVar1)) {
        if (*(int *)((int)param_3 + 0x54) == 0) {
          *(undefined4 *)((int)param_3 + 0x90) = 3;
          FUN_004d4550(param_3);
          *(undefined4 *)((int)param_3 + 0x90) = 0;
          *(undefined4 *)((int)param_3 + 0xa4) = 0;
        }
        else {
          iVar5 = *(int *)((int)param_3 + 0x50);
          iVar4 = *(int *)((int)param_3 + 0x54) + -1;
          *(int *)((int)param_3 + 0x54) = iVar4;
          *(undefined4 *)(iVar5 + iVar4 * 8) = 1;
          *(int *)(iVar5 + 4 + iVar4 * 8) = iVar1;
        }
        cVar2 = FUN_004c3be0((int)piVar3);
        if (*(int *)((int)param_3 + 0x54) == 0) {
          *(undefined4 *)((int)param_3 + 0x90) = 3;
          FUN_004d4550(param_3);
          *(undefined4 *)((int)param_3 + 0x90) = 0;
          *(undefined4 *)((int)param_3 + 0xa4) = 0;
        }
        else {
          iVar1 = *(int *)((int)param_3 + 0x50);
          iVar5 = *(int *)((int)param_3 + 0x54) + -1;
          *(int *)((int)param_3 + 0x54) = iVar5;
          *(undefined4 *)(iVar1 + iVar5 * 8) = 1;
          *(int *)(iVar1 + 4 + iVar5 * 8) = (int)cVar2;
        }
        FUN_004d05e0(param_3,param_1,param_2);
      }
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)((int)this + 4));
  }
  return;
#undef local_8
}
