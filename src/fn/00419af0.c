/* Rebuilt from lomse.exe FUN_00419af0 @ 0x00419af0 (161 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aeef4 (*(undefined4 *)0x005aeef4)
#define FUN_00420580 ((undefined4 (__fastcall *)(int))0x00420580)
#define FUN_00421180 ((undefined4 (__fastcall *)(int *))0x00421180)
#define FUN_0049dcc0 ((undefined4 (__thiscall *)(void *, int))0x0049dcc0)
#define FUN_004a8b50 ((int (__thiscall *)(void *, int, int))0x004a8b50)
#define FUN_004b0310 ((undefined4 (__thiscall *)(void *, int))0x004b0310)
#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)
#define FUN_004f5b70 ((undefined4 (__thiscall *)(void *, int))0x004f5b70)

#define LOM_SELF_00419af0 1
undefined4 __thiscall rb_00419af0(void *this,undefined4 param_1,int param_2)

{
  int iVar1;
  undefined *this_00;
  
  iVar1 = FUN_00420580((int)this);
  if (iVar1 != 0) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x53c) = *(undefined4 *)((int)this + 0x540);
  DAT_005aeef4 = 1;
  iVar1 = *(int *)((int)this + 0x1c);
  if (iVar1 != param_2) {
    this_00 = FUN_004c6fc0();
    iVar1 = FUN_004a8b50(this_00,iVar1,param_2);
    DAT_005aeef4 = 1;
    if (iVar1 < 8) {
      FUN_004f5b70(this,iVar1);
      *(int *)((int)this + 0x44) = iVar1;
      FUN_004b0310((void *)((int)this + 0x55c),iVar1);
      if (*(void **)((int)this + 0x58c) != (void *)0x0) {
        FUN_0049dcc0(*(void **)((int)this + 0x58c),iVar1);
      }
      if (*(void **)((int)this + 0x598) != (void *)0x0) {
        FUN_0049dcc0(*(void **)((int)this + 0x598),*(int *)((int)this + 0x44));
      }
      FUN_00421180(this);
    }
  }
  return 1;
}
