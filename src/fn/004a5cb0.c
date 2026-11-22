/* Rebuilt from lomse.exe FUN_004a5cb0 @ 0x004a5cb0 (532 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055c9e0 (*(undefined4 *)0x0055c9e0)
#define DAT_0055ca00 (*(undefined4 *)0x0055ca00)
#define DAT_005876d0 (*(undefined4 *)0x005876d0)
#define FUN_004a5170 ((int (__thiscall *)(void *, int, int))0x004a5170)
#define FUN_004a51c0 ((int (__thiscall *)(void *, int, int))0x004a51c0)
#define FUN_004a5240 ((int (__thiscall *)(void *, int, int))0x004a5240)
#define FUN_004a9d10 ((undefined4 (__thiscall *)(void *, int))0x004a9d10)
#define FUN_005047d0 ((undefined4 (__stdcall *)(undefined4))0x005047d0)
#define FUN_00508f10 ((undefined4 (__thiscall *)(void *, int))0x00508f10)
#define FUN_00509280 ((int * (__thiscall *)(void *, int, int))0x00509280)
#define FUN_00509420 ((undefined4 (__thiscall *)(void *, undefined4))0x00509420)
#define FUN_00509570 ((undefined4 (__thiscall *)(void *, int *))0x00509570)
#define FUN_005179f0 ((undefined4 (__thiscall *)(void *, int, int))0x005179f0)

#define LOM_SELF_004a5cb0 1
undefined4 __thiscall rb_004a5cb0(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_20[8];
#define local_20 (*(_t_local_20 *)(_fr + 0x0))
  
  iVar1 = param_2;
  if (*(int *)((int)this + 0x54) == 0) {
    return 0;
  }
  iVar2 = FUN_004a5170(this,param_1,param_2);
  iVar3 = FUN_00508f10((void *)((int)this + 0xd8),
                       (int)*(short *)(*(int *)((int)this + 0x54) + iVar2 * 8));
  bVar6 = iVar3 != param_3;
  param_2 = -1;
  iVar3 = 0;
  do {
    if ((*(int *)((int)this + 0x14) == 0) &&
       ((((iVar5 = *(int *)((int)&DAT_0055c9e0 + iVar3) + param_1, iVar5 < 1 ||
          (*(int *)((int)this + 0x5c) + -1 <= iVar5)) ||
         (iVar5 = *(int *)((int)&DAT_0055ca00 + iVar3) + iVar1, iVar5 < 1)) ||
        (*(int *)((int)this + 0x60) + -1 <= iVar5)))) {
      if (param_2 < 0) {
        piVar4 = (int *)FUN_00509420((void *)((int)this + 0xd8),param_3);
        param_2 = FUN_00509570((void *)((int)this + 0xd8),piVar4);
      }
      iVar5 = param_2;
    }
    else {
      iVar5 = FUN_004a5240(this,*(int *)((int)&DAT_0055c9e0 + iVar3) + param_1,
                           *(int *)((int)&DAT_0055ca00 + iVar3) + iVar1);
    }
    *(int *)((int)local_20 + iVar3) = iVar5;
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x20);
  piVar4 = FUN_00509280((void *)((int)this + 0xd8),param_3,(int)local_20);
  if ((piVar4 == (int *)0x0) || (*piVar4 < 1)) {
    piVar4 = (int *)FUN_00509420((void *)((int)this + 0xd8),param_3);
  }
  if ((piVar4 != (int *)0x0) &&
     (*(int *)(piVar4[2] + *(short *)(*(int *)((int)this + 0x54) + iVar2 * 8) * 4) != 0)) {
    return 1;
  }
  iVar3 = FUN_00509570((void *)((int)this + 0xd8),piVar4);
  if (iVar3 != *(short *)(*(int *)((int)this + 0x54) + iVar2 * 8)) {
    *(short *)(*(int *)((int)this + 0x54) + iVar2 * 8) = (short)iVar3;
    FUN_005179f0(&DAT_005876d0,param_1,iVar1);
    FUN_004a9d10(this,iVar2);
    param_3 = -1;
    do {
      iVar2 = -1;
      do {
        iVar3 = FUN_004a51c0(this,param_1 + param_3,iVar2 + iVar1);
        FUN_005047d0(iVar3);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 2);
      param_3 = param_3 + 1;
    } while (param_3 < 2);
  }
  if (bVar6) {
    iVar2 = 0;
    do {
      iVar3 = FUN_004a5240(this,param_1 + *(int *)((int)&DAT_0055c9e0 + iVar2),
                           iVar1 + *(int *)((int)&DAT_0055ca00 + iVar2));
      iVar3 = FUN_00508f10((void *)((int)this + 0xd8),iVar3);
      rb_004a5cb0(this,param_1 + *(int *)((int)&DAT_0055c9e0 + iVar2),
                   iVar1 + *(int *)((int)&DAT_0055ca00 + iVar2),iVar3);
      iVar2 = iVar2 + 4;
    } while (iVar2 < 0x20);
  }
  return 1;
#undef local_20
}
