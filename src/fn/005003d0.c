/* Rebuilt from lomse.exe FUN_005003d0 @ 0x005003d0 (273 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0048d670 ((undefined4 (__fastcall *)(int))0x0048d670)
#define FUN_00539eb0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *))0x00539eb0)
#define FUN_00539ff0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *, undefined4))0x00539ff0)
#define LAB_0048d560 (*(undefined *)0x0048d560) /* code label used as address */
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_005003d0 1
undefined4 __thiscall rb_005003d0(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;

  if (*(int *)((int)this + 0x25318) != 0) {
    return 0;
  }
  iVar1 = *(int *)((int)this + 0x255a0);
  *(undefined4 *)((int)this + 0x25598) = 0;
  *(undefined4 *)((int)this + 0x2559c) = 0;
  if (iVar1 != 0) {
    FUN_00539eb0(iVar1,0x80,*(int *)(iVar1 + -4),FUN_0048d670);
    if (iVar1 + -4 != 0) {
      Ordinal_403(iVar1 + -4,s_C__lomse_source_storm_h_00555130,0x3f6,0);
    }
  }
  piVar2 = (int *)Ordinal_401(param_1 * 0x80 + 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  if (piVar2 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = piVar2 + 1;
    *piVar2 = param_1;
    FUN_00539ff0(piVar3,0x80,param_1,&LAB_0048d560,FUN_0048d670);
  }
  *(int **)((int)this + 0x255a0) = piVar3;
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  *(int *)((int)this + 0x2559c) = param_1;
  return 1;
}
