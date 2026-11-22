/* Rebuilt from lomse.exe FUN_004209e0 @ 0x004209e0 (401 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00420580 ((undefined4 (__fastcall *)(int))0x00420580)
#define FUN_004a4c30 ((undefined4 (__thiscall *)(void *, int))0x004a4c30)
#define FUN_004a4c50 ((uint (__thiscall *)(void *, int))0x004a4c50)
#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)
#define FUN_00521e30 ((uint (__fastcall *)(int *))0x00521e30)
#define FUN_00521e50 ((uint (__fastcall *)(int *))0x00521e50)
#define FUN_00521e70 ((uint (__fastcall *)(int *))0x00521e70)
#define FUN_00522840 ((int (__thiscall *)(void *, undefined4, int))0x00522840)

#define LOM_SELF_004209e0 1
int __thiscall rb_004209e0(void *this,int param_1)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar1 = FUN_00420580((int)this);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = param_1;
  puVar2 = FUN_004c6fc0();
  iVar1 = FUN_004a4c30(puVar2,iVar1);
  iVar6 = 0;
  if ((*(uint *)((int)this + 0x54) & 0x100000) == 0) {
    FUN_004c6fc0();
    puVar2 = FUN_004c6fc0();
    uVar3 = FUN_004a4c50(puVar2,param_1);
    param_1 = 0;
    if ((uVar3 & 0x80000) == 0) {
      if (0 < *(int *)((int)this + 0x4c)) {
        piVar5 = (int *)((int)this + 0xc4);
        do {
          uVar3 = FUN_00521e50(piVar5);
          if (uVar3 != 0) {
            iVar4 = iVar1;
            puVar2 = FUN_004c6fc0();
            iVar4 = FUN_00522840(piVar5,puVar2 + 0xd8,iVar4);
            if (iVar6 < iVar4) {
              iVar6 = iVar1;
              puVar2 = FUN_004c6fc0();
              iVar6 = FUN_00522840(piVar5,puVar2 + 0xd8,iVar6);
            }
          }
          param_1 = param_1 + 1;
          piVar5 = piVar5 + 0x13;
        } while (param_1 < *(int *)((int)this + 0x4c));
      }
    }
    else if (0 < *(int *)((int)this + 0x4c)) {
      piVar5 = (int *)((int)this + 0xc4);
      do {
        uVar3 = FUN_00521e70(piVar5);
        if (uVar3 != 0) {
          iVar4 = iVar1;
          puVar2 = FUN_004c6fc0();
          iVar4 = FUN_00522840(piVar5,puVar2 + 0xd8,iVar4);
          if (iVar6 < iVar4) {
            iVar6 = iVar1;
            puVar2 = FUN_004c6fc0();
            iVar6 = FUN_00522840(piVar5,puVar2 + 0xd8,iVar6);
          }
        }
        param_1 = param_1 + 1;
        piVar5 = piVar5 + 0x13;
      } while (param_1 < *(int *)((int)this + 0x4c));
      return iVar6;
    }
  }
  else {
    param_1 = 0;
    if (0 < *(int *)((int)this + 0x4c)) {
      piVar5 = (int *)((int)this + 0xc4);
      do {
        uVar3 = FUN_00521e30(piVar5);
        if (uVar3 != 0) {
          iVar4 = iVar1;
          puVar2 = FUN_004c6fc0();
          iVar4 = FUN_00522840(piVar5,puVar2 + 0xd8,iVar4);
          if (iVar6 < iVar4) {
            iVar6 = iVar1;
            puVar2 = FUN_004c6fc0();
            iVar6 = FUN_00522840(piVar5,puVar2 + 0xd8,iVar6);
          }
        }
        param_1 = param_1 + 1;
        piVar5 = piVar5 + 0x13;
      } while (param_1 < *(int *)((int)this + 0x4c));
      return iVar6;
    }
  }
  return iVar6;
}
