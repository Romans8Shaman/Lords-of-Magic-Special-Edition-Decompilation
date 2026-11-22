/* Rebuilt from lomse.exe FUN_00429810 @ 0x00429810 (139 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7be4 (*(uint *)0x005a7be4)
#define DAT_005a7be8 (*(int * *)0x005a7be8)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define FUN_004282a0 ((undefined4 (__thiscall *)(void *, undefined4, undefined4, int, int))0x004282a0)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)

#define LOM_SELF_00429810 1
undefined4 __thiscall rb_00429810(void *this,int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = FUN_00485080(this,*param_1,0x2f);
  if (((puVar1 != (undefined4 *)0x0) && (iVar2 = param_1[1], -1 < iVar2)) &&
     (iVar2 < (int)puVar1[0x13])) {
    iVar2 = FUN_004282a0(puVar1 + iVar2 * 0x13 + 0x31,*param_1,iVar2,param_1[2],param_1[3]);
    if (iVar2 != 0) {
      if (((*(byte *)(puVar1 + 0xc) & 0x20) != 0) &&
         (puVar1[0x12] == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400))) {
        FUN_004d09a0(DAT_005a7b78,DAT_005a7be4,DAT_005a7be8,0);
      }
      return 1;
    }
  }
  return 0;
}
