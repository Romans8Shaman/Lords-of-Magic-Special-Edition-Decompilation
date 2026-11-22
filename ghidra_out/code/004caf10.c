
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl op_div(void *vm)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  float fStack_c;
  float fStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar5 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    uVar5 = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    fStack_c = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar3 = 0;
    fStack_c = fStack_4;
  }
  uVar3 = uVar3 & 0xff;
  if (uVar3 == 1) {
    fStack_c = (float)(int)fStack_c;
LAB_004cafd6:
    uVar5 = uVar5 & 0xff;
    if (uVar5 == 1) {
      fVar1 = (float)(int)fStack_4;
    }
    else if (uVar5 == 2) {
      fVar1 = (float)(int)fStack_4 * (float)_DAT_0054dd18;
    }
    else {
      if (uVar5 != 4) goto LAB_004cb07e;
      fVar1 = fStack_4;
    }
    if ((NAN(fVar1) || NAN(_DAT_0054dd20)) || fVar1 == _DAT_0054dd20) {
      FUN_004d41c0(vm,s_divide_by_zero_0055e1d4);
    }
    else {
      fStack_4 = fStack_c / fVar1;
    }
    if (*(int *)((int)vm + 0x54) != 0) {
      iVar2 = *(int *)((int)vm + 0x50);
      iVar4 = *(int *)((int)vm + 0x54) + -1;
      *(int *)((int)vm + 0x54) = iVar4;
      *(undefined4 *)(iVar2 + iVar4 * 8) = 4;
      *(float *)(iVar2 + 4 + iVar4 * 8) = fStack_4;
      return;
    }
    *(undefined4 *)((int)vm + 0x90) = 3;
  }
  else {
    if (uVar3 == 2) {
      fStack_c = (float)(int)fStack_c * (float)_DAT_0054dd18;
      goto LAB_004cafd6;
    }
    if (uVar3 == 4) goto LAB_004cafd6;
LAB_004cb07e:
    *(undefined4 *)((int)vm + 0x90) = 0xe;
  }
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
}


