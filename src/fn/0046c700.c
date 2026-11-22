/* Rebuilt from lomse.exe FUN_0046c700 @ 0x0046c700 (700 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005578ec (*(void * *)0x005578ec)
#define DAT_00583108 (*(LONG *)0x00583108)
#define DAT_0058310c (*(LONG *)0x0058310c)
#define DAT_00583120 (*(undefined4 *)0x00583120)
#define DAT_00583128 (*(DWORD *)0x00583128)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a9e04 (*(void * *)0x005a9e04)
#define FUN_0046ba90 ((undefined4 (__fastcall *)(int *))0x0046ba90)
#define FUN_0046bab0 ((undefined4 (__fastcall *)(int *))0x0046bab0)
#define FUN_0046c6e0 ((undefined4 (__fastcall *)(void *, undefined4, undefined4, undefined4))0x0046c6e0)
#define FUN_0046cca0 ((int (__thiscall *)(void *, LONG, LONG))0x0046cca0)
#define FUN_0046cd20 ((undefined4 (__thiscall *)(void *, int, int, int))0x0046cd20)
#define FUN_0046d210 ((undefined4 (__thiscall *)(void *, undefined4 *, int))0x0046d210)
#define FUN_0046d3c0 ((undefined4 (__thiscall *)(void *, int, undefined4, undefined4))0x0046d3c0)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00500dd0 ((void * (__thiscall *)(void *, int, int, int *, int))0x00500dd0)
#define GetTickCount (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d0e8) /* KERNEL32.DLL!GetTickCount via IAT */

#define LOM_SELF_0046c700 1
undefined4 __thiscall rb_0046c700(void *this,int param_1,LONG param_2,LONG param_3)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef void * _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  local_4 = this;
  if (DAT_005a9e04 != (void *)0x0) {
    if (param_1 == 0x200) {
      if (((*(byte *)((int)this + 0x44) & 0x20) != 0) &&
         ((((param_2 < *(int *)((int)this + 0x3c) || (param_3 < *(int *)((int)this + 0x40))) ||
           (iVar2 = FUN_0046ba90(this), iVar2 + *(int *)((int)this + 0x3c) < param_2)) ||
          (iVar2 = FUN_0046bab0(this), iVar2 + *(int *)((int)this + 0x40) < param_3)))) {
        DAT_00583120 = 2;
        FUN_0046d210(this,(undefined4 *)((int)this + 0x28),*(int *)((int)this + 0x38));
      }
    }
    else if (param_1 == 0x202) {
      DAT_00583128 = GetTickCount();
      DAT_00583108 = param_2;
      DAT_0058310c = param_3;
      DAT_00583120 = 0;
      pvVar1 = FUN_00500dd0(&DAT_00584ae8,param_2,param_3,(int *)&local_4,(int)DAT_005a9e04 + 0x28);
      uVar4 = 0;
      if ((pvVar1 == (void *)0x0) ||
         (iVar2 = FUN_0046d210(pvVar1,(undefined4 *)((int)DAT_005a9e04 + 0x28),(int)local_4),
         uVar4 = 0, iVar2 == 0)) {
        FUN_0046c6e0(DAT_005a9e04,uVar4,param_2,param_3);
        return 1;
      }
    }
    return 1;
  }
  local_4 = (void *)FUN_0046cca0(this,param_2,param_3);
  pvVar1 = DAT_005a7b78;
  if (local_4 == (void *)0xffffffff) {
    DAT_005578ec = local_4;
    return 0;
  }
  switch(param_1) {
  case 0x200:
    if (((*(int *)((int)this + 0x10) != 0) &&
        (-1 < *(int *)((int)local_4 * 0x30 + 0x20 + *(int *)((int)this + 4)))) &&
       (DAT_005578ec != local_4)) {
      DAT_005578ec = local_4;
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar1);
        *(undefined4 *)((int)pvVar1 + 0x90) = 0;
        *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
      }
      else {
        iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
        iVar2 = *(int *)((int)pvVar1 + 0x50);
        *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
        *(void **)(iVar2 + 4 + iVar3 * 8) = local_4;
      }
      pvVar1 = DAT_005a7b78;
      uVar4 = *(undefined4 *)((int)local_4 * 0x30 + 0x20 + *(int *)((int)this + 4));
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar1);
        *(undefined4 *)((int)pvVar1 + 0x90) = 0;
        *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
      }
      else {
        iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
        iVar2 = *(int *)((int)pvVar1 + 0x50);
        *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
        *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = uVar4;
      }
      FUN_004d05e0(DAT_005a7b78,*(uint *)((int)this + 0x10),*(int **)((int)this + 0x14));
      return 1;
    }
    break;
  case 0x201:
    FUN_0046cd20(this,(int)local_4,param_2,param_3);
    return 1;
  case 0x203:
    if ((*(byte *)((int)local_4 * 0x30 + 0x14 + *(int *)((int)this + 4)) & 0x40) != 0) {
      DAT_00583120 = 7;
      *(void **)((int)this + 0x38) = local_4;
      FUN_0046d3c0(this,(int)local_4 * 0x30 + 0x1c + *(int *)((int)this + 4),local_4,local_4);
      return 1;
    }
    break;
  case 0x204:
    if ((*(byte *)((int)local_4 * 0x30 + 0x14 + *(int *)((int)this + 4)) & 0x80) != 0) {
      DAT_00583120 = 8;
      *(void **)((int)this + 0x38) = local_4;
      FUN_0046d3c0(this,(int)local_4 * 0x30 + 0x1c + *(int *)((int)this + 4),local_4,local_4);
      return 1;
    }
  }
  return 0;
#undef local_4
}
