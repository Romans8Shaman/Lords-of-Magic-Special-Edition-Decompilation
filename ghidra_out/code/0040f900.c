
void __cdecl op_championbrainnotify(void *vm)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong lVar4;
  float fStack_60;
  undefined4 uStack_5c;
  float fStack_58;
  undefined4 uStack_4c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00549298;
  pvStack_c = ExceptionList;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    ExceptionList = &pvStack_c;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_60 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    ExceptionList = &pvStack_c;
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar3 = 0;
  }
  uVar3 = uVar3 & 0xff;
  if (uVar3 != 1) {
    if (uVar3 == 2) {
      fStack_60 = (float)((int)fStack_60 >> 8);
    }
    else {
      if (uVar3 != 4) {
        *(undefined4 *)((int)vm + 0x90) = 0xe;
        FUN_004d4550(vm);
        *(undefined4 *)((int)vm + 0x90) = 0;
        *(undefined4 *)((int)vm + 0xa4) = 0;
        ExceptionList = pvStack_c;
        return;
      }
      lVar4 = __ftol((float10)fStack_60);
      fStack_60 = (float)lVar4;
    }
  }
  puVar2 = (undefined4 *)FUN_0040f4e0(&DAT_005aeed0,(int)fStack_60);
  FUN_0040eb30(&uStack_5c);
  uStack_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    uStack_4c = 2;
    puVar2 = &uStack_5c;
    fStack_58 = fStack_60;
  }
  FUN_0040f070(puVar2);
  uStack_4 = 0xffffffff;
  FUN_0040eb60();
  ExceptionList = pvStack_c;
  return;
}


