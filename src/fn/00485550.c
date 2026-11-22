/* Rebuilt from lomse.exe FUN_00485550 @ 0x00485550 (106 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00556168 (*(undefined *)0x00556168)
#define DAT_0055b1b0 (*(undefined4 *)0x0055b1b0)
#define FUN_004a5440 ((undefined4 (__thiscall *)(void *, int *))0x004a5440)
#define FUN_004c8fc0 ((bool (__thiscall *)(void *, int *))0x004c8fc0)
#define FUN_004eeb00 ((undefined4 (__thiscall *)(void *, int *))0x004eeb00)
#define FUN_005394d0 ((undefined4 (__cdecl *)(int *))0x005394d0)
#define FUN_00539610 ((undefined4 (__cdecl *)(LPCSTR, char *))0x00539610)
#define FUN_00539660 ((uint (__cdecl *)(char *, uint, uint, int *))0x00539660)

#define LOM_SELF_00485550 1
undefined4 __thiscall rb_00485550(void *this,LPCSTR param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00539610(param_1,&DAT_00556168);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  FUN_00539660((char *)&DAT_0055b1b0,4,1,piVar1);
  FUN_004a5440((void *)((int)this + 0x482c),piVar1);
  FUN_004eeb00((void *)((int)this + 0x4848),piVar1);
  FUN_004c8fc0((void *)((int)this + 0x4b34),piVar1);
  FUN_005394d0(piVar1);
  return 1;
}
