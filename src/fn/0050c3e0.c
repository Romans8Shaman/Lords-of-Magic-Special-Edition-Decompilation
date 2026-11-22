/* Rebuilt from lomse.exe FUN_0050c3e0 @ 0x0050c3e0 (67 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd304 (*(undefined *)0x005cd304)
#define FUN_004b0ee0 ((int (__thiscall *)(void *, int))0x004b0ee0)
#define FUN_004f5a90 ((undefined4 (__thiscall *)(void *, int))0x004f5a90)
#define FUN_004f5b30 ((undefined4 (__thiscall *)(void *, uint))0x004f5b30)
#define FUN_0050cf40 ((int (__fastcall *)(void *))0x0050cf40)
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_Unknown_drawn_tree_type_00573a7c (*(char (*)[])0x00573a7c)

#define LOM_SELF_0050c3e0 1
void __fastcall rb_0050c3e0(int *param_1)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = (void *)FUN_004b0ee0(&DAT_005cd304,param_1[0x12]);
  if (pvVar1 == (void *)0x0) {
    OutputDebugStringA(s_Unknown_drawn_tree_type_00573a7c);
    return;
  }
  iVar2 = FUN_0050cf40(pvVar1);
  FUN_004f5a90(param_1,iVar2);
  FUN_004f5b30(param_1,0);
  ((undefined4 (__thiscall *)(__typeof__(param_1)))(**(code **)(*param_1 + 0x1c)))(param_1);
  return;
}
