/* Rebuilt from lomse.exe op_tooltip_quick @ 0x00473c80 (446 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a9e04 (*(undefined4 *)0x005a9e04)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, float *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_00473790 ((undefined4 (__thiscall *)(void *, uint, uint, char *, int, int))0x00473790)
#define FUN_00473930 ((undefined4 (__fastcall *)(int))0x00473930)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_00473c80 1
void __cdecl rb_00473c80(void *vm)

{
  void *this;
  int iVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  longlong lVar6;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_10;
  typedef uint _t_uStack_c;
  typedef uint _t_uStack_8;
  typedef char * _t_pcStack_4;
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x0))
#define uStack_c (*(_t_uStack_c *)(_fr + 0x4))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x8))
#define pcStack_4 (*(_t_pcStack_4 *)(_fr + 0xc))
  
  FUN_00473930(0x5a9e04);
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    cVar3 = (char)*(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    pcVar5 = *(char **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    cVar3 = '\0';
    *(undefined4 *)((int)this + 0xa4) = 0;
    pcVar5 = pcStack_4;
  }
  iVar1 = *(int *)((int)this + 0x90);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  if (iVar1 == 0) {
    if (cVar3 != '\b') {
      *(undefined4 *)((int)this + 0x90) = 0xe;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      pcVar5 = (char *)0x0;
    }
  }
  else {
    pcVar5 = (char *)0x0;
  }
  if (pcVar5 != (char *)0x0) {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar1 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar1;
      uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
      pcStack_4 = *(char **)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
    }
    else {
      *(undefined4 *)((int)this + 0x90) = 6;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      uStack_8 = 0;
    }
    iVar1 = FUN_004026a0(&uStack_8,&uStack_10,&uStack_c,(float *)&vm);
    if (iVar1 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      return;
    }
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar1 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar1;
      uVar4 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
      pcStack_4 = *(char **)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
    }
    else {
      *(undefined4 *)((int)this + 0x90) = 6;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      uVar4 = 0;
    }
    uVar4 = uVar4 & 0xff;
    pcVar2 = pcStack_4;
    if (uVar4 != 1) {
      if (uVar4 == 2) {
        pcVar2 = (char *)((int)pcStack_4 >> 8);
      }
      else {
        if (uVar4 != 4) {
          FUN_00404ab0(this,0xe);
          return;
        }
        lVar6 = __ftol((float10)__BC(float, pcStack_4));
        pcVar2 = (char *)lVar6;
      }
    }
    FUN_00473790(&DAT_005a9e04,(uint)pcVar2,uStack_10,pcVar5,1,0);
  }
  return;
#undef uStack_10
#undef uStack_c
#undef uStack_8
#undef pcStack_4
}
