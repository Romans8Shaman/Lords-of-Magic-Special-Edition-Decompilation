
uint __thiscall FUN_00529360(void *this,uint param_1,uint param_2,int param_3)

{
  bool bVar1;
  byte bVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  
  puVar3 = (uint *)FUN_004efe80(&DAT_005aee6c,param_3);
  bVar1 = false;
  if (param_2 == 3) {
    if (puVar3[4] != 3) goto LAB_0052939e;
  }
  else if (((param_1 & *puVar3) == 0) || (puVar3[4] != param_2)) goto LAB_0052939e;
  bVar1 = true;
LAB_0052939e:
  iVar4 = FUN_00521e00(this);
  bVar2 = 0;
  if (bVar1) {
    bVar2 = 0;
    iVar5 = FUN_00525fc0(this);
    if (((iVar5 == 0) && ((int)puVar3[0xe] <= *(int *)(*(int *)((int)this + 0x14) + 0xc))) &&
       (((iVar4 != 0 && (*(uint *)(iVar4 + 0x1c) == puVar3[2])) ||
        (iVar4 = FUN_004287c0(this,param_3), iVar4 != 0)))) {
      bVar2 = 1;
    }
  }
  return (uint)bVar2;
}


