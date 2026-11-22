/* Rebuilt from lomse.exe FUN_0047eb20 @ 0x0047eb20 (104 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0058341c (*(int *)0x0058341c)
#define FUN_0047f510 ((undefined4 (__stdcall *)(void))0x0047f510)
#define FUN_00539ff0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *, undefined4))0x00539ff0)
#define LAB_0047f4e0 (*(undefined *)0x0047f4e0) /* code label used as address */

#define LOM_SELF_0047eb20 1
undefined4 * __thiscall
rb_0047eb20(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  
  FUN_00539ff0((int)this + 0x10,0x1c,0x100,&LAB_0047f4e0,FUN_0047f510);
  DAT_0058341c = DAT_0058341c + 0x1c14;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined4 *)((int)this + 0x1c10) = 0;
  puVar1 = (undefined1 *)((int)this + 0x2a);
  iVar2 = 0x100;
  do {
    *(undefined4 *)(puVar1 + -0x1a) = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 0x1c;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return this;
}
