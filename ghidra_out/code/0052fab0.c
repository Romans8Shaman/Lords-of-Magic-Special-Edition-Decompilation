
void __thiscall FUN_0052fab0(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_0052bc40((int)this);
  for (iVar1 = FUN_004fbe60(&DAT_005ae974,0,0); iVar1 != 0;
      iVar1 = FUN_004fbe60(&DAT_005ae974,iVar1,0)) {
    iVar2 = FUN_00407d50(iVar1);
    if (((iVar2 == 0) && (*(int *)(iVar1 + 0x48) == *(int *)this)) &&
       ((param_1 & 1 << (*(byte *)(iVar1 + 0x5ac) & 0x1f)) != 0)) {
      FUN_0052dda0(this,iVar1);
    }
  }
  FUN_004d05e0(DAT_005a7b78,DAT_005a7bcc,DAT_005a7bd0);
  return;
}


