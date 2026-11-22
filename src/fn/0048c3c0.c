/* Rebuilt from lomse.exe FUN_0048c3c0 @ 0x0048c3c0 (92 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd2c4 (*(undefined *)0x005cd2c4)
#define FUN_004c4c10 ((undefined4 (__thiscall *)(void *, undefined4 *))0x004c4c10)
#define FUN_004c4cf0 ((undefined4 (__fastcall *)(void *))0x004c4cf0)
#define FUN_004c4d00 ((int (__fastcall *)(int *))0x004c4d00)

#define LOM_SELF_0048c3c0 1
undefined4 __cdecl rb_0048c3c0(uint param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  iVar2 = FUN_004c4d00((int *)&DAT_005cd2c4);
  if (0 < iVar2) {
    do {
      bVar1 = true;
      puVar3 = (undefined4 *)FUN_004c4cf0(&DAT_005cd2c4);
      if (((*(byte *)((int)puVar3 + 7) == param_1) && (*(char *)(puVar3 + 1) != ':')) &&
         (*(char *)(puVar3 + 1) != '>')) {
        uVar4 = 1;
        bVar1 = false;
      }
      if (bVar1) {
        FUN_004c4c10(&DAT_005cd2c4,puVar3);
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return uVar4;
}
