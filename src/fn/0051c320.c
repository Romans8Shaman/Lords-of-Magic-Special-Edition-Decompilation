/* Rebuilt from lomse.exe FUN_0051c320 @ 0x0051c320 (273 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_0051c6b0 ((undefined4 (__fastcall *)(int))0x0051c6b0)
#define FUN_0051d200 ((undefined4 (__thiscall *)(void *, uint *, undefined4))0x0051d200)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_0051c320 1
void __fastcall rb_0051c320(void *param_1)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  float fVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 uVar7;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_10;
  typedef int * _t_local_c;
  typedef float _t_local_4;
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
#define local_c (*(_t_local_c *)(_fr + 0x4))
#define local_4 (*(_t_local_4 *)(_fr + 0xc))
  
  if (-1 < *(int *)((int)param_1 + 0xb8)) {
    if (*(int *)((int)param_1 + 0xbc) == 0) {
      FUN_0051d200(param_1,&local_10,5);
      FUN_004d09a0(DAT_005a7b78,local_10,local_c,1);
      pvVar2 = DAT_005a7b78;
      if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
        piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
        iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
        uVar5 = *(uint *)(*piVar1 + -8 + iVar3 * 8);
        local_4 = *(float *)(*piVar1 + -4 + iVar3 * 8);
      }
      else {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
        FUN_004d4550(pvVar2);
        *(undefined4 *)((int)pvVar2 + 0x90) = 0;
        *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
        uVar5 = 0;
      }
      uVar5 = uVar5 & 0xff;
      fVar4 = local_4;
      if (uVar5 != 1) {
        if (uVar5 == 2) {
          fVar4 = __BC(float, (__BC(int, local_4) >> 8));
        }
        else if (uVar5 == 4) {
          lVar6 = __ftol((float10)local_4);
          fVar4 = __BC(float, lVar6);
        }
        else {
          *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
          FUN_004d4550(pvVar2);
          *(undefined4 *)((int)pvVar2 + 0x90) = 0;
          *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
          fVar4 = 0.0;
        }
      }
      if (fVar4 == 0.0) goto LAB_0051c423;
      *(undefined4 *)((int)param_1 + 0xbc) = 1;
      uVar7 = 6;
    }
    else {
      uVar7 = 7;
    }
    FUN_0051d200(param_1,&local_10,uVar7);
    FUN_004d09a0(DAT_005a7b78,local_10,local_c,0);
  }
LAB_0051c423:
  FUN_0051c6b0((int)param_1);
  return;
#undef local_10
#undef local_c
#undef local_4
}
