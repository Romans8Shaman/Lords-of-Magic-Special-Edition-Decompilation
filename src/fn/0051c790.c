/* Rebuilt from lomse.exe FUN_0051c790 @ 0x0051c790 (426 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(int *)0x005aa12c)
#define FUN_004bd210 ((undefined4 (__stdcall *)(undefined4))0x004bd210)
#define FUN_005397f0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005397f0)
#define FUN_00539eb0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *))0x00539eb0)
#define FUN_00539ff0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *, undefined4))0x00539ff0)
#define LAB_0051bc20 (*(undefined *)0x0051bc20) /* code label used as address */
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define op_sunlight ((undefined4 (__stdcall *)(void))0x0051bc30)
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_0051c790 1
undefined4 __thiscall rb_0051c790(void *this, int *volatile param_1)

{
  int *piVar1;
  int *unused_stack_0;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;

  iVar5 = *(int *)((int)this + 0x70);
  if (iVar5 != 0) {
    FUN_00539eb0(iVar5,0x14,*(int *)(iVar5 + -4),op_sunlight);
    if (iVar5 + -4 != 0) {
      Ordinal_403(iVar5 + -4,s_C__lomse_source_storm_h_00555130,0x3f6,0);
    }
    *(undefined4 *)((int)this + 0x70) = 0;
  }
  unused_stack_0 = param_1;
  FUN_005397f0((char *)((int)this + 0x68),4,1,param_1);
  FUN_005397f0((char *)((int)this + 0x6c),4,1,unused_stack_0);
  piVar1 = (int *)((int)this + 0x74);
  FUN_005397f0((char *)piVar1,4,1,unused_stack_0);
  iVar5 = *piVar1;
  piVar2 = (int *)Ordinal_401(iVar5 * 0x14 + 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    *piVar2 = iVar5;
    param_1 = piVar2 + 1;
    FUN_00539ff0(param_1,0x14,iVar5,&LAB_0051bc20,op_sunlight);
    piVar2 = param_1;
  }
  *(int **)((int)this + 0x70) = piVar2;
  if (piVar2 == (int *)0x0) {
    *piVar1 = 0;
    uVar3 = 0;
  }
  else {
    iVar5 = 0;
    if (0 < *piVar1) {
      do {
        FUN_004bd210(unused_stack_0);
        iVar5 = iVar5 + 1;
      } while (iVar5 < *piVar1);
    }
    if (0x37 < DAT_005aa12c) {
      if (DAT_005aa12c < 0x4d) {
        param_1 = (int *)0x13;
      }
      else {
        FUN_005397f0((char *)&param_1,4,1,unused_stack_0);
      }
      iVar5 = 0;
      if (0 < (int)param_1) {
        pcVar4 = (char *)((int)this + 0x10);
        do {
          FUN_005397f0(pcVar4,4,1,unused_stack_0);
          iVar5 = iVar5 + 1;
          pcVar4 = pcVar4 + 4;
        } while (iVar5 < (int)param_1);
      }
    }
    if (0x5a < DAT_005aa12c) {
      FUN_005397f0((char *)((int)this + 0x78),0x40,1,unused_stack_0);
    }
    uVar3 = 1;
  }
  return uVar3;
}
