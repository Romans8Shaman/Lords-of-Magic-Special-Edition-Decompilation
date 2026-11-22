/* Rebuilt from lomse.exe FUN_004b6050 @ 0x004b6050 (427 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584428 (*(uint *)0x00584428)
#define DAT_0058442c (*(int * *)0x0058442c)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_004b6030 ((undefined4 (__stdcall *)(int))0x004b6030)
#define FUN_004b6b30 ((undefined4 (__cdecl *)(int))0x004b6b30)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004b6050 1
void __fastcall rb_004b6050(int param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int * _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  local_4 = (int *)(param_1 + 0x4b74);
  iVar6 = 0;
  uVar4 = DAT_00584428;
  do {
    if (((*local_4 != 0) && ((char)uVar4 == '\x06')) && ((uVar4 & 0x100) == 0)) {
      if (*(int *)(param_1 + 0x4b2c) == 0) {
        iVar2 = 1;
      }
      else {
        iVar2 = FUN_004b7dd0(*(int *)(param_1 + 0x4b2c));
      }
      iVar2 = FUN_004b6030(iVar2 + -1);
      pvVar1 = DAT_005a7b78;
      if (iVar2 < 0) {
        if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) goto LAB_004b6125;
        iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
        iVar2 = *(int *)((int)pvVar1 + 0x50);
        *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
        *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 0;
      }
      else {
        if (*(int *)(param_1 + 0x4b2c) == 0) {
          iVar2 = 1;
        }
        else {
          iVar2 = FUN_004b7dd0(*(int *)(param_1 + 0x4b2c));
        }
        iVar2 = FUN_004b6030(iVar2 + -1);
        iVar2 = FUN_004b6b30(iVar2);
        pvVar1 = DAT_005a7b78;
        if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
LAB_004b6125:
          pvVar1 = DAT_005a7b78;
          *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
          FUN_004d4550(pvVar1);
          *(undefined4 *)((int)pvVar1 + 0x90) = 0;
          *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
        }
        else {
          iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
          *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
          iVar3 = *(int *)((int)pvVar1 + 0x50);
          *(undefined4 *)(iVar3 + iVar5 * 8) = 1;
          *(uint *)(iVar3 + 4 + iVar5 * 8) = -(uint)(iVar6 == iVar2);
        }
      }
      pvVar1 = DAT_005a7b78;
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
        *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 0xffffffff;
      }
      pvVar1 = DAT_005a7b78;
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar1);
        *(undefined4 *)((int)pvVar1 + 0x90) = 0;
        *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
      }
      else {
        iVar2 = *(int *)((int)DAT_005a7b78 + 0x50);
        iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
        *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
        *(int *)(iVar2 + 4 + iVar3 * 8) = iVar6;
      }
      FUN_004d05e0(DAT_005a7b78,DAT_00584428,DAT_0058442c);
      uVar4 = DAT_00584428;
    }
    iVar6 = iVar6 + 1;
    local_4 = local_4 + 1;
    if (7 < iVar6) {
      return;
    }
  } while( true );
#undef local_4
}
