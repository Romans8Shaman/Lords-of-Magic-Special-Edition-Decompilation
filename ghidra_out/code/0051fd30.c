
void __cdecl op_moveout(void *vm)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  float fStack_4;
  
  pvVar1 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    uVar3 = 0;
  }
  uVar3 = uVar3 & 0xff;
  if (uVar3 != 1) {
    if (uVar3 == 2) {
      fStack_4 = (float)((int)fStack_4 >> 8);
    }
    else {
      if (uVar3 != 4) {
        *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
        FUN_004d4550(pvVar1);
        *(undefined4 *)((int)pvVar1 + 0x90) = 0;
        *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
        return;
      }
      lVar4 = __ftol((float10)fStack_4);
      fStack_4 = (float)lVar4;
    }
  }
  iVar2 = FUN_0041be40(pvVar1,&vm);
  if (iVar2 != 0) {
    iVar2 = FUN_00413180(vm,*(int *)(DAT_005ae970 +
                                    ((*(int *)((int)vm + 0x44) - 4U & 7) +
                                    *(int *)((int)vm + 0x1c) * 8) * 4));
    FUN_00420b80(vm,iVar2,0,fStack_4,0xffffffff,0xffffffff,0);
  }
  return;
}


