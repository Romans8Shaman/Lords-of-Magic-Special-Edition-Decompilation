
void __cdecl op_moveselectedunit(void *vm)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  longlong lVar5;
  float fStack_4;
  
  pvVar1 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uVar2 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    uVar2 = 0;
  }
  uVar2 = uVar2 & 0xff;
  fVar4 = fStack_4;
  if (uVar2 != 1) {
    if (uVar2 == 2) {
      fVar4 = (float)((int)fStack_4 >> 8);
    }
    else {
      if (uVar2 != 4) goto LAB_004e8873;
      lVar5 = __ftol((float10)fStack_4);
      fVar4 = (float)lVar5;
    }
  }
  if (*(int *)((int)pvVar1 + 0x54) < *(int *)((int)pvVar1 + 0x58)) {
    iVar3 = *(int *)((int)pvVar1 + 0x54) + 1;
    *(int *)((int)pvVar1 + 0x54) = iVar3;
    uVar2 = *(uint *)(*(int *)((int)pvVar1 + 0x50) + -8 + iVar3 * 8);
    fStack_4 = *(float *)(*(int *)((int)pvVar1 + 0x50) + -4 + iVar3 * 8);
  }
  else {
    *(undefined4 *)((int)pvVar1 + 0x90) = 6;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    uVar2 = 0;
  }
  uVar2 = uVar2 & 0xff;
  if (uVar2 != 1) {
    if (uVar2 == 2) {
      fStack_4 = (float)((int)fStack_4 >> 8);
    }
    else {
      if (uVar2 != 4) {
LAB_004e8873:
        *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
        FUN_004d4550(pvVar1);
        *(undefined4 *)((int)pvVar1 + 0x90) = 0;
        *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
        return;
      }
      lVar5 = __ftol((float10)fStack_4);
      fStack_4 = (float)lVar5;
    }
  }
  iVar3 = FUN_0041be40(pvVar1,&vm);
  if ((iVar3 != 0) && (fStack_4 != fVar4)) {
    OutputDebugStringA(s_todo___CommandMoveSelectedUnit_00572acc);
    FUN_004e74d0(vm,(int)fStack_4,(int)fVar4);
  }
  return;
}


