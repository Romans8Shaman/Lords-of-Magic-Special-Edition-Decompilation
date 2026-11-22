/* Rebuilt from lomse.exe FUN_00481f80 @ 0x00481f80 (152 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005af194 (*(undefined *)0x005af194)
#define DAT_005cc9d4 (*(int *)0x005cc9d4)
#define DAT_005d1e84 (*(void * *)0x005d1e84)
#define FUN_0048a400 ((undefined4 (__fastcall *)(int))0x0048a400)
#define FUN_004b1db0 ((undefined * (__thiscall *)(void *, undefined1))0x004b1db0)
#define FUN_004b78c0 ((int (__fastcall *)(void *))0x004b78c0)

#define LOM_SELF_00481f80 1
undefined4 __fastcall rb_00481f80(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined *puVar4;
  
  if (DAT_005d1e84 == (void *)0x0) {
    iVar2 = 1;
  }
  else {
    iVar2 = FUN_004b78c0(DAT_005d1e84);
  }
  if (1 < iVar2) {
    iVar2 = FUN_0048a400(0x584ae8);
    if (iVar2 == 1) {
      pcVar3 = FUN_004b1db0((void *)(param_1 + 0x520),2);
      cVar1 = *pcVar3;
      puVar4 = FUN_004b1db0((void *)(param_1 + 0x520),2);
      if ((int)(char)puVar4[4] * (int)cVar1 != 4) {
        if ((DAT_005cc9d4 < 0) || (0xf < DAT_005cc9d4)) {
          puVar4 = (undefined *)0x0;
        }
        else {
          puVar4 = &DAT_005af194 + DAT_005cc9d4 * 0x1d84;
        }
        if ((puVar4[0x15d8] & 2) == 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}
