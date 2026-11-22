/* Rebuilt from lomse.exe FUN_0048c9e0 @ 0x0048c9e0 (336 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583560 (*(undefined4 *)0x00583560)
#define DAT_00583570 (*(undefined4 *)0x00583570)
#define DAT_005af150 (*(int *)0x005af150)
#define DAT_005d1e84 (*(void * *)0x005d1e84)
#define FUN_0048a400 ((undefined4 (__fastcall *)(int))0x0048a400)
#define FUN_0048c050 ((undefined4 (__fastcall *)(int))0x0048c050)
#define FUN_0048c2b0 ((int (__fastcall *)(int))0x0048c2b0)
#define FUN_0048cb80 ((uint (__fastcall *)(void *))0x0048cb80)
#define FUN_004b7890 ((int (__thiscall *)(void *, int))0x004b7890)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)

#define LOM_SELF_0048c9e0 1
void __fastcall rb_0048c9e0(void *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  void *this;
  uint uVar6;
  
  puVar2 = (undefined4 *)FUN_0048c2b0((int)param_1);
  if ((puVar2 != (undefined4 *)0x0) && (*(char *)((int)param_1 + 4) != '=')) {
    puVar2[2] = DAT_00583560;
    *puVar2 = 0xfffffffe;
    puVar2[1] = 0;
    iVar3 = FUN_0048a400(0x584ae8);
    if ((iVar3 == 2) || (iVar3 = FUN_0048a400(0x584ae8), iVar3 == 1)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      uVar6 = 0;
      iVar3 = 1;
      this = DAT_005d1e84;
      while( true ) {
        if ((this == (void *)0x0) || (iVar4 = *(int *)((int)this + 0x100), iVar4 < 1)) {
          iVar4 = 1;
        }
        if (iVar4 < iVar3) break;
        if (this == (void *)0x0) {
          iVar4 = 1;
        }
        else {
          iVar4 = FUN_004b7dd0((int)this);
          this = DAT_005d1e84;
        }
        if (iVar3 != iVar4) {
          if (this == (void *)0x0) {
            iVar4 = 0;
          }
          else {
            iVar4 = FUN_004b7890(this,iVar3);
            this = DAT_005d1e84;
          }
          if ((iVar4 != 0) && (*(int *)(iVar4 + 4) != 0)) {
            uVar6 = uVar6 | 1 << ((byte)iVar3 & 0x1f);
          }
        }
        iVar3 = iVar3 + 1;
      }
      uVar5 = FUN_0048cb80(param_1);
      puVar2[1] = uVar5 & uVar6;
      FUN_0048c050((int)param_1);
      switch(*(undefined1 *)((int)param_1 + 4)) {
      case 0x13:
      case 0x14:
      case 0x1f:
      case 0x32:
        *puVar2 = DAT_00583570;
        if (*(char *)((int)param_1 + 4) != '\x1f') {
          if (*(char *)((int)param_1 + 4) == '2') {
            puVar2[1] = 0;
            return;
          }
          return;
        }
        break;
      default:
        goto switchD_0048cae3_caseD_15;
      case 0x3e:
        *puVar2 = 0;
        return;
      case 0x41:
        if (DAT_005af150 < 1) {
          return;
        }
        *puVar2 = DAT_00583560;
      }
      puVar2[1] = 0;
    }
  }
switchD_0048cae3_caseD_15:
  return;
}
