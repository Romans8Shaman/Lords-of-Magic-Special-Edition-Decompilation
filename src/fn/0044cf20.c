/* Rebuilt from lomse.exe op_createvirtualarmy @ 0x0044cf20 (443 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00556168 (*(undefined *)0x00556168)
#define DAT_005572ec (*(undefined *)0x005572ec)
#define DAT_0055b1b0 (*(undefined4 *)0x0055b1b0)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005869f4 (*(int * *)0x005869f4)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_00411610 ((undefined4 * (__fastcall *)(undefined4 *))0x00411610)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00505110 ((char * (__thiscall *)(void *, int, uint))0x00505110)
#define FUN_005394d0 ((undefined4 (__cdecl *)(int *))0x005394d0)
#define FUN_00539610 ((undefined4 (__cdecl *)(LPCSTR, char *))0x00539610)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_0044cf20 1
void __cdecl rb_0044cf20(void *vm)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int *a1;
  int iVar6;
  char *pcVar7;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_fStack_1c;
  typedef undefined4 * _t_puStack_18;
  typedef uint _t_uStack_14;
  typedef undefined4 _t_uStack_10;
#define fStack_1c (*(_t_fStack_1c *)(_fr + 0x4))
#define puStack_18 (*(_t_puStack_18 *)(_fr + 0x8))
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0xc))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x10))

  pvVar2 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uStack_14 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    uStack_10 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_14 = 0;
  }
  iVar3 = FUN_004026a0(&uStack_14,(uint *)&vm,(uint *)&puStack_18,&fStack_1c);
  if (iVar3 == 0) {
    *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
  }
  else {
    piVar4 = (int *)FUN_00482ac0(&DAT_005aa12c,(int)vm,0);
    if (piVar4 == (int *)0x0) {
      return;
    }
    pcVar7 = &DAT_00556168;
    pcVar5 = FUN_00505110(&DAT_00584ae8,6,0xffffffff);
    a1 = (int *)FUN_00539610(pcVar5,pcVar7);
    if (a1 == (int *)0x0) {
      return;
    }
    ((undefined4 (__thiscall *)(__typeof__(piVar4), __typeof__(a1)))(**(code **)(*piVar4 + 0x20)))(piVar4,a1);
    FUN_005394d0(a1);
    pcVar7 = &DAT_005572ec;
    pcVar5 = FUN_00505110(&DAT_00584ae8,6,0xffffffff);
    piVar4 = (int *)FUN_00539610(pcVar5,pcVar7);
    if (piVar4 == (int *)0x0) {
      return;
    }
    DAT_005aa12c = DAT_0055b1b0;
    puStack_18 = (undefined4 *)Ordinal_401(0x5dc,s_C__lomse_source_storm_h_00555130,0x3ef,0);
    if (puStack_18 == (undefined4 *)0x0) {
      DAT_005869f4 = (int *)0x0;
    }
    else {
      DAT_005869f4 = FUN_00411610(puStack_18);
    }
    ((undefined4 (__thiscall *)(__typeof__(DAT_005869f4), __typeof__(piVar4)))(**(code **)(*DAT_005869f4 + 0x24)))(DAT_005869f4,piVar4);
    FUN_005394d0(piVar4);
    iVar3 = DAT_005869f4[10];
    if (*(int *)((int)pvVar2 + 0x54) != 0) {
      iVar6 = *(int *)((int)pvVar2 + 0x54) + -1;
      *(int *)((int)pvVar2 + 0x54) = iVar6;
      iVar1 = *(int *)((int)pvVar2 + 0x50);
      *(undefined4 *)(iVar1 + iVar6 * 8) = 1;
      *(int *)(iVar1 + 4 + iVar6 * 8) = iVar3;
      return;
    }
    *(undefined4 *)((int)pvVar2 + 0x90) = 3;
  }
  FUN_004d4550(pvVar2);
  *(undefined4 *)((int)pvVar2 + 0x90) = 0;
  *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  return;
#undef fStack_1c
#undef puStack_18
#undef uStack_14
#undef uStack_10
}
