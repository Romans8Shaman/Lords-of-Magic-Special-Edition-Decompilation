
void __thiscall FUN_0047c370(void *this,int *param_1)

{
  undefined4 *this_00;
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int local_5e8 [375];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054a1eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00411610(local_5e8);
  iVar4 = 0;
  local_4 = 0;
  this_00 = FUN_00485080(&DAT_005aa12c,*param_1,0x6f);
  if ((this_00 == (undefined4 *)0x0) || (iVar2 = this_00[7], iVar2 != param_1[4]))
  goto LAB_0047c479;
  iVar3 = param_1[5];
  if ((this_00[0x15] & 0x100000) == 0) {
LAB_0047c3fc:
    FUN_00415170(this_00,local_5e8,param_1[2]);
    piVar7 = local_5e8;
    piVar6 = param_1;
    puVar1 = FUN_004c6fc0();
    iVar2 = FUN_004b1490(puVar1,piVar7,(int)piVar6);
    FUN_004117f0(local_5e8,0);
    if (iVar2 == 0) {
      param_1[3] = 0;
    }
    else {
      puVar1 = FUN_004c6fc0();
      iVar2 = *(int *)(puVar1 + 0xc0);
      param_1[3] = iVar2;
      if (DAT_005aea2c <= iVar2) {
        param_1[3] = 0;
      }
      iVar2 = param_1[3];
      if (0 < iVar2) {
        do {
          iVar3 = iVar4;
          puVar1 = FUN_004c6fc0();
          iVar3 = FUN_004b13a0(puVar1,iVar3);
          *(char *)(iVar4 + 0x24 + (int)param_1) = (char)iVar3;
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar2);
      }
    }
  }
  else {
    piVar7 = param_1 + 3;
    piVar6 = param_1 + 9;
    puVar5 = this_00;
    puVar1 = FUN_004c6fc0();
    iVar2 = FUN_004b18c0(puVar1,puVar5,iVar2,iVar3,(int)piVar6,piVar7);
    if (iVar2 == 0) goto LAB_0047c3fc;
  }
  FUN_0047bfe0(this,param_1);
LAB_0047c479:
  local_4 = 0xffffffff;
  FUN_00411910(local_5e8);
  ExceptionList = local_c;
  return;
}


