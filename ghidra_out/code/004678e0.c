
void __cdecl op_enumselectgroupactions(void *vm)

{
  undefined4 uVar1;
  void *this;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char acStack_28 [8];
  uint uStack_20;
  int *piStack_1c;
  undefined4 auStack_18 [6];
  
  this = vm;
  auStack_18[0] = 0xffffffff;
  auStack_18[1] = 0xffffffff;
  auStack_18[2] = 0xffffffff;
  auStack_18[3] = 0xffffffff;
  auStack_18[4] = 0xffffffff;
  auStack_18[5] = 0xffffffff;
  acStack_28[0] = '\0';
  acStack_28[1] = 1;
  acStack_28[2] = 1;
  acStack_28[3] = 1;
  acStack_28[4] = 0;
  acStack_28[5] = 0;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uStack_20 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    piStack_1c = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uStack_20 = 0;
  }
  iVar2 = *(int *)((int)vm + 0x90);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  if (iVar2 == 0) {
    iVar2 = FUN_00467840((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
    iVar3 = FUN_004678a0((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
    if (iVar2 != 0) {
      acStack_28[0] = '\x01';
    }
    if (iVar3 != 0) {
      acStack_28[5] = 1;
    }
    auStack_18[0] = 0x1e;
    auStack_18[1] = 0x1f;
    auStack_18[2] = 0x20;
    auStack_18[3] = 0x21;
    auStack_18[5] = 0x23;
    vm = (void *)0x0;
    puVar4 = auStack_18;
    do {
      if (acStack_28[(int)vm] == '\x01') {
        uVar1 = *puVar4;
        if (*(int *)((int)this + 0x54) == 0) {
          *(undefined4 *)((int)this + 0x90) = 3;
          FUN_004d4550(this);
          *(undefined4 *)((int)this + 0x90) = 0;
          *(undefined4 *)((int)this + 0xa4) = 0;
        }
        else {
          iVar2 = *(int *)((int)this + 0x50);
          iVar3 = *(int *)((int)this + 0x54) + -1;
          *(int *)((int)this + 0x54) = iVar3;
          *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
          *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = uVar1;
        }
        FUN_004d05e0(this,uStack_20,piStack_1c);
        iVar2 = *(int *)((int)this + 0x6c);
        *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)((int)this + 0x70);
        if (iVar2 != 0) {
          return;
        }
      }
      vm = (void *)((int)vm + 1);
      puVar4 = puVar4 + 1;
    } while ((int)vm < 6);
  }
  return;
}


