/* Rebuilt from lomse.exe FUN_004794b0 @ 0x004794b0 (205 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00585408 (*(undefined4 *)0x00585408)
#define DAT_005867a4 (*(undefined4 *)0x005867a4)
#define FUN_00478920 ((undefined4 (__fastcall *)(int *))0x00478920)
#define FUN_00478c00 ((undefined4 (__thiscall *)(void *, undefined4))0x00478c00)

#define LOM_SELF_004794b0 1
void __thiscall rb_004794b0(void *this,int param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef byte _t_local_4[4];
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  bVar2 = false;
  *(undefined4 *)((int)this + 0x1398) = 0xfffffffe;
  FUN_00478920(this);
  *(undefined4 *)((int)this + 0x13ac) = 0;
  *(undefined4 *)((int)this + 0x1398) = 0xfffffffe;
  *(int *)((int)this + 0x139c) = param_1;
  *(undefined4 *)((int)this + 0x13a0) = *(undefined4 *)((int)this + 0x136c);
  piVar5 = (int *)((int)this + 0xf0);
  iVar4 = 5;
  piVar6 = this;
  do {
    piVar1 = (int *)*piVar6;
    if (piVar1 != (int *)0x0) {
      iVar3 = ((undefined4 (__stdcall *)(__typeof__(piVar1), __typeof__(local_4)))(**(code **)(*piVar1 + 0x24)))(piVar1,local_4);
      if (iVar3 == -0x7787ff6a) {
        ((undefined4 (__stdcall *)(__typeof__((int *)*piVar6)))(**(code **)(*(int *)*piVar6 + 0x50)))((int *)*piVar6);
      }
      if ((((local_4[0] & 5) != 0) && (*piVar5 == -1)) || (*piVar5 == -2)) {
        bVar2 = true;
      }
    }
    piVar6 = piVar6 + 1;
    piVar5 = piVar5 + 7;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (bVar2) {
    *(int *)((int)this + 0x13a0) =
         (*(int *)((int)this + 0x136c) + -0x9c4) / 2 + *(int *)((int)this + 0x136c);
  }
  FUN_00478c00(&DAT_00585408,DAT_005867a4);
  return;
#undef local_4
}
