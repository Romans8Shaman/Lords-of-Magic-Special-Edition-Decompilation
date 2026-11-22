/* Rebuilt from lomse.exe op_enumterraspells @ 0x00425140 (197 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FUN_00424ee0 ((undefined4 (__thiscall *)(void *, void *, uint, int *, int))0x00424ee0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00530200 ((undefined4 (__thiscall *)(void *, undefined4 *, int *))0x00530200)

#define LOM_SELF_00425140 1
void __cdecl rb_00425140(void *vm)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef void * _t_pvStack_8;
  typedef int * _t_piStack_4;
#define pvStack_8 (*(_t_pvStack_8 *)(_fr + 0x0))
#define piStack_4 (*(_t_piStack_4 *)(_fr + 0x4))
  
  pvVar1 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    piVar4 = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    uVar3 = 0;
    piVar4 = piStack_4;
  }
  iVar2 = *(int *)((int)pvVar1 + 0x90);
  *(undefined4 *)((int)pvVar1 + 0x90) = 0;
  *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  if (iVar2 == 0) {
    if (((char)uVar3 == '\x06') && ((uVar3 & 0x100) == 0)) goto LAB_004251ca;
    *(undefined4 *)((int)pvVar1 + 0x90) = 0x12;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  uVar3 = 0;
LAB_004251ca:
  if (((char)uVar3 == '\x06') && ((uVar3 & 0x100) == 0)) {
    iVar2 = FUN_00530200(&DAT_00584ae8,&pvStack_8,(int *)&vm);
    if (iVar2 != 0) {
      FUN_00424ee0(pvStack_8,pvVar1,uVar3,piVar4,(int)vm);
    }
  }
  return;
#undef pvStack_8
#undef piStack_4
}
