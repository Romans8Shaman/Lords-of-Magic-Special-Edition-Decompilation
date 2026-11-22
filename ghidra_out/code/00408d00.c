
void __cdecl op_enummilitaryunits(void *vm)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *this;
  float fVar4;
  int iVar5;
  int *piVar6;
  uint uStack_1ac;
  int *piStack_1a8;
  float fStack_1a4;
  uint uStack_1a0;
  int *piStack_19c;
  uint uStack_198;
  uint uStack_194;
  int aiStack_190 [100];
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uStack_1a0 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    piStack_19c = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uStack_1a0 = 0;
    piStack_19c = piStack_1a8;
  }
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uStack_1ac = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    piStack_1a8 = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_1ac = 0;
  }
  iVar3 = FUN_004026a0(&uStack_1ac,&uStack_198,&uStack_194,&fStack_1a4);
  if (iVar3 == 0) {
    *(undefined4 *)((int)vm + 0x90) = 0xe;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    return;
  }
  this = (void *)FUN_00482ac0(&DAT_005aa12c,uStack_198,0);
  if (this != (void *)0x0) {
    piVar6 = aiStack_190;
    for (iVar3 = 100; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = -1;
      piVar6 = piVar6 + 1;
    }
    fVar4 = (float)FUN_00407d90(this,aiStack_190);
    iVar3 = 0;
    if (0 < (int)fVar4) {
      piVar6 = aiStack_190;
      fStack_1a4 = fVar4;
      do {
        iVar1 = *piVar6;
        if (iVar1 != -1) {
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
          FUN_004d05e0(vm,uStack_1a0,piStack_19c);
          iVar1 = *(int *)((int)vm + 0x6c);
          *(undefined4 *)((int)vm + 0x6c) = *(undefined4 *)((int)vm + 0x70);
          if (iVar1 != 0) {
            return;
          }
          fVar4 = fStack_1a4;
        }
        iVar3 = iVar3 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar3 < (int)fVar4);
    }
  }
  return;
}


