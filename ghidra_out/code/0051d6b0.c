
void __thiscall FUN_0051d6b0(void *this,void *param_1,uint param_2,int *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  bool bVar9;
  
  iVar4 = FUN_0051b870(param_4);
  if (iVar4 != 0) {
    for (piVar5 = (int *)FUN_0051bd00(0); piVar5 != (int *)0x0;
        piVar5 = (int *)FUN_0051bd00((int)piVar5)) {
      if ((piVar5[0x12] == *(int *)((int)this + 0x68)) && (iVar6 = FUN_0051c170(piVar5), iVar6 != 0)
         ) {
        bVar3 = false;
        iVar6 = FUN_0051bd40(iVar4,0);
        while ((iVar6 != 0 && (!bVar3))) {
          uVar1 = piVar5[0x15];
          iVar2 = *(int *)(iVar6 + 0x1c);
          iVar8 = piVar5[7];
          piVar7 = FUN_004c6fb0();
          if ((uVar1 & 0x100000) == 0) {
            if (((uVar1 & 0x40000) == 0) || ((uVar1 & 0x80000) == 0)) {
              if ((uVar1 & 0x40000) == 0) {
                if ((uVar1 & 0x80000) != 0) {
                  if (piVar7[0x6e] == 0) {
                    FUN_004c6660(piVar7);
                  }
                  if ((((-1 < iVar8) && (-1 < iVar2)) && (iVar8 < piVar7[3])) && (iVar2 < piVar7[3])
                     ) {
                    bVar9 = *(short *)(*piVar7 + 4 + iVar8 * 6) ==
                            *(short *)(*piVar7 + 4 + iVar2 * 6);
                    goto LAB_0051d812;
                  }
                }
              }
              else {
                if (piVar7[0x6e] == 0) {
                  FUN_004c6660(piVar7);
                }
                if (((-1 < iVar8) && (-1 < iVar2)) && ((iVar8 < piVar7[3] && (iVar2 < piVar7[3]))))
                {
                  bVar9 = *(short *)(*piVar7 + 2 + iVar8 * 6) == *(short *)(*piVar7 + 2 + iVar2 * 6)
                  ;
                  goto LAB_0051d812;
                }
              }
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
          }
          else {
            bVar9 = true;
          }
LAB_0051d812:
          if (bVar9) {
            bVar3 = true;
          }
          iVar6 = FUN_0051bd40(iVar4,iVar6);
        }
        if (bVar3) {
          iVar6 = piVar5[10];
          if (*(int *)((int)param_1 + 0x54) == 0) {
            *(undefined4 *)((int)param_1 + 0x90) = 3;
            FUN_004d4550(param_1);
            *(undefined4 *)((int)param_1 + 0x90) = 0;
            *(undefined4 *)((int)param_1 + 0xa4) = 0;
          }
          else {
            iVar2 = *(int *)((int)param_1 + 0x50);
            iVar8 = *(int *)((int)param_1 + 0x54) + -1;
            *(int *)((int)param_1 + 0x54) = iVar8;
            *(undefined4 *)(iVar2 + iVar8 * 8) = 1;
            *(int *)(iVar2 + 4 + iVar8 * 8) = iVar6;
          }
          FUN_004d05e0(param_1,param_2,param_3);
          iVar6 = *(int *)((int)param_1 + 0x6c);
          *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)((int)param_1 + 0x70);
          if (iVar6 != 0) {
            return;
          }
        }
      }
    }
  }
  return;
}


