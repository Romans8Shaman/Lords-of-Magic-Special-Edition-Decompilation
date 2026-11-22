
void __thiscall
FUN_00428190(void *this,undefined4 param_1,undefined4 param_2,uint param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = DAT_005788c4;
  uVar3 = DAT_00555d74;
  uVar2 = DAT_00555d70;
  uVar1 = DAT_00555d6c;
  if ((char)param_3 != '\0') {
    DAT_00555d74 = param_1;
    DAT_00555d70 = param_2;
    DAT_00555d6c = *(undefined4 *)((int)this + 0xc);
    DAT_005788c4 = this;
    FUN_004d09a0(DAT_005a7b78,param_3,param_4,0);
  }
  DAT_00555d6c = uVar1;
  DAT_00555d70 = uVar2;
  DAT_00555d74 = uVar3;
  DAT_005788c4 = (void *)uVar4;
  return;
}


