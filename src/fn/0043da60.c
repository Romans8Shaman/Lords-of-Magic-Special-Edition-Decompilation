/* Rebuilt from lomse.exe FUN_0043da60 @ 0x0043da60 (42 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00578f60 (*(undefined *)0x00578f60)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d61e0 ((undefined4 (__thiscall *)(void *, void *, int, int))0x004d61e0)
#define s_Invalid_data_id_00556604 (*(char (*)[])0x00556604)

#define LOM_SELF_0043da60 1
void __thiscall rb_0043da60(void *this,void *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_004d61e0(&DAT_00578f60,param_1,param_2,(int)this);
  if (iVar1 == 0) {
    FUN_004d41c0(param_1,s_Invalid_data_id_00556604);
  }
  return;
}
