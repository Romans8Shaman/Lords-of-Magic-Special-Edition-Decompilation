/* Rebuilt from lomse.exe FUN_00455f70 @ 0x00455f70 (855 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae8e8 (*(undefined *)0x005ae8e8)
#define DAT_005ae91c (*(char *)0x005ae91c)
#define DAT_005ae91d (*(char *)0x005ae91d)
#define DAT_005ae91e (*(char *)0x005ae91e)
#define FUN_00455640 ((undefined4 (__thiscall *)(void *, int))0x00455640)
#define FUN_004558c0 ((undefined4 (__thiscall *)(void *, int, int, undefined4))0x004558c0)
#define FUN_00455e50 ((undefined4 (__thiscall *)(void *, int, int))0x00455e50)
#define FUN_00455ef0 ((undefined4 (__thiscall *)(void *, undefined4, undefined4))0x00455ef0)

#define LOM_SELF_00455f70 1
void __thiscall rb_00455f70(void *this,int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((((-1 < param_1) && (iVar2 = *(int *)((int)this + 0x6c), param_1 < iVar2)) && (-1 < param_2))
     && (param_2 < *(int *)((int)this + 0x70))) {
    uVar1 = FUN_00455640(&DAT_005ae8e8,param_3);
    FUN_004558c0(&DAT_005aa12c,param_1,param_2,uVar1);
    if (param_3 == 0) {
      param_3 = (int)DAT_005ae91c;
    }
    else if (param_3 == 1) {
      param_3 = (int)DAT_005ae91d;
    }
    else if (param_3 == 2) {
      param_3 = (int)DAT_005ae91e;
    }
    FUN_00455e50(this,param_2 * iVar2 + param_1,param_3);
    switch(param_3) {
    case 0:
      FUN_00455e50(this,param_2 * *(int *)((int)this + 0x6c) + -1 + param_1,0);
      FUN_00455e50(this,param_2 * *(int *)((int)this + 0x6c) + 1 + param_1,0);
      iVar2 = param_2 + 1;
      FUN_00455ef0(this,iVar2 * *(int *)((int)this + 0x6c) + param_1,0);
      FUN_00455ef0(this,iVar2 * *(int *)((int)this + 0x6c) + -1 + param_1,0);
      FUN_00455ef0(this,iVar2 * *(int *)((int)this + 0x6c) + 1 + param_1,0);
      return;
    case 1:
      FUN_00455e50(this,param_2 * *(int *)((int)this + 0x6c) + -1 + param_1,1);
      FUN_00455e50(this,(param_2 + 1) * *(int *)((int)this + 0x6c) + param_1,1);
      FUN_00455ef0(this,(param_2 + 1) * *(int *)((int)this + 0x6c) + -1 + param_1,1);
      return;
    case 2:
      FUN_00455e50(this,(param_2 + -1) * *(int *)((int)this + 0x6c) + param_1,2);
      FUN_00455e50(this,(param_2 + 1) * *(int *)((int)this + 0x6c) + param_1,2);
      FUN_00455ef0(this,(param_2 + -1) * *(int *)((int)this + 0x6c) + -1 + param_1,2);
      FUN_00455ef0(this,param_2 * *(int *)((int)this + 0x6c) + -1 + param_1,2);
      FUN_00455ef0(this,(param_2 + 1) * *(int *)((int)this + 0x6c) + -1 + param_1,2);
      return;
    case 3:
      FUN_00455e50(this,(param_2 + -1) * *(int *)((int)this + 0x6c) + param_1,3);
      FUN_00455e50(this,param_2 * *(int *)((int)this + 0x6c) + -1 + param_1,3);
      FUN_00455ef0(this,(param_2 + -1) * *(int *)((int)this + 0x6c) + -1 + param_1,3);
      return;
    case 4:
      FUN_00455e50(this,param_2 * *(int *)((int)this + 0x6c) + -1 + param_1,4);
      FUN_00455e50(this,param_2 * *(int *)((int)this + 0x6c) + 1 + param_1,4);
      iVar2 = param_2 + -1;
      FUN_00455ef0(this,iVar2 * *(int *)((int)this + 0x6c) + param_1,4);
      FUN_00455ef0(this,iVar2 * *(int *)((int)this + 0x6c) + 1 + param_1,4);
      FUN_00455ef0(this,iVar2 * *(int *)((int)this + 0x6c) + -1 + param_1,4);
      return;
    case 5:
      FUN_00455e50(this,param_2 * *(int *)((int)this + 0x6c) + 1 + param_1,5);
      FUN_00455e50(this,(param_2 + -1) * *(int *)((int)this + 0x6c) + param_1,5);
      FUN_00455ef0(this,(param_2 + -1) * *(int *)((int)this + 0x6c) + 1 + param_1,5);
      return;
    case 6:
      FUN_00455e50(this,(param_2 + -1) * *(int *)((int)this + 0x6c) + param_1,6);
      FUN_00455e50(this,(param_2 + 1) * *(int *)((int)this + 0x6c) + param_1,6);
      FUN_00455ef0(this,(param_2 + -1) * *(int *)((int)this + 0x6c) + 1 + param_1,6);
      FUN_00455ef0(this,param_2 * *(int *)((int)this + 0x6c) + 1 + param_1,6);
      FUN_00455ef0(this,(param_2 + 1) * *(int *)((int)this + 0x6c) + 1 + param_1,6);
      return;
    case 7:
      FUN_00455e50(this,param_2 * *(int *)((int)this + 0x6c) + 1 + param_1,7);
      FUN_00455e50(this,(param_2 + 1) * *(int *)((int)this + 0x6c) + param_1,7);
      FUN_00455ef0(this,(param_2 + 1) * *(int *)((int)this + 0x6c) + 1 + param_1,7);
    }
  }
  return;
}
