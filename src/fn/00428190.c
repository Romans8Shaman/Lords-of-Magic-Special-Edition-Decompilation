/* Rebuilt from lomse.exe FUN_00428190 @ 0x00428190 (121 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00555d6c (*(undefined4 *)0x00555d6c)
#define DAT_00555d70 (*(undefined4 *)0x00555d70)
#define DAT_00555d74 (*(undefined4 *)0x00555d74)
#define DAT_005788c4 (*(void * *)0x005788c4)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)

#define LOM_SELF_00428190 1
void __thiscall
rb_00428190(void *this,undefined4 param_1,undefined4 param_2,uint param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = DAT_005788c4;
  uVar3 = DAT_00555d74;
  uVar2 = DAT_00555d70;
  uVar1 = DAT_00555d6c;
  if ((char)param_3 != '\0') {
    DAT_00555d74 = param_1;
    DAT_00555d70 = param_2;
    DAT_00555d6c = *(undefined4 *)((int)this + 0xc);
    DAT_005788c4 = this;
    FUN_004d09a0(DAT_005a7b78,param_3,param_4,0);
  }
  DAT_00555d6c = uVar1;
  DAT_00555d70 = uVar2;
  DAT_00555d74 = uVar3;
  DAT_005788c4 = (void *)uVar4;
  return;
}
