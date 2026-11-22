
void __cdecl op_drawbox(void *vm)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  void *this;
  void *pvStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  float fStack_10;
  float fStack_c;
  uint uStack_8;
  undefined4 uStack_4;
  
  pvVar1 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar3 = FUN_004026a0(&uStack_8,&uStack_1c,(uint *)&fStack_c,&fStack_10);
  if (iVar3 == 0) {
    FUN_00404ab0(pvVar1,0xe);
    return;
  }
  if (*(int *)((int)pvVar1 + 0x54) < *(int *)((int)pvVar1 + 0x58)) {
    iVar3 = *(int *)((int)pvVar1 + 0x54) + 1;
    *(int *)((int)pvVar1 + 0x54) = iVar3;
    uStack_8 = *(uint *)(*(int *)((int)pvVar1 + 0x50) + -8 + iVar3 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)pvVar1 + 0x50) + -4 + iVar3 * 8);
  }
  else {
    FUN_00404ab0(pvVar1,6);
    uStack_8 = 0;
  }
  iVar3 = FUN_004026a0(&uStack_8,&uStack_18,(uint *)&fStack_10,&fStack_c);
  if (iVar3 == 0) {
    FUN_00404ab0(pvVar1,0xe);
    return;
  }
  FUN_0040adb0(pvVar1,&uStack_8);
  iVar3 = FUN_004026a0(&uStack_8,&uStack_14,(uint *)&fStack_10,&fStack_c);
  if (iVar3 != 0) {
    FUN_0040adb0(pvVar1,&uStack_8);
    iVar3 = FUN_004026a0(&uStack_8,&uStack_24,(uint *)&fStack_10,&fStack_c);
    if (iVar3 != 0) {
      FUN_0040adb0(pvVar1,&uStack_8);
      iVar3 = FUN_004026a0(&uStack_8,(uint *)&pvStack_2c,(uint *)&fStack_10,&fStack_c);
      if (iVar3 != 0) {
        FUN_0040adb0(pvVar1,&uStack_8);
        iVar3 = FUN_004026a0(&uStack_8,&uStack_28,(uint *)&fStack_10,&fStack_c);
        if (iVar3 != 0) {
          FUN_0040adb0(pvVar1,&uStack_8);
          iVar3 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_10,&fStack_c);
          if (iVar3 != 0) {
            FUN_0040adb0(pvVar1,&uStack_8);
            iVar3 = FUN_004026a0(&uStack_8,&uStack_20,(uint *)&fStack_10,&fStack_c);
            if (iVar3 == 0) {
              FUN_00404ab0(pvVar1,0xe);
              return;
            }
            this = (void *)FUN_00491ec0(&DAT_005a7b50,uStack_20);
            if (this == (void *)0x0) {
              FUN_004d41c0(pvVar1,s_no_page_0057260c);
              return;
            }
            iVar3 = FUN_0047efd0(this,uStack_14,uStack_18,uStack_1c);
            uVar2 = uStack_28;
            pvVar1 = vm;
            if ((int)pvStack_2c < (int)vm) {
              vm = pvStack_2c;
              pvStack_2c = pvVar1;
            }
            if ((int)uStack_24 < (int)uStack_28) {
              uStack_28 = uStack_24;
              uStack_24 = uVar2;
            }
            FUN_00497270(this,(int)vm,uStack_28,(int)pvStack_2c + (1 - (int)vm),
                         (uStack_24 - uStack_28) + 1,(short)iVar3);
            return;
          }
        }
      }
    }
  }
  *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
  FUN_004d4550(pvVar1);
  *(undefined4 *)((int)pvVar1 + 0x90) = 0;
  *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  return;
}


