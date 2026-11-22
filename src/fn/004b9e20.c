/* Rebuilt from lomse.exe FUN_004b9e20 @ 0x004b9e20 (141 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FUN_0049b2a0 ((short * (__thiscall *)(void *, undefined4, undefined4))0x0049b2a0)
#define FUN_004a2380 ((undefined4 (__cdecl *)(LPCSTR, int))0x004a2380)

#define LOM_SELF_004b9e20 1
int __thiscall rb_004b9e20(void *this,LPCSTR param_1)

{
  int iVar1;
  short *psVar2;
  uchar _fr[0x308] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef char _t_local_300[768];
#define local_300 (*(_t_local_300 *)(_fr + 0x0))
  
  if (*(int *)((int)this + 8) <= *(int *)((int)this + 4)) {
    return -1;
  }
  iVar1 = FUN_004a2380(param_1,(int)local_300);
  if (iVar1 == 0) {
    return -1;
  }
  iVar1 = 0;
  do {
    local_300[iVar1] = local_300[iVar1] << 2;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x300);
  psVar2 = FUN_0049b2a0(&DAT_00584ae8,local_300,param_1);
  *(short **)(*(int *)this + *(int *)((int)this + 4) * 4) = psVar2;
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return iVar1;
#undef local_300
}
