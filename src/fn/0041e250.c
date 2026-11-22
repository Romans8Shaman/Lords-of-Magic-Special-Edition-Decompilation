/* Rebuilt from lomse.exe FUN_0041e250 @ 0x0041e250 (190 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7bf4 (*(uint *)0x005a7bf4)
#define DAT_005a7bf8 (*(int * *)0x005a7bf8)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define FUN_0041e420 ((undefined4 (__thiscall *)(void *, int))0x0041e420)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004869d0 ((undefined4 (__thiscall *)(void *, undefined4))0x004869d0)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_0052bb10 ((undefined4 (__thiscall *)(void *, int, int))0x0052bb10)

#define LOM_SELF_0041e250 1
undefined4 __thiscall rb_0041e250(void *this,int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = FUN_00485080(this,*param_1,0x2f);
  if (puVar2 == (undefined4 *)0x0) {
    return 0;
  }
  iVar1 = puVar2[0x12];
  if ((iVar1 == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) &&
     ((*(byte *)(puVar2 + 0xc) & 0x20) != 0)) {
    iVar3 = puVar2[10];
  }
  else {
    iVar3 = -1;
  }
  FUN_0041e420(puVar2,param_1[1]);
  if (-1 < iVar3) {
    puVar2 = FUN_00485080(this,iVar3,0x2f);
    if ((puVar2 != (undefined4 *)0x0) && (0 < (int)puVar2[0x13])) {
      FUN_004d09a0(DAT_005a7b78,DAT_005a7bf4,DAT_005a7bf8,0);
      FUN_004869d0(this,iVar1);
      return 1;
    }
    FUN_0052bb10(&DAT_005a7d90 + DAT_005a7d8c * 0x400,iVar3,-1);
  }
  FUN_004869d0(this,iVar1);
  return 1;
}
