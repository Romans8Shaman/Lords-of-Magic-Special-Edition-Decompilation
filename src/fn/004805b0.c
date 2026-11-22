/* Rebuilt from lomse.exe FUN_004805b0 @ 0x004805b0 (103 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define DAT_005cd2f4 (*(int *)0x005cd2f4)
#define FUN_00480130 ((undefined4 (__thiscall *)(void *, int, void *, int, int, undefined4, int, undefined4, int *, int *, uint, int))0x00480130)

#define LOM_SELF_004805b0 1
void __thiscall rb_004805b0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef void * _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  iVar1 = param_1[3];
  if (((iVar1 < 0) || (DAT_005cd2f0 <= iVar1)) || (DAT_005cd2f4 == 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = DAT_005cd2f4 + iVar1 * 1000;
  }
  local_4 = this;
  FUN_00480130(this,*param_1,(void *)param_1[1],param_1[2],iVar1,*(undefined4 *)(iVar2 + 0xec),
               param_1[4],*(undefined4 *)(iVar2 + 0xe8),(int *)&local_4,(int *)&param_1,0,-1);
  return;
#undef local_4
}
