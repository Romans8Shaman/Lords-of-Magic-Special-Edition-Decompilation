/* Rebuilt from lomse.exe FUN_0051f440 @ 0x0051f440 (172 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005aeea0 (*(undefined *)0x005aeea0)
#define DAT_005d2ed0 (*(undefined4 *)0x005d2ed0)
#define DAT_005d2ed4 (*(undefined4 *)0x005d2ed4)
#define FUN_0040c9c0 ((undefined4 (__thiscall *)(void *, int))0x0040c9c0)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_0051d200 ((undefined4 (__thiscall *)(void *, uint *, undefined4))0x0051d200)

#define LOM_SELF_0051f440 1
void __thiscall rb_0051f440(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_8;
  typedef int * _t_local_4;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  DAT_005d2ed4 = *(undefined4 *)(param_1 + 0x28);
  DAT_005d2ed0 = 0x15;
  iVar1 = *(int *)(param_1 + 0x550);
  iVar4 = FUN_0051d200(this,&local_8,0xb);
  pvVar3 = DAT_005a7b78;
  if (iVar4 != 0) {
    uVar2 = *(undefined4 *)((int)this + 100);
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    }
    else {
      iVar4 = *(int *)((int)DAT_005a7b78 + 0x50);
      iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
      *(undefined4 *)(iVar4 + iVar5 * 8) = 1;
      *(undefined4 *)(iVar4 + 4 + iVar5 * 8) = uVar2;
    }
    FUN_004d09a0(DAT_005a7b78,local_8,local_4,-1);
  }
  FUN_0040c9c0(&DAT_005aeea0,iVar1);
  return;
#undef local_8
#undef local_4
}
