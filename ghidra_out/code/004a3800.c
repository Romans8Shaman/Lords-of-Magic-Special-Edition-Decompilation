
void __thiscall FUN_004a3800(void *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = FUN_0053a110();
  iVar1 = (param_3 - param_1 >> 1) + -0x28 +
          param_1 + ((int)(uVar3 * 0x50 + ((int)(uVar3 * 0x50) >> 0x1f & 0x7fffU)) >> 0xf);
  uVar3 = FUN_0053a110();
  iVar2 = (param_4 - param_2 >> 1) + -0x28 +
          param_2 + ((int)(uVar3 * 0x50 + ((int)(uVar3 * 0x50) >> 0x1f & 0x7fffU)) >> 0xf);
  FUN_004a3360(this,param_1,param_2,iVar1,iVar2);
  FUN_004a3360(this,iVar1,iVar2,param_3,param_4);
  return;
}


