
void __thiscall FUN_0042d750(void *this,int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  *(int *)((int)this + 8) = param_1;
  puVar2 = (uint *)FUN_0042e130(&DAT_005cd334,param_1);
  if (param_1 == -1) {
    FUN_0042d720((int)this);
  }
  if (puVar2 == (uint *)0x0) {
    FUN_0042d4f0((int)this);
    return;
  }
  uVar1 = puVar2[8];
  *(undefined4 *)this = param_2;
  *(uint *)((int)this + 4) = uVar1;
  iVar3 = FUN_0042dcf0(puVar2);
  FUN_0042d570((int *)((int)this + 0x10),iVar3);
  iVar3 = FUN_0042dd70(puVar2);
  FUN_0042d570((int *)((int)this + 0x14),iVar3);
  iVar3 = FUN_0042ddf0(puVar2);
  FUN_0042d570((int *)((int)this + 0x18),iVar3);
  iVar3 = FUN_0042de70(puVar2);
  FUN_0042d570((int *)((int)this + 0x1c),iVar3);
  if (-1 < param_3) {
    FUN_0042d6b0(this,param_3);
  }
  return;
}


