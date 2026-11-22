/* Rebuilt from lomse.exe op_eventalarm @ 0x0040cd70 (499 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aeea0 (*(undefined *)0x005aeea0)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, float *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040c580 ((undefined4 (__fastcall *)(int))0x0040c580)
#define FUN_0040c5a0 ((undefined4 (__stdcall *)(void))0x0040c5a0)
#define FUN_0040c820 ((uint (__thiscall *)(void *, undefined4 *, uint, uint, int, int))0x0040c820)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_invalid_arg_00555738 (*(char (*)[])0x00555738)
#define s_too_many_args_00555744 (*(char (*)[])0x00555744)

#define LOM_SELF_0040cd70 1
void __cdecl rb_0040cd70(void *volatile param_1)

{
  float *pfVar1;
  void *this;
  int iVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  longlong lVar6;
  uchar _fr[0x60] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_58;
  typedef uint _t_local_54;
  typedef uint _t_local_50;
  typedef float _t_local_4c;
  typedef uint _t_local_48;
  typedef float _t_local_44;
  typedef float _t_afStack_40[10];
  typedef int _t_local_18;
#define local_58 (*(_t_local_58 *)(_fr + 0x0))
#define local_54 (*(_t_local_54 *)(_fr + 0x4))
#define local_50 (*(_t_local_50 *)(_fr + 0x8))
#define local_4c (*(_t_local_4c *)(_fr + 0xc))
#define local_48 (*(_t_local_48 *)(_fr + 0x10))
#define local_44 (*(_t_local_44 *)(_fr + 0x14))
#define afStack_40 (*(_t_afStack_40 *)(_fr + 0x18))
#define local_18 (*(_t_local_18 *)(_fr + 0x40))

  FUN_0040c580((int)&local_48);
  this = param_1;
  local_18 = 0;
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar2 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar2;
    local_50 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar2 * 8);
    local_4c = *(float *)(*(int *)((int)param_1 + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(param_1,6);
    local_50 = 0;
  }
  iVar2 = FUN_004026a0(&local_50,&local_58,&local_54,(float *)&param_1);
  if (iVar2 == 0) {
    FUN_00404ab0(this,0xe);
  }
  else {
    do {
      if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
        iVar2 = *(int *)((int)this + 0x54) + 1;
        *(int *)((int)this + 0x54) = iVar2;
        uVar3 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
        fVar5 = *(float *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
      }
      else {
        *(undefined4 *)((int)this + 0x90) = 6;
        FUN_004d4550(this);
        *(undefined4 *)((int)this + 0x90) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
        uVar3 = 0;
        fVar5 = local_4c;
      }
      param_1 = (void *)(uVar3 & 0xff);
      local_4c = fVar5;
      if (param_1 == (void *)0x0) goto LAB_0040cf3f;
      if ((param_1 != (void *)0x5) || ((uVar3 & 0x100) != 0)) {
        if (9 < local_18) {
          FUN_004d41c0(this,s_too_many_args_00555744);
          goto LAB_0040cf3f;
        }
        pfVar1 = afStack_40 + local_18;
        if (param_1 == (void *)0x1) {
          *pfVar1 = fVar5;
        }
        else if (param_1 == (void *)0x2) {
          *pfVar1 = __BC(float, (__BC(int, fVar5) >> 8));
        }
        else {
          if (param_1 != (void *)0x4) {
            FUN_004d41c0(this,s_invalid_arg_00555738);
            goto LAB_0040cf3f;
          }
          lVar6 = __ftol((float10)fVar5);
          *pfVar1 = __BC(float, lVar6);
        }
        local_18 = local_18 + 1;
      }
    } while ((param_1 != (void *)0x5) || ((uVar3 & 0x100) != 0));
    local_48 = uVar3;
    local_44 = fVar5;
    uVar3 = FUN_0040c820(&DAT_005aeea0,&local_48,local_58,0xffffffff,0,0);
    if (*(int *)((int)this + 0x54) == 0) {
      *(undefined4 *)((int)this + 0x90) = 3;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
    }
    else {
      iVar4 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar4;
      iVar2 = *(int *)((int)this + 0x50);
      *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
      *(uint *)(iVar2 + 4 + iVar4 * 8) = uVar3;
    }
  }
LAB_0040cf3f:
  FUN_0040c5a0();
  return;
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef afStack_40
#undef local_18
}
