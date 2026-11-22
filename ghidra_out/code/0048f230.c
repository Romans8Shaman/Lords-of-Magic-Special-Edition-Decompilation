
void __thiscall FUN_0048f230(void *this,undefined4 param_1,int param_2)

{
  int *this_00;
  void *this_01;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar4 = *(int *)(*(int *)((int)this + 0x28) + 0x3c) + *(int *)this;
  iVar3 = *(int *)((int)this + 4) + *(int *)(*(int *)((int)this + 0x28) + 0x40);
  this_00 = (int *)FUN_00491c20(&DAT_005a7b50,*(int *)((int)this + 0xc));
  if (this_00 == (int *)0x0) {
    this_01 = (void *)FUN_005005f0(&DAT_00584ae8,*(uint *)((int)this + 0xc));
    if (this_01 != (void *)0x0) {
      FUN_00490290(this_01,iVar4,iVar3);
      FUN_0048f370(this_01,param_1,0);
      return;
    }
  }
  else {
    if (((DAT_0055c338 != 0) && (param_2 != 0)) && (DAT_005d20a0 != 0)) {
      iVar1 = FUN_00493330(&DAT_005a7b50,*(int *)((int)this + 0xc));
      if (((iVar1 != 0) && ((*(byte *)(iVar1 + 0xc) & 0x10) != 0)) &&
         (DAT_00583618 = DAT_00583618 + 1, DAT_0058360c <= DAT_00583618)) {
        FUN_004983c0(&DAT_005d20a0,*(undefined4 *)((int)this + 0x28),
                     *(undefined4 *)((int)this + 0x28),*(undefined4 *)((int)this + 0xc));
        DAT_00583618 = 0;
        DAT_0058360c = DAT_0055c334;
      }
    }
    iVar3 = FUN_00491910(this_00,&local_10,iVar4,iVar3);
    if (iVar3 != 0) {
      FUN_004935a0(this_00,param_1,param_1);
      uVar2 = FUN_00493520(this_00);
      if (uVar2 != 0) {
        FUN_00500650(&DAT_00584ae8,local_10,local_c,local_8,local_4);
      }
    }
  }
  return;
}


