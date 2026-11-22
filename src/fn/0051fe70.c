/* Rebuilt from lomse.exe FUN_0051fe70 @ 0x0051fe70 (181 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005d2ed0 (*(undefined4 *)0x005d2ed0)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_005047d0 ((undefined4 (__stdcall *)(undefined4))0x005047d0)
#define FUN_0051d200 ((undefined4 (__thiscall *)(void *, uint *, undefined4))0x0051d200)
#define s_invalid_TurnAIEvent_type_00573f38 (*(char (*)[])0x00573f38)

#define LOM_SELF_0051fe70 1
void __thiscall rb_0051fe70(void *this,int *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_8;
  typedef int * _t_local_4;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  if ((*param_1 < 0) || (0x15 < *param_1)) {
    FUN_005047d0(s_invalid_TurnAIEvent_type_00573f38);
  }
  piVar5 = &DAT_005d2ed0;
  for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar5 = *param_1;
    param_1 = param_1 + 1;
    piVar5 = piVar5 + 1;
  }
  iVar4 = FUN_0051d200(this,&local_8,0xb);
  pvVar2 = DAT_005a7b78;
  if (iVar4 != 0) {
    uVar1 = *(undefined4 *)((int)this + DAT_005d2ed0 * 4 + 0x10);
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar2);
      *(undefined4 *)((int)pvVar2 + 0x90) = 0;
      *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    }
    else {
      iVar4 = *(int *)((int)DAT_005a7b78 + 0x50);
      iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
      *(undefined4 *)(iVar4 + iVar3 * 8) = 1;
      *(undefined4 *)(iVar4 + 4 + iVar3 * 8) = uVar1;
    }
    FUN_004d09a0(DAT_005a7b78,local_8,local_4,-1);
  }
  return;
#undef local_8
#undef local_4
}
