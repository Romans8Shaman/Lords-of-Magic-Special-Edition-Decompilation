/* Rebuilt from lomse.exe FUN_00498e70 @ 0x00498e70 (111 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_00498480 ((undefined4 (__thiscall *)(void *, int, int *, int *, undefined1 *, undefined1 *))0x00498480)

#define LOM_SELF_00498e70 1
void __thiscall
rb_00498e70(void *this,int *param_1,int *param_2,undefined1 *param_3,undefined1 *param_4)

{
  int iVar1;
  undefined *puVar2;
  
  *param_1 = -1;
  *param_2 = -1;
  *param_3 = 0xff;
  *param_4 = 0xff;
  iVar1 = *(int *)((int)this + 0x48);
  if ((iVar1 < 0) || (0xf < iVar1)) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = &DAT_005af194 + iVar1 * 0x1d84;
  }
  if ((puVar2 != (undefined *)0x0) && (puVar2 + 0x15e0 != (undefined *)0x0)) {
    FUN_00498480(puVar2 + 0x15e0,(int)this,param_1,param_2,param_3,param_4);
  }
  return;
}
