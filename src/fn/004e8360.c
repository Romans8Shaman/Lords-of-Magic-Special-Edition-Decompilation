/* Rebuilt from lomse.exe op_getavecombatunitdata @ 0x004e8360 (616 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005ae98c (*(undefined4 *)0x005ae98c)
#define DAT_005ae998 (*(int *)0x005ae998)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)
#define FUN_00527e90 ((undefined4 (__thiscall *)(void *, int, int *))0x00527e90)
#define FUN_00527fa0 ((undefined4 (__thiscall *)(void *, int, int *))0x00527fa0)

#define LOM_SELF_004e8360 1
void __cdecl rb_004e8360(void *vm)

{
  void *this;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uchar _fr[0x30] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_24;
  typedef uint _t_uStack_20;
  typedef uint _t_uStack_1c;
  typedef int _t_iStack_18;
  typedef int _t_iStack_14;
  typedef undefined4 _t_fStack_10;
  typedef undefined4 _t_fStack_c;
  typedef uint _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define iStack_24 (*(_t_iStack_24 *)(_fr + 0x4))
#define uStack_20 (*(_t_uStack_20 *)(_fr + 0x8))
#define uStack_1c (*(_t_uStack_1c *)(_fr + 0xc))
#define iStack_18 (*(_t_iStack_18 *)(_fr + 0x10))
#define iStack_14 (*(_t_iStack_14 *)(_fr + 0x14))
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x18))
#define fStack_c (*(_t_fStack_c *)(_fr + 0x1c))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x20))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x24))
  
  this = vm;
  iVar4 = 0;
  iStack_24 = 0;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,&uStack_1c,(uint *)&fStack_c,&fStack_10);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,&uStack_20,(uint *)&fStack_10,&fStack_c);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  FUN_0040adb0(this,&uStack_8);
  iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_10,&fStack_c);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  fStack_10 = DAT_005ae98c;
  iVar1 = DAT_005ae998;
  if (DAT_005ae998 <= __BC(int, DAT_005ae98c)) {
    do {
      iVar2 = FUN_004f6000(&DAT_005ae974,iVar1);
      if ((((iVar2 != 0) && (*(int *)(iVar2 + 4) == 0)) && (*(uint *)(iVar2 + 0x48) == uStack_20))
         && ((int)*(char *)(iVar2 + 0x5ac) == uStack_1c)) {
        iVar3 = FUN_00527e90((void *)(iVar2 + 0xc4),(int)vm,&iStack_18);
        if (iVar3 == 0) {
          iVar2 = FUN_00527fa0((void *)(iVar2 + 0xc4),(int)vm,&iStack_14);
          if (iVar2 == 0) goto LAB_004e851c;
          iVar2 = iStack_14 >> 8;
        }
        else {
          iVar2 = iStack_18;
        }
        iVar4 = iVar4 + iVar2;
        iStack_24 = iStack_24 + 1;
      }
LAB_004e851c:
      iVar1 = iVar1 + 1;
    } while (iVar1 <= __BC(int, fStack_10));
  }
  if (iStack_24 != 0) {
    if (*(int *)((int)this + 0x54) == 0) {
      *(undefined4 *)((int)this + 0x90) = 3;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      return;
    }
    iVar1 = *(int *)((int)this + 0x50);
    iVar2 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar2;
    *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
    *(int *)(iVar1 + 4 + iVar2 * 8) = iVar4 / iStack_24;
    return;
  }
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  iVar1 = *(int *)((int)this + 0x54) + -1;
  *(int *)((int)this + 0x54) = iVar1;
  iVar4 = *(int *)((int)this + 0x50);
  *(undefined4 *)(iVar4 + iVar1 * 8) = 1;
  *(undefined4 *)(iVar4 + 4 + iVar1 * 8) = 0;
  return;
#undef iStack_24
#undef uStack_20
#undef uStack_1c
#undef iStack_18
#undef iStack_14
#undef fStack_10
#undef fStack_c
#undef uStack_8
#undef uStack_4
}
