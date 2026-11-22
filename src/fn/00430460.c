/* Rebuilt from lomse.exe FUN_00430460 @ 0x00430460 (121 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005789b8 (*(int *)0x005789b8)
#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_00492760 ((int (__thiscall *)(void *, int))0x00492760)

#define LOM_SELF_00430460 1
int * __thiscall rb_00430460(void *this,int *param_1)

{
  int iVar1;
  
  DAT_005789b8 = DAT_005789b8 + 0x2c;
  iVar1 = FUN_00492760(&DAT_005a7b50,*param_1);
  *(int *)this = iVar1;
  iVar1 = FUN_00492760(&DAT_005a7b50,param_1[1]);
  *(int *)((int)this + 8) = iVar1;
  iVar1 = FUN_00492760(&DAT_005a7b50,param_1[7]);
  *(int *)((int)this + 0xc) = iVar1;
  *(int *)((int)this + 0x10) = param_1[2];
  *(int *)((int)this + 0x14) = param_1[3];
  *(int *)((int)this + 0x18) = param_1[4];
  *(int *)((int)this + 0x1c) = param_1[5];
  *(int *)((int)this + 0x20) = param_1[8];
  *(int *)((int)this + 0x24) = param_1[9];
  *(int *)((int)this + 4) = param_1[6];
  return this;
}
