/* Rebuilt from lomse.exe FUN_0046e080 @ 0x0046e080 (718 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0041d1d0 ((undefined4 (__thiscall *)(void *, undefined4, undefined4))0x0041d1d0)
#define FUN_0046da40 ((undefined4 (__cdecl *)(int))0x0046da40)
#define FUN_0046e040 ((uint (__fastcall *)(int))0x0046e040)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define s_Container__SetData___invalid_spo_0055795c (*(char (*)[])0x0055795c)

#define LOM_SELF_0046e080 1
undefined4 __thiscall rb_0046e080(void *this,int param_1,int param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)0x0;
  iVar1 = FUN_0046da40(param_1);
  if (iVar1 != 0) {
    if ((param_2 < 0) || (*(int *)((int)this + 0xc) <= param_2)) {
      FUN_004d41c0(param_3,s_Container__SetData___invalid_spo_0055795c);
      FUN_0041d1d0(param_3,1,0);
      return 0;
    }
    puVar4 = (undefined4 *)(*(int *)((int)this + 4) + param_2 * 0x30);
  }
  switch(param_1) {
  case 0:
    FUN_0041d1d0(param_3,1,puVar4[7]);
    return 1;
  case 1:
    FUN_0041d1d0(param_3,1,puVar4[8]);
    return 1;
  case 2:
    FUN_0041d1d0(param_3,1,puVar4[9]);
    return 1;
  case 3:
    FUN_0041d1d0(param_3,1,puVar4[10]);
    return 1;
  case 4:
    FUN_0041d1d0(param_3,1,*puVar4);
    return 1;
  case 5:
    FUN_0041d1d0(param_3,1,puVar4[1]);
    return 1;
  case 6:
    FUN_0041d1d0(param_3,1,puVar4[2]);
    return 1;
  case 7:
    FUN_0041d1d0(param_3,1,puVar4[3]);
    return 1;
  case 8:
    FUN_0041d1d0(param_3,1,puVar4[4]);
    return 1;
  case 9:
    FUN_0041d1d0(param_3,1,puVar4[5]);
    return 1;
  default:
    return 1;
  case 0xc:
    FUN_0041d1d0(param_3,1,puVar4[6]);
    return 1;
  case 0xd:
    break;
  case 0x10:
    FUN_0041d1d0(param_3,1,puVar4[0xb]);
    return 1;
  case 0x11:
    uVar3 = FUN_0046e040((int)this);
    FUN_0041d1d0(param_3,1,uVar3);
    return 1;
  case 0x13:
    FUN_0041d1d0(param_3,1,*(undefined4 *)((int)this + 0x44));
    return 1;
  case 0x15:
    FUN_0041d1d0(param_3,1,*(undefined4 *)((int)this + 0x3c));
    return 1;
  case 0x16:
    FUN_0041d1d0(param_3,1,*(undefined4 *)((int)this + 0x40));
    return 1;
  case 0x17:
    FUN_0041d1d0(param_3,1,*(undefined4 *)((int)this + 0xc));
    return 1;
  }
  if ((*(byte *)(puVar4 + 5) & 8) == 0) {
    FUN_0041d1d0(param_3,1,0);
    return 1;
  }
  if (*(int *)((int)param_3 + 0x54) == 0) {
    FUN_00404ab0(param_3,3);
    return 1;
  }
  iVar2 = *(int *)((int)param_3 + 0x54) + -1;
  *(int *)((int)param_3 + 0x54) = iVar2;
  iVar1 = *(int *)((int)param_3 + 0x50);
  *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
  *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 1;
  return 1;
}
