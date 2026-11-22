/* Rebuilt from lomse.exe FUN_0040c080 @ 0x0040c080 (165 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00578138 (*(int *)0x00578138)
#define FUN_0040bb40 ((undefined4 (__thiscall *)(void *, void *))0x0040bb40)
#define FUN_0040c030 ((undefined4 (__thiscall *)(void *, int))0x0040c030)

#define LOM_SELF_0040c080 1
void __thiscall rb_0040c080(void *this,void *param_1,int param_2,int param_3)

{
  int *piVar1;
  int *this_00;
  int *piVar2;
  int iVar3;
  
  *(undefined4 *)((int)this + 0xc) = 1;
  piVar1 = *(int **)this;
  piVar2 = (int *)0x0;
joined_r0x0040c092:
  do {
    this_00 = piVar1;
    if (this_00 == (int *)0x0) {
      *(undefined4 *)((int)this + 0xc) = 0;
      return;
    }
    if ((*this_00 == param_2) && (this_00[1] == param_3)) {
      *(int **)((int)this + 0x10) = this_00;
      FUN_0040bb40(this_00,param_1);
      *(undefined4 *)((int)this + 0x10) = 0;
      *this_00 = *this_00 + this_00[2];
      if ((this_00[3] != 0) &&
         ((iVar3 = this_00[3] + -1, this_00[3] = iVar3, iVar3 < 1 || (DAT_00578138 != 0)))) {
        piVar1 = (int *)this_00[0x12];
        if (piVar2 == (int *)0x0) {
          *(int **)this = piVar1;
          FUN_0040c030(this,(int)this_00);
        }
        else {
          piVar2[0x12] = (int)piVar1;
          FUN_0040c030(this,(int)this_00);
        }
        goto joined_r0x0040c092;
      }
    }
    piVar1 = (int *)this_00[0x12];
    piVar2 = this_00;
  } while( true );
}
