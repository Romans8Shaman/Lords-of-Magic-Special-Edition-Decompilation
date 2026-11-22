
undefined4 __thiscall FUN_004c7450(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  LPCRITICAL_SECTION local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054b74b;
  local_c = ExceptionList;
  local_10 = (LPCRITICAL_SECTION)((int)this + 0x1bc);
  ExceptionList = &local_c;
  EnterCriticalSection(local_10);
  local_1c = 1;
  FUN_005397f0((char *)&local_14,4,1,param_1);
  FUN_005397f0((char *)&local_18,4,1,param_1);
  if (local_18 * local_14 != 0) {
    iVar1 = FUN_004c5ef0(this,local_14,local_18);
    if (iVar1 == 0) {
      local_1c = 0;
      goto LAB_004c7616;
    }
    FUN_005397f0(*(char **)this,*(int *)((int)this + 0xc) * 6,1,param_1);
  }
  FUN_005397f0((char *)&local_20,4,1,param_1);
  if (local_20 < 1) {
    local_1c = 0;
  }
  else {
    iVar1 = *(int *)((int)this + 0x1ac);
    if ((iVar1 != 0) && (*(int *)((int)this + 0x1b0) != local_20)) {
      if (iVar1 != 0) {
        FUN_00539eb0(iVar1,0x19c,*(int *)(iVar1 + -4),FUN_004c5210);
        if (iVar1 + -4 != 0) {
          Ordinal_403(iVar1 + -4,s_C__lomse_source_storm_h_00555130,0x3f6,0);
        }
      }
      *(undefined4 *)((int)this + 0x1ac) = 0;
    }
    iVar1 = local_20;
    if (*(int *)((int)this + 0x1ac) == 0) {
      piVar4 = (int *)0x0;
      piVar2 = (int *)Ordinal_401(local_20 * 0x19c + 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
      uStack_4 = 0;
      if (piVar2 != (int *)0x0) {
        piVar4 = piVar2 + 1;
        *piVar2 = iVar1;
        FUN_00539ff0(piVar4,0x19c,iVar1,FUN_004c5200,FUN_004c5210);
      }
      uStack_4 = 0xffffffff;
      *(int **)((int)this + 0x1ac) = piVar4;
      if (piVar4 == (int *)0x0) {
        local_1c = 0;
        goto LAB_004c7616;
      }
    }
    *(int *)((int)this + 0x1b0) = local_20;
    if ((local_20 != 0) && (iVar1 = 0, 0 < local_20)) {
      iVar3 = 0;
      do {
        FUN_004c5950((void *)(*(int *)((int)this + 0x1ac) + iVar3),param_1);
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + 0x19c;
      } while (iVar1 < *(int *)((int)this + 0x1b0));
    }
    FUN_004c5950((void *)((int)this + 0x10),param_1);
  }
LAB_004c7616:
  LeaveCriticalSection(local_10);
  ExceptionList = local_c;
  return local_1c;
}


