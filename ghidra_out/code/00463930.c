
void __cdecl op_waypointsattack(void *vm)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uStack_8c;
  undefined4 uStack_88;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  float fStack_78;
  float fStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  undefined4 uStack_60;
  float fStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint auStack_50 [20];
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    fStack_80 = *(float *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    uStack_7c = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_7c = uStack_88;
    fStack_80 = 0.0;
  }
  iVar2 = FUN_004026a0((uint *)&fStack_80,(uint *)&fStack_84,(uint *)&fStack_5c,&fStack_78);
  uVar1 = uStack_88;
  if (iVar2 == 0) {
LAB_00463b47:
    *(undefined4 *)((int)vm + 0x90) = 0xe;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    return;
  }
  fStack_78 = fStack_84;
  do {
    if ((int)fStack_84 < 1) {
      iVar2 = 0;
      if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
        iVar3 = *(int *)((int)vm + 0x54) + 1;
        *(int *)((int)vm + 0x54) = iVar3;
        uStack_8c = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
        uStack_88 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
      }
      else {
        FUN_00404ab0(vm,6);
        uStack_8c = 0;
      }
      iVar3 = FUN_004026a0(&uStack_8c,&uStack_58,(uint *)&fStack_74,&fStack_80);
      if (iVar3 != 0) {
        if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
          iVar3 = *(int *)((int)vm + 0x54) + 1;
          *(int *)((int)vm + 0x54) = iVar3;
          uStack_8c = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
          uStack_88 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
        }
        else {
          FUN_00404ab0(vm,6);
          uStack_8c = 0;
        }
        iVar3 = FUN_004026a0(&uStack_8c,&uStack_6c,(uint *)&fStack_74,&fStack_80);
        if (iVar3 != 0) {
          if (0 < (int)fStack_78) {
            puVar4 = auStack_50 + 1;
            do {
              uStack_70 = puVar4[-1];
              uStack_68 = *puVar4;
              iVar3 = FUN_0045a620(&DAT_00579458,uStack_6c,(int *)&uStack_70,(int *)&uStack_68);
              if (iVar3 == 0) {
                return;
              }
              puVar4[-1] = uStack_70;
              *puVar4 = uStack_68;
              iVar2 = iVar2 + 1;
              puVar4 = puVar4 + 2;
            } while (iVar2 < (int)fStack_78);
          }
          FUN_004077b0(uStack_6c,uStack_58,auStack_50,(uint)fStack_78);
          return;
        }
      }
      goto LAB_00463b47;
    }
    fStack_84 = (float)((int)fStack_84 - 1);
    iVar2 = (int)fStack_84 * 2;
    if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
      iVar3 = *(int *)((int)vm + 0x54) + 1;
      *(int *)((int)vm + 0x54) = iVar3;
      uStack_64 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
      uStack_60 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
    }
    else {
      FUN_00404ab0(vm,6);
      uStack_60 = uVar1;
      uStack_64 = 0;
    }
    iVar2 = FUN_004026a0(&uStack_64,auStack_50 + iVar2 + 1,&uStack_54,&fStack_5c);
    if (iVar2 == 0) break;
    iVar2 = (int)fStack_84 * 2;
    if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
      iVar3 = *(int *)((int)vm + 0x54) + 1;
      *(int *)((int)vm + 0x54) = iVar3;
      uStack_8c = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
      uStack_88 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
    }
    else {
      FUN_00404ab0(vm,6);
      uStack_8c = 0;
      uStack_88 = uVar1;
    }
    iVar2 = FUN_004026a0(&uStack_8c,auStack_50 + iVar2,(uint *)&fStack_80,&fStack_74);
  } while (iVar2 != 0);
  FUN_00404ab0(vm,0xe);
  return;
}


