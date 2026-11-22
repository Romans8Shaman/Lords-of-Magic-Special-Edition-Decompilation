
void __cdecl op_filldoodad(void *vm)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  longlong lVar6;
  float fStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar4 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar4;
    uVar1 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar4 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar4 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar1 = 0;
  }
  uVar1 = uVar1 & 0xff;
  fVar5 = fStack_4;
  if (uVar1 != 1) {
    if (uVar1 == 2) {
      fVar5 = (float)((int)fStack_4 >> 8);
    }
    else {
      if (uVar1 != 4) goto LAB_004dc8a8;
      lVar6 = __ftol((float10)fStack_4);
      fVar5 = (float)lVar6;
    }
  }
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar4 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar4;
    uVar1 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar4 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar4 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar1 = 0;
  }
  uVar1 = uVar1 & 0xff;
  if (uVar1 != 1) {
    if (uVar1 == 2) {
      fStack_4 = (float)((int)fStack_4 >> 8);
    }
    else {
      if (uVar1 != 4) {
LAB_004dc8a8:
        *(undefined4 *)((int)vm + 0x90) = 0xe;
        FUN_004d4550(vm);
        *(undefined4 *)((int)vm + 0x90) = 0;
        *(undefined4 *)((int)vm + 0xa4) = 0;
        return;
      }
      lVar6 = __ftol((float10)fStack_4);
      fStack_4 = (float)lVar6;
    }
  }
  piVar2 = (int *)FUN_00492760(&DAT_005a7b50,(int)fVar5);
  piVar3 = (int *)FUN_00492760(&DAT_005a7b50,(int)fStack_4);
  if ((piVar2 == (int *)0x0) || (piVar3 == (int *)0x0)) {
    FUN_004d41c0(vm,s_no_doodad_s__005727fc);
    return;
  }
  iVar4 = FUN_00495a40(piVar2);
  if ((iVar4 == 0) || (iVar4 = FUN_00495a40(piVar3), iVar4 == 0)) {
    FUN_004d41c0(vm,s_bad_doodad_s__0057280c);
    return;
  }
  if ((void *)*piVar3 == (void *)0x0) {
    FUN_004d41c0(vm,s_no_page_0057260c);
    return;
  }
  FUN_00496250((void *)*piVar3,piVar2,piVar3[1],piVar3[2],piVar3[3],piVar3[4]);
  return;
}


