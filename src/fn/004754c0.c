/* Rebuilt from lomse.exe FUN_004754c0 @ 0x004754c0 (187 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005832a8 (*(undefined *)0x005832a8)
#define DAT_005832c8 (*(byte *)0x005832c8)
#define DAT_00583648 (*(int *)0x00583648)
#define FUN_004756f0 ((undefined4 (__cdecl *)(int, ...))0x004756f0)
#define FUN_00494610 ((undefined4 (__fastcall *)(undefined4 *))0x00494610)
#define FUN_00539e50 ((int (__cdecl *)(int))0x00539e50)
#define _DAT_005832a8 (*(undefined4 *)0x005832a8)
#define _DAT_005832ac (*(undefined4 *)0x005832ac)
#define _DAT_005832b0 (*(undefined4 *)0x005832b0)
#define _DAT_005832b4 (*(undefined4 *)0x005832b4)
#define _DAT_005832b8 (*(undefined4 *)0x005832b8)
#define _DAT_005832bc (*(undefined4 *)0x005832bc)
#define _DAT_005832c0 (*(undefined4 *)0x005832c0)
#define s_DDSURFACE_BACKBUFFER___gt_Lock_NULL_005587e0 (*(char (*)[])0x005587e0)

#define LOM_SELF_004754c0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __fastcall rb_004754c0(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  if ((DAT_005832c8 & 1) == 0) {
    DAT_005832c8 = DAT_005832c8 | 1;
    DAT_00583648 = DAT_00583648 + 0x20;
    FUN_00494610((undefined4 *)&DAT_005832a8);
    FUN_00539e50(0x475580);
  }
  pcVar2 = s_DDSURFACE_BACKBUFFER___gt_Lock_NULL_005587e0;
  iVar1 = ((undefined4 (__stdcall *)(__typeof__(*(int **)(param_1 + 0x688)), __typeof__(0), __typeof__(param_1 + 0x750), __typeof__(1), __typeof__(0)))(**(code **)(**(int **)(param_1 + 0x688) + 100)))
                    (*(int **)(param_1 + 0x688),0,param_1 + 0x750,1,0);
  iVar1 = FUN_004756f0(iVar1,pcVar2);
  if (iVar1 == 0) {
    return (undefined *)0x0;
  }
  _DAT_005832ac = *(undefined4 *)(param_1 + 0x75c);
  _DAT_005832b0 = *(undefined4 *)(param_1 + 0x758);
  _DAT_005832b4 = *(undefined4 *)(param_1 + 0x760);
  _DAT_005832a8 = *(undefined4 *)(param_1 + 0x774);
  _DAT_005832c0 = *(undefined4 *)(param_1 + 0x688);
  _DAT_005832bc = 0xc;
  _DAT_005832b8 = 0;
  return &DAT_005832a8;
}
