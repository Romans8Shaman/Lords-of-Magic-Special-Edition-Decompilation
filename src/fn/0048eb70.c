/* Rebuilt from lomse.exe FUN_0048eb70 @ 0x0048eb70 (177 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_0048ec30 ((undefined4 (__thiscall *)(void *, undefined4 *, undefined4, undefined4))0x0048ec30)
#define FUN_00491910 ((undefined4 (__thiscall *)(void *, int *, int, int))0x00491910)
#define FUN_00491c20 ((int (__thiscall *)(void *, int))0x00491c20)
#define FUN_005005f0 ((int (__thiscall *)(void *, uint))0x005005f0)

#define LOM_SELF_0048eb70 1
int * __thiscall rb_0048eb70(void *this,int *param_1)

{
  void *pvVar1;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_10;
  typedef int _t_local_c;
  typedef int _t_local_8;
  typedef int _t_local_4;
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
#define local_c (*(_t_local_c *)(_fr + 0x4))
#define local_8 (*(_t_local_8 *)(_fr + 0x8))
#define local_4 (*(_t_local_4 *)(_fr + 0xc))
  
  local_4 = -1;
  local_8 = -1;
  local_10 = 0x280;
  local_c = 0x1e0;
  pvVar1 = (void *)FUN_00491c20(&DAT_005a7b50,*(int *)((int)this + 0xc));
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)FUN_005005f0(&DAT_00584ae8,*(uint *)((int)this + 0xc));
    if (pvVar1 != (void *)0x0) {
      FUN_0048ec30(pvVar1,&local_10,*(int *)(*(int *)((int)this + 0x28) + 0x3c) + *(int *)this,
                   *(int *)((int)this + 4) + *(int *)(*(int *)((int)this + 0x28) + 0x40));
    }
  }
  else {
    FUN_00491910(pvVar1,&local_10,*(int *)(*(int *)((int)this + 0x28) + 0x3c) + *(int *)this,
                 *(int *)((int)this + 4) + *(int *)(*(int *)((int)this + 0x28) + 0x40));
  }
  *param_1 = local_10;
  param_1[1] = local_c;
  param_1[2] = local_8;
  param_1[3] = local_4;
  return param_1;
#undef local_10
#undef local_c
#undef local_8
#undef local_4
}
