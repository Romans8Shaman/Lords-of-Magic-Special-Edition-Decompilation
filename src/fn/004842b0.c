/* Rebuilt from lomse.exe FUN_004842b0 @ 0x004842b0 (164 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00573428 (*(undefined4 *)0x00573428)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a8078 (*(undefined4 *)0x005a8078)
#define DAT_005cd18c (*(undefined *)0x005cd18c)
#define DAT_005d1e84 (*(int *)0x005d1e84)
#define FUN_0046f360 ((undefined4 (__stdcall *)(void))0x0046f360)
#define FUN_004843d0 ((undefined4 (__fastcall *)(int))0x004843d0)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)
#define FUN_004f5f40 ((undefined4 (__fastcall *)(int))0x004f5f40)
#define FUN_005000f0 ((undefined4 (__thiscall *)(void *, int))0x005000f0)
#define FUN_0052b260 ((undefined4 (__fastcall *)(int *))0x0052b260)
#define _DAT_005834f8 (*(undefined4 *)0x005834f8)

#define LOM_SELF_004842b0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall rb_004842b0(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  FUN_0046f360();
  *(undefined4 *)((int)this + 0x4fec) = 0;
  *(undefined4 *)((int)this + 0x4ff0) = 0;
  *(undefined4 *)((int)this + 0x4ff4) = 0;
  *(undefined4 *)((int)this + 0x5000) = 0;
  _DAT_005834f8 = 0;
  FUN_004f5f40((int)this + 0x4848);
  FUN_0052b260((int *)&DAT_005cd18c);
  if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] != 1) {
    FUN_005000f0(&DAT_00584ae8,1);
  }
  if (DAT_005d1e84 == 0) {
    bVar3 = true;
  }
  else {
    iVar1 = *(int *)(DAT_005d1e84 + 0x390);
    iVar2 = FUN_004b7dd0(DAT_005d1e84);
    bVar3 = iVar1 == iVar2;
  }
  if (bVar3) {
    DAT_00573428 = *param_1;
    FUN_004843d0((int)this);
  }
  return 1;
}
