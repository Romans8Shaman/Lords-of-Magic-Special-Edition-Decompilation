/* Rebuilt from lomse.exe FUN_0052fdc0 @ 0x0052fdc0 (85 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aee6c (*(undefined4 *)0x005aee6c)
#define FUN_004efe80 ((int (__thiscall *)(void *, int))0x004efe80)
#define FUN_004efeb0 ((undefined4 (__fastcall *)(int))0x004efeb0)
#define FUN_00529180 ((uint (__fastcall *)(int *))0x00529180)
#define FUN_0052c8a0 ((int (__fastcall *)(int))0x0052c8a0)
#define FUN_0052d240 ((undefined4 * (__fastcall *)(int))0x0052d240)

#define LOM_SELF_0052fdc0 1
void __fastcall rb_0052fdc0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  puVar1 = FUN_0052d240((int)param_1);
  if ((puVar1 != (undefined4 *)0x0) && (puVar1[0x12] == *param_1)) {
    iVar2 = FUN_0052c8a0((int)param_1);
    if (-1 < iVar2) {
      uVar3 = FUN_00529180(puVar1 + iVar2 * 0x13 + 0x31);
      if (uVar3 != 0) {
        iVar2 = FUN_004efe80(&DAT_005aee6c,*(int *)(uVar3 + 0x20));
        if (iVar2 != 0) {
          FUN_004efeb0(iVar2);
        }
      }
    }
  }
  return;
}
