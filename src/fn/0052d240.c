/* Rebuilt from lomse.exe FUN_0052d240 @ 0x0052d240 (77 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00420580 ((undefined4 (__fastcall *)(int))0x00420580)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)

#define LOM_SELF_0052d240 1
undefined4 * __fastcall rb_0052d240(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  piVar4 = (int *)(param_1 + 0x18);
  do {
    puVar1 = FUN_00485080(&DAT_005aa12c,*piVar4,0x2f);
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = FUN_00420580((int)puVar1);
      if ((iVar2 == 0) || ((~puVar1[0xc] & 0x100) != 0)) {
        return puVar1;
      }
      *piVar4 = -1;
    }
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 3;
    if (0x1d < iVar3) {
      return (undefined4 *)0x0;
    }
  } while( true );
}
