/* Rebuilt from lomse.exe op_scanforplaceholders @ 0x004895d0 (240 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

/* register-held (not in _fr, see gen.py regvar_locals): piStack_4 */
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00489560 ((undefined4 (__thiscall *)(void *, LPCSTR, uint, int *))0x00489560)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004895d0 1
void __cdecl rb_004895d0(void *vm)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_8;
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x0))
  int *piStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    piVar4 = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uStack_8 = 0;
    piVar4 = piStack_4;
  }
  if ((char)uStack_8 != '\0') {
    if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
      iVar1 = *(int *)((int)vm + 0x54) + 1;
      *(int *)((int)vm + 0x54) = iVar1;
      cVar2 = (char)*(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
      piStack_4 = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
    }
    else {
      *(undefined4 *)((int)vm + 0x90) = 6;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      cVar2 = '\0';
      *(undefined4 *)((int)vm + 0xa4) = 0;
    }
    iVar1 = *(int *)((int)vm + 0x90);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    piVar3 = (int *)0x0;
    if (iVar1 == 0) {
      if (cVar2 == '\b') {
        piVar3 = piStack_4;
      }
      else {
        *(undefined4 *)((int)vm + 0x90) = 0xe;
        FUN_004d4550(vm);
        *(undefined4 *)((int)vm + 0x90) = 0;
        *(undefined4 *)((int)vm + 0xa4) = 0;
      }
    }
    FUN_00489560(&DAT_005aa12c,(LPCSTR)piVar3,uStack_8,piVar4);
  }
  return;
#undef uStack_8
}
