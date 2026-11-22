/* Rebuilt from lomse.exe op_enumallseenarmies @ 0x004fc860 (323 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0041da00 ((undefined4 (__fastcall *)(int))0x0041da00)
#define FUN_004bdce0 ((undefined4 (__cdecl *)(void *, undefined4 *))0x004bdce0)
#define FUN_004c1cf0 ((undefined4 (__fastcall *)(int))0x004c1cf0)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004fbed0 ((undefined4 * (__thiscall *)(void *, int))0x004fbed0)
#define FUN_005071c0 ((undefined4 (__thiscall *)(void *, int))0x005071c0)

#define LOM_SELF_004fc860 1
void __cdecl rb_004fc860(void *vm)

{
  undefined4 uVar1;
  undefined4 *this;
  void *this_00;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int * _t_piStack_4;
#define piStack_4 (*(_t_piStack_4 *)(_fr + 0x4))
  
  this_00 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar6 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    piStack_4 = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uVar6 = 0;
  }
  iVar2 = FUN_0041da00((int)this_00);
  if (iVar2 == 0) {
    if (((char)uVar6 != '\x06') || ((uVar6 & 0x100) != 0)) {
      *(undefined4 *)((int)this_00 + 0x90) = 0x12;
      FUN_004d4550(this_00);
      uVar6 = 0;
      *(undefined4 *)((int)this_00 + 0x90) = 0;
      *(undefined4 *)((int)this_00 + 0xa4) = 0;
    }
  }
  else {
    uVar6 = 0;
  }
  iVar2 = FUN_004bdce0(this_00,&vm);
  if (iVar2 != 0) {
    iVar2 = *(int *)((int)vm + 0x15a8);
    puVar3 = FUN_004fbed0(&DAT_005ae974,0);
    do {
      do {
        this = puVar3;
        if (this == (undefined4 *)0x0) {
          return;
        }
        puVar3 = FUN_004fbed0(&DAT_005ae974,(int)this);
        iVar4 = FUN_005071c0(this,iVar2);
      } while ((iVar4 == 0) || (iVar4 = FUN_004c1cf0((int)this), iVar4 != 0));
      uVar1 = this[10];
      if (*(int *)((int)this_00 + 0x54) == 0) {
        *(undefined4 *)((int)this_00 + 0x90) = 3;
        FUN_004d4550(this_00);
        *(undefined4 *)((int)this_00 + 0x90) = 0;
        *(undefined4 *)((int)this_00 + 0xa4) = 0;
      }
      else {
        iVar4 = *(int *)((int)this_00 + 0x50);
        iVar5 = *(int *)((int)this_00 + 0x54) + -1;
        *(int *)((int)this_00 + 0x54) = iVar5;
        *(undefined4 *)(iVar4 + iVar5 * 8) = 1;
        *(undefined4 *)(iVar4 + 4 + iVar5 * 8) = uVar1;
      }
      FUN_004d05e0(this_00,uVar6,piStack_4);
      iVar4 = *(int *)((int)this_00 + 0x6c);
      *(undefined4 *)((int)this_00 + 0x6c) = *(undefined4 *)((int)this_00 + 0x70);
    } while (iVar4 == 0);
  }
  return;
#undef piStack_4
}
