
void __cdecl op_getunitdata(void *vm)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  longlong lVar5;
  int aiStack_c [2];
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
  if (uVar3 == 1) {
    fVar4 = fStack_4;
  }
  else if (uVar3 == 2) {
    fVar4 = (float)((int)fStack_4 >> 8);
  }
  else {
    if (uVar3 != 4) {
      *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
      FUN_004d4550(pvVar1);
      *(undefined4 *)((int)pvVar1 + 0x90) = 0;
      *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
      return;
    }
    lVar5 = __ftol((float10)fStack_4);
    fVar4 = (float)lVar5;
  }
  iVar2 = FUN_0041bf10(pvVar1,aiStack_c,(int *)&vm);
  if (iVar2 != 0) {
    FUN_0041dcc0(aiStack_c[0],(int)vm,(int)fVar4,pvVar1);
  }
  return;
}


