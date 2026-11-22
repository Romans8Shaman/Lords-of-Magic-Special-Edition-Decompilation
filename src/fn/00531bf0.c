/* Rebuilt from lomse.exe FUN_00531bf0 @ 0x00531bf0 (126 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00574404 (*(undefined4 *)0x00574404)
#define DAT_00574408 (*(undefined4 *)0x00574408)
#define DAT_0057440c (*(undefined4 *)0x0057440c)
#define DAT_00574410 (*(undefined4 *)0x00574410)
#define DAT_005ae9c4 (*(int *)0x005ae9c4)
#define DAT_005ae9c8 (*(int *)0x005ae9c8)
#define DAT_005d3858 (*(undefined4 *)0x005d3858)
#define FUN_00531b20 ((undefined4 (__thiscall *)(void *, int))0x00531b20)
#define FUN_00531c70 ((undefined4 (__thiscall *)(void *, int))0x00531c70)

#define LOM_SELF_00531bf0 1
void __fastcall rb_00531bf0(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_005ae9c8;
  iVar1 = DAT_005ae9c4;
  iVar3 = DAT_005ae9c8 * DAT_005ae9c4;
  *(int *)((int)param_1 + 0xc) = DAT_005ae9c4;
  if (*(int *)((int)param_1 + 8) != iVar3) {
    FUN_00531b20(param_1,iVar3);
    DAT_005d3858 = 0;
    DAT_00574404 = 0xffffffff;
    DAT_00574408 = 0xffffffff;
    DAT_0057440c = 0xffffffff;
    DAT_00574410 = 0xffffffff;
    if (0 < *(int *)((int)param_1 + 8)) {
      iVar3 = 0;
      if (0 < *(int *)((int)param_1 + 8)) {
        do {
          iVar3 = iVar3 + 1;
          *(undefined4 *)(*(int *)((int)param_1 + 4) + -4 + iVar3 * 4) = 1;
        } while (iVar3 < *(int *)((int)param_1 + 8));
      }
      FUN_00531c70(param_1,(iVar2 >> 1) * iVar1 + (iVar1 >> 1));
    }
  }
  return;
}
