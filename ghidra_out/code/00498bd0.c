
int __thiscall FUN_00498bd0(void *this,undefined4 *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054ad9b;
  local_c = ExceptionList;
  if ((param_2 == 0) || (0x13 < *(int *)((int)this + 0x50))) {
    return -1;
  }
  ExceptionList = &local_c;
  if (*(int *)((int)this + *(int *)((int)this + 0x50) * 4) == 0) {
    ExceptionList = &local_c;
    iVar1 = Ordinal_401(0xa4,s_C__lomse_source_storm_h_00555130,0x3ef,0);
    uStack_4 = 0;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00498af0(iVar1);
    }
    *(undefined4 *)((int)this + *(int *)((int)this + 0x50) * 4) = uVar2;
  }
  uStack_4 = 0xffffffff;
  iVar1 = *(int *)((int)this + 0x50);
  FUN_00498b40(*(void **)((int)this + iVar1 * 4),param_1,param_2);
  *(int *)((int)this + 0x50) = *(int *)((int)this + 0x50) + 1;
  ExceptionList = local_c;
  return iVar1;
}


