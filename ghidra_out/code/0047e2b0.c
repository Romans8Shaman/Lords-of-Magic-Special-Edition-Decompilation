
undefined4 __thiscall FUN_0047e2b0(void *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  iVar2 = FUN_004f5bb0(this,param_1);
  if (iVar2 == 0) {
    return 0;
  }
  bVar1 = FUN_004b0700((void *)((int)this + 0x88),&iStack_10,*(int *)((int)this + 0x14),
                       *(int *)((int)this + 0x18));
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar2 = *param_1;
    if (iStack_10 <= *param_1) {
      iVar2 = iStack_10;
    }
    *param_1 = iVar2;
    iVar2 = param_1[1];
    if (iStack_c <= param_1[1]) {
      iVar2 = iStack_c;
    }
    param_1[1] = iVar2;
    iVar2 = param_1[2];
    if (param_1[2] < iStack_8) {
      iVar2 = iStack_8;
    }
    param_1[2] = iVar2;
    iVar2 = param_1[3];
    if (param_1[3] < iStack_4) {
      iVar2 = iStack_4;
    }
    param_1[3] = iVar2;
  }
  return 1;
}


