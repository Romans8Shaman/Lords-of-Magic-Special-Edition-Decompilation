/* Rebuilt from lomse.exe FUN_004ffcf0 @ 0x004ffcf0 (215 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00473930 ((undefined4 (__fastcall *)(int))0x00473930)
#define FUN_0048e9a0 ((undefined4 (__thiscall *)(void *, undefined4))0x0048e9a0)
#define FUN_005005f0 ((int (__thiscall *)(void *, uint))0x005005f0)
#define FUN_0053a090 ((int (__cdecl *)(undefined1 *, ...))0x0053a090)
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_GetDialog__d__returned_NULL_005735f8 (*(char (*)[])0x005735f8)
#define s_dialog_id__d_already_open_005735bc (*(char (*)[])0x005735bc)
#define s_gd__gt_Open_active_dialog__failed_005735d8 (*(char (*)[])0x005735d8)

#define LOM_SELF_004ffcf0 1
undefined4 __thiscall rb_004ffcf0(void *this,uint param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *this_00;
  int iVar3;
  uchar _fr[0x70] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef CHAR _t_local_64[100];
#define local_64 (*(_t_local_64 *)(_fr + 0x4))
  
  this_00 = (undefined4 *)FUN_005005f0(this,param_1);
  if (this_00 == (undefined4 *)0x0) {
    FUN_0053a090(local_64,s_GetDialog__d__returned_NULL_005735f8,param_1);
    OutputDebugStringA(local_64);
    return 0;
  }
  puVar1 = *(undefined4 **)((int)this + 0x25318);
  for (puVar2 = puVar1; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
    if (puVar2 == this_00) {
      FUN_0053a090(local_64,s_dialog_id__d_already_open_005735bc,param_1);
      OutputDebugStringA(local_64);
      return 0;
    }
  }
  *(undefined4 **)((int)this + 0x25318) = this_00;
  iVar3 = FUN_0048e9a0(this_00,puVar1);
  if (iVar3 == 0) {
    FUN_0053a090(local_64,s_gd__gt_Open_active_dialog__failed_005735d8);
    OutputDebugStringA(local_64);
    *(undefined4 **)((int)this + 0x25318) = puVar1;
    return 0;
  }
  FUN_00473930((int)this + 0x2531c);
  return 1;
#undef local_64
}
