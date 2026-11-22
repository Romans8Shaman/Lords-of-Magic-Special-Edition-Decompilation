/* Rebuilt from lomse.exe FUN_00420910 @ 0x00420910 (92 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583100 (*(char *)0x00583100)
#define DAT_005ae935 (*(char *)0x005ae935)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_004208d0 ((int (__thiscall *)(void *, int, int))0x004208d0)
#define FUN_004a9a60 ((undefined4 (__thiscall *)(void *, undefined4 *, int))0x004a9a60)

#define LOM_SELF_00420910 1
undefined4 __thiscall rb_00420910(void *this, int param_1, uint volatile param_2)

{
  int iVar1;
  
  iVar1 = FUN_004208d0(this,param_1,param_2);
  if (iVar1 == param_1) {
    return 0;
  }
  if ((DAT_00583100 == '\x02') && ((DAT_005ae935 == '\b' || (DAT_005ae935 == '\x06')))) {
    FUN_004a9a60(&DAT_005ae958,&param_2,iVar1);
    if ((param_2 & 0x400000) != 0) {
      return 0;
    }
  }
  return 1;
}
