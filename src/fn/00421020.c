/* Rebuilt from lomse.exe FUN_00421020 @ 0x00421020 (346 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00420580 ((undefined4 (__fastcall *)(int))0x00420580)
#define FUN_004209c0 ((undefined4 (__fastcall *)(int))0x004209c0)
#define FUN_004a6600 ((undefined4 (__thiscall *)(void *, float *, int, int))0x004a6600)
#define FUN_004a6700 ((undefined4 (__thiscall *)(void *, float *, int, int, int))0x004a6700)
#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_00421020 1
int __thiscall rb_00421020(void *this,int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  float *pfVar8;
  void *pvVar9;
  uchar _fr[0x60] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_local_58;
  typedef float _t_local_54;
  typedef float _t_local_50;
  typedef float _t_local_2c;
  typedef float _t_local_28;
  typedef float _t_local_24;
#define local_58 (*(_t_local_58 *)(_fr + 0x0))
#define local_54 (*(_t_local_54 *)(_fr + 0x4))
#define local_50 (*(_t_local_50 *)(_fr + 0x8))
#define local_2c (*(_t_local_2c *)(_fr + 0x2c))
#define local_28 (*(_t_local_28 *)(_fr + 0x30))
#define local_24 (*(_t_local_24 *)(_fr + 0x34))
  
  if (param_1 == param_2) {
    return 1;
  }
  puVar1 = FUN_004c6fc0();
  iVar5 = param_1 % *(int *)(puVar1 + 0x6c);
  puVar1 = FUN_004c6fc0();
  iVar2 = param_1 / *(int *)(puVar1 + 0x6c);
  puVar1 = FUN_004c6fc0();
  iVar6 = param_2 % *(int *)(puVar1 + 0x6c);
  puVar1 = FUN_004c6fc0();
  iVar3 = param_2 / *(int *)(puVar1 + 0x6c);
  iVar4 = FUN_00420580((int)this);
  if (iVar4 == 0) {
    pfVar8 = &local_58;
    puVar1 = FUN_004c6fc0();
    FUN_004a6600(puVar1,pfVar8,iVar5,iVar2);
    pfVar8 = &local_2c;
    puVar1 = FUN_004c6fc0();
    FUN_004a6600(puVar1,pfVar8,iVar6,iVar3);
  }
  else {
    pfVar8 = &local_58;
    pvVar9 = this;
    puVar1 = FUN_004c6fc0();
    FUN_004a6700(puVar1,pfVar8,iVar5,iVar2,(int)pvVar9);
    pfVar8 = &local_2c;
    pvVar9 = this;
    puVar1 = FUN_004c6fc0();
    FUN_004a6700(puVar1,pfVar8,iVar6,iVar3,(int)pvVar9);
  }
  iVar2 = FUN_004209c0((int)this);
  lVar7 = __ftol(SQRT((float10)(local_50 - local_24) * (float10)(local_50 - local_24) +
                      (float10)(local_54 - local_28) * (float10)(local_54 - local_28) +
                      (float10)(local_58 - local_2c) * (float10)(local_58 - local_2c)) *
                 (float10)iVar2);
  iVar2 = (int)lVar7;
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  return iVar2;
#undef local_58
#undef local_54
#undef local_50
#undef local_2c
#undef local_28
#undef local_24
}
