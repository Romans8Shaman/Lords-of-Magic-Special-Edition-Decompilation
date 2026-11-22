/* Rebuilt from lomse.exe FUN_004806b0 @ 0x004806b0 (405 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005834d4 (*(DWORD *)0x005834d4)
#define DAT_005834d8 (*(int *)0x005834d8)
#define FUN_00420580 ((undefined4 (__fastcall *)(int))0x00420580)
#define FUN_00480850 ((undefined4 (__stdcall *)(int *))0x00480850)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_0048cc70 ((int (__thiscall *)(void *, undefined1))0x0048cc70)
#define FUN_004a51c0 ((int (__thiscall *)(void *, int, int))0x004a51c0)
#define FUN_004b1260 ((undefined4 (__thiscall *)(void *, int *, int, int))0x004b1260)
#define GetTickCount (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d0e8) /* KERNEL32.DLL!GetTickCount via IAT */
#define MessageBeep (*(__typeof__(BOOL (__stdcall *)(UINT)) *)0x0054d294) /* USER32.DLL!MessageBeep via IAT */
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_FindMove_failed_0055b1e8 (*(char (*)[])0x0055b1e8)

#define LOM_SELF_004806b0 1
undefined4 __thiscall
rb_004806b0(void *this,int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  uchar _fr[0x208] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_200[5];
  typedef int _t_local_1eb[4];
  typedef undefined4 _t_local_1db;
  typedef int _t_local_1d7;
  typedef uint _t_local_1d3;
  typedef undefined4 _t_local_1cf;
  typedef int _t_local_f8[59];
  typedef undefined4 _t_local_c;
#define local_200 (*(_t_local_200 *)(_fr + 0x0))
#define local_1eb (*(_t_local_1eb *)(_fr + 0x15))
#define local_1db (*(_t_local_1db *)(_fr + 0x25))
#define local_1d7 (*(_t_local_1d7 *)(_fr + 0x29))
#define local_1d3 (*(_t_local_1d3 *)(_fr + 0x2d))
#define local_1cf (*(_t_local_1cf *)(_fr + 0x31))
#define local_f8 (*(_t_local_f8 *)(_fr + 0x108))
#define local_c (*(_t_local_c *)(_fr + 0x1f4))
  
  FUN_0048cc70(local_200,0xd);
  uVar1 = FUN_00482ac0(this,param_1,0);
  if (uVar1 == 0) {
    return 0;
  }
  iVar2 = FUN_00420580(uVar1);
  if ((iVar2 == 0) && ((*(byte *)(uVar1 + 0x30) & 0x12) != 0)) {
    return 0;
  }
  *(uint *)(uVar1 + 0x30) = *(uint *)(uVar1 + 0x30) | 2;
  local_1eb[0] = param_1;
  local_1eb[2] = param_2;
  local_1d7 = FUN_004a51c0((void *)((int)this + 0x482c),param_3,param_4);
  local_1eb[1] = 0xffffffff;
  local_1cf = 0xffffffff;
  local_1db = *(undefined4 *)(uVar1 + 0x1c);
  DVar3 = GetTickCount();
  piVar5 = local_1eb;
  piVar6 = local_f8;
  for (iVar2 = 0x3b; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar6 = *piVar5;
    piVar5 = piVar5 + 1;
    piVar6 = piVar6 + 1;
  }
  local_c = 0;
  iVar2 = FUN_004b1260((void *)((int)this + 0x482c),local_f8,param_3,param_4);
  if (iVar2 != 0) {
    DAT_005834d8 = 0;
    *(uint *)(uVar1 + 0x30) = *(uint *)(uVar1 + 0x30) & 0xffffff7f;
    local_1d3 = -(uint)(param_5 != 0) & 0x40;
    uVar4 = FUN_00480850(local_200);
    return uVar4;
  }
  DAT_005834d8 = DAT_005834d8 + 1;
  if ((DVar3 - DAT_005834d4 < 100) || (3 < DAT_005834d8)) {
    DAT_005834d8 = 0;
  }
  DAT_005834d4 = GetTickCount();
  OutputDebugStringA(s_FindMove_failed_0055b1e8);
  MessageBeep(0x30);
  *(uint *)(uVar1 + 0x30) = *(uint *)(uVar1 + 0x30) & 0xfffffffd | 0x80;
  return 0;
#undef local_200
#undef local_1eb
#undef local_1db
#undef local_1d7
#undef local_1d3
#undef local_1cf
#undef local_f8
#undef local_c
}
