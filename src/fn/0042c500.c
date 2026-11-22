/* Rebuilt from lomse.exe FUN_0042c500 @ 0x0042c500 (326 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a8078 (*(undefined4 *)0x005a8078)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005aee6c (*(undefined4 *)0x005aee6c)
#define FUN_00427b80 ((undefined4 (__cdecl *)(int))0x00427b80)
#define FUN_0042c460 ((undefined4 (__thiscall *)(void *, int, int))0x0042c460)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004efe80 ((int (__thiscall *)(void *, int))0x004efe80)
#define FUN_00529180 ((uint (__fastcall *)(int *))0x00529180)

#define LOM_SELF_0042c500 1
undefined4 __thiscall rb_0042c500(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  
  iVar1 = FUN_0042c460(this,param_1,param_2);
  if ((((iVar1 != 0) &&
       (puVar2 = FUN_00485080(&DAT_005aa12c,param_1,0x2f), puVar2 != (undefined4 *)0x0)) &&
      (-1 < param_2)) && (param_2 < (int)puVar2[0x13])) {
    uVar3 = FUN_00529180(puVar2 + param_2 * 0x13 + 0x31);
    iVar1 = FUN_00427b80(*(int *)this);
    pbVar4 = (byte *)FUN_004efe80(&DAT_005aee6c,*(int *)(iVar1 + 8));
    iVar1 = FUN_00427b80(*(int *)this);
    if (((*(uint *)(iVar1 + 0x18) & 0x10000) != 0) && (pbVar4 != (byte *)0x0)) {
      if (param_3 != 0) {
        if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 3) {
          if ((*pbVar4 & 1) == 0) {
            return 0;
          }
        }
        else if ((*pbVar4 & 2) == 0) {
          return 0;
        }
      }
      iVar1 = FUN_00427b80(*(int *)this);
      if (((*(uint *)(iVar1 + 0x18) & 0x80000) == 0) || (0 < *(int *)((int)this + 4))) {
        iVar1 = FUN_00427b80(*(int *)this);
        if ((*(uint *)(iVar1 + 0x18) & 0x60000) != 0) {
          iVar1 = 0;
          iVar5 = FUN_00427b80(*(int *)this);
          if ((*(uint *)(iVar5 + 0x18) & 0x20000) != 0) {
            if (uVar3 == 0) {
              return 0;
            }
            iVar1 = *(int *)(uVar3 + 0x14);
          }
          iVar5 = FUN_00427b80(*(int *)this);
          if ((*(uint *)(iVar5 + 0x18) & 0x40000) != 0) {
            iVar1 = iVar1 + *(int *)((int)this + 8);
          }
          if (iVar1 < *(int *)(pbVar4 + 0x18)) {
            return 0;
          }
        }
        return 1;
      }
    }
  }
  return 0;
}
