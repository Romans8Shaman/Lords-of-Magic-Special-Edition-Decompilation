
void __thiscall FUN_00404000(void *this,int *param_1)

{
  int *this_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 local_9;
  int local_8;
  int local_4;
  
  this_00 = param_1;
  if (param_1[7] != *(int *)((int)this + 8)) {
    iVar1 = FUN_004a8960(&DAT_005ae958,param_1[7],*(int *)((int)this + 8));
    uVar2 = FUN_004a8b50(&DAT_005ae958,this_00[7],*(int *)((int)this + 8));
    iVar3 = FUN_004edc30(&DAT_005ae958,*(int *)((int)this + 8),this_00[0x15]);
    if ((iVar3 != 0) || (2 < iVar1)) {
      FUN_00407fd0(this,this_00,0,iVar1,uVar2,0,*(int *)((int)this + 8));
      return;
    }
  }
  FUN_00498e70(this_00,&local_4,&local_8,&local_9,(undefined1 *)&param_1);
  if (((this_00[0x11] == (int)(char)param_1) || ((char)param_1 < '\0')) || ('\a' < (char)param_1)) {
    FUN_00403c30(this,this_00);
    return;
  }
  FUN_004193e0(this_00,(int)(char)param_1);
  return;
}


