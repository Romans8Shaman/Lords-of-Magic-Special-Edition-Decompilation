/* Rebuilt from lomse.exe FUN_004b8e80 @ 0x004b8e80 (186 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd358 (*(undefined *)0x005cd358)
#define DAT_005d1e84 (*(int *)0x005d1e84)
#define FUN_004b7a20 ((undefined4 (__stdcall *)(void))0x004b7a20)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)
#define FUN_004b8f40 ((undefined4 (__thiscall *)(void *, int, undefined4, undefined4, undefined4, undefined4))0x004b8f40)
#define FUN_004b9420 ((undefined4 (__stdcall *)(undefined4, undefined4))0x004b9420)

#define LOM_SELF_004b8e80 1
undefined4 __thiscall rb_004b8e80(void *this,int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  
  FUN_004b8f40(&DAT_005cd358,*param_1,param_1[1],param_1[2],param_1[3],param_1[4]);
  FUN_004b7a20();
  if (DAT_005d1e84 == 0) {
    bVar4 = true;
  }
  else {
    iVar3 = *(int *)(DAT_005d1e84 + 0x390);
    iVar1 = FUN_004b7dd0(DAT_005d1e84);
    bVar4 = iVar3 == iVar1;
  }
  if (bVar4) {
    if (DAT_005d1e84 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = FUN_004b7dd0(DAT_005d1e84);
    }
    if (DAT_005d1e84 != 0) {
      iVar3 = FUN_004b7dd0(DAT_005d1e84);
      FUN_004b9420(iVar3 + -1,uVar2);
      return 1;
    }
    FUN_004b9420(0,uVar2);
  }
  return 1;
}
