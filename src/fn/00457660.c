/* Rebuilt from lomse.exe FUN_00457660 @ 0x00457660 (779 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7d84 (*(uint *)0x005a7d84)
#define DAT_005a7d88 (*(int * *)0x005a7d88)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae8e8 (*(undefined *)0x005ae8e8)
#define DAT_005ae92c (*(int *)0x005ae92c)
#define DAT_005ae935 (*(char *)0x005ae935)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_0041efa0 ((undefined4 (__thiscall *)(void *, uint))0x0041efa0)
#define FUN_00455850 ((undefined4 (__thiscall *)(void *, undefined4 *, undefined4 *, int *, undefined4 *, undefined4 *))0x00455850)
#define FUN_00456670 ((undefined4 (__thiscall *)(void *, int, int, int, int))0x00456670)
#define FUN_00456fe0 ((undefined4 (__thiscall *)(void *, int, int, int))0x00456fe0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004a51c0 ((int (__thiscall *)(void *, int, int))0x004a51c0)
#define FUN_004a8300 ((undefined4 (__thiscall *)(void *, int, int))0x004a8300)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_00457660 1
void __fastcall rb_00457660(void *param_1)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uchar _fr[0x30] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_28;
  typedef int _t_local_24;
  typedef int _t_local_20;
  typedef undefined4 _t_local_1c;
  typedef undefined4 _t_local_18;
  typedef undefined4 _t_fStack_14;
  typedef uint _t_uStack_10;
  typedef uint _t_uStack_c;
  typedef uint _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define local_28 (*(_t_local_28 *)(_fr + 0x0))
#define local_24 (*(_t_local_24 *)(_fr + 0x4))
#define local_20 (*(_t_local_20 *)(_fr + 0x8))
#define local_1c (*(_t_local_1c *)(_fr + 0xc))
#define local_18 (*(_t_local_18 *)(_fr + 0x10))
#define fStack_14 (*(_t_fStack_14 *)(_fr + 0x14))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x18))
#define uStack_c (*(_t_uStack_c *)(_fr + 0x1c))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x20))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x24))
  
  if ((DAT_005ae935 != '\b') && (DAT_005ae935 == '\a')) {
    FUN_00455850(&DAT_005ae8e8,&local_24,&local_28,&local_20,&local_18,&local_1c);
    iVar2 = FUN_004a51c0(param_1,local_24,local_28);
    iVar2 = FUN_004a8300(param_1,iVar2,0);
    if ((iVar2 == -1) || (iVar2 == DAT_005ae92c)) {
      if ((local_20 == 0) || (local_20 == 4)) {
        iVar2 = FUN_004a51c0(param_1,local_24 + -1,local_28);
        iVar2 = FUN_004a8300(param_1,iVar2,0);
        if ((iVar2 != -1) && (iVar2 != DAT_005ae92c)) {
          return;
        }
        iVar2 = FUN_004a51c0(param_1,local_24 + 1,local_28);
        iVar2 = FUN_004a8300(param_1,iVar2,0);
        if ((iVar2 != -1) && (iVar2 != DAT_005ae92c)) {
          return;
        }
      }
      else {
        iVar2 = FUN_004a51c0(param_1,local_24,local_28 + -1);
        iVar2 = FUN_004a8300(param_1,iVar2,0);
        if ((iVar2 != -1) && (iVar2 != DAT_005ae92c)) {
          return;
        }
        iVar2 = FUN_004a51c0(param_1,local_24 + 1,local_28 + 1);
        iVar2 = FUN_004a8300(param_1,iVar2,0);
        if ((iVar2 != -1) && (iVar2 != DAT_005ae92c)) {
          return;
        }
      }
      piVar3 = (int *)FUN_00482ac0(&DAT_005aa12c,DAT_005ae92c,0);
      if (piVar3 != (int *)0x0) {
        FUN_0041efa0(piVar3,0x15);
        DAT_005ae935 = '\x06';
        ((undefined4 (__thiscall *)(__typeof__(piVar3)))(**(code **)(*piVar3 + 0x2c)))(piVar3);
        FUN_00456fe0(param_1,local_24,local_28,local_20);
        FUN_00456670(param_1,local_24,local_28,local_20,1);
        pvVar1 = DAT_005a7b78;
        if (DAT_005a7d84 != 0) {
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
            FUN_004d4550(pvVar1);
            *(undefined4 *)((int)pvVar1 + 0x90) = 0;
            *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
          }
          else {
            iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
            iVar2 = *(int *)((int)pvVar1 + 0x50);
            *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
            *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = 0;
          }
          pvVar1 = DAT_005a7b78;
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
            FUN_004d4550(pvVar1);
            *(undefined4 *)((int)pvVar1 + 0x90) = 0;
            *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
          }
          else {
            iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
            iVar2 = *(int *)((int)pvVar1 + 0x50);
            *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
            *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = 0;
          }
          pvVar1 = DAT_005a7b78;
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
            FUN_004d4550(pvVar1);
            *(undefined4 *)((int)pvVar1 + 0x90) = 0;
            *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
          }
          else {
            iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
            iVar2 = *(int *)((int)pvVar1 + 0x50);
            *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
            *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = 0xb;
          }
          FUN_004d09a0(DAT_005a7b78,DAT_005a7d84,DAT_005a7d88,-2);
          pvVar1 = DAT_005a7b78;
          if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
            piVar3 = (int *)((int)DAT_005a7b78 + 0x50);
            iVar2 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar2;
            uStack_8 = *(uint *)(*piVar3 + -8 + iVar2 * 8);
            uStack_4 = *(undefined4 *)(*piVar3 + -4 + iVar2 * 8);
          }
          else {
            *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
            FUN_004d4550(pvVar1);
            *(undefined4 *)((int)pvVar1 + 0x90) = 0;
            uStack_8 = 0;
            *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
          }
          iVar2 = FUN_004026a0(&uStack_8,&uStack_c,&uStack_10,&fStack_14);
          if (iVar2 == 0) {
            *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
            FUN_004d4550(pvVar1);
            *(undefined4 *)((int)pvVar1 + 0x90) = 0;
            *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
          }
        }
      }
    }
  }
  return;
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef fStack_14
#undef uStack_10
#undef uStack_c
#undef uStack_8
#undef uStack_4
}
