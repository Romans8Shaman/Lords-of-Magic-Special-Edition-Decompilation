/* Rebuilt from lomse.exe op_magicattackorder @ 0x00468d50 (160 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584c1c (*(undefined4 *)0x00584c1c)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a8078 (*(undefined4 *)0x005a8078)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00405260 ((undefined4 (__stdcall *)(int, int, undefined4 *))0x00405260)
#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_0047c9e0 ((uint (__thiscall *)(void *, int))0x0047c9e0)

#define LOM_SELF_00468d50 1
void __cdecl rb_00468d50(void *vm)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_4;
#define iStack_4 (*(_t_iStack_4 *)(_fr + 0x4))
  
  pvVar1 = vm;
  iVar2 = FUN_0041be40(vm,&iStack_4);
  if (iVar2 != 0) {
    iVar2 = FUN_0041be40(pvVar1,&vm);
    if (iVar2 != 0) {
      uVar3 = FUN_0047c9e0(&DAT_005aa12c,*(int *)((int)vm + 0x48));
      if ((uVar3 == 0) || ((&DAT_005a8078)[DAT_005a7d8c * 0x100] != 3)) {
        FUN_00405260((int)vm,iStack_4,&DAT_00584c1c);
      }
      else {
        iVar2 = *(int *)((int)vm + 0x68);
        if (((iVar2 != 0x11) && (iVar2 != 0x30)) && (iVar2 != 0x32)) {
          FUN_00405260((int)vm,iStack_4,&DAT_00584c1c);
          return;
        }
      }
    }
  }
  return;
#undef iStack_4
}
