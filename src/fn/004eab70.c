/* Rebuilt from lomse.exe FUN_004eab70 @ 0x004eab70 (144 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define CreateEventA (*(__typeof__(HANDLE (__stdcall *)(LPSECURITY_ATTRIBUTES, BOOL, BOOL, LPCSTR)) *)0x0054d0d4) /* KERNEL32.DLL!CreateEventA via IAT */
#define DAT_00584718 (*(HANDLE *)0x00584718)
#define DAT_0058471c (*(void * *)0x0058471c)
#define FUN_004eac00 ((undefined4 (__fastcall *)(int))0x004eac00)
#define FUN_004ead10 ((int (__fastcall *)(int))0x004ead10)
#define MessageBoxA (*(__typeof__(int (__stdcall *)(HWND, LPCSTR, LPCSTR, UINT)) *)0x0054d28c) /* USER32.DLL!MessageBoxA via IAT */
#define s_Failure_00572b28 (*(char (*)[])0x00572b28)
#define s_Failure_has_occured_with_Interne_00572b00 (*(char (*)[])0x00572b00)

#define LOM_SELF_004eab70 1
int __thiscall
rb_004eab70(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)((int)this + 0x14) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined4 *)((int)this + 0x20) = param_3;
  *(undefined4 *)((int)this + 0x18) = param_4;
  DAT_0058471c = this;
  iVar1 = FUN_004ead10((int)this);
  if (iVar1 != -2) {
    if (iVar1 == -1) {
      *(undefined4 *)((int)this + 8) = 1;
    }
    else {
      if (iVar1 != 0) {
        MessageBoxA(*(HWND *)((int)this + 0x14),s_Failure_has_occured_with_Interne_00572b00,
                    s_Failure_00572b28,0x10);
        return iVar1;
      }
      DAT_00584718 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
      iVar2 = FUN_004eac00((int)this);
      if (iVar2 == 0) {
        return -1;
      }
    }
  }
  return iVar1;
}
