/* Rebuilt from lomse.exe FUN_0040c040 @ 0x0040c040 (51 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00578090 (*(undefined *)0x00578090)
#define FUN_0040c030 ((undefined4 (__thiscall *)(void *, int))0x0040c030)
#define FUN_004d61b0 ((int (__thiscall *)(void *, int))0x004d61b0)

#define LOM_SELF_0040c040 1
void __fastcall rb_0040c040(int *param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_004d61b0(&DAT_00578090,0x578188);
  iVar2 = *param_1;
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x48);
    FUN_0040c030(param_1,iVar2);
    iVar2 = iVar1;
  }
  *param_1 = 0;
  return;
}
