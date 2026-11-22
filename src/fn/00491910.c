/* Rebuilt from lomse.exe FUN_00491910 @ 0x00491910 (375 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004304e0 ((undefined4 (__fastcall *)(int *))0x004304e0)
#define FUN_004304f0 ((undefined4 (__fastcall *)(int *))0x004304f0)
#define FUN_0046ba90 ((undefined4 (__fastcall *)(int *))0x0046ba90)
#define FUN_0046bab0 ((undefined4 (__fastcall *)(int *))0x0046bab0)
#define FUN_00493960 ((undefined4 (__thiscall *)(void *, int *, int, int))0x00493960)
#define FUN_00493f50 ((undefined4 (__thiscall *)(void *, undefined4, undefined4, undefined4))0x00493f50)
#define FUN_0049cc10 ((undefined4 (__thiscall *)(void *, int *, int, int))0x0049cc10)
#define FUN_004ea300 ((undefined4 (__fastcall *)(int *))0x004ea300)
#define FUN_004ea320 ((undefined4 (__fastcall *)(int *))0x004ea320)
#define FUN_004ec440 ((undefined4 (__fastcall *)(int))0x004ec440)
#define FUN_004ec450 ((undefined4 (__fastcall *)(int))0x004ec450)

#define LOM_SELF_00491910 1
undefined4 __thiscall rb_00491910(void *this,int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_10[4];
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
  
  iVar2 = 0;
  *param_1 = param_2;
  param_1[1] = param_3;
  iVar5 = 0;
  switch(*(undefined4 *)this) {
  case 1:
    iVar5 = *(int *)(*(int *)((int)this + 4) + 4);
    iVar2 = *(int *)(*(int *)((int)this + 4) + 8);
    break;
  case 2:
    piVar3 = *(int **)((int)this + 4);
    goto LAB_0049199b;
  case 3:
    piVar3 = (int *)**(int **)((int)this + 4);
    if (piVar3 == (int *)0x0) break;
LAB_0049199b:
    iVar1 = *piVar3;
    if (iVar1 != 0) {
      iVar5 = *(int *)(iVar1 + 0xc);
      iVar2 = *(int *)(iVar1 + 0x10);
    }
    break;
  case 4:
    iVar5 = *(int *)(*(int *)((int)this + 4) + 0xc);
    iVar2 = *(int *)(*(int *)((int)this + 4) + 0x10);
    break;
  case 5:
    return 0;
  case 6:
    iVar5 = *(int *)(*(int *)((int)this + 4) + 8);
    iVar2 = *(int *)(*(int *)((int)this + 4) + 0xc);
    break;
  case 7:
    iVar5 = **(int **)((int)this + 4);
    iVar2 = (*(int **)((int)this + 4))[1];
    break;
  case 8:
    iVar2 = **(int **)((int)this + 4);
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iVar2 + 0xc);
    }
    iVar2 = **(int **)((int)this + 4);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x10);
    }
    break;
  case 9:
    iVar5 = FUN_004ec440(*(int *)((int)this + 4));
    iVar2 = FUN_004ec450(*(int *)((int)this + 4));
    break;
  case 10:
    iVar5 = FUN_004304e0(*(int **)((int)this + 4));
    iVar2 = FUN_004304f0(*(int **)((int)this + 4));
    break;
  case 0xb:
    iVar5 = FUN_0046ba90(*(int **)((int)this + 4));
    iVar2 = FUN_0046bab0(*(int **)((int)this + 4));
    break;
  case 0xc:
    iVar5 = FUN_004ea300(*(int **)((int)this + 4));
    iVar2 = FUN_004ea320(*(int **)((int)this + 4));
    break;
  case 0xe:
    piVar3 = (int *)FUN_0049cc10(*(void **)((int)this + 4),local_10,param_2,param_3);
    *param_1 = *piVar3;
    param_1[1] = piVar3[1];
    param_1[2] = piVar3[2];
    param_1[3] = piVar3[3];
    return 1;
  case 0xf:
    uVar4 = FUN_00493960(*(void **)((int)this + 4),param_1,param_2,param_3);
    return uVar4;
  case 0x10:
    uVar4 = FUN_00493f50(*(void **)((int)this + 4),param_1,param_2,param_3);
    return uVar4;
  }
  param_1[2] = iVar5 + param_2;
  param_1[3] = iVar2 + param_3;
  return 1;
#undef local_10
}
