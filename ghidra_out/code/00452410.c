
void __thiscall FUN_00452410(void *this,void *param_1,uint param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 local_a4;
  undefined4 local_a0 [10];
  undefined4 local_78;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00549c6b;
  local_c = ExceptionList;
  uVar1 = *(undefined4 *)((int)this + 0x28);
  iVar2 = *(int *)((int)this + 0xd4);
  ExceptionList = &local_c;
  FUN_0043b990(local_a0,*(undefined4 *)((int)this + 0x68),(short)*(undefined4 *)((int)this + 0x74),
               (short)*(undefined4 *)((int)this + 0x80),0,iVar2,uVar1,uVar1,uVar1);
  local_78 = *(undefined4 *)((int)this + 0x28);
  local_4 = 0;
  piVar6 = &DAT_00557310;
  do {
    iVar3 = FUN_0043de80(local_a0,*piVar6);
    if (iVar3 < 0) {
      iVar3 = FUN_0044ede0(this,&local_a4,*piVar6,1,*(int *)((int)this + 0x68));
      if (iVar3 != 0) {
        uVar1 = *(undefined4 *)((int)this + 0x80);
        if (*(int *)((int)param_1 + 0x54) == 0) {
          *(undefined4 *)((int)param_1 + 0x90) = 3;
          FUN_004d4550(param_1);
          *(undefined4 *)((int)param_1 + 0x90) = 0;
          *(undefined4 *)((int)param_1 + 0xa4) = 0;
        }
        else {
          iVar3 = *(int *)((int)param_1 + 0x50);
          iVar4 = *(int *)((int)param_1 + 0x54) + -1;
          *(int *)((int)param_1 + 0x54) = iVar4;
          *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
          *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = uVar1;
        }
        iVar3 = *piVar6;
        if (*(int *)((int)param_1 + 0x54) == 0) {
          FUN_00404ab0(param_1,3);
        }
        else {
          iVar4 = *(int *)((int)param_1 + 0x50);
          iVar5 = *(int *)((int)param_1 + 0x54) + -1;
          *(int *)((int)param_1 + 0x54) = iVar5;
          *(undefined4 *)(iVar4 + iVar5 * 8) = 1;
          *(int *)(iVar4 + 4 + iVar5 * 8) = iVar3;
        }
        if (*(int *)((int)param_1 + 0x54) == 0) {
          FUN_00404ab0(param_1,3);
        }
        else {
          iVar3 = *(int *)((int)param_1 + 0x50);
          iVar4 = *(int *)((int)param_1 + 0x54) + -1;
          *(int *)((int)param_1 + 0x54) = iVar4;
          *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
          *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 1;
        }
        FUN_004d05e0(param_1,param_2,param_3);
        iVar3 = *(int *)((int)param_1 + 0x6c);
        *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)((int)param_1 + 0x70);
        if (iVar3 != 0) goto LAB_0045266f;
      }
    }
    piVar6 = piVar6 + 1;
  } while ((int)piVar6 < 0x55731c);
  iVar2 = iVar2 + 1;
  iVar3 = FUN_0044ede0(this,&local_a4,0,iVar2,*(int *)((int)this + 0x68));
  if (iVar3 != 0) {
    uVar1 = *(undefined4 *)((int)this + 0x80);
    if (*(int *)((int)param_1 + 0x54) == 0) {
      *(undefined4 *)((int)param_1 + 0x90) = 3;
      FUN_004d4550(param_1);
      *(undefined4 *)((int)param_1 + 0x90) = 0;
      *(undefined4 *)((int)param_1 + 0xa4) = 0;
    }
    else {
      iVar3 = *(int *)((int)param_1 + 0x50);
      iVar4 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar4;
      *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = uVar1;
    }
    if (*(int *)((int)param_1 + 0x54) == 0) {
      *(undefined4 *)((int)param_1 + 0x90) = 3;
      FUN_004d4550(param_1);
      *(undefined4 *)((int)param_1 + 0x90) = 0;
      *(undefined4 *)((int)param_1 + 0xa4) = 0;
    }
    else {
      iVar3 = *(int *)((int)param_1 + 0x50);
      iVar4 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar4;
      *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 0;
    }
    if (*(int *)((int)param_1 + 0x54) == 0) {
      *(undefined4 *)((int)param_1 + 0x90) = 3;
      FUN_004d4550(param_1);
      *(undefined4 *)((int)param_1 + 0x90) = 0;
      *(undefined4 *)((int)param_1 + 0xa4) = 0;
    }
    else {
      iVar3 = *(int *)((int)param_1 + 0x50);
      iVar4 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar4;
      *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
      *(int *)(iVar3 + 4 + iVar4 * 8) = iVar2;
    }
    FUN_004d05e0(param_1,param_2,param_3);
    *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)((int)param_1 + 0x70);
  }
LAB_0045266f:
  local_4 = 0xffffffff;
  FUN_0043ba50(local_a0);
  ExceptionList = local_c;
  return;
}


