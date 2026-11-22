/* Rebuilt from lomse.exe FUN_004154e0 @ 0x004154e0 (216 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00422fa0 ((undefined4 (__thiscall *)(void *, int, int))0x00422fa0)
#define FUN_00525fc0 ((undefined4 (__fastcall *)(int *))0x00525fc0)

#define LOM_SELF_004154e0 1
int __thiscall rb_004154e0(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_10;
  typedef int _t_local_c;
  typedef int _t_local_4;
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
#define local_c (*(_t_local_c *)(_fr + 0x4))
#define local_4 (*(_t_local_4 *)(_fr + 0xc))
  
  iVar3 = -1;
  local_10 = -1;
  local_c = -1;
  iVar2 = -1;
  local_4 = -1;
  if (param_1 == 9) {
    local_10 = 0;
  }
  else if (param_1 == 10) {
    local_10 = 1;
  }
  else if (param_1 == 0xc) {
    local_10 = 2;
  }
  iVar4 = 0;
  iVar1 = -1;
  if (0 < *(int *)((int)this + 0x4c)) {
    piVar5 = (int *)((int)this + 0xd4);
    do {
      iVar1 = FUN_00525fc0(piVar5 + -4);
      if (-1 < iVar1) {
        if (-1 < local_10) {
          if (iVar1 == local_10) {
            if (iVar3 < *piVar5 >> 8) {
              iVar3 = *piVar5 >> 8;
              local_c = iVar4;
            }
          }
        }
        if (iVar2 < *piVar5 >> 8) {
          iVar2 = *piVar5 >> 8;
          local_4 = iVar4;
        }
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 0x13;
    } while (iVar4 < *(int *)((int)this + 0x4c));
    iVar1 = local_4;
  }
  if ((param_2 != 0) && (-1 < local_10)) {
    if (local_c < 1) {
      if (iVar1 < 1) {
        return local_c;
      }
    }
    else {
      iVar1 = local_c;
    }
    FUN_00422fa0(this,0,iVar1);
  }
  return local_c;
#undef local_10
#undef local_c
#undef local_4
}
