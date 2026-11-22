/* Rebuilt from lomse.exe op_findunitwithname @ 0x0044c1d0 (364 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

/* register-held (not in _fr, see gen.py regvar_locals): pbStack_4 */
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0041da00 ((undefined4 (__fastcall *)(int))0x0041da00)
#define FUN_0044c120 ((undefined4 (__stdcall *)(byte *, int *, int *))0x0044c120)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_0044c1d0 1
void __cdecl rb_0044c1d0(void *vm)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_8;
#define iStack_8 (*(_t_iStack_8 *)(_fr + 0x0))
  byte *pbStack_4;
  
  pvVar2 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    cVar5 = (char)*(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    pbStack_4 = *(byte **)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    cVar5 = '\0';
  }
  iVar3 = FUN_0041da00((int)pvVar2);
  if (iVar3 == 0) {
    if (cVar5 == '\b') goto LAB_0044c236;
    *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  }
  pbStack_4 = (byte *)0x0;
LAB_0044c236:
  if (pbStack_4 != (byte *)0x0) {
    iVar3 = FUN_0044c120(pbStack_4,(int *)&vm,&iStack_8);
    if (iVar3 == 0) {
      if (*(int *)((int)pvVar2 + 0x54) == 0) {
        *(undefined4 *)((int)pvVar2 + 0x90) = 3;
        FUN_004d4550(pvVar2);
        *(undefined4 *)((int)pvVar2 + 0x90) = 0;
        *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
      }
      else {
        iVar3 = *(int *)((int)pvVar2 + 0x50);
        iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
        *(int *)((int)pvVar2 + 0x54) = iVar4;
        *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
        *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 0xffffffff;
      }
      if (*(int *)((int)pvVar2 + 0x54) != 0) {
        iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
        *(int *)((int)pvVar2 + 0x54) = iVar4;
        iVar3 = *(int *)((int)pvVar2 + 0x50);
        *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
        *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 0xffffffff;
        return;
      }
    }
    else {
      uVar1 = *(undefined4 *)((int)vm + 0x28);
      if (*(int *)((int)pvVar2 + 0x54) == 0) {
        *(undefined4 *)((int)pvVar2 + 0x90) = 3;
        FUN_004d4550(pvVar2);
        *(undefined4 *)((int)pvVar2 + 0x90) = 0;
        *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
      }
      else {
        iVar3 = *(int *)((int)pvVar2 + 0x50);
        iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
        *(int *)((int)pvVar2 + 0x54) = iVar4;
        *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
        *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = uVar1;
      }
      if (*(int *)((int)pvVar2 + 0x54) != 0) {
        iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
        *(int *)((int)pvVar2 + 0x54) = iVar4;
        iVar3 = *(int *)((int)pvVar2 + 0x50);
        *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
        *(int *)(iVar3 + 4 + iVar4 * 8) = iStack_8;
        return;
      }
    }
    *(undefined4 *)((int)pvVar2 + 0x90) = 3;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  }
  return;
#undef iStack_8
}
