/* Rebuilt from lomse.exe FUN_0047b570 @ 0x0047b570 (328 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7c74 (*(uint *)0x005a7c74)
#define DAT_005a7c78 (*(int * *)0x005a7c78)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_0047b6d0 ((int (__fastcall *)(undefined4 *))0x0047b6d0)
#define FUN_0047b920 ((undefined4 (__thiscall *)(void *, undefined4, int, int))0x0047b920)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004a61e0 ((undefined4 (__stdcall *)(int, int))0x004a61e0)
#define FUN_004a6e60 ((undefined4 (__thiscall *)(void *, int, int))0x004a6e60)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define GetTickCount (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d0e8) /* KERNEL32.DLL!GetTickCount via IAT */

#define LOM_SELF_0047b570 1
undefined4 __thiscall rb_0047b570(void *this,undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  DWORD DVar4;
  int iVar5;
  
  if (*(int *)this == 0) {
    return 0;
  }
  iVar5 = -1;
  if (((char)DAT_005a7c74 != '\x06') || ((DAT_005a7c74 & 0x100) != 0)) {
    uVar1 = FUN_0047b920(&DAT_00584ae8,param_1,param_2,param_3);
    return uVar1;
  }
  switch(param_1) {
  case 0x200:
    iVar5 = 4;
    break;
  case 0x201:
    iVar5 = 0;
    break;
  case 0x202:
    iVar5 = 2;
    break;
  case 0x204:
    iVar5 = 1;
    break;
  case 0x205:
    iVar5 = 3;
  }
  if (iVar5 < 0) {
    return 0;
  }
  if (*(int *)((int)this + 0x80) != 4) {
    *(int *)((int)this + 0x7c) = *(int *)((int)this + 0x80);
  }
  *(int *)((int)this + 0x80) = iVar5;
  uVar1 = FUN_004a61e0(param_2,param_3);
  *(undefined4 *)((int)this + iVar5 * 0x14 + 0x10) = uVar1;
  iVar2 = FUN_004a6e60(&DAT_005ae958,param_2,param_3);
  uVar3 = FUN_00482ac0(&DAT_005aa12c,iVar2,7);
  if ((uVar3 != 0) && (uVar3 = FUN_00482ac0(&DAT_005aa12c,iVar2,7), uVar3 != 0)) {
    iVar2 = *(int *)(uVar3 + 0x44);
  }
  *(int *)((int)this + (iVar5 + 1) * 0x14) = iVar2;
  *(int *)((int)this + iVar5 * 0x14 + 8) = param_2;
  *(int *)((int)this + iVar5 * 0x14 + 0xc) = param_3;
  DVar4 = GetTickCount();
  *(DWORD *)((int)this + iVar5 * 0x14 + 4) = DVar4;
  iVar5 = FUN_0047b6d0(this);
  if (iVar5 != 0) {
    FUN_004d05e0(DAT_005a7b78,DAT_005a7c74,DAT_005a7c78);
  }
  return 1;
}
