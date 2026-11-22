/* Rebuilt from lomse.exe FUN_0052cd50 @ 0x0052cd50 (83 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_0041fda0 ((undefined4 (__fastcall *)(int))0x0041fda0)
#define FUN_004518d0 ((int (__thiscall *)(void *, int, int))0x004518d0)
#define FUN_0047af50 ((undefined4 (__fastcall *)(void *))0x0047af50)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_0052d0e0 ((undefined4 (__fastcall *)(int))0x0052d0e0)
#define FUN_0052d290 ((undefined4 (__thiscall *)(void *, int))0x0052d290)

#define LOM_SELF_0052cd50 1
void __fastcall rb_0052cd50(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0052d0e0((int)param_1);
  iVar1 = FUN_004518d0(&DAT_005ae974,*param_1,iVar1);
  uVar2 = FUN_00482ac0(&DAT_005aa12c,iVar1,3);
  if (uVar2 != 0) {
    FUN_0052d290(param_1,iVar1);
    if (param_1[0xba] != 6) {
      FUN_0041fda0(uVar2);
    }
  }
  FUN_0047af50(&DAT_005ae958);
  return;
}
