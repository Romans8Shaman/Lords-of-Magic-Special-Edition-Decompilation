/* Rebuilt from lomse.exe FUN_004c60f0 @ 0x004c60f0 (108 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055d978 (*(undefined *)0x0055d978)
#define DAT_0055d998 (*(undefined *)0x0055d998)

#define LOM_SELF_004c60f0 1
uint __thiscall rb_004c60f0(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)((int)this + 4);
  iVar4 = param_1 % iVar1 + *(int *)(&DAT_0055d978 + param_2 * 4);
  iVar2 = param_1 / iVar1 + *(int *)(&DAT_0055d998 + param_2 * 4);
  if ((((iVar4 < 0) || (iVar1 <= iVar4)) || (iVar2 < 0)) || (*(int *)((int)this + 8) <= iVar2)) {
    return 0;
  }
  uVar3 = *(int *)(&DAT_0055d998 + param_2 * 4) * iVar1 + *(int *)(&DAT_0055d978 + param_2 * 4);
  return ~-(uint)((*(byte *)(*(int *)this + 1 + (param_1 + uVar3) * 6) & 1) != 0) & uVar3;
}
