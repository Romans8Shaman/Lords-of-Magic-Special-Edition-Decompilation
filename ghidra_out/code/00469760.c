
void __cdecl op_can_flank_attack_q(void *vm)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iStack_8;
  int iStack_4;
  
  iVar2 = FUN_00406e10(&DAT_005ae958,DAT_005577c8);
  iVar1 = DAT_005ae98c;
  iStack_8 = 0;
  iStack_4 = 0;
  iVar4 = 0;
  iVar5 = 0;
  iVar7 = DAT_005ae998;
  if (DAT_005ae998 <= DAT_005ae98c) {
    do {
      pvVar3 = (void *)FUN_004f6000(&DAT_005ae974,iVar7);
      if ((pvVar3 != (void *)0x0) && (*(int *)((int)pvVar3 + 4) == 0)) {
        iVar4 = FUN_00407d50((int)pvVar3);
        if (iVar4 == 0) {
          iVar4 = FUN_00420620((int)pvVar3);
          if ((iVar4 == 0) && (*(int *)((int)pvVar3 + 0x48) == DAT_005577c8)) {
            iVar4 = FUN_00421840(pvVar3);
            if (iVar2 < iVar4) {
              iStack_8 = iStack_8 + 1;
            }
            iStack_4 = iStack_4 + 1;
          }
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 <= iVar1);
    iVar4 = iStack_8;
    iVar5 = iStack_4;
  }
  if (iVar5 < 6) {
    uVar6 = 0;
  }
  else {
    if ((iVar4 * 100) / iVar5 < 0x1a) {
      if (*(int *)((int)vm + 0x54) != 0) {
        iVar4 = *(int *)((int)vm + 0x54) + -1;
        *(int *)((int)vm + 0x54) = iVar4;
        iVar1 = *(int *)((int)vm + 0x50);
        *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
        *(undefined4 *)(iVar1 + 4 + iVar4 * 8) = 0;
        return;
      }
      goto LAB_0046985e;
    }
    uVar6 = 0xffffffff;
  }
  if (*(int *)((int)vm + 0x54) != 0) {
    iVar4 = *(int *)((int)vm + 0x54) + -1;
    *(int *)((int)vm + 0x54) = iVar4;
    iVar1 = *(int *)((int)vm + 0x50);
    *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
    *(undefined4 *)(iVar1 + 4 + iVar4 * 8) = uVar6;
    return;
  }
LAB_0046985e:
  *(undefined4 *)((int)vm + 0x90) = 3;
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
}


