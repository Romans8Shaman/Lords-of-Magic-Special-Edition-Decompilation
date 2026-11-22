/* Rebuilt from lomse.exe FUN_004b1c20 @ 0x004b1c20 (154 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005d1e84 (*(int *)0x005d1e84)
#define FUN_00483c50 ((undefined4 (__thiscall *)(void *, int))0x00483c50)
#define FUN_004b1db0 ((undefined * (__thiscall *)(void *, undefined1))0x004b1db0)
#define FUN_004b2310 ((undefined4 (__fastcall *)(int))0x004b2310)
#define FUN_004b7b50 ((undefined4 (__stdcall *)(undefined4, undefined4))0x004b7b50)

#define LOM_SELF_004b1c20 1
void __thiscall rb_004b1c20(void *this,char param_1,char param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  
  pcVar2 = FUN_004b1db0(this,param_1);
  cVar1 = *pcVar2;
  *pcVar2 = param_2;
  cVar4 = pcVar2[2];
  if (param_2 < pcVar2[2]) {
    cVar4 = param_2;
  }
  *pcVar2 = cVar4;
  if (cVar4 <= pcVar2[1]) {
    cVar4 = pcVar2[1];
  }
  *pcVar2 = cVar4;
  if ((cVar4 != cVar1) && (param_3 != 0)) {
    FUN_004b2310(0x5aa12c);
  }
  if ((param_1 == '\t') && (param_2 == '\0')) {
    if ((DAT_005d1e84 == 0) || (iVar5 = *(int *)(DAT_005d1e84 + 0x100), iVar5 < 1)) {
      iVar5 = 1;
    }
    for (; iVar5 < 0x10; iVar5 = iVar5 + 1) {
      iVar3 = FUN_00483c50(&DAT_005aa12c,iVar5);
      if (-1 < iVar3) {
        FUN_004b7b50(iVar5,0xffffffff);
      }
    }
  }
  return;
}
