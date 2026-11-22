/* Rebuilt from lomse.exe FUN_0046cab0 @ 0x0046cab0 (493 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583108 (*(int *)0x00583108)
#define DAT_0058310c (*(int *)0x0058310c)
#define DAT_00583118 (*(int *)0x00583118)
#define DAT_0058311c (*(int *)0x0058311c)
#define DAT_005a9e04 (*(void * *)0x005a9e04)
#define FUN_0046ba90 ((undefined4 (__fastcall *)(int *))0x0046ba90)
#define FUN_0046bab0 ((undefined4 (__fastcall *)(int *))0x0046bab0)
#define FUN_0046c9d0 ((undefined4 (__thiscall *)(void *, int))0x0046c9d0)
#define FUN_0046ca20 ((int (__thiscall *)(void *, uint))0x0046ca20)
#define FUN_0046ca50 ((undefined4 (__thiscall *)(void *, int))0x0046ca50)
#define FUN_0046cca0 ((int (__thiscall *)(void *, LONG, LONG))0x0046cca0)
#define FUN_0046cf70 ((undefined4 (__thiscall *)(void *, int, int))0x0046cf70)
#define GetTickCount (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d0e8) /* KERNEL32.DLL!GetTickCount via IAT */
#define _DAT_00583124 (*(undefined4 *)0x00583124)

#define LOM_SELF_0046cab0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall rb_0046cab0(void *this,int param_1,int param_2,int param_3)

{
  DWORD DVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if ((DAT_005a9e04 == this) && (DVar1 = GetTickCount(), DVar1 - _DAT_00583124 < 1000)) {
    uVar4 = DAT_00583108 - DAT_00583118 >> 0x1f;
    iVar3 = (DAT_00583108 - DAT_00583118 ^ uVar4) - uVar4;
    uVar4 = DAT_0058310c - DAT_0058311c >> 0x1f;
    iVar2 = (DAT_0058310c - DAT_0058311c ^ uVar4) - uVar4;
    if (iVar2 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 4) {
      return *(int *)((int)this + 0x38);
    }
  }
  iVar2 = *(int *)((int)this + 0xc);
  if ((((*(int *)((int)this + 0x3c) <= param_2) && (*(int *)((int)this + 0x40) <= param_3)) &&
      (iVar3 = FUN_0046ba90(this), param_2 <= iVar3 + *(int *)((int)this + 0x3c))) &&
     (iVar3 = FUN_0046bab0(this), param_3 <= iVar3 + *(int *)((int)this + 0x40))) {
    if ((*(uint *)((int)this + 0x44) & 0x10) != 0) {
      iVar2 = FUN_0046cca0(this,param_2,param_3);
      iVar5 = iVar2 * 0x30;
      iVar3 = *(int *)((int)this + 4) + iVar5;
      uVar4 = *(uint *)(iVar3 + 0x10);
      if ((uVar4 & *(uint *)(param_1 + 8)) != 0) {
        if (-1 < *(int *)(iVar3 + 0x20)) {
          return iVar2;
        }
        if ((uVar4 & 2) == 0) {
          if ((uVar4 & 0x10) != 0) {
            return iVar2;
          }
        }
        else {
          iVar3 = FUN_0046ca20(this,4);
          if (iVar3 < 1) {
            if (-1 < *(int *)(iVar5 + -0x10 + *(int *)((int)this + 4))) {
              iVar3 = FUN_0046c9d0(this,iVar2);
              iVar5 = FUN_0046c9d0(this,*(int *)((int)this + 0x38));
              if (iVar3 != iVar5) {
                return iVar2;
              }
            }
          }
          else {
            iVar3 = FUN_0046ca50(this,iVar2);
            if (iVar3 != 0) {
              if (iVar2 == 1) {
                return 1;
              }
              if (iVar2 == 6) {
                return 6;
              }
              if (iVar2 == 0xb) {
                return 0xb;
              }
              if (-1 < *(int *)(iVar5 + -0x10 + *(int *)((int)this + 4))) {
                return iVar2;
              }
            }
          }
        }
      }
      return *(int *)((int)this + 0x38);
    }
    if (((*(uint *)((int)this + 0x44) & 8) != 0) && (iVar2 = 0, 0 < *(int *)((int)this + 0xc))) {
      iVar3 = 0;
      do {
        if ((*(int *)(iVar3 + 0x20 + *(int *)((int)this + 4)) == *(int *)(param_1 + 4)) &&
           (iVar5 = FUN_0046cf70(this,iVar2,param_1), iVar5 != 0)) break;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x30;
      } while (iVar2 < *(int *)((int)this + 0xc));
    }
    if ((((*(byte *)((int)this + 0x44) & 2) != 0) && (iVar2 == *(int *)((int)this + 0xc))) &&
       (iVar2 = 0, 0 < *(int *)((int)this + 0xc))) {
      do {
        iVar3 = FUN_0046cf70(this,iVar2,param_1);
        if (iVar3 != 0) break;
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)((int)this + 0xc));
    }
  }
  if (iVar2 == *(int *)((int)this + 0xc)) {
    iVar2 = FUN_0046cca0(this,param_2,param_3);
  }
  return iVar2;
}
