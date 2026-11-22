/* Rebuilt from lomse.exe FUN_004c7450 @ 0x004c7450 (490 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define EnterCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0d8) /* KERNEL32.DLL!EnterCriticalSection via IAT */
#define FUN_004c5200 ((undefined4 * (__fastcall *)(undefined4 *))0x004c5200)
#define FUN_004c5210 ((undefined4 (__fastcall *)(int))0x004c5210)
#define FUN_004c5950 ((undefined4 (__thiscall *)(void *, int *))0x004c5950)
#define FUN_004c5ef0 ((undefined4 (__thiscall *)(void *, int, int))0x004c5ef0)
#define FUN_005397f0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005397f0)
#define FUN_00539eb0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *))0x00539eb0)
#define FUN_00539ff0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *, undefined4))0x00539ff0)
#define LeaveCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0dc) /* KERNEL32.DLL!LeaveCriticalSection via IAT */
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004c7450 1
undefined4 __thiscall rb_004c7450(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_20;
  typedef undefined4 _t_local_1c;
  typedef int _t_local_18;
  typedef int _t_local_14;
  typedef LPCRITICAL_SECTION _t_local_10;
#define local_20 (*(_t_local_20 *)(_fr + 0x0))
#define local_1c (*(_t_local_1c *)(_fr + 0x4))
#define local_18 (*(_t_local_18 *)(_fr + 0x8))
#define local_14 (*(_t_local_14 *)(_fr + 0xc))
#define local_10 (*(_t_local_10 *)(_fr + 0x10))

  local_10 = (LPCRITICAL_SECTION)((int)this + 0x1bc);
  EnterCriticalSection(local_10);
  local_1c = 1;
  FUN_005397f0((char *)&local_14,4,1,param_1);
  FUN_005397f0((char *)&local_18,4,1,param_1);
  if (local_18 * local_14 != 0) {
    iVar1 = FUN_004c5ef0(this,local_14,local_18);
    if (iVar1 == 0) {
      local_1c = 0;
      goto LAB_004c7616;
    }
    FUN_005397f0(*(char **)this,*(int *)((int)this + 0xc) * 6,1,param_1);
  }
  FUN_005397f0((char *)&local_20,4,1,param_1);
  if (local_20 < 1) {
    local_1c = 0;
  }
  else {
    iVar1 = *(int *)((int)this + 0x1ac);
    if ((iVar1 != 0) && (*(int *)((int)this + 0x1b0) != local_20)) {
      if (iVar1 != 0) {
        FUN_00539eb0(iVar1,0x19c,*(int *)(iVar1 + -4),FUN_004c5210);
        if (iVar1 + -4 != 0) {
          Ordinal_403(iVar1 + -4,s_C__lomse_source_storm_h_00555130,0x3f6,0);
        }
      }
      *(undefined4 *)((int)this + 0x1ac) = 0;
    }
    iVar1 = local_20;
    if (*(int *)((int)this + 0x1ac) == 0) {
      piVar4 = (int *)0x0;
      piVar2 = (int *)Ordinal_401(local_20 * 0x19c + 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
      if (piVar2 != (int *)0x0) {
        piVar4 = piVar2 + 1;
        *piVar2 = iVar1;
        FUN_00539ff0(piVar4,0x19c,iVar1,FUN_004c5200,FUN_004c5210);
      }
      *(int **)((int)this + 0x1ac) = piVar4;
      if (piVar4 == (int *)0x0) {
        local_1c = 0;
        goto LAB_004c7616;
      }
    }
    *(int *)((int)this + 0x1b0) = local_20;
    if ((local_20 != 0) && (iVar1 = 0, 0 < local_20)) {
      iVar3 = 0;
      do {
        FUN_004c5950((void *)(*(int *)((int)this + 0x1ac) + iVar3),param_1);
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + 0x19c;
      } while (iVar1 < *(int *)((int)this + 0x1b0));
    }
    FUN_004c5950((void *)((int)this + 0x10),param_1);
  }
LAB_004c7616:
  LeaveCriticalSection(local_10);
  return local_1c;
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_10
}
