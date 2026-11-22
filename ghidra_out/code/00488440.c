
void __cdecl op_check_level_explored(void *vm)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  float fStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uVar6 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar6 = 0;
  }
  uVar6 = uVar6 & 0xff;
  if (uVar6 != 1) {
    if (uVar6 == 2) {
      fStack_4 = (float)((int)fStack_4 >> 8);
    }
    else {
      if (uVar6 != 4) {
        *(undefined4 *)((int)vm + 0x90) = 0xe;
        FUN_004d4550(vm);
        sVar2 = (short)vm;
        *(undefined4 *)((int)vm + 0x90) = 0;
        *(undefined4 *)((int)vm + 0xa4) = 0;
        goto LAB_004884a9;
      }
      lVar7 = __ftol((float10)fStack_4);
      fStack_4 = (float)lVar7;
    }
  }
  sVar2 = SUB42(fStack_4,0);
LAB_004884a9:
  bVar1 = 0;
  psVar4 = &DAT_005cd1ac;
  do {
    if (*psVar4 == sVar2) {
      bVar1 = 1;
      break;
    }
    psVar4 = psVar4 + 1;
  } while ((int)psVar4 < 0x5cd1c0);
  if (*(int *)((int)vm + 0x54) == 0) {
    *(undefined4 *)((int)vm + 0x90) = 3;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    return;
  }
  iVar5 = *(int *)((int)vm + 0x54) + -1;
  *(int *)((int)vm + 0x54) = iVar5;
  iVar3 = *(int *)((int)vm + 0x50);
  *(undefined4 *)(iVar3 + iVar5 * 8) = 1;
  *(uint *)(iVar3 + 4 + iVar5 * 8) = -(uint)bVar1;
  return;
}


