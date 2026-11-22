/* Rebuilt from lomse.exe FUN_004a5270 @ 0x004a5270 (105 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005aef04 (*(undefined4 *)0x005aef04)
#define FUN_004a52e0 ((undefined4 (__thiscall *)(void *, int *, int))0x004a52e0)
#define FUN_004a9ca0 ((undefined4 (__thiscall *)(void *, int))0x004a9ca0)
#define FUN_004c5ef0 ((undefined4 (__thiscall *)(void *, int, int))0x004c5ef0)
#define FUN_004fe6e0 ((undefined4 (__thiscall *)(void *, LPCSTR))0x004fe6e0)
#define FUN_005394d0 ((undefined4 (__cdecl *)(int *))0x005394d0)

#define LOM_SELF_004a5270 1
undefined4 __thiscall rb_004a5270(void *this,LPCSTR param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_004fe6e0(&DAT_00584ae8,param_1);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  iVar2 = FUN_004a52e0(this,piVar1,1);
  if (iVar2 == 0) {
    FUN_005394d0(piVar1);
    return 0;
  }
  FUN_005394d0(piVar1);
  FUN_004a9ca0(this,1);
  FUN_004c5ef0(&DAT_005aef04,*(int *)((int)this + 0x6c),*(int *)((int)this + 0x70));
  return 1;
}
