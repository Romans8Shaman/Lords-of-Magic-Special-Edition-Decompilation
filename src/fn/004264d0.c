/* Rebuilt from lomse.exe op_cpr @ 0x004264d0 (190 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a8078 (*(undefined4 *)0x005a8078)
#define DAT_005aa7d4 (*(int *)0x005aa7d4)
#define DAT_005aadb0 (*(int *)0x005aadb0)
#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_0041efa0 ((undefined4 (__thiscall *)(void *, uint))0x0041efa0)
#define FUN_00525f10 ((uint (__fastcall *)(int))0x00525f10)
#define _DAT_005ae8a4 (*(undefined4 *)0x005ae8a4)
#define _DAT_005ae8a8 (*(undefined4 *)0x005ae8a8)

#define LOM_SELF_004264d0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl rb_004264d0(void *vm)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = FUN_0041be40(vm,&vm);
  if (iVar1 != 0) {
    iVar1 = 0;
    *(uint *)((int)vm + 0x30) = *(uint *)((int)vm + 0x30) & 0xfffffeff;
    if (0 < *(int *)((int)vm + 0x4c)) {
      iVar3 = 0;
      do {
        if (*(int *)((int)vm + iVar3 + 200) < 1) {
          *(undefined4 *)((int)vm + iVar3 + 200) = 1;
        }
        uVar2 = FUN_00525f10((int)vm + iVar3 + 0xc4);
        if ((uVar2 != 0) && ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 3)) {
          if (*(int *)((int)vm + 0x48) == DAT_005aa7d4) {
            _DAT_005ae8a4 = 0;
          }
          else if (*(int *)((int)vm + 0x48) == DAT_005aadb0) {
            _DAT_005ae8a8 = 0;
          }
        }
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + 0x4c;
      } while (iVar1 < *(int *)((int)vm + 0x4c));
    }
    *(undefined4 *)((int)vm + 0x24) = 2;
    FUN_0041efa0(vm,2);
  }
  return;
}
