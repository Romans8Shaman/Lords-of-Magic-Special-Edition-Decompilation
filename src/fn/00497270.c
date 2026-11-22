/* Rebuilt from lomse.exe FUN_00497270 @ 0x00497270 (248 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00497270 1
void __thiscall
rb_00497270(void *this,int param_1,int param_2,uint param_3,int param_4,undefined2 param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  uVar5 = param_3;
  if (param_1 < 0) {
    uVar5 = param_3 + param_1;
    param_1 = 0;
  }
  if (param_2 < 0) {
    param_4 = param_4 + param_2;
    param_2 = 0;
  }
  if (*(int *)((int)this + 4) <= (int)(uVar5 + param_1)) {
    uVar5 = *(int *)((int)this + 4) - param_1;
  }
  if (*(int *)((int)this + 8) <= param_4 + param_2) {
    param_4 = *(int *)((int)this + 8) - param_2;
  }
  uVar1 = *(uint *)((int)this + 0xc);
  if ((*(byte *)((int)this + 0x14) & 4) == 0) {
    puVar3 = (undefined4 *)(param_2 * uVar1 + *(int *)this + param_1);
    if (-1 < (int)(param_4 - 1U)) {
      param_3 = param_4;
      do {
        puVar4 = puVar3;
        for (uVar2 = uVar5 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar4 = CONCAT22(CONCAT11((undefined1)param_5,(undefined1)param_5),
                             CONCAT11((undefined1)param_5,(undefined1)param_5));
          puVar4 = puVar4 + 1;
        }
        for (uVar2 = uVar5 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined1 *)puVar4 = (undefined1)param_5;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        }
        puVar3 = (undefined4 *)((int)puVar3 + uVar1);
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
  }
  else {
    puVar3 = (undefined4 *)((uVar1 & 0xfffffffe) * param_2 + param_1 * 2 + *(int *)this);
    if (0 < param_4) {
      do {
        puVar4 = puVar3;
        if (0 < (int)uVar5) {
          puVar4 = (undefined4 *)((int)puVar3 + uVar5 * 2);
          for (uVar2 = uVar5 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar3 = CONCAT22(param_5,param_5);
            puVar3 = puVar3 + 1;
          }
          for (uVar2 = (uint)((uVar5 & 1) != 0); uVar2 != 0; uVar2 = uVar2 - 1) {
            *(undefined2 *)puVar3 = param_5;
            puVar3 = (undefined4 *)((int)puVar3 + 2);
          }
        }
        puVar3 = (undefined4 *)((int)puVar4 + (((int)uVar1 >> 1) - uVar5) * 2);
        param_4 = param_4 - 1;
      } while (param_4 != 0);
      return;
    }
  }
  return;
}
