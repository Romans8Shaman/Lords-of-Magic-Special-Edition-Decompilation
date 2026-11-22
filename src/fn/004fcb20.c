/* Rebuilt from lomse.exe op_enumallseenplayerarmies @ 0x004fcb20 (380 bytes, __cdecl).
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

#define LOM_SELF_004fcb20 1
void __cdecl rb_004fcb20(void *vm)

{
  undefined4 uVar1;
  undefined4 *this;
  void *this_00;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_14;
  typedef int _t_iStack_10;
  typedef int _t_iStack_c;
  typedef uint _t_uStack_8;
  typedef int * _t_piStack_4;
#define iStack_14 (*(_t_iStack_14 *)(_fr + 0x4))
#define iStack_10 (*(_t_iStack_10 *)(_fr + 0x8))
#define iStack_c (*(_t_iStack_c *)(_fr + 0xc))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x10))
#define piStack_4 (*(_t_piStack_4 *)(_fr + 0x14))
  
  this_00 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    piStack_4 = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar2 = FUN_0041da00((int)this_00);
  if (iVar2 == 0) {
    if (((char)uStack_8 == '\x06') && ((uStack_8 & 0x100) == 0)) goto LAB_004fcba0;
    *(undefined4 *)((int)this_00 + 0x90) = 0x12;
    FUN_004d4550(this_00);
    *(undefined4 *)((int)this_00 + 0x90) = 0;
    *(undefined4 *)((int)this_00 + 0xa4) = 0;
  }
  uStack_8 = 0;
LAB_004fcba0:
  iVar2 = FUN_004bdce0(this_00,&iStack_14);
  if ((iVar2 != 0) && (iVar2 = FUN_004bdce0(this_00,&vm), iVar2 != 0)) {
    iStack_10 = *(int *)((int)vm + 0x15a8);
    iStack_c = *(int *)(iStack_14 + 0x15a8);
    puVar3 = FUN_004fbed0(&DAT_005ae974,0);
    do {
      do {
        this = puVar3;
        if (this == (undefined4 *)0x0) {
          return;
        }
        puVar3 = FUN_004fbed0(&DAT_005ae974,(int)this);
        iVar2 = FUN_005071c0(this,iStack_10);
      } while (((iVar2 == 0) || (this[0x12] != iStack_c)) ||
              (iVar2 = FUN_004c1cf0((int)this), iVar2 != 0));
      uVar1 = this[10];
      if (*(int *)((int)this_00 + 0x54) == 0) {
        *(undefined4 *)((int)this_00 + 0x90) = 3;
        FUN_004d4550(this_00);
        *(undefined4 *)((int)this_00 + 0x90) = 0;
        *(undefined4 *)((int)this_00 + 0xa4) = 0;
      }
      else {
        iVar2 = *(int *)((int)this_00 + 0x50);
        iVar4 = *(int *)((int)this_00 + 0x54) + -1;
        *(int *)((int)this_00 + 0x54) = iVar4;
        *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
        *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = uVar1;
      }
      FUN_004d05e0(this_00,uStack_8,piStack_4);
      iVar2 = *(int *)((int)this_00 + 0x6c);
      *(undefined4 *)((int)this_00 + 0x6c) = *(undefined4 *)((int)this_00 + 0x70);
    } while (iVar2 == 0);
  }
  return;
#undef iStack_14
#undef iStack_10
#undef iStack_c
#undef uStack_8
#undef piStack_4
}
