
int __fastcall FUN_004b0ab0(uint *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (&DAT_005a8078)[DAT_005a7d8c * 0x100];
  FUN_004b0c60((int *)(param_1 + 6),(int *)(param_1 + 9),*param_1,(int *)param_1[1],uVar1);
  iVar2 = FUN_004b0c60((int *)(param_1 + 7),(int *)(param_1 + 10),param_1[2],(int *)param_1[3],uVar1
                      );
  FUN_004b0c60((int *)(param_1 + 8),(int *)(param_1 + 0xb),param_1[4],(int *)param_1[5],uVar1);
  return iVar2;
}


