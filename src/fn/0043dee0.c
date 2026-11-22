/* Rebuilt from lomse.exe op_setcitychildoffsets @ 0x0043dee0 (278 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005564e0 (*(undefined4 *)0x005564e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_0043dee0 1
void __cdecl rb_0043dee0(void *param_1)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float *pfVar4;
  longlong lVar5;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  pfVar4 = (float *)&DAT_005564e0;
  do {
    if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
      iVar1 = *(int *)((int)param_1 + 0x54) + 1;
      *(int *)((int)param_1 + 0x54) = iVar1;
      uVar2 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
      fVar3 = *(float *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
    }
    else {
      *(undefined4 *)((int)param_1 + 0x90) = 6;
      FUN_004d4550(param_1);
      *(undefined4 *)((int)param_1 + 0x90) = 0;
      *(undefined4 *)((int)param_1 + 0xa4) = 0;
      uVar2 = 0;
      fVar3 = local_4;
    }
    uVar2 = uVar2 & 0xff;
    if (uVar2 == 1) {
LAB_0043df5c:
      pfVar4[1] = fVar3;
    }
    else {
      if (uVar2 == 2) {
        fVar3 = __BC(float, (__BC(int, fVar3) >> 8));
        goto LAB_0043df5c;
      }
      if (uVar2 != 4) goto LAB_0043dfd1;
      lVar5 = __ftol((float10)fVar3);
      pfVar4[1] = __BC(float, lVar5);
    }
    if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
      iVar1 = *(int *)((int)param_1 + 0x54) + 1;
      *(int *)((int)param_1 + 0x54) = iVar1;
      uVar2 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
      local_4 = *(float *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
    }
    else {
      *(undefined4 *)((int)param_1 + 0x90) = 6;
      FUN_004d4550(param_1);
      *(undefined4 *)((int)param_1 + 0x90) = 0;
      *(undefined4 *)((int)param_1 + 0xa4) = 0;
      uVar2 = 0;
    }
    uVar2 = uVar2 & 0xff;
    fVar3 = local_4;
    if (uVar2 == 1) {
LAB_0043dfbf:
      *pfVar4 = fVar3;
    }
    else {
      if (uVar2 == 2) {
        fVar3 = __BC(float, (__BC(int, local_4) >> 8));
        goto LAB_0043dfbf;
      }
      if (uVar2 != 4) {
LAB_0043dfd1:
        *(undefined4 *)((int)param_1 + 0x90) = 0xe;
        FUN_004d4550(param_1);
        *(undefined4 *)((int)param_1 + 0x90) = 0;
        *(undefined4 *)((int)param_1 + 0xa4) = 0;
        return;
      }
      lVar5 = __ftol((float10)local_4);
      *pfVar4 = __BC(float, lVar5);
    }
    pfVar4 = pfVar4 + -2;
    if ((int)pfVar4 < 0x5564d0) {
      return;
    }
  } while( true );
#undef local_4
}
