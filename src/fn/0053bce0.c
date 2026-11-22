/* Rebuilt from lomse.exe FUN_0053bce0 @ 0x0053bce0 (104 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d6a04 (*(HANDLE *)0x005d6a04)
#define FUN_0053cbb0 ((undefined4 (__cdecl *)(int))0x0053cbb0)
#define FUN_0053cc30 ((undefined4 (__cdecl *)(int))0x0053cc30)
#define FUN_005426f0 ((int (__cdecl *)(undefined *, undefined4 *, uint *))0x005426f0)
#define FUN_00542750 ((undefined4 (__cdecl *)(int, int, byte *))0x00542750)
#define HeapFree (*(__typeof__(BOOL (__stdcall *)(HANDLE, DWORD, LPVOID)) *)0x0054d200) /* KERNEL32.DLL!HeapFree via IAT */
unsigned lom_inreg_0053bce0[2] __asm__("lom_inreg_0053bce0");
undefined4 __cdecl lom_body_0053bce0(undefined *volatile param_1) __asm__("lom_body_0053bce0");

#define LOM_SELF_0053bce0 1
__attribute__((naked)) undefined4 __cdecl rb_0053bce0(undefined *volatile param_1)
{
  __asm__("movl %eax, lom_inreg_0053bce0\n\tmovl %edx, lom_inreg_0053bce0+4\n\tjmp lom_body_0053bce0");
}

undefined4 __cdecl lom_body_0053bce0(undefined *volatile param_1)
{
  undefined *lpMem;
  BOOL in_EAX = (BOOL)*(unsigned *)((char *)lom_inreg_0053bce0 + 0);
  byte *pbVar1;
  undefined4 uVar2;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  lpMem = param_1;
  if (param_1 != (undefined *)0x0) {
    FUN_0053cbb0(9);
    pbVar1 = (byte *)FUN_005426f0(lpMem,&local_4,(uint *)&param_1);
    if (pbVar1 != (byte *)0x0) {
      FUN_00542750(local_4,(int)param_1,pbVar1);
      uVar2 = FUN_0053cc30(9);
      return uVar2;
    }
    FUN_0053cc30(9);
    in_EAX = HeapFree(DAT_005d6a04,0,lpMem);
  }
  return in_EAX;
#undef local_4
}
