/* Rebuilt from lomse.exe op_testautocalc @ 0x00430410 (66 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005adc50 (*(undefined *)0x005adc50)
#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_0042f120 ((undefined4 (__thiscall *)(void *, void *, undefined4 *, undefined4 *))0x0042f120)

#define LOM_SELF_00430410 1
void __cdecl rb_00430410(void *vm)

{
  void *pvVar1;
  int iVar2;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 * _t_puStack_4;
#define puStack_4 (*(_t_puStack_4 *)(_fr + 0x4))
  
  pvVar1 = vm;
  iVar2 = FUN_0041be40(vm,&vm);
  if (iVar2 != 0) {
    iVar2 = FUN_0041be40(pvVar1,&puStack_4);
    if (iVar2 != 0) {
      FUN_0042f120(&DAT_005adc50,pvVar1,puStack_4,vm);
    }
  }
  return;
#undef puStack_4
}
