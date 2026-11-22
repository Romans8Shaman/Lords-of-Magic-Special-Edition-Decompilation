/* Rebuilt from lomse.exe FUN_004fe9f0 @ 0x004fe9f0 (207 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004fe9f0 1
int __thiscall rb_004fe9f0(void *this,int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  
  if (*(int *)this != 0) {
    uVar2 = *(uint *)((int)this + 0x10);
    if (((uVar2 < *(uint *)((int)this + 8)) && (param_1 != 0)) && (0 < param_2)) {
      bVar3 = false;
      bVar4 = false;
      pcVar7 = (char *)(*(int *)this + uVar2);
      uVar6 = 0;
      if (*(uint *)((int)this + 8) + uVar2 != 0) {
        iVar5 = param_1 - (int)pcVar7;
        do {
          cVar1 = *pcVar7;
          if (cVar1 == '\n') {
            if (bVar3) break;
            bVar3 = true;
          }
          else if (cVar1 == '\r') {
            if (bVar4) break;
            bVar4 = true;
          }
          else if ((bVar4) || (bVar3)) break;
          if ((int)uVar6 < param_2 + -1) {
            pcVar7[iVar5] = cVar1;
          }
          uVar6 = uVar6 + 1;
          pcVar7 = pcVar7 + 1;
        } while (uVar6 < (uint)(*(int *)((int)this + 8) + *(int *)((int)this + 0x10)));
      }
      *(uint *)((int)this + 0x10) = *(int *)((int)this + 0x10) + uVar6;
      if ((int)uVar6 < param_2) {
        *(undefined1 *)(uVar6 + param_1) = 0;
        return param_1;
      }
      *(undefined1 *)(param_2 + -1 + param_1) = 0;
      return param_1;
    }
  }
  return 0;
}
