/* Rebuilt from lomse.exe FUN_0042da60 @ 0x0042da60 (321 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0049cc10 ((undefined4 (__thiscall *)(void *, int *, int, int))0x0049cc10)

#define LOM_SELF_0042da60 1
undefined4 __thiscall rb_0042da60(void *this,int *param_1,int param_2,int param_3)

{
  int *piVar1;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_10[4];
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
  
  if (*(void **)((int)this + 0x10) != (void *)0x0) {
    piVar1 = (int *)FUN_0049cc10(*(void **)((int)this + 0x10),local_10,param_2,param_3);
    if ((((*param_1 <= piVar1[2]) && (param_1[1] <= piVar1[3])) && (*piVar1 <= param_1[2])) &&
       (piVar1[1] <= param_1[3])) {
      return 1;
    }
  }
  if (*(void **)((int)this + 0x14) != (void *)0x0) {
    piVar1 = (int *)FUN_0049cc10(*(void **)((int)this + 0x14),local_10,param_2,param_3);
    if (((*param_1 <= piVar1[2]) && (param_1[1] <= piVar1[3])) &&
       ((*piVar1 <= param_1[2] && (piVar1[1] <= param_1[3])))) {
      return 1;
    }
  }
  if (*(void **)((int)this + 0x18) != (void *)0x0) {
    piVar1 = (int *)FUN_0049cc10(*(void **)((int)this + 0x18),local_10,param_2,param_3);
    if (((*param_1 <= piVar1[2]) && (param_1[1] <= piVar1[3])) &&
       ((*piVar1 <= param_1[2] && (piVar1[1] <= param_1[3])))) {
      return 1;
    }
  }
  if (*(void **)((int)this + 0x1c) != (void *)0x0) {
    piVar1 = (int *)FUN_0049cc10(*(void **)((int)this + 0x1c),local_10,param_2,param_3);
    if ((((*param_1 <= piVar1[2]) && (param_1[1] <= piVar1[3])) && (*piVar1 <= param_1[2])) &&
       (piVar1[1] <= param_1[3])) {
      return 1;
    }
  }
  return 0;
#undef local_10
}
