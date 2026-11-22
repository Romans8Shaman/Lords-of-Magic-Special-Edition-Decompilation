/* Rebuilt from lomse.exe FUN_00455540 @ 0x00455540 (242 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae970 (*(int *)0x005ae970)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005ae9c4 (*(int *)0x005ae9c4)
#define FUN_004a6e60 ((undefined4 (__thiscall *)(void *, int, int))0x004a6e60)
#define FUN_004a8300 ((undefined4 (__thiscall *)(void *, int, int))0x004a8300)
#define FUN_004a9a60 ((undefined4 (__thiscall *)(void *, undefined4 *, int))0x004a9a60)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)

#define LOM_SELF_00455540 1
void __thiscall rb_00455540(void *this,int *param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_c;
  typedef uint _t_local_8;
  typedef void * _t_local_4;
#define local_c (*(_t_local_c *)(_fr + 0x4))
#define local_8 (*(_t_local_8 *)(_fr + 0x8))
#define local_4 (*(_t_local_4 *)(_fr + 0xc))
  
  local_c = -1;
  local_4 = this;
  iVar3 = FUN_004f6000(&DAT_005ae974,param_2);
  iVar5 = -1;
  if (iVar3 != 0) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)(DAT_005ae970 + (iVar5 + *(int *)(iVar3 + 0x1c) * 8) * 4);
      FUN_004a9a60(&DAT_005ae958,&local_8,iVar1);
      if (((local_8 & 0x200000) != 0) && (iVar4 = FUN_004a8300(&DAT_005ae958,iVar1,0), iVar4 == -1))
      {
        local_c = iVar1;
        break;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 8);
    iVar5 = local_c;
  }
  pvVar2 = local_4;
  if (iVar5 != -1) {
    *param_1 = iVar5 % DAT_005ae9c4;
    param_1[1] = iVar5 / DAT_005ae9c4;
    return;
  }
  iVar5 = param_1[1];
  iVar3 = *(int *)((int)local_4 + 0x5c) + iVar5;
  param_1[1] = iVar3;
  iVar3 = FUN_004a6e60(&DAT_005ae958,*param_1,iVar3);
  if (iVar3 != param_2) {
    iVar3 = *(int *)((int)pvVar2 + 0x60) + iVar5;
    param_1[1] = iVar3;
    iVar3 = FUN_004a6e60(&DAT_005ae958,*param_1,iVar3);
    if (iVar3 != param_2) {
      param_1[1] = iVar5;
    }
  }
  return;
#undef local_c
#undef local_8
#undef local_4
}
