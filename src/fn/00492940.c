/* Rebuilt from lomse.exe FUN_00492940 @ 0x00492940 (485 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583658 (*(int *)0x00583658)
#define FUN_0046ba20 ((undefined4 (__stdcall *)(void))0x0046ba20)
#define FUN_00491c20 ((int (__thiscall *)(void *, int))0x00491c20)
#define FUN_00491c70 ((int (__fastcall *)(int *))0x00491c70)
#define FUN_00492760 ((int (__thiscall *)(void *, int))0x00492760)
#define FUN_00492910 ((int (__thiscall *)(void *, int))0x00492910)
#define FUN_00539ff0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *, undefined4))0x00539ff0)
#define LAB_00474de0 (*(undefined *)0x00474de0) /* code label used as address */
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_00492940 1
int __thiscall
rb_00492940(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;

  iVar1 = FUN_00491c70(this);
  puVar2 = (undefined4 *)FUN_00491c20(this,iVar1);
  if (puVar2 == (undefined4 *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar3 = FUN_00492760(this,param_1);
    if (iVar3 == 0) {
      iVar1 = -1;
    }
    else {
      iVar4 = FUN_00492760(this,param_2);
      if (iVar4 == 0) {
        iVar1 = -1;
      }
      else {
        piVar5 = (int *)FUN_00492910(this,param_3);
        if (piVar5 == (int *)0x0) {
          iVar1 = -1;
        }
        else {
          piVar6 = (int *)FUN_00492910(this,param_4);
          if (piVar6 == (int *)0x0) {
            iVar1 = -1;
          }
          else {
            piVar7 = (int *)FUN_00492910(this,param_5);
            if (piVar7 == (int *)0x0) {
              iVar1 = -1;
            }
            else {
              piVar8 = (int *)FUN_00492910(this,param_6);
              if (piVar8 == (int *)0x0) {
                iVar1 = -1;
              }
              else {
                piVar9 = (int *)Ordinal_401(0x4c,s_C__lomse_source_storm_h_00555130,0x3ef,0);
                if (piVar9 == (int *)0x0) {
                  piVar9 = (int *)0x0;
                }
                else {
                  FUN_00539ff0(piVar9 + 2,0x10,4,&LAB_00474de0,FUN_0046ba20);
                  DAT_00583658 = DAT_00583658 + 0x4c;
                  *piVar9 = iVar3;
                  piVar9[1] = iVar4;
                  piVar9[2] = *piVar5;
                  piVar9[3] = piVar5[1];
                  piVar9[4] = piVar5[2];
                  piVar9[5] = piVar5[3];
                  piVar9[6] = *piVar6;
                  piVar9[7] = piVar6[1];
                  piVar9[8] = piVar6[2];
                  piVar9[9] = piVar6[3];
                  piVar9[10] = *piVar7;
                  piVar9[0xb] = piVar7[1];
                  piVar9[0xc] = piVar7[2];
                  piVar9[0xd] = piVar7[3];
                  piVar9[0xe] = *piVar8;
                  piVar9[0xf] = piVar8[1];
                  piVar9[0x10] = piVar8[2];
                  iVar3 = piVar8[3];
                  piVar9[0x12] = 0;
                  piVar9[0x11] = iVar3;
                }
                puVar2[1] = piVar9;
                if (piVar9 == (int *)0x0) {
                  iVar1 = -1;
                }
                else {
                  *puVar2 = 2;
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar1;
}
