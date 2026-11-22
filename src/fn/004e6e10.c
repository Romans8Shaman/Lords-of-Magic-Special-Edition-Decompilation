/* Rebuilt from lomse.exe op_playergetnumgroups @ 0x004e6e10 (384 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005ae98c (*(int *)0x005ae98c)
#define DAT_005ae998 (*(int *)0x005ae998)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)

#define LOM_SELF_004e6e10 1
void __cdecl rb_004e6e10(void *vm)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uchar _fr[0x58] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_50;
  typedef undefined4 _t_fStack_4c;
  typedef uint _t_uStack_48;
  typedef uint _t_uStack_44;
  typedef undefined4 _t_uStack_40;
  typedef int _t_aiStack_3c[15];
#define iStack_50 (*(_t_iStack_50 *)(_fr + 0x0))
#define fStack_4c (*(_t_fStack_4c *)(_fr + 0x4))
#define uStack_48 (*(_t_uStack_48 *)(_fr + 0x8))
#define uStack_44 (*(_t_uStack_44 *)(_fr + 0xc))
#define uStack_40 (*(_t_uStack_40 *)(_fr + 0x10))
#define aiStack_3c (*(_t_aiStack_3c *)(_fr + 0x14))
  
  pvVar2 = vm;
  iStack_50 = 0;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uStack_44 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    uStack_40 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_44 = 0;
  }
  iVar3 = FUN_004026a0(&uStack_44,(uint *)&vm,&uStack_48,&fStack_4c);
  if (iVar3 == 0) {
    *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
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
      *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 0;
    }
  }
  iVar3 = DAT_005ae98c;
  piVar5 = aiStack_3c;
  for (iVar4 = 0xf; iVar1 = DAT_005ae998, iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  for (; iVar1 <= iVar3; iVar1 = iVar1 + 1) {
    iVar4 = FUN_004f6000(&DAT_005ae974,iVar1);
    if ((((iVar4 != 0) && (*(int *)(iVar4 + 4) == 0)) && (*(void **)(iVar4 + 0x48) == vm)) &&
       ((~*(uint *)(iVar4 + 0x30) & 0x100) != 0)) {
      aiStack_3c[*(char *)(iVar4 + 0x5ac)] = 1;
    }
  }
  piVar5 = aiStack_3c;
  iVar3 = 0xf;
  do {
    if (*piVar5 == 1) {
      iStack_50 = iStack_50 + 1;
    }
    piVar5 = piVar5 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (*(int *)((int)pvVar2 + 0x54) == 0) {
    *(undefined4 *)((int)pvVar2 + 0x90) = 3;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    return;
  }
  iVar3 = *(int *)((int)pvVar2 + 0x50);
  iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
  *(int *)((int)pvVar2 + 0x54) = iVar4;
  *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
  *(int *)(iVar3 + 4 + iVar4 * 8) = iStack_50;
  return;
#undef iStack_50
#undef fStack_4c
#undef uStack_48
#undef uStack_44
#undef uStack_40
#undef aiStack_3c
}
