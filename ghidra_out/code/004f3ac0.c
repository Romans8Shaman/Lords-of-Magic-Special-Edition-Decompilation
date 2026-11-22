
void __cdecl FUN_004f3ac0(int param_1,int param_2,int *param_3,undefined4 param_4,void *param_5)

{
  int iVar1;
  
  *param_3 = param_1;
  *(int *)((int)param_5 + 4) = param_2;
  if ((DAT_00584aa4 != 0) && (iVar1 = 0, 0 < param_2)) {
    do {
      DAT_00584aa0 = DAT_00584aa0 + (uint)*(byte *)(iVar1 + param_1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  *(byte *)(*param_3 + 1) = *(byte *)(*param_3 + 1) | 0x40;
  FUN_004f3b20(param_3,param_4,param_5);
  return;
}


