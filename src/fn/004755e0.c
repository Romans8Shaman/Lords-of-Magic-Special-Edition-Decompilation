/* Rebuilt from lomse.exe FUN_004755e0 @ 0x004755e0 (187 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583288 (*(undefined *)0x00583288)
#define DAT_005832cc (*(byte *)0x005832cc)
#define DAT_00583648 (*(int *)0x00583648)
#define FUN_004756f0 ((undefined4 (__cdecl *)(int, ...))0x004756f0)
#define FUN_00494610 ((undefined4 (__fastcall *)(undefined4 *))0x00494610)
#define FUN_00539e50 ((int (__cdecl *)(int))0x00539e50)
#define _DAT_00583288 (*(undefined4 *)0x00583288)
#define _DAT_0058328c (*(undefined4 *)0x0058328c)
#define _DAT_00583290 (*(undefined4 *)0x00583290)
#define _DAT_00583294 (*(undefined4 *)0x00583294)
#define _DAT_00583298 (*(undefined4 *)0x00583298)
#define _DAT_0058329c (*(undefined4 *)0x0058329c)
#define _DAT_005832a0 (*(undefined4 *)0x005832a0)
#define s_DDSURFACE_RENDERBUFFER___gt_Lock_NU_00558878 (*(char (*)[])0x00558878)

#define LOM_SELF_004755e0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __fastcall rb_004755e0(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  if ((DAT_005832cc & 1) == 0) {
    DAT_005832cc = DAT_005832cc | 1;
    DAT_00583648 = DAT_00583648 + 0x20;
    FUN_00494610((undefined4 *)&DAT_00583288);
    FUN_00539e50(0x4756a0);
  }
  pcVar2 = s_DDSURFACE_RENDERBUFFER___gt_Lock_NU_00558878;
  iVar1 = ((undefined4 (__stdcall *)(__typeof__(*(int **)(param_1 + 0x68c)), __typeof__(0), __typeof__(param_1 + 0x7bc), __typeof__(1), __typeof__(0)))(**(code **)(**(int **)(param_1 + 0x68c) + 100)))
                    (*(int **)(param_1 + 0x68c),0,param_1 + 0x7bc,1,0);
  iVar1 = FUN_004756f0(iVar1,pcVar2);
  if (iVar1 == 0) {
    return (undefined *)0x0;
  }
  _DAT_0058328c = *(undefined4 *)(param_1 + 0x7c8);
  _DAT_00583290 = *(undefined4 *)(param_1 + 0x7c4);
  _DAT_00583294 = *(undefined4 *)(param_1 + 0x7cc);
  _DAT_00583288 = *(undefined4 *)(param_1 + 0x7e0);
  _DAT_005832a0 = *(undefined4 *)(param_1 + 0x68c);
  _DAT_0058329c = 0xc;
  _DAT_00583298 = 0;
  return &DAT_00583288;
}
