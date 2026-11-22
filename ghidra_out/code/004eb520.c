
int * __thiscall FUN_004eb520(void *this,int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0054b7eb;
  local_c = ExceptionList;
  iVar5 = 0;
  DAT_00583650 = DAT_00583650 + 0x10;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  piVar4 = (int *)((int)this + 0x4c);
  DAT_00584728 = DAT_00584728 + 0x158;
  local_4 = 0;
  iVar3 = 6;
  piVar1 = piVar4;
  do {
    piVar1[-6] = 0;
    *piVar1 = 0;
    piVar1[-0xe] = 100;
    piVar1 = piVar1 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = FUN_00492760(&DAT_005a7b50,*param_1);
  *(int *)((int)this + 0x2c) = iVar3;
  puVar2 = (undefined4 *)FUN_00492910(&DAT_005a7b50,param_1[1]);
  if (puVar2 == (undefined4 *)0x0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  else {
    *(undefined4 *)((int)this + 4) = *puVar2;
    *(undefined4 *)((int)this + 8) = puVar2[1];
    *(undefined4 *)((int)this + 0xc) = puVar2[2];
    *(undefined4 *)((int)this + 0x10) = puVar2[3];
  }
  iVar3 = FUN_00492760(&DAT_005a7b50,param_1[2]);
  *(int *)((int)this + 0x30) = iVar3;
  iVar3 = param_1[3];
  *(int *)this = iVar3;
  if (0 < iVar3 + 1) {
    piVar1 = param_1 + 10;
    do {
      iVar3 = FUN_00492760(&DAT_005a7b50,piVar1[-6]);
      piVar4[-6] = iVar3;
      iVar3 = FUN_00492760(&DAT_005a7b50,*piVar1);
      *piVar4 = iVar3;
      iVar5 = iVar5 + 1;
      piVar1 = piVar1 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar5 < *(int *)this + 1);
  }
  *(int *)((int)this + 0xd4) = param_1[0x12];
  *(int *)((int)this + 100) = param_1[0x10];
  *(int *)((int)this + 0x68) = param_1[0x11];
  *(undefined4 *)((int)this + 0xd0) = 0xffffffff;
  puVar2 = (undefined4 *)((int)this + 0x14);
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = 100;
    puVar2 = puVar2 + 1;
  }
  FUN_004eb680(this,0,0);
  ExceptionList = local_c;
  return this;
}


