
void __thiscall FUN_00426590(void *this,int param_1,uint param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  int local_10;
  int local_c;
  void *local_8;
  int local_4;
  
  if (0 < param_1) {
    do {
      iVar6 = 0;
      local_4 = 1;
      if (0 < *(int *)((int)this + 0x4c)) {
        local_8 = (void *)((int)this + 0xc4);
        do {
          pvVar5 = local_8;
          if (((param_2 & 1 << ((byte)iVar6 & 0x1f)) != 0) &&
             (FUN_00522000(local_8,&local_10,&local_c), local_10 < local_c)) {
            iVar3 = FUN_00528320(pvVar5,1);
            pvVar2 = DAT_005a7b78;
            if (iVar3 != 0) {
              uVar1 = *(undefined4 *)((int)this + 0x28);
              if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
                FUN_004d4550(pvVar2);
                *(undefined4 *)((int)pvVar2 + 0x90) = 0;
                *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
              }
              else {
                iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
                iVar3 = *(int *)((int)pvVar2 + 0x50);
                *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
                *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = uVar1;
              }
              pvVar5 = DAT_005a7b78;
              if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
                FUN_004d4550(pvVar5);
                *(undefined4 *)((int)pvVar5 + 0x90) = 0;
                *(undefined4 *)((int)pvVar5 + 0xa4) = 0;
              }
              else {
                iVar3 = *(int *)((int)DAT_005a7b78 + 0x50);
                iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
                *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
                *(int *)(iVar3 + 4 + iVar4 * 8) = iVar6;
              }
              FUN_004d09a0(DAT_005a7b78,DAT_005a7cf4,DAT_005a7cf8,-2);
              pvVar5 = local_8;
            }
            param_1 = param_1 + -1;
            if (param_1 == 0) {
              return;
            }
            FUN_00522000(pvVar5,&local_10,&local_c);
            if (local_10 < local_c) {
              local_4 = 0;
            }
          }
          iVar6 = iVar6 + 1;
          local_8 = (void *)((int)pvVar5 + 0x4c);
        } while (iVar6 < *(int *)((int)this + 0x4c));
      }
    } while (local_4 == 0);
  }
  return;
}


