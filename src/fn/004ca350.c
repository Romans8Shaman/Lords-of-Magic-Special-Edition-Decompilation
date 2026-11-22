/* Rebuilt from lomse.exe op_put @ 0x004ca350 (573 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004cee20 ((int (__stdcall *)(char *))0x004cee20)
#define FUN_004d31b0 ((uint * (__thiscall *)(void *, int *, uint, uint))0x004d31b0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004ca350 1
void __cdecl rb_004ca350(void *vm)

{
  void *this;
  int iVar1;
  uint *puVar2;
  int *piVar3;
  char *pcVar4;
  uint uVar5;
  int *piVar6;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_fStack_18;
  typedef uint _t_uStack_14;
  typedef uint _t_uStack_10;
  typedef int * _t_piStack_c;
  typedef uint _t_uStack_8;
  typedef int * _t_piStack_4;
#define fStack_18 (*(_t_fStack_18 *)(_fr + 0x0))
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0x4))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x8))
#define piStack_c (*(_t_piStack_c *)(_fr + 0xc))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x10))
#define piStack_4 (*(_t_piStack_4 *)(_fr + 0x14))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    piStack_4 = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uStack_10 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    piStack_c = *(int **)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_10 = 0;
    piStack_c = piStack_4;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uVar5 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    piVar6 = *(int **)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uVar5 = 0;
    piVar6 = piStack_4;
  }
  uVar5 = uVar5 & 0xff;
  if ((uVar5 == 7) ||
     (iVar1 = FUN_004026a0(&uStack_10,(uint *)&vm,&uStack_14,&fStack_18), iVar1 != 0)) {
    if (uVar5 == 6) {
      if ((-1 < (int)vm) && ((int)vm < piVar6[1])) {
        iVar1 = *piVar6;
        *(uint *)(iVar1 + (int)vm * 8) = uStack_8;
        *(int **)(iVar1 + 4 + (int)vm * 8) = piStack_4;
        return;
      }
    }
    else {
      if (uVar5 == 7) {
        puVar2 = FUN_004d31b0(this,piVar6,uStack_10,(uint)piStack_c);
        if (puVar2 == (uint *)0x0) {
          iVar1 = 0;
          if (0 < piVar6[1]) {
            pcVar4 = (char *)*piVar6;
            do {
              if (*pcVar4 == '\0') {
                puVar2 = (uint *)((char *)*piVar6 + iVar1 * 0x10);
                break;
              }
              iVar1 = iVar1 + 1;
              pcVar4 = pcVar4 + 0x10;
            } while (iVar1 < piVar6[1]);
          }
          if (puVar2 == (uint *)0x0) {
            FUN_00404ab0(this,0xd);
            return;
          }
          *puVar2 = uStack_10;
          puVar2[1] = (uint)piStack_c;
          if ((char)uStack_10 == '\x05') {
            piVar3 = (int *)piVar6[2];
            if ((int)piStack_c <= piVar6[2]) {
              piVar3 = piStack_c;
            }
            piVar6[2] = (int)piVar3;
            piVar3 = (int *)piVar6[3];
            if (piVar6[3] < (int)piStack_c) {
              piVar3 = piStack_c;
            }
            piVar6[3] = (int)piVar3;
          }
        }
        puVar2[2] = uStack_8;
        puVar2[3] = (uint)piStack_4;
        return;
      }
      if (uVar5 != 8) {
        FUN_00404ab0(this,0xe);
        return;
      }
      if ((-1 < (int)vm) && (iVar1 = FUN_004cee20((char *)piVar6), (int)vm < iVar1)) {
        if ((char)uStack_8 == '\x01') {
          *(undefined1 *)((int)vm + (int)piVar6) = (*(uchar *)((uchar *)&piStack_4 + 0));
          return;
        }
        FUN_00404ab0(this,0xe);
        return;
      }
    }
    *(undefined4 *)((int)this + 0x90) = 0xf;
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
#undef fStack_18
#undef uStack_14
#undef uStack_10
#undef piStack_c
#undef uStack_8
#undef piStack_4
}
