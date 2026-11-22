/* Rebuilt from lomse.exe FUN_004a54e0 @ 0x004a54e0 (104 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00487730 ((undefined4 (__thiscall *)(void *, undefined4 *))0x00487730)
#define FUN_00539660 ((uint (__cdecl *)(char *, uint, uint, int *))0x00539660)

#define LOM_SELF_004a54e0 1
undefined4 __thiscall rb_004a54e0(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  piVar1 = (int *)((int)this + 0x68);
  FUN_00539660((char *)piVar1,4,1,param_1);
  iVar2 = 0;
  if (0 < *piVar1) {
    do {
      FUN_00539660((char *)(*(int *)((int)this + 100) + 4 + iVar2 * 8),4,1,param_1);
      if ((char)iVar2 == -1) {
        FUN_00487730(&DAT_005aa12c,param_1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *piVar1);
  }
  return 1;
}
