/* Rebuilt from lomse.exe op_enumconetargetlocations @ 0x0040a6a0 (406 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_00409f70 ((int (__thiscall *)(void *, int, int, int, int *, int *))0x00409f70)
#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_0040a6a0 1
void __cdecl rb_0040a6a0(void *vm)

{
  void *this;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uchar _fr[0x50] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_48;
  typedef int _t_iStack_44;
  typedef uint _t_uStack_40;
  typedef int * _t_piStack_3c;
  typedef int _t_aiStack_38[14];
#define iStack_48 (*(_t_iStack_48 *)(_fr + 0x0))
#define iStack_44 (*(_t_iStack_44 *)(_fr + 0x4))
#define uStack_40 (*(_t_uStack_40 *)(_fr + 0x8))
#define piStack_3c (*(_t_piStack_3c *)(_fr + 0xc))
#define aiStack_38 (*(_t_aiStack_38 *)(_fr + 0x10))
  
  this = vm;
  aiStack_38[7] = 1;
  aiStack_38[8] = 0;
  aiStack_38[9] = 2;
  aiStack_38[10] = 3;
  aiStack_38[0xb] = 7;
  aiStack_38[0xc] = 0xd;
  aiStack_38[0xd] = 0x11;
  aiStack_38[0] = 0x17;
  aiStack_38[1] = 0x18;
  aiStack_38[2] = 0x13;
  aiStack_38[3] = 0x14;
  aiStack_38[4] = 8;
  aiStack_38[5] = 0xe;
  aiStack_38[6] = 3;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_40 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    piStack_3c = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uStack_40 = 0;
  }
  iVar1 = FUN_0041be40(this,&vm);
  if (iVar1 != 0) {
    iVar1 = 0;
    do {
      iVar2 = *(int *)((int)vm + 0x44);
      if ((((iVar2 == 0) || (iVar2 == 2)) || (iVar2 == 4)) || (iVar2 == 6)) {
        iVar4 = *(int *)((int)aiStack_38 + iVar1 + 0x1c);
      }
      else {
        iVar4 = *(int *)((int)aiStack_38 + iVar1);
      }
      iVar2 = FUN_00409f70(&DAT_005ae958,*(int *)((int)vm + 0x1c),iVar2,iVar4,&iStack_44,&iStack_48)
      ;
      if (iVar2 != -1) {
        if (*(int *)((int)this + 0x54) == 0) {
          *(undefined4 *)((int)this + 0x90) = 3;
          FUN_004d4550(this);
          *(undefined4 *)((int)this + 0x90) = 0;
          *(undefined4 *)((int)this + 0xa4) = 0;
        }
        else {
          iVar4 = *(int *)((int)this + 0x50);
          iVar3 = *(int *)((int)this + 0x54) + -1;
          *(int *)((int)this + 0x54) = iVar3;
          *(undefined4 *)(iVar4 + iVar3 * 8) = 1;
          *(int *)(iVar4 + 4 + iVar3 * 8) = iVar2;
        }
        FUN_004d05e0(this,uStack_40,piStack_3c);
        iVar2 = *(int *)((int)this + 0x6c);
        *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)((int)this + 0x70);
        if (iVar2 != 0) {
          return;
        }
      }
      iVar1 = iVar1 + 4;
    } while (iVar1 < 0x1c);
  }
  return;
#undef iStack_48
#undef iStack_44
#undef uStack_40
#undef piStack_3c
#undef aiStack_38
}
