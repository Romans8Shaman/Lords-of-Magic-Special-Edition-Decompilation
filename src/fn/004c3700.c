/* Rebuilt from lomse.exe op_interrogateprisoners @ 0x004c3700 (86 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_004c1c50 ((undefined4 (__fastcall *)(int))0x004c1c50)
#define FUN_004c2330 ((int (__fastcall *)(int))0x004c2330)

#define LOM_SELF_004c3700 1
void __cdecl rb_004c3700(void *vm)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0041be40(vm,&vm);
  if (iVar1 != 0) {
    iVar1 = FUN_004c1c50((int)vm);
    if (iVar1 != 0) {
      iVar1 = FUN_004c2330((int)vm);
      if (0 < iVar1) {
        iVar1 = 0;
        if (0 < *(int *)((int)vm + 0x4c)) {
          iVar2 = 0;
          do {
            *(undefined4 *)((int)vm + iVar2 + 0xd0) = 0;
            iVar1 = iVar1 + 1;
            iVar2 = iVar2 + 0x4c;
          } while (iVar1 < *(int *)((int)vm + 0x4c));
        }
      }
    }
  }
  return;
}
