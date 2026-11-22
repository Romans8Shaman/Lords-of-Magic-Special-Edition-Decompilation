/* Rebuilt from lomse.exe FUN_00541ec0 @ 0x00541ec0 (158 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d5328 (*(undefined4 *)0x005d5328)
#define DAT_005d5430 (*(undefined1 *)0x005d5430)
#define DAT_005d5530 (*(UINT *)0x005d5530)
#define DAT_005d5534 (*(LCID *)0x005d5534)
#define FUN_0053f680 ((int (__cdecl *)(LCID, DWORD, char *, LPWSTR, LPWSTR, int, UINT, int))0x0053f680)

#define LOM_SELF_00541ec0 1
uint __cdecl rb_00541ec0(uint volatile param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_8[2];
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
  
  uVar1 = param_1;
  if (param_1 < 0x100) {
    if ((*(byte *)((int)&DAT_005d5328 + param_1 + 1) & 0x20) == 0x20) {
      return (uint)(byte)(&DAT_005d5430)[param_1];
    }
  }
  else {
    bVar2 = (byte)(param_1 >> 8);
    param_1 = CONCAT31(CONCAT21((*(ushort *)((uchar *)&param_1 + 2)),(char)param_1),bVar2);
    if ((*(byte *)((int)&DAT_005d5328 + bVar2 + 1) & 4) != 0) {
      iVar3 = FUN_0053f680(DAT_005d5534,0x200,(char *)&param_1,(LPWSTR)0x2,(LPWSTR)local_8,2,
                           DAT_005d5530,1);
      if (iVar3 != 0) {
        return (local_8[0] & 0xff) * 0x100 + (local_8[0] >> 8 & 0xff);
      }
    }
  }
  return uVar1;
#undef local_8
}
