/* Rebuilt from lomse.exe FUN_00472740 @ 0x00472740 (109 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00472720 ((undefined4 (__fastcall *)(void *))0x00472720)
#define FUN_0049da80 ((undefined4 (__thiscall *)(void *, uint))0x0049da80)
#define ShowCursor (*(__typeof__(int (__stdcall *)(BOOL)) *)0x0054d2a0) /* USER32.DLL!ShowCursor via IAT */

#define LOM_SELF_00472740 1
undefined4 __thiscall rb_00472740(void *this,uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *(uint *)((int)this + 0x178) = *(uint *)((int)this + 0x178) & 0xfffffffd;
  if (-1 < *(int *)((int)this + 0x16c)) {
    iVar2 = ShowCursor(0);
    *(int *)((int)this + 0x16c) = iVar2;
  }
  if (((int)param_1 < 0) || (0x4d < (int)param_1)) {
    return *(undefined4 *)((int)this + 0xe8);
  }
  uVar1 = *(undefined4 *)((int)this + 0xe8);
  *(uint *)((int)this + 0xe8) = param_1;
  if (*(void **)((int)this + 0x170) != (void *)0x0) {
    FUN_0049da80(*(void **)((int)this + 0x170),param_1);
  }
  FUN_00472720(this);
  return uVar1;
}
