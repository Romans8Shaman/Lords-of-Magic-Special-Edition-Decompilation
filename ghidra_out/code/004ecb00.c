
void __cdecl op_getslider(void *vm)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  longlong lVar8;
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
  iVar3 = 0;
  uVar6 = uVar6 & 0xff;
  if (uVar6 != 1) {
    if (uVar6 == 2) {
      fStack_4 = (float)((int)fStack_4 >> 8);
    }
    else {
      if (uVar6 != 4) {
        *(undefined4 *)((int)vm + 0x90) = 0xe;
        FUN_004d4550(vm);
        *(undefined4 *)((int)vm + 0x90) = 0;
        *(undefined4 *)((int)vm + 0xa4) = 0;
        return;
      }
      lVar8 = __ftol((float10)fStack_4);
      fStack_4 = (float)lVar8;
    }
  }
  piVar4 = (int *)FUN_00492790(&DAT_005a7b50,(int)fStack_4);
  if (piVar4 == (int *)0x0) {
    FUN_004d41c0(vm,s_getslider__no_slider_with_that_i_005730b0);
    return;
  }
  if (-1 < *piVar4) {
    piVar7 = piVar4 + 5;
    do {
      iVar1 = *piVar7;
      if (*(int *)((int)vm + 0x54) == 0) {
        *(undefined4 *)((int)vm + 0x90) = 3;
        FUN_004d4550(vm);
        *(undefined4 *)((int)vm + 0x90) = 0;
        *(undefined4 *)((int)vm + 0xa4) = 0;
      }
      else {
        iVar2 = *(int *)((int)vm + 0x50);
        iVar5 = *(int *)((int)vm + 0x54) + -1;
        *(int *)((int)vm + 0x54) = iVar5;
        *(undefined4 *)(iVar2 + iVar5 * 8) = 1;
        *(int *)(iVar2 + 4 + iVar5 * 8) = iVar1;
      }
      iVar3 = iVar3 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar3 <= *piVar4);
  }
  return;
}


