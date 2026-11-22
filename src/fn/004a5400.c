/* Rebuilt from lomse.exe FUN_004a5400 @ 0x004a5400 (51 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00556168 (*(undefined *)0x00556168)
#define FUN_004a5440 ((undefined4 (__thiscall *)(void *, int *))0x004a5440)
#define FUN_005394d0 ((undefined4 (__cdecl *)(int *))0x005394d0)
#define FUN_00539610 ((undefined4 (__cdecl *)(LPCSTR, char *))0x00539610)

#define LOM_SELF_004a5400 1
undefined4 __thiscall rb_004a5400(void *this,LPCSTR param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00539610(param_1,&DAT_00556168);
  FUN_004a5440(this,piVar1);
  FUN_005394d0(piVar1);
  return 1;
}
