/* Rebuilt from lomse.exe op_replace @ 0x004cca50 (464 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004cf440 ((undefined4 (__cdecl *)(uint *, uint *))0x004cf440)
#define FUN_004d33c0 ((undefined4 (__thiscall *)(void *, int *, uint *, uint *))0x004d33c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004cca50 1
void __cdecl rb_004cca50(void *vm)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_18;
  typedef int * _t_piStack_14;
  typedef uint _t_uStack_10;
  typedef int * _t_piStack_c;
  typedef uint _t_uStack_8;
  typedef int * _t_piStack_4;
#define uStack_18 (*(_t_uStack_18 *)(_fr + 0x0))
#define piStack_14 (*(_t_piStack_14 *)(_fr + 0x4))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x8))
#define piStack_c (*(_t_piStack_c *)(_fr + 0xc))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x10))
#define piStack_4 (*(_t_piStack_4 *)(_fr + 0x14))
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uStack_18 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    piStack_14 = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uStack_18 = 0;
    piStack_14 = piStack_4;
  }
  iVar2 = 0;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uStack_10 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    piStack_c = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    uStack_10 = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    piStack_c = piStack_4;
  }
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    piVar5 = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uStack_8 = 0;
    piVar5 = piStack_4;
  }
  if ((((char)uStack_18 != '\0') && ((char)uStack_10 != '\0')) && ((uStack_8 & 0xff) != 0)) {
    if ((uStack_8 & 0xff) == 6) {
      if (0 < piVar5[1]) {
        do {
          iVar3 = iVar2 * 8;
          iVar4 = FUN_004cf440((uint *)(*piVar5 + iVar3),&uStack_10);
          iVar1 = *piVar5;
          if (iVar4 == 0) {
            if (*(char *)(iVar1 + iVar3) == '\x06') {
              FUN_004d33c0(vm,*(int **)(iVar1 + iVar3 + 4),&uStack_10,&uStack_18);
            }
          }
          else {
            *(uint *)(iVar1 + iVar3) = uStack_18;
            *(int **)(iVar1 + 4 + iVar3) = piStack_14;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < piVar5[1]);
      }
      if (*(int *)((int)vm + 0x54) != 0) {
        iVar2 = *(int *)((int)vm + 0x50);
        iVar3 = *(int *)((int)vm + 0x54) + -1;
        *(int *)((int)vm + 0x54) = iVar3;
        *(uint *)(iVar2 + iVar3 * 8) = uStack_8;
        *(int **)(iVar2 + 4 + iVar3 * 8) = piVar5;
        return;
      }
      *(undefined4 *)((int)vm + 0x90) = 3;
    }
    else {
      *(undefined4 *)((int)vm + 0x90) = 0xe;
    }
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  return;
#undef uStack_18
#undef piStack_14
#undef uStack_10
#undef piStack_c
#undef uStack_8
#undef piStack_4
}
