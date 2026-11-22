/* Rebuilt from lomse.exe op_getarmybrainname @ 0x00410930 (153 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004102e0 ((int (__thiscall *)(void *, int *))0x004102e0)
#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define s_no_such_brain_005557b8 (*(char (*)[])0x005557b8)

#define LOM_SELF_00410930 1
void __cdecl rb_00410930(void *vm)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *this;
  int iVar3;
  int iVar4;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_4;
#define iStack_4 (*(_t_iStack_4 *)(_fr + 0x4))
  
  this = vm;
  iVar3 = FUN_0041be40(vm,&vm);
  if (iVar3 != 0) {
    iVar3 = FUN_004102e0(vm,&iStack_4);
    if (iVar3 == 0) {
      FUN_004d41c0(this,s_no_such_brain_005557b8);
      if (*(int *)((int)this + 0x54) != 0) {
        iVar4 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar4;
        iVar3 = *(int *)((int)this + 0x50);
        *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
        *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 0;
        return;
      }
    }
    else {
      uVar1 = *(undefined4 *)(iVar3 + 0x14);
      uVar2 = *(undefined4 *)(iVar3 + 0x18);
      if (*(int *)((int)this + 0x54) != 0) {
        iVar4 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar4;
        iVar3 = *(int *)((int)this + 0x50);
        *(undefined4 *)(iVar3 + iVar4 * 8) = uVar1;
        *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = uVar2;
        return;
      }
    }
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  return;
#undef iStack_4
}
