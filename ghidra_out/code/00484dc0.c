
void __thiscall FUN_00484dc0(void *this,int param_1)

{
  int iVar1;
  
  if ((*(int *)((int)this + 0x5064) != param_1) &&
     (*(int *)((int)this + 0x5064) = param_1, param_1 == 0)) {
    for (iVar1 = FUN_004fbe60((void *)((int)this + 0x4848),0,0); iVar1 != 0;
        iVar1 = FUN_004fbe60((void *)((int)this + 0x4848),iVar1,0)) {
      *(byte *)(iVar1 + 0x34) = *(byte *)(iVar1 + 0x34) | 2;
    }
  }
  return;
}


