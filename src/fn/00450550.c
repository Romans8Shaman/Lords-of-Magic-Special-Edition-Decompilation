/* Rebuilt from lomse.exe op_installregent @ 0x00450550 (67 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_00451a70 ((undefined4 (__cdecl *)(void *, uint *))0x00451a70)
#define FUN_0045cea0 ((undefined4 (__stdcall *)(int *, int *, int))0x0045cea0)

#define LOM_SELF_00450550 1
void __cdecl rb_00450550(void *vm)

{
  void *pvVar1;
  int iVar2;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int * _t_piStack_4;
#define piStack_4 (*(_t_piStack_4 *)(_fr + 0x4))
  
  pvVar1 = vm;
  iVar2 = FUN_0041be40(vm,&vm);
  if (iVar2 != 0) {
    iVar2 = FUN_00451a70(pvVar1,(uint *)&piStack_4);
    if (iVar2 != 0) {
      FUN_0045cea0(piStack_4,vm,0);
    }
  }
  return;
#undef piStack_4
}
