/* Rebuilt from lomse.exe op_enumarmiesnotuseinplay @ 0x004638d0 (95 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

/* register-held (not in _fr, see gen.py regvar_locals): piStack_4 */
#define DAT_005577c8 (*(int *)0x005577c8)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_00406c00 ((undefined4 (__thiscall *)(void *, int, uint, int *, void *))0x00406c00)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004638d0 1
void __cdecl rb_004638d0(void *vm)

{
  int iVar1;
  uint uVar2;
  int *piStack_4;

  /* Vanilla's else path leaves a stack slot unread-until-use ([esp+8] after
   * sub esp,8 / push esi). An uninitialized C register here let clang delete
   * everything after the 004d4550 call (object was 0x47 bytes and fell off
   * the end). Zero the pointer so the 00406c00 call is always emitted. */
  uVar2 = 0;
  piStack_4 = (int *)0x0;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar2 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    piStack_4 = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    uVar2 = 0;
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  FUN_00406c00(&DAT_005ae958,DAT_005577c8,uVar2,piStack_4,vm);
  return;
}
