/* Rebuilt from lomse.exe op_savelbm @ 0x004da690 (417 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_00491ec0 ((int (__thiscall *)(void *, int))0x00491ec0)
#define FUN_004a2420 ((undefined4 (__thiscall *)(void *, LPCSTR))0x004a2420)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define s_unknown_page_005726cc (*(char (*)[])0x005726cc)

#define LOM_SELF_004da690 1
void __cdecl rb_004da690(void *vm)

{
  int iVar1;
  void *this;
  int iVar2;
  char cVar3;
  int iVar4;
  LPCSTR pCVar5;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_14;
  typedef undefined4 _t_fStack_10;
  typedef uint _t_uStack_c;
  typedef uint _t_uStack_8;
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0x4))
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x8))
#define uStack_c (*(_t_uStack_c *)(_fr + 0xc))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x10))
  LPCSTR pCStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    cVar3 = (char)*(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    pCVar5 = *(LPCSTR *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    cVar3 = '\0';
    pCVar5 = pCStack_4;
  }
  iVar1 = *(int *)((int)vm + 0x90);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  if (iVar1 == 0) {
    if (cVar3 != '\b') {
      *(undefined4 *)((int)vm + 0x90) = 0xe;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
      pCVar5 = (LPCSTR)0x0;
    }
  }
  else {
    pCVar5 = (LPCSTR)0x0;
  }
  if (pCVar5 != (LPCSTR)0x0) {
    if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
      iVar1 = *(int *)((int)vm + 0x54) + 1;
      *(int *)((int)vm + 0x54) = iVar1;
      uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
      pCStack_4 = *(LPCSTR *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
    }
    else {
      FUN_00404ab0(vm,6);
      uStack_8 = 0;
    }
    iVar1 = FUN_004026a0(&uStack_8,&uStack_14,&uStack_c,&fStack_10);
    if (iVar1 == 0) {
      *(undefined4 *)((int)vm + 0x90) = 0xe;
    }
    else {
      this = (void *)FUN_00491ec0(&DAT_005a7b50,uStack_14);
      if (this == (void *)0x0) {
        FUN_004d41c0(vm,s_unknown_page_005726cc);
        if (*(int *)((int)vm + 0x54) == 0) {
          *(undefined4 *)((int)vm + 0x90) = 3;
          FUN_004d4550(vm);
          *(undefined4 *)((int)vm + 0x90) = 0;
          *(undefined4 *)((int)vm + 0xa4) = 0;
        }
        else {
          iVar1 = *(int *)((int)vm + 0x50);
          iVar2 = *(int *)((int)vm + 0x54) + -1;
          *(int *)((int)vm + 0x54) = iVar2;
          *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
          *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0;
        }
      }
      iVar1 = FUN_004a2420(this,pCVar5);
      if (*(int *)((int)vm + 0x54) != 0) {
        iVar4 = *(int *)((int)vm + 0x54) + -1;
        *(int *)((int)vm + 0x54) = iVar4;
        iVar2 = *(int *)((int)vm + 0x50);
        *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
        *(uint *)(iVar2 + 4 + iVar4 * 8) = -(uint)(iVar1 != 0);
        return;
      }
      *(undefined4 *)((int)vm + 0x90) = 3;
    }
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  return;
#undef uStack_14
#undef fStack_10
#undef uStack_c
#undef uStack_8
}
