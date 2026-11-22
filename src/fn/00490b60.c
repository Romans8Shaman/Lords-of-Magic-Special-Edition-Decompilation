/* Rebuilt from lomse.exe op_addblankitem @ 0x00490b60 (120 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0048d840 ((int (__fastcall *)(int))0x0048d840)
#define FUN_004906d0 ((undefined4 (__cdecl *)(void *, int *))0x004906d0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define s_dialog_full_0055c478 (*(char (*)[])0x0055c478)

#define LOM_SELF_00490b60 1
void __cdecl rb_00490b60(void *volatile param_1)

{
  int iVar1;
  void *this;
  int iVar2;
  int iVar3;
  
  this = param_1;
  iVar2 = FUN_004906d0(param_1,(int *)&param_1);
  if (iVar2 != 0) {
    iVar2 = FUN_0048d840((int)param_1);
    if (iVar2 < 0) {
      FUN_004d41c0(this,s_dialog_full_0055c478);
    }
    if (*(int *)((int)this + 0x54) != 0) {
      iVar1 = *(int *)((int)this + 0x50);
      iVar3 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar3;
      *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
      *(int *)(iVar1 + 4 + iVar3 * 8) = iVar2;
      return;
    }
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  return;
}
