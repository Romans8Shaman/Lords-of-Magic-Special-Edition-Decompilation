
void __fastcall FUN_00511510(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = *(int **)(param_1 + 0x202ac);
  iVar3 = *(int *)(param_1 + 0x202c0) * 8;
  *(int *)(param_1 + 0x234) =
       ((int)((short *)*piVar2)[*(int *)(param_1 + 0x202c0) * 4] - (int)*(short *)*piVar2) + -2;
  *(int *)(param_1 + 600) = (int)*(short *)(*piVar2 + 2 + iVar3) - (int)*(short *)(*piVar2 + 2);
  piVar1 = piVar2 + *(int *)(param_1 + 0x202c4);
  *(int *)(param_1 + 0x238) =
       (int)*(short *)(iVar3 + piVar2[*(int *)(param_1 + 0x202c4)]) - (int)*(short *)*piVar2;
  *(int *)(param_1 + 0x25c) =
       ((int)*(short *)(iVar3 + 2 + *piVar1) - (int)*(short *)(*piVar2 + 2)) + -2;
  *(int *)(param_1 + 0x23c) = ((int)*(short *)*piVar1 - (int)*(short *)*piVar2) + 2;
  iVar3 = *(int *)(param_1 + 0x234);
  *(int *)(param_1 + 0x260) = (int)*(short *)(*piVar1 + 2) - (int)*(short *)(*piVar2 + 2);
  iVar5 = -*(int *)(param_1 + 0x23c);
  *(int *)(param_1 + 0x22c) = iVar5;
  iVar4 = -*(int *)(param_1 + 0x260);
  *(int *)(param_1 + 0x230) = iVar5 + iVar3;
  iVar5 = *(int *)(param_1 + 600);
  *(int *)(param_1 + 0x250) = iVar4;
  *(int *)(param_1 + 0x240) = (*(int *)(param_1 + 0x23c) - iVar3) + 2;
  *(int *)(param_1 + 0x244) = -iVar3;
  *(int *)(param_1 + 0x264) = *(int *)(param_1 + 0x260) - iVar5;
  *(int *)(param_1 + 0x268) = -iVar5;
  *(int *)(param_1 + 0x254) = iVar4 + iVar5;
  *(int *)(param_1 + 0x248) = -*(int *)(param_1 + 0x238);
  *(int *)(param_1 + 0x26c) = -*(int *)(param_1 + 0x25c);
  return;
}


