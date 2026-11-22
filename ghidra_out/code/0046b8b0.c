
undefined4 * __thiscall FUN_0046b8b0(void *this,undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  char *unused_stack_0;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00549e0b;
  pvStack_c = ExceptionList;
  DAT_0058312c = DAT_0058312c + 0x54;
  ExceptionList = &pvStack_c;
  FUN_0046b870(this);
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 8) = param_1[1];
  iVar3 = param_1[0x4b2];
  if ((iVar3 < 1) || (100 < iVar3)) {
    unused_stack_0 = s_too_many_spots_005578f0;
  }
  else {
    piVar1 = (int *)Ordinal_401(iVar3 * 0x30 + 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    uStack_4 = 0;
    if (piVar1 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = piVar1 + 1;
      *piVar1 = iVar3;
      FUN_00539ff0(piVar2,0x30,iVar3,&LAB_00474de0,FUN_0046ba20);
    }
    *(int **)((int)this + 4) = piVar2;
    uStack_4 = 0xffffffff;
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)((int)this + 0x44) = param_1[0x4b9];
      iVar3 = param_1[0x4b2];
      iVar6 = 0;
      *(int *)((int)this + 0xc) = iVar3;
      if (0 < iVar3) {
        iVar3 = 0;
        puVar5 = param_1 + 2;
        do {
          puVar7 = puVar5;
          puVar8 = (undefined4 *)(*(int *)((int)this + 4) + iVar3);
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          iVar6 = iVar6 + 1;
          iVar3 = iVar3 + 0x30;
          puVar5 = puVar5 + 0xc;
        } while (iVar6 < *(int *)((int)this + 0xc));
      }
      *(undefined4 *)((int)this + 0x10) = param_1[0x4b7];
      *(undefined4 *)((int)this + 0x14) = param_1[0x4b8];
      *(undefined4 *)((int)this + 0x18) = param_1[0x4b3];
      *(undefined4 *)((int)this + 0x1c) = param_1[0x4b4];
      *(undefined4 *)((int)this + 0x20) = param_1[0x4b5];
      *(undefined4 *)((int)this + 0x24) = param_1[0x4b6];
      *(undefined4 *)((int)this + 0x28) = 0xffffffff;
      *(undefined4 *)((int)this + 0x2c) = 0xffffffff;
      *(undefined4 *)((int)this + 0x34) = 0;
      *(undefined4 *)((int)this + 0x38) = 0xffffffff;
      *(undefined4 *)((int)this + 0x3c) = 0;
      *(undefined4 *)((int)this + 0x40) = 0;
      ExceptionList = pvStack_c;
      return this;
    }
    unused_stack_0 = s_Out_of_memory_00557900;
  }
  FUN_005047d0(unused_stack_0);
  ExceptionList = pvStack_c;
  return this;
}


