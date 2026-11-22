/* Rebuilt from lomse.exe FUN_00462c90 @ 0x00462c90 (122 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00539ff0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *, undefined4))0x00539ff0)
#define LAB_00498420 (*(undefined *)0x00498420) /* code label used as address */
#define op_sunlight ((undefined4 (__stdcall *)(void))0x0051bc30)

#define LOM_SELF_00462c90 1
undefined4 * __fastcall rb_00462c90(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_00539ff0(param_1 + 0x179,0x10,10,&LAB_00498420,op_sunlight);
  param_1[1] = 0xffffffff;
  param_1[0x126] = 0;
  puVar1 = param_1 + 0x17a;
  iVar2 = 10;
  do {
    puVar1[-1] = 0;
    *(undefined1 *)puVar1 = 0xff;
    *(undefined1 *)((int)puVar1 + 1) = 0xff;
    puVar1[1] = 0xffffffff;
    puVar1[2] = 0xffffffff;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  param_1[0x127] = 0;
  param_1[0x129] = 0;
  param_1[0x178] = 0;
  puVar1 = param_1 + 300;
  iVar2 = 0x19;
  do {
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *param_1 = 0;
  return param_1;
}
