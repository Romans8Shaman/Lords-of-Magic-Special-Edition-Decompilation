/* Rebuilt from lomse.exe FUN_0040a840 @ 0x0040a840 (103 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_00409f70 ((int (__thiscall *)(void *, int, int, int, int *, int *))0x00409f70)
#define FUN_004a8330 ((int (__thiscall *)(void *, int, int))0x004a8330)

#define LOM_SELF_0040a840 1
undefined4 __stdcall rb_0040a840(int volatile param_1, int volatile param_2, int volatile param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = param_3;
  iVar2 = param_2;
  iVar1 = param_1;
  iVar5 = 0;
  do {
    iVar4 = FUN_00409f70(&DAT_005ae958,*(int *)(iVar1 + 0x1c),iVar3,iVar5,&param_3,&param_1);
    if (iVar4 != -1) {
      iVar4 = FUN_004a8330(&DAT_005ae958,iVar4,0);
      if ((iVar4 != 0) && (*(int *)(iVar4 + 0x28) == *(int *)(iVar2 + 0x28))) {
        return 1;
      }
    }
    iVar5 = iVar5 + 1;
    if (0x18 < iVar5) {
      return 0;
    }
  } while( true );
}
