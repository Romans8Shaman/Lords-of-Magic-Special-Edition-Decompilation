
void __cdecl op_canpolymorph_q(void *vm)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  longlong lVar7;
  int aiStack_c [2];
  float fStack_4;
  
  pvVar2 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uVar4 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    uVar4 = 0;
  }
  uVar4 = uVar4 & 0xff;
  if (uVar4 == 1) {
    fVar6 = fStack_4;
  }
  else if (uVar4 == 2) {
    fVar6 = (float)((int)fStack_4 >> 8);
  }
  else {
    if (uVar4 != 4) {
      *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
      goto LAB_00527a39;
    }
    lVar7 = __ftol((float10)fStack_4);
    fVar6 = (float)lVar7;
  }
  iVar3 = FUN_0041bf10(pvVar2,aiStack_c,(int *)&vm);
  if (iVar3 == 0) {
    return;
  }
  iVar3 = FUN_00527330((void *)(aiStack_c[0] + 0xc4 + (int)vm * 0x4c),aiStack_c[0],(int)vm,
                       (int)fVar6);
  if (*(int *)((int)pvVar2 + 0x54) != 0) {
    iVar5 = *(int *)((int)pvVar2 + 0x54) + -1;
    *(int *)((int)pvVar2 + 0x54) = iVar5;
    iVar1 = *(int *)((int)pvVar2 + 0x50);
    *(undefined4 *)(iVar1 + iVar5 * 8) = 1;
    *(uint *)(iVar1 + 4 + iVar5 * 8) = -(uint)(iVar3 != 0);
    return;
  }
  *(undefined4 *)((int)pvVar2 + 0x90) = 3;
LAB_00527a39:
  FUN_004d4550(pvVar2);
  *(undefined4 *)((int)pvVar2 + 0x90) = 0;
  *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  return;
}


