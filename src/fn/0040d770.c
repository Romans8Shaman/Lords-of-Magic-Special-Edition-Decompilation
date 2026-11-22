/* Rebuilt from lomse.exe FUN_0040d770 @ 0x0040d770 (373 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00578138 (*(int *)0x00578138)
#define FUN_0040d310 ((undefined4 (__thiscall *)(void *, void *))0x0040d310)
#define FUN_0040d760 ((undefined4 (__thiscall *)(void *, int))0x0040d760)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_0040d770 1
void __thiscall rb_0040d770(void *this,void *param_1,undefined4 param_2)

{
  int iVar1;
  uint *puVar2;
  uint *this_00;
  void *this_01;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint * _t_local_c;
  typedef void * _t_local_4;
#define local_c (*(_t_local_c *)(_fr + 0x4))
#define local_4 (*(_t_local_4 *)(_fr + 0xc))
  
  this_01 = param_1;
  local_c = (uint *)0x0;
  *(undefined4 *)((int)this + 0xc) = 1;
  puVar2 = *(uint **)this;
joined_r0x0040d78a:
  do {
    this_00 = puVar2;
    if (this_00 == (uint *)0x0) {
      *(undefined4 *)((int)this + 0xc) = 0;
      return;
    }
    if (*(int *)((int)this_01 + 0x54) == 0) {
      *(undefined4 *)((int)this_01 + 0x90) = 3;
      FUN_004d4550(this_01);
      *(undefined4 *)((int)this_01 + 0x90) = 0;
      *(undefined4 *)((int)this_01 + 0xa4) = 0;
    }
    else {
      iVar1 = *(int *)((int)this_01 + 0x50);
      iVar3 = *(int *)((int)this_01 + 0x54) + -1;
      *(int *)((int)this_01 + 0x54) = iVar3;
      *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = param_2;
    }
    FUN_004d09a0(this_01,*this_00,(int *)this_00[1],0);
    if (*(int *)((int)this_01 + 0x54) < *(int *)((int)this_01 + 0x58)) {
      iVar1 = *(int *)((int)this_01 + 0x54) + 1;
      *(int *)((int)this_01 + 0x54) = iVar1;
      uVar4 = *(uint *)(*(int *)((int)this_01 + 0x50) + -8 + iVar1 * 8);
      local_4 = *(void **)(*(int *)((int)this_01 + 0x50) + -4 + iVar1 * 8);
    }
    else {
      *(undefined4 *)((int)this_01 + 0x90) = 6;
      FUN_004d4550(this_01);
      *(undefined4 *)((int)this_01 + 0x90) = 0;
      *(undefined4 *)((int)this_01 + 0xa4) = 0;
      uVar4 = 0;
    }
    uVar4 = uVar4 & 0xff;
    if (uVar4 == 1) {
      param_1 = local_4;
    }
    else if (uVar4 == 2) {
      param_1 = (void *)((int)local_4 >> 8);
    }
    else if (uVar4 == 4) {
      lVar5 = __ftol((float10)__BC(float, local_4));
      param_1 = (void *)lVar5;
    }
    else {
      *(undefined4 *)((int)this_01 + 0x90) = 0xe;
      FUN_004d4550(this_01);
      *(undefined4 *)((int)this_01 + 0x90) = 0;
      *(undefined4 *)((int)this_01 + 0xa4) = 0;
    }
    if (param_1 != (void *)0x0) {
      FUN_0040d310(this_00,this_01);
      if ((this_00[2] != 0) &&
         ((uVar4 = this_00[2] - 1, this_00[2] = uVar4, (int)uVar4 < 1 || (DAT_00578138 != 0)))) {
        puVar2 = (uint *)this_00[0x10];
        if (local_c == (uint *)0x0) {
          *(uint **)this = puVar2;
          FUN_0040d760(this,(int)this_00);
        }
        else {
          local_c[0x10] = (uint)puVar2;
          FUN_0040d760(this,(int)this_00);
        }
        goto joined_r0x0040d78a;
      }
    }
    puVar2 = (uint *)this_00[0x10];
    local_c = this_00;
  } while( true );
#undef local_c
#undef local_4
}
