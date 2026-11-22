
void __cdecl op_setcitymoddata(void *vm)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  longlong lVar5;
  undefined4 uStack_10;
  float fStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_10 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fVar4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uStack_10 = 0;
    fVar4 = fStack_4;
  }
  if ((char)uStack_10 != '\0') {
    if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
      iVar1 = *(int *)((int)vm + 0x54) + 1;
      *(int *)((int)vm + 0x54) = iVar1;
      uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
      fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
    }
    else {
      *(undefined4 *)((int)vm + 0x90) = 6;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
      uVar3 = 0;
    }
    uVar3 = uVar3 & 0xff;
    if (uVar3 != 1) {
      if (uVar3 == 2) {
        fStack_4 = (float)((int)fStack_4 >> 8);
      }
      else {
        if (uVar3 != 4) {
          *(undefined4 *)((int)vm + 0x90) = 0xe;
          FUN_004d4550(vm);
          *(undefined4 *)((int)vm + 0x90) = 0;
          *(undefined4 *)((int)vm + 0xa4) = 0;
          return;
        }
        lVar5 = __ftol((float10)fStack_4);
        fStack_4 = (float)lVar5;
      }
    }
    if (DAT_005792f8 == (void *)0x0) {
      FUN_004d41c0(vm,s_no_current_mod_00557570);
      return;
    }
    if (*(int *)((int)vm + 0x54) == 0) {
      *(undefined4 *)((int)vm + 0x90) = 3;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
    }
    else {
      iVar1 = *(int *)((int)vm + 0x50);
      iVar2 = *(int *)((int)vm + 0x54) + -1;
      *(int *)((int)vm + 0x54) = iVar2;
      *(undefined4 *)(iVar1 + iVar2 * 8) = uStack_10;
      *(float *)(iVar1 + 4 + iVar2 * 8) = fVar4;
    }
    FUN_00453320(DAT_005792f8,vm,(int)fStack_4);
  }
  return;
}


