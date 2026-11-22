/* Rebuilt from lomse.exe op_replaceimp @ 0x0049baa0 (382 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_00492850 ((int (__thiscall *)(void *, int))0x00492850)
#define FUN_0049b450 ((undefined4 (__thiscall *)(void *, byte *, int *))0x0049b450)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004f6670 ((undefined4 (__thiscall *)(void *, int))0x004f6670)
#define FUN_0053a090 ((int (__cdecl *)(undefined1 *, ...))0x0053a090)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_replaceimp___failed_to_load_imp_f_0055c7c0 (*(char (*)[])0x0055c7c0)
#define s_replaceimp___no_such_imp_0055c7e8 (*(char (*)[])0x0055c7e8)

#define LOM_SELF_0049baa0 1
void __cdecl rb_0049baa0(void *vm)

{
  int iVar1;
  void *this;
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  longlong lVar5;
  uchar _fr[0x70] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef byte * _t_pbStack_68;
  typedef char _t_acStack_64[100];
#define pbStack_68 (*(_t_pbStack_68 *)(_fr + 0x0))
#define acStack_64 (*(_t_acStack_64 *)(_fr + 0x4))
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    cVar2 = (char)*(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    pbVar4 = *(byte **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    cVar2 = '\0';
    *(undefined4 *)((int)vm + 0xa4) = 0;
    pbVar4 = pbStack_68;
  }
  iVar1 = *(int *)((int)vm + 0x90);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  if (iVar1 == 0) {
    if (cVar2 != '\b') {
      *(undefined4 *)((int)vm + 0x90) = 0xe;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
      pbVar4 = (byte *)0x0;
    }
  }
  else {
    pbVar4 = (byte *)0x0;
  }
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    pbStack_68 = *(byte **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar3 = 0;
  }
  uVar3 = uVar3 & 0xff;
  if (uVar3 != 1) {
    if (uVar3 == 2) {
      pbStack_68 = (byte *)((int)pbStack_68 >> 8);
    }
    else {
      if (uVar3 != 4) {
        *(undefined4 *)((int)vm + 0x90) = 0xe;
        FUN_004d4550(vm);
        *(undefined4 *)((int)vm + 0x90) = 0;
        *(undefined4 *)((int)vm + 0xa4) = 0;
        return;
      }
      lVar5 = __ftol((float10)__BC(float, pbStack_68));
      pbStack_68 = (byte *)lVar5;
    }
  }
  this = (void *)FUN_00492850(&DAT_005a7b50,(int)pbStack_68);
  if (this == (void *)0x0) {
    FUN_004d41c0(vm,s_replaceimp___no_such_imp_0055c7e8);
    return;
  }
  iVar1 = FUN_0049b450(this,pbVar4,(int *)0x0);
  if (iVar1 == 0) {
    FUN_0053a090(acStack_64,s_replaceimp___failed_to_load_imp_f_0055c7c0,(uint)pbVar4);
    FUN_004d41c0(vm,acStack_64);
    return;
  }
  FUN_004f6670(&DAT_00584ae8,(int)this);
  return;
#undef pbStack_68
#undef acStack_64
}
