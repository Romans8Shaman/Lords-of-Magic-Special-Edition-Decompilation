/* Rebuilt from lomse.exe FUN_004b0700 @ 0x004b0700 (343 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0049cc10 ((undefined4 (__thiscall *)(void *, int *, int, int))0x0049cc10)

#define LOM_SELF_004b0700 1
bool __thiscall rb_004b0700(void *this,int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_10[4];
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
  
  bVar6 = *(void **)this != (void *)0x0;
  if (bVar6) {
    piVar3 = (int *)FUN_0049cc10(*(void **)this,local_10,param_2,param_3);
    *param_1 = *piVar3;
    param_1[1] = piVar3[1];
    param_1[2] = piVar3[2];
    param_1[3] = piVar3[3];
  }
  if (*(void **)((int)this + 4) != (void *)0x0) {
    piVar3 = (int *)FUN_0049cc10(*(void **)((int)this + 4),local_10,param_2,param_3);
    iVar5 = piVar3[1];
    iVar1 = piVar3[2];
    iVar2 = piVar3[3];
    if (bVar6) {
      iVar4 = *piVar3;
      if (*param_1 < *piVar3) {
        iVar4 = *param_1;
      }
      *param_1 = iVar4;
      if (param_1[1] < iVar5) {
        iVar5 = param_1[1];
      }
      param_1[1] = iVar5;
      iVar5 = param_1[2];
      if (param_1[2] < iVar1) {
        iVar5 = iVar1;
      }
      param_1[2] = iVar5;
      iVar5 = param_1[3];
      if (param_1[3] < iVar2) {
        iVar5 = iVar2;
      }
      param_1[3] = iVar5;
    }
    else {
      *param_1 = *piVar3;
      param_1[1] = piVar3[1];
      param_1[2] = piVar3[2];
      param_1[3] = piVar3[3];
    }
    bVar6 = true;
  }
  if (*(void **)((int)this + 8) != (void *)0x0) {
    piVar3 = (int *)FUN_0049cc10(*(void **)((int)this + 8),local_10,param_2,param_3);
    iVar5 = piVar3[1];
    iVar1 = piVar3[2];
    iVar2 = piVar3[3];
    if (bVar6) {
      iVar4 = *piVar3;
      if (*param_1 < *piVar3) {
        iVar4 = *param_1;
      }
      *param_1 = iVar4;
      iVar4 = param_1[1];
      if (iVar5 <= param_1[1]) {
        iVar4 = iVar5;
      }
      param_1[1] = iVar4;
      iVar5 = param_1[2];
      if (param_1[2] < iVar1) {
        iVar5 = iVar1;
      }
      param_1[2] = iVar5;
      iVar5 = param_1[3];
      if (param_1[3] < iVar2) {
        iVar5 = iVar2;
      }
      param_1[3] = iVar5;
      return true;
    }
    bVar6 = true;
    *param_1 = *piVar3;
    param_1[1] = piVar3[1];
    param_1[2] = piVar3[2];
    param_1[3] = piVar3[3];
  }
  return bVar6;
#undef local_10
}
