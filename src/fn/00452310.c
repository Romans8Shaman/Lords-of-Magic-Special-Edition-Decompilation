/* Rebuilt from lomse.exe FUN_00452310 @ 0x00452310 (255 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583440 (*(undefined *)0x00583440)
#define FUN_0043bac0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0043bac0)
#define FUN_00441000 ((undefined4 (__thiscall *)(void *, int *))0x00441000)
#define FUN_00453190 ((undefined4 (__cdecl *)(int, int *))0x00453190)
#define FUN_004fd4b0 ((undefined4 (__stdcall *)(undefined4 *))0x004fd4b0)
#define _DAT_0058345c (*(undefined4 *)0x0058345c)
#define _DAT_00583468 (*(undefined4 *)0x00583468)
#define _DAT_0058348c (*(undefined4 *)0x0058348c)

#define LOM_SELF_00452310 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall rb_00452310(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_aiStack_14[5];
#define aiStack_14 (*(_t_aiStack_14 *)(_fr + 0x4))
  
  piVar3 = param_1;
  FUN_004fd4b0(param_1);
  _DAT_00583468 = 0xfffffffe;
  _DAT_0058345c = *(undefined4 *)((int)this + 0x1c);
  uVar6 = 0;
  puVar5 = (undefined4 *)((int)this + 0xc4);
  param_1 = (int *)0x9;
  do {
    FUN_0043bac0(&DAT_00583440,puVar5);
    _DAT_0058348c = ((undefined4 (__thiscall *)(__typeof__((void *)(this))))(**(code **)(*(int *)this + 0x3c)))((void *)(this));
    iVar1 = FUN_00441000(&DAT_00583440,aiStack_14);
    if (iVar1 != 0) {
      iVar1 = 5;
      piVar2 = piVar3;
      do {
        *piVar2 = *piVar2 + *(int *)(((int)aiStack_14 - (int)piVar3) + (int)piVar2);
        piVar2 = piVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      uVar6 = 1;
    }
    puVar5 = puVar5 + 0x11;
    param_1 = (int *)((int)param_1 + -1);
  } while (param_1 != (int *)0x0);
  if (*(int **)((int)this + 0x44) != (int *)0x0) {
    iVar1 = ((undefined4 (__thiscall *)(__typeof__((void *)(*(int **)((int)this + 0x44))), __typeof__(aiStack_14)))(**(code **)(**(int **)((int)this + 0x44) + 0x40)))((void *)(*(int **)((int)this + 0x44)),aiStack_14);
    if (iVar1 != 0) {
      iVar1 = 5;
      piVar2 = piVar3;
      do {
        *piVar2 = *piVar2 + *(int *)((int)piVar2 + ((int)aiStack_14 - (int)piVar3));
        piVar2 = piVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      uVar6 = 1;
    }
  }
  iVar1 = FUN_00453190((int)this,aiStack_14);
  if (iVar1 != 0) {
    iVar1 = (int)aiStack_14 - (int)piVar3;
    iVar4 = 5;
    do {
      *piVar3 = *piVar3 + *(int *)((int)piVar3 + iVar1);
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    uVar6 = 1;
  }
  return uVar6;
#undef aiStack_14
}
