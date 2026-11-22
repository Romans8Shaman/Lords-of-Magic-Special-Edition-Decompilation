
void __thiscall FUN_0048f370(void *this,undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar3 = 0;
  if (0 < *(int *)((int)this + 0x50)) {
    iVar2 = 0;
    do {
      FUN_0048f230((void *)(*(int *)((int)this + 0x4c) + iVar2),param_1,param_2);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x2c;
    } while (iVar3 < *(int *)((int)this + 0x50));
  }
  piVar1 = (int *)FUN_00492760(&DAT_005a7b50,*(int *)((int)this + 8));
  if ((piVar1 != (int *)0x0) && ((*(byte *)(*piVar1 + 0x14) & 0x10) != 0)) {
    FUN_0048ec90(this,&local_10);
    FUN_00476010(&DAT_005a7aa4,local_10,local_c,local_8,local_4);
    FUN_00476010(&DAT_005a7a14,local_10,local_c,local_8,local_4);
    FUN_00500650(&DAT_00584ae8,local_10,local_c,local_8,local_4);
  }
  return;
}


