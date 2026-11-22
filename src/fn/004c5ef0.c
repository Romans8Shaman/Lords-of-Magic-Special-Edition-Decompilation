/* Rebuilt from lomse.exe FUN_004c5ef0 @ 0x004c5ef0 (157 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define EnterCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0d8) /* KERNEL32.DLL!EnterCriticalSection via IAT */
#define FUN_004c5c00 ((undefined4 (__fastcall *)(int *))0x004c5c00)
#define LeaveCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0dc) /* KERNEL32.DLL!LeaveCriticalSection via IAT */
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004c5ef0 1
undefined4 __thiscall rb_004c5ef0(void *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_8;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1bc));
  local_8 = 1;
  FUN_004c5c00(this);
  uVar3 = param_2 * param_1 * 6;
  puVar1 = (undefined4 *)Ordinal_401(uVar3,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  *(undefined4 **)this = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    local_8 = 0;
  }
  else {
    *(int *)((int)this + 4) = param_1;
    *(int *)((int)this + 8) = param_2;
    *(int *)((int)this + 0xc) = param_2 * param_1;
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar1 = 0;
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
    *(undefined4 *)((int)this + 0x1b8) = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1bc));
  return local_8;
#undef local_8
}
