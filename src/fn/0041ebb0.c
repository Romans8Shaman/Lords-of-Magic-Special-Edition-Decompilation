/* Rebuilt from lomse.exe FUN_0041ebb0 @ 0x0041ebb0 (308 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00585408 (*(undefined4 *)0x00585408)
#define DAT_00586774 (*(undefined4 *)0x00586774)
#define DAT_005867a4 (*(int *)0x005867a4)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a8078 (*(undefined4 *)0x005a8078)
#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define DAT_005cd2f4 (*(int *)0x005cd2f4)
#define FUN_0041efa0 ((undefined4 (__thiscall *)(void *, uint))0x0041efa0)
#define FUN_00420490 ((int (__fastcall *)(int))0x00420490)
#define FUN_004321b0 ((undefined4 (__fastcall *)(int))0x004321b0)
#define FUN_00478c00 ((undefined4 (__thiscall *)(void *, undefined4))0x00478c00)
#define FUN_00484e10 ((undefined4 (__fastcall *)(int))0x00484e10)
#define FUN_0049da80 ((undefined4 (__thiscall *)(void *, uint))0x0049da80)
#define FUN_0053a090 ((int (__cdecl *)(undefined1 *, ...))0x0053a090)
#define GetTickCount (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d0e8) /* KERNEL32.DLL!GetTickCount via IAT */
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define _DAT_005867a0 (*(undefined4 *)0x005867a0)
#define _DAT_005867a8 (*(undefined4 *)0x005867a8)
#define _DAT_005867b0 (*(undefined4 *)0x005867b0)
#define _DAT_005867b4 (*(undefined4 *)0x005867b4)
#define s__d__army__d_die_anim_set_00555c08 (*(char (*)[])0x00555c08)

#define LOM_SELF_0041ebb0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall rb_0041ebb0(void *this,uint param_1)

{
  int iVar1;
  DWORD DVar2;
  undefined4 uVar3;
  int iVar4;
  uchar _fr[0x70] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef CHAR _t_local_64[100];
#define local_64 (*(_t_local_64 *)(_fr + 0x4))
  
  iVar4 = *(int *)((int)this + *(int *)((int)this + 0x50) * 0x4c + 0xc4);
  if (((iVar4 < 0) || (DAT_005cd2f0 <= iVar4)) || (DAT_005cd2f4 == 0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = DAT_005cd2f4 + iVar4 * 1000;
  }
  if (iVar4 != 0) {
    if (((int)param_1 < 0) || (0x19 < (int)param_1)) {
      iVar4 = -1;
    }
    else {
      iVar4 = *(int *)(iVar4 + 0x290 + param_1 * 4);
    }
    if (((-1 < iVar4) && ((param_1 == 0 || (param_1 == 1)))) &&
       ((&DAT_005a8078)[DAT_005a7d8c * 0x100] != 3)) {
      iVar1 = FUN_00484e10(0x5aa12c);
      if (iVar1 == 0) {
        iVar1 = FUN_00420490((int)this);
        if (iVar1 != 0) {
          iVar1 = FUN_004321b0(0x584cd4);
          if (iVar1 == 0) {
            _DAT_005867a8 = DAT_00586774;
            _DAT_005867a0 = *(undefined4 *)((int)this + 0x28);
            _DAT_005867b4 = 1;
            DAT_005867a4 = iVar4;
            _DAT_005867b0 = iVar1;
            FUN_00478c00(&DAT_00585408,iVar4);
          }
        }
      }
    }
  }
  if (param_1 == 2) {
    FUN_0041efa0(this,2);
  }
  if (param_1 == 8) {
    uVar3 = *(undefined4 *)((int)this + 0x28);
    DVar2 = GetTickCount();
    FUN_0053a090(local_64,s__d__army__d_die_anim_set_00555c08,DVar2,uVar3);
    OutputDebugStringA(local_64);
  }
  if (*(void **)((int)this + 0x2c) == (void *)0x0) {
    return 0;
  }
  uVar3 = FUN_0049da80(*(void **)((int)this + 0x2c),param_1);
  return uVar3;
#undef local_64
}
