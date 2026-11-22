/* Rebuilt from lomse.exe op_setregionraces @ 0x004c7c50 (401 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aef04 (*(undefined4 *)0x005aef04)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, float *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004c52e0 ((undefined4 (__thiscall *)(void *, byte, int))0x004c52e0)
#define FUN_004c5ec0 ((int (__thiscall *)(void *, int))0x004c5ec0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_004c7c50 1
void __cdecl rb_004c7c50(void *vm)

{
  int iVar1;
  void *this;
  float fVar2;
  byte bVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  float fVar7;
  longlong lVar8;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_1c;
  typedef void * _t_pvStack_18;
  typedef float _t_fStack_14;
  typedef uint _t_uStack_10;
  typedef float _t_fStack_c;
  typedef uint _t_uStack_8;
  typedef float _t_fStack_4;
#define uStack_1c (*(_t_uStack_1c *)(_fr + 0x4))
#define pvStack_18 (*(_t_pvStack_18 *)(_fr + 0x8))
#define fStack_14 (*(_t_fStack_14 *)(_fr + 0xc))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x10))
#define fStack_c (*(_t_fStack_c *)(_fr + 0x14))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x18))
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0x1c))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar4 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar4;
    uStack_10 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar4 * 8);
    fStack_c = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar4 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_10 = 0;
    fStack_c = fStack_4;
  }
  iVar4 = FUN_004026a0(&uStack_10,&uStack_1c,(uint *)&fStack_14,(float *)&pvStack_18);
  if (iVar4 != 0) {
    pvVar5 = (void *)FUN_004c5ec0(&DAT_005aef04,uStack_1c);
    pvStack_18 = pvVar5;
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar4 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar4;
      uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar4 * 8);
      fStack_4 = *(float *)(*(int *)((int)this + 0x50) + -4 + iVar4 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uStack_8 = 0;
    }
    iVar4 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_10,&fStack_14);
    fVar2 = fStack_4;
    if (iVar4 != 0) {
      *(undefined1 *)((int)pvVar5 + 8) = 0;
      iVar4 = 0;
      if ((int)vm < 1) {
        return;
      }
      do {
        if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
          iVar1 = *(int *)((int)this + 0x54) + 1;
          *(int *)((int)this + 0x54) = iVar1;
          uVar6 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
          fStack_4 = *(float *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
        }
        else {
          *(undefined4 *)((int)this + 0x90) = 6;
          FUN_004d4550(this);
          *(undefined4 *)((int)this + 0x90) = 0;
          *(undefined4 *)((int)this + 0xa4) = 0;
          uVar6 = 0;
          fStack_4 = fVar2;
        }
        uVar6 = uVar6 & 0xff;
        fVar7 = fStack_4;
        if (uVar6 == 1) {
LAB_004c7da3:
          bVar3 = SUB41(fVar7,0);
        }
        else {
          if (uVar6 == 2) {
            fVar7 = __BC(float, (__BC(int, fStack_4) >> 8));
            goto LAB_004c7da3;
          }
          if (uVar6 != 4) break;
          lVar8 = __ftol((float10)fStack_4);
          bVar3 = (byte)lVar8;
        }
        FUN_004c52e0(pvStack_18,bVar3,1);
        iVar4 = iVar4 + 1;
        if ((int)vm <= iVar4) {
          return;
        }
      } while( true );
    }
  }
  *(undefined4 *)((int)this + 0x90) = 0xe;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
#undef uStack_1c
#undef pvStack_18
#undef fStack_14
#undef uStack_10
#undef fStack_c
#undef uStack_8
#undef fStack_4
}
