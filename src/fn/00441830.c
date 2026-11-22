/* Rebuilt from lomse.exe FUN_00441830 @ 0x00441830 (156 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define FUN_00441350 ((undefined4 (__thiscall *)(void *, uint, undefined4, uint *, int))0x00441350)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_00441830 1
void __thiscall rb_00441830(void *this,void *param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_14[5];
#define local_14 (*(_t_local_14 *)(_fr + 0x4))
  
  iVar1 = DAT_005cd2f0;
  uVar4 = 0;
  if (0 < DAT_005cd2f0) {
    do {
      iVar2 = FUN_00441350(this,uVar4,0,local_14,1);
      if (iVar2 != 0) {
        if (*(int *)((int)param_1 + 0x54) == 0) {
          *(undefined4 *)((int)param_1 + 0x90) = 3;
          FUN_004d4550(param_1);
          *(undefined4 *)((int)param_1 + 0x90) = 0;
          *(undefined4 *)((int)param_1 + 0xa4) = 0;
        }
        else {
          iVar2 = *(int *)((int)param_1 + 0x50);
          iVar3 = *(int *)((int)param_1 + 0x54) + -1;
          *(int *)((int)param_1 + 0x54) = iVar3;
          *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
          *(uint *)(iVar2 + 4 + iVar3 * 8) = uVar4;
        }
        FUN_004d05e0(param_1,param_2,param_3);
        iVar2 = *(int *)((int)param_1 + 0x6c);
        *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)((int)param_1 + 0x70);
        if (iVar2 != 0) {
          return;
        }
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < iVar1);
  }
  return;
#undef local_14
}
