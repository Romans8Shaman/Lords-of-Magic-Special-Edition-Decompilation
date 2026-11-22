/* Rebuilt from lomse.exe FUN_00491b60 @ 0x00491b60 (186 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00491b00 ((undefined4 (__fastcall *)(int *))0x00491b00)
#define FUN_004ef2c0 ((undefined4 (__fastcall *)(undefined4 *))0x004ef2c0)
#define FUN_00539ff0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *, undefined4))0x00539ff0)
#define LAB_00491670 (*(undefined *)0x00491670) /* code label used as address */
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_00491b60 1
undefined4 __thiscall rb_00491b60(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;

  FUN_00491b00(this);
  piVar1 = (int *)Ordinal_401(param_1 * 8 + 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = piVar1 + 1;
    *piVar1 = param_1;
    FUN_00539ff0(piVar2,8,param_1,FUN_004ef2c0,&LAB_00491670);
  }
  *(int **)((int)this + 4) = piVar2;
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  iVar3 = 0;
  *(int *)this = param_1;
  if (0 < param_1) {
    do {
      iVar3 = iVar3 + 1;
      *(undefined4 *)(*(int *)((int)this + 4) + -8 + iVar3 * 8) = 0;
    } while (iVar3 < *(int *)this);
  }
  return 1;
}
