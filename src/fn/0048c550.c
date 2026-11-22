/* Rebuilt from lomse.exe FUN_0048c550 @ 0x0048c550 (133 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005aeef4 (*(int *)0x005aeef4)
#define DAT_005aeef8 (*(int *)0x005aeef8)
#define DAT_005af12c (*(int *)0x005af12c)
#define FUN_00417890 ((undefined4 (__fastcall *)(int))0x00417890)
#define FUN_0048a400 ((undefined4 (__fastcall *)(int))0x0048a400)
#define FUN_004fbed0 ((undefined4 * (__thiscall *)(void *, int))0x004fbed0)

#define LOM_SELF_0048c550 1
int __stdcall rb_0048c550(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_0048a400(0x584ae8);
  if ((((iVar1 == 2) || (DAT_005aeef4 != 0)) || (DAT_005aeef8 != 0)) || (DAT_005af12c != 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  if ((iVar1 != 0) && (iVar2 = FUN_00417890(0x5aa12c), iVar2 == 0)) {
    puVar3 = FUN_004fbed0(&DAT_005ae974,0);
    if (puVar3 == (undefined4 *)0x0) {
      return iVar1;
    }
    while ((((int)puVar3[0x14e] < 0 || ((puVar3[0xc] & 8) != 0)) || ((puVar3[0xc] & 0x1000) != 0)))
    {
      puVar3 = FUN_004fbed0(&DAT_005ae974,(int)puVar3);
      if (puVar3 == (undefined4 *)0x0) {
        return iVar1;
      }
    }
  }
  return 0;
}
