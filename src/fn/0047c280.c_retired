/* Rebuilt from lomse.exe FUN_0047c280 @ 0x0047c280 (208 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00420890 ((undefined4 (__thiscall *)(void *, int))0x00420890)
#define FUN_0047bfe0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0047bfe0)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004b13a0 ((int (__thiscall *)(void *, int))0x004b13a0)
#define FUN_004b17d0 ((undefined4 (__fastcall *)(void *, undefined4, undefined4, undefined4, undefined4, undefined4))0x004b17d0)
#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)

#define LOM_SELF_0047c280 1
void __thiscall rb_0047c280(void *this,int *param_1)

{
  undefined4 *this_00;
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 unused_reg_1;
  undefined4 unused_stack_4;
  undefined4 unused_stack_12;
  
  this_00 = FUN_00485080(&DAT_005aa12c,*param_1,0x6f);
  if ((this_00 != (undefined4 *)0x0) && ((~this_00[0xc] & 0x100) != 0)) {
    unused_stack_4 = this_00[7];
    iVar3 = param_1[5];
    iVar1 = FUN_00420890(this_00,iVar3);
    if (iVar1 == 0) {
      param_1[6] = param_1[6] | 0x80;
      FUN_0047bfe0(this,param_1);
      return;
    }
    unused_stack_12 = 0xffffffff;
    puVar2 = FUN_004c6fc0();
    iVar3 = FUN_004b17d0(puVar2,unused_reg_1,this_00,unused_stack_4,iVar3,unused_stack_12);
    if (iVar3 == 0) {
      param_1[6] = param_1[6] | 0x80;
      FUN_0047bfe0(this,param_1);
      return;
    }
    puVar2 = FUN_004c6fc0();
    iVar3 = *(int *)(puVar2 + 0xc0);
    iVar1 = 0;
    param_1[3] = iVar3;
    if (0 < iVar3) {
      do {
        iVar3 = iVar1;
        puVar2 = FUN_004c6fc0();
        iVar3 = FUN_004b13a0(puVar2,iVar3);
        *(char *)(iVar1 + 0x24 + (int)param_1) = (char)iVar3;
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_1[3]);
    }
    FUN_0047bfe0(this,param_1);
  }
  return;
}
