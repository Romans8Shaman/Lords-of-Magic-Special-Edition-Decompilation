/* Rebuilt from lomse.exe FUN_004f6790 @ 0x004f6790 (132 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004a6600 ((undefined4 (__thiscall *)(void *, float *, int, int))0x004a6600)
#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)
#define FUN_004f6760 ((undefined4 (__thiscall *)(void *, undefined4 *))0x004f6760)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_004f6790 1
void __fastcall rb_004f6790(void *param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  float *pfVar5;
  uchar _fr[0x40] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_34;
  typedef int _t_local_30;
  typedef float _t_local_2c[3];
  typedef float _t_local_20;
  typedef float _t_local_1c;
  typedef undefined4 _t_local_18;
#define local_34 (*(_t_local_34 *)(_fr + 0x4))
#define local_30 (*(_t_local_30 *)(_fr + 0x8))
#define local_2c (*(_t_local_2c *)(_fr + 0xc))
#define local_20 (*(_t_local_20 *)(_fr + 0x18))
#define local_1c (*(_t_local_1c *)(_fr + 0x1c))
#define local_18 (*(_t_local_18 *)(_fr + 0x20))
  
  if (*(int *)((int)param_1 + 0x2c) != 0) {
    iVar3 = *(int *)((int)param_1 + 0x1c);
    puVar1 = FUN_004c6fc0();
    iVar3 = iVar3 % *(int *)(puVar1 + 0x6c);
    iVar2 = *(int *)((int)param_1 + 0x1c);
    puVar1 = FUN_004c6fc0();
    iVar2 = iVar2 / *(int *)(puVar1 + 0x6c);
    FUN_004f6760(param_1,&local_34);
    pfVar5 = local_2c;
    puVar1 = FUN_004c6fc0();
    FUN_004a6600(puVar1,pfVar5,iVar3,iVar2);
    lVar4 = __ftol((float10)local_34 + (float10)local_20);
    *(int *)((int)param_1 + 0xc) = (int)lVar4;
    lVar4 = __ftol((float10)local_30 + (float10)local_1c);
    *(int *)((int)param_1 + 0x10) = (int)lVar4;
    *(undefined4 *)((int)param_1 + 8) = local_18;
  }
  return;
#undef local_34
#undef local_30
#undef local_2c
#undef local_20
#undef local_1c
#undef local_18
}
