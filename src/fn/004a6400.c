/* Rebuilt from lomse.exe FUN_004a6400 @ 0x004a6400 (84 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005876d0 (*(undefined4 *)0x005876d0)
#define FUN_00518560 ((undefined4 (__thiscall *)(void *, undefined4))0x00518560)
#define _DAT_0054dad0 (*(double *)0x0054dad0)
#define _DAT_0054dad8 (*(double *)0x0054dad8)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_004a6400 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall rb_004a6400(void *this,float param_1)

{
  int iVar1;
  float10 x;
  ulonglong uVar2;
  longlong lVar3;
  
  x = (float10)param_1 + (float10)*(float *)((int)this + 0x2e0);
  *(float *)((int)this + 0x2e0) = (float)x;
  uVar2 = __ftol(x);
  iVar1 = (int)((longlong)((ulonglong)(uint)((int)uVar2 >> 0x1f) << 0x20 | uVar2 & 0xffffffff) %
               0x168);
  *(float *)((int)this + 0x2e0) = (float)iVar1;
  lVar3 = __ftol((float10)iVar1 * (float10)_DAT_0054dad0 - (float10)_DAT_0054dad8);
  *(int *)((int)this + 0x2e4) = (int)lVar3;
  FUN_00518560(&DAT_005876d0,(int)lVar3);
  return;
}
