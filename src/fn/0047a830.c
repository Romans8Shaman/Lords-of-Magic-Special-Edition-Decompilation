/* Rebuilt from lomse.exe FUN_0047a830 @ 0x0047a830 (128 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00478570 ((undefined4 (__thiscall *)(void *, undefined4, undefined4 *))0x00478570)
#define FUN_0047a7b0 ((undefined4 (__fastcall *)(int))0x0047a7b0)

#define LOM_SELF_0047a830 1
void __thiscall rb_0047a830(void *this,int in_stack_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)((int)this + 0x13b4) != 0) && (-0x9c4 < *(int *)((int)this + 0x1374))) {
    iVar2 = *(int *)(in_stack_4 * 0xd0 + 0x78c + (int)this);
    if (iVar2 == -1) {
      FUN_0047a7b0((int)this);
      return;
    }
    puVar1 = (undefined4 *)((int)this + 0x780);
    iVar2 = FUN_00478570(this,iVar2,puVar1);
    if (iVar2 == 0) {
      FUN_0047a7b0((int)this);
      return;
    }
    ((undefined4 (__stdcall *)(__typeof__((int *)*puVar1), __typeof__(*(undefined4 *)((int)this + 0x1378))))(**(code **)(*(int *)*puVar1 + 0x3c)))((int *)*puVar1,*(undefined4 *)((int)this + 0x1378));
    ((undefined4 (__stdcall *)(__typeof__((int *)*puVar1), __typeof__(0), __typeof__(0), __typeof__(1)))(**(code **)(*(int *)*puVar1 + 0x30)))((int *)*puVar1,0,0,1);
  }
  return;
}
