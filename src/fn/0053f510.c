/* Rebuilt from lomse.exe FUN_0053f510 @ 0x0053f510 (99 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d6a04 (*(HANDLE *)0x005d6a04)
#define FUN_0053cbb0 ((undefined4 (__cdecl *)(int))0x0053cbb0)
#define FUN_0053cc30 ((undefined4 (__cdecl *)(int))0x0053cc30)
#define FUN_005426f0 ((int (__cdecl *)(undefined *, undefined4 *, uint *))0x005426f0)
#define HeapSize (*(__typeof__(SIZE_T (__stdcall *)(HANDLE, DWORD, LPCVOID)) *)0x0054d17c) /* KERNEL32.DLL!HeapSize via IAT */

#define LOM_SELF_0053f510 1
SIZE_T __cdecl rb_0053f510(undefined *param_1)

{
  byte bVar1;
  byte *pbVar2;
  SIZE_T SVar3;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_8;
  typedef undefined4 _t_local_4;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  FUN_0053cbb0(9);
  pbVar2 = (byte *)FUN_005426f0(param_1,&local_4,&local_8);
  if (pbVar2 == (byte *)0x0) {
    FUN_0053cc30(9);
    SVar3 = HeapSize(DAT_005d6a04,0,param_1);
    return SVar3;
  }
  bVar1 = *pbVar2;
  FUN_0053cc30(9);
  return (uint)bVar1 << 4;
#undef local_8
#undef local_4
}
