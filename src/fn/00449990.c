/* Rebuilt from lomse.exe op_armycouldbenefitfromspecialbuilding_q @ 0x00449990 (129 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_004409e0 ((undefined4 (__cdecl *)(void *, undefined4 *))0x004409e0)
#define FUN_004498d0 ((undefined4 (__thiscall *)(void *, int))0x004498d0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_00449990 1
void __cdecl rb_00449990(void *vm)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef void * _t_pvStack_4;
#define pvStack_4 (*(_t_pvStack_4 *)(_fr + 0x4))
  
  pvVar2 = vm;
  iVar3 = FUN_004409e0(vm,&pvStack_4);
  if (iVar3 != 0) {
    iVar3 = FUN_0041be40(pvVar2,&vm);
    if (iVar3 != 0) {
      iVar3 = FUN_004498d0(pvStack_4,(int)vm);
      if (*(int *)((int)pvVar2 + 0x54) != 0) {
        iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
        *(int *)((int)pvVar2 + 0x54) = iVar4;
        iVar1 = *(int *)((int)pvVar2 + 0x50);
        *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
        *(uint *)(iVar1 + 4 + iVar4 * 8) = -(uint)(iVar3 != 0);
        return;
      }
      *(undefined4 *)((int)pvVar2 + 0x90) = 3;
      FUN_004d4550(pvVar2);
      *(undefined4 *)((int)pvVar2 + 0x90) = 0;
      *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    }
  }
  return;
#undef pvStack_4
}
