
int * __thiscall FUN_004ad050(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054b1d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f59a0(this);
  *(undefined ***)this = &PTR_FUN_0054daf8;
  DAT_00583a00 = DAT_00583a00 + 0x148;
  local_4 = 0;
  FUN_004acfe0((int)this);
  piVar2 = (int *)((int)this + 0x44);
  for (iVar1 = 0x17; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = *param_1;
    param_1 = param_1 + 1;
    piVar2 = piVar2 + 1;
  }
  FUN_004ad260(this);
  ExceptionList = local_c;
  return this;
}


