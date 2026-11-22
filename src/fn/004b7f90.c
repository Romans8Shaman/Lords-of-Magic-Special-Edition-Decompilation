/* Rebuilt from lomse.exe FUN_004b7f90 @ 0x004b7f90 (136 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa64c (*(undefined *)0x005aa64c)
#define DAT_005d1e84 (*(void * *)0x005d1e84)
#define FUN_0048a400 ((undefined4 (__fastcall *)(int))0x0048a400)
#define FUN_004b1cc0 ((undefined4 (__thiscall *)(void *, undefined1, char, int))0x004b1cc0)
#define FUN_004b1d00 ((undefined4 (__thiscall *)(void *, undefined1, char, int))0x004b1d00)
#define FUN_004b78c0 ((int (__fastcall *)(void *))0x004b78c0)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)

#define LOM_SELF_004b7f90 1
void __stdcall rb_004b7f90(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if (DAT_005d1e84 == (void *)0x0) {
    bVar3 = true;
  }
  else {
    iVar2 = *(int *)((int)DAT_005d1e84 + 0x390);
    iVar1 = FUN_004b7dd0((int)DAT_005d1e84);
    bVar3 = iVar2 == iVar1;
  }
  if (bVar3) {
    iVar2 = FUN_0048a400(0x584ae8);
    if (iVar2 == 0) {
      if (DAT_005d1e84 == (void *)0x0) {
        iVar2 = 1;
      }
      else {
        iVar2 = FUN_004b78c0(DAT_005d1e84);
      }
      FUN_004b1cc0(&DAT_005aa64c,1,(byte)(2 - iVar2) & (2 - iVar2 < 0) - 1U,0);
      FUN_004b1d00(&DAT_005aa64c,1,'\b' - (char)iVar2,1);
    }
  }
  return;
}
