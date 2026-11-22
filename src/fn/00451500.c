/* Rebuilt from lomse.exe FUN_00451500 @ 0x00451500 (201 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005876d0 (*(undefined4 *)0x005876d0)
#define FUN_00469ae0 ((undefined4 (__thiscall *)(void *, float *))0x00469ae0)
#define FUN_004a5210 ((float10 (__thiscall *)(void *, int, int))0x004a5210)
#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_00451500 1
void __thiscall rb_00451500(void *this)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  longlong lVar5;
  uchar _fr[0x38] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_2c;
  typedef float _t_fStack_28;
  typedef float _t_fStack_24;
  typedef float _t_fStack_20;
  typedef float _t_fStack_1c;
  typedef undefined4 _t_uStack_18;
#define fStack_2c (*(_t_fStack_2c *)(_fr + 0x4))
#define fStack_28 (*(_t_fStack_28 *)(_fr + 0x8))
#define fStack_24 (*(_t_fStack_24 *)(_fr + 0xc))
#define fStack_20 (*(_t_fStack_20 *)(_fr + 0x10))
#define fStack_1c (*(_t_fStack_1c *)(_fr + 0x14))
#define uStack_18 (*(_t_uStack_18 *)(_fr + 0x18))
  
  if (*(int *)((int)this + 0x2c) != 0) {
    puVar1 = FUN_004c6fc0();
    if (puVar1 != (undefined *)0x0) {
      iVar3 = *(int *)((int)this + 0x1c);
      puVar1 = FUN_004c6fc0();
      iVar3 = iVar3 % *(int *)(puVar1 + 0x6c);
      iVar2 = *(int *)((int)this + 0x1c);
      puVar1 = FUN_004c6fc0();
      iVar2 = iVar2 / *(int *)(puVar1 + 0x6c);
      puVar1 = FUN_004c6fc0();
      fStack_2c = (float)(iVar3 - (*(int *)(puVar1 + 0x5c) >> 1));
      puVar1 = FUN_004c6fc0();
      fStack_28 = (float)(iVar2 - (*(int *)(puVar1 + 0x60) >> 1));
      puVar1 = FUN_004c6fc0();
      fVar4 = FUN_004a5210(puVar1,iVar3,iVar2);
      fStack_24 = (float)fVar4;
      FUN_00469ae0(&DAT_005876d0,&fStack_2c);
      lVar5 = __ftol((float10)fStack_20);
      *(int *)((int)this + 0xc) = (int)lVar5;
      lVar5 = __ftol((float10)fStack_1c);
      *(int *)((int)this + 0x10) = (int)lVar5;
      *(undefined4 *)((int)this + 8) = uStack_18;
    }
  }
  return;
#undef fStack_2c
#undef fStack_28
#undef fStack_24
#undef fStack_20
#undef fStack_1c
#undef uStack_18
}
