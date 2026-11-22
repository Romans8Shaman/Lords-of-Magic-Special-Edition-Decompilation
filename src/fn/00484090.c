/* Rebuilt from lomse.exe FUN_00484090 @ 0x00484090 (173 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584400 (*(uint *)0x00584400)
#define DAT_00584404 (*(int * *)0x00584404)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_0048a400 ((undefined4 (__fastcall *)(int))0x0048a400)
#define FUN_004b1db0 ((undefined * (__thiscall *)(void *, undefined1))0x004b1db0)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define _DAT_005834f8 (*(undefined4 *)0x005834f8)

#define LOM_SELF_00484090 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall rb_00484090(int param_1,undefined4 unused_reg_1,undefined4 unused_stack_0)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = FUN_0048a400(0x584ae8);
  if (iVar2 == 1) {
    iVar6 = 0;
    iVar2 = param_1 + 0x5068;
    _DAT_005834f8 = 1;
    do {
      if ((iVar6 < 0) || (0xf < iVar6)) {
        iVar5 = 0;
      }
      else {
        iVar5 = iVar2;
      }
      if ((iVar5 != 0) && ((*(uint *)(iVar5 + 0x15d8) & 2) == 0)) {
        *(uint *)(iVar5 + 0x15d8) = *(uint *)(iVar5 + 0x15d8) | 2;
      }
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + 0x1d84;
    } while (iVar6 < 0x10);
    pcVar3 = FUN_004b1db0((void *)(param_1 + 0x520),8);
    cVar1 = *pcVar3;
    puVar4 = FUN_004b1db0((void *)(param_1 + 0x520),8);
    if ((((int)cVar1 * (int)(char)puVar4[4] == 2) && ((char)DAT_00584400 == '\x06')) &&
       ((DAT_00584400 & 0x100) == 0)) {
      FUN_004d05e0(DAT_005a7b78,DAT_00584400,DAT_00584404);
    }
  }
  return 1;
}
