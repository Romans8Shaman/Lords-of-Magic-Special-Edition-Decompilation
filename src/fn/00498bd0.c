/* Rebuilt from lomse.exe FUN_00498bd0 @ 0x00498bd0 (180 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00498af0 ((undefined4 (__fastcall *)(int))0x00498af0)
#define FUN_00498b40 ((undefined4 (__thiscall *)(void *, undefined4 *, uint))0x00498b40)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_00498bd0 1
int __thiscall rb_00498bd0(void *this,undefined4 *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;

  if ((param_2 == 0) || (0x13 < *(int *)((int)this + 0x50))) {
    return -1;
  }
  if (*(int *)((int)this + *(int *)((int)this + 0x50) * 4) == 0) {
    iVar1 = Ordinal_401(0xa4,s_C__lomse_source_storm_h_00555130,0x3ef,0);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00498af0(iVar1);
    }
    *(undefined4 *)((int)this + *(int *)((int)this + 0x50) * 4) = uVar2;
  }
  iVar1 = *(int *)((int)this + 0x50);
  FUN_00498b40(*(void **)((int)this + iVar1 * 4),param_1,param_2);
  *(int *)((int)this + 0x50) = *(int *)((int)this + 0x50) + 1;
  return iVar1;
}
