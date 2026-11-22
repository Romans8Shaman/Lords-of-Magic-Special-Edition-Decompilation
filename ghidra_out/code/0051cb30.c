
void __thiscall
FUN_0051cb30(void *this,void *param_1,int param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;
  
  iVar1 = *(int *)((int)this + 0x68);
  if ((iVar1 < 0) || (0xf < iVar1)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)((int)param_1 + iVar1 * 4 + 0x158);
  }
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  if (iVar1 != 0) {
    for (iVar1 = FUN_004c54b0(param_1,*(int *)((int)this + 0x68),0); iVar1 != 0;
        iVar1 = FUN_004c54b0(param_1,*(int *)((int)this + 0x68),iVar1)) {
      psVar2 = FUN_004c70f0(param_1,*(int *)(param_2 + 0x14),0x100000);
      if (psVar2 != (short *)0x0) {
        *param_5 = *param_5 + 1;
      }
      iVar3 = FUN_004517e0(iVar1);
      if (iVar3 != -1) {
        for (psVar2 = FUN_004c70f0(param_1,*(int *)(param_2 + 0x14),0x80000); psVar2 != (short *)0x0
            ; psVar2 = FUN_004c7150(param_1,(int)psVar2,0x80000)) {
          iVar5 = (int)*psVar2;
          piVar4 = FUN_004c6fb0();
          if (piVar4[0x6e] == 0) {
            FUN_004c6660(piVar4);
          }
          if ((((iVar3 < 0) || (iVar5 < 0)) || (piVar4[3] <= iVar3)) || (piVar4[3] <= iVar5)) {
            bVar6 = false;
          }
          else {
            bVar6 = *(short *)(*piVar4 + 4 + iVar3 * 6) == *(short *)(*piVar4 + 4 + iVar5 * 6);
          }
          if (bVar6) {
            *param_4 = *param_4 + 1;
            break;
          }
        }
      }
      for (psVar2 = FUN_004c70f0(param_1,*(int *)(param_2 + 0x14),0x40000); psVar2 != (short *)0x0;
          psVar2 = FUN_004c7150(param_1,(int)psVar2,0x40000)) {
        iVar5 = (int)*psVar2;
        iVar3 = *(int *)(iVar1 + 0x1c);
        piVar4 = FUN_004c6fb0();
        if (piVar4[0x6e] == 0) {
          FUN_004c6660(piVar4);
        }
        if (((iVar3 < 0) || (iVar5 < 0)) || ((piVar4[3] <= iVar3 || (piVar4[3] <= iVar5)))) {
          bVar6 = false;
        }
        else {
          bVar6 = *(short *)(*piVar4 + 2 + iVar3 * 6) == *(short *)(*piVar4 + 2 + iVar5 * 6);
        }
        if (bVar6) {
          *param_3 = *param_3 + 1;
          break;
        }
      }
    }
  }
  return;
}


