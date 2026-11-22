/* Rebuilt from lomse.exe FUN_0043db60 @ 0x0043db60 (73 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00578f60 (*(undefined *)0x00578f60)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d6220 ((undefined4 (__thiscall *)(void *, void *, int, undefined4))0x004d6220)
#define s_Invalid_data_id_00556604 (*(char (*)[])0x00556604)

#define LOM_SELF_0043db60 1
void __thiscall rb_0043db60(void *this,void *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_004d6220(&DAT_00578f60,param_1,param_2,this);
  if (iVar1 == 0) {
    FUN_004d41c0(param_1,s_Invalid_data_id_00556604);
  }
  if (param_2 == 8) {
    *(undefined4 *)((int)this + 0x84) = 0xffffffff;
    *(undefined4 *)((int)this + 0x88) = 0;
  }
  return;
}
