
void __cdecl op_combatformation(void *vm)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uStack_c8;
  undefined4 uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  undefined4 uStack_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  uint auStack_a0 [40];
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_bc = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_b8 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_bc = 0;
    uStack_b8 = uStack_c4;
  }
  iVar1 = FUN_004026a0(&uStack_bc,&uStack_c0,(uint *)&fStack_ac,&fStack_a8);
  if (iVar1 == 0) {
    *(undefined4 *)((int)vm + 0x90) = 0xe;
  }
  else {
    iVar1 = uStack_c0 - 1;
    if (-1 < iVar1) {
      puVar4 = auStack_a0 + iVar1 * 2;
      do {
        if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
          iVar2 = *(int *)((int)vm + 0x54) + 1;
          *(int *)((int)vm + 0x54) = iVar2;
          uStack_b4 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
          uStack_b0 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
        }
        else {
          FUN_00404ab0(vm,6);
          uStack_b4 = 0;
          uStack_b0 = uStack_c4;
        }
        iVar2 = FUN_004026a0(&uStack_b4,puVar4 + 1,(uint *)&fStack_a8,&fStack_ac);
        if (iVar2 == 0) {
LAB_0049992b:
          *(undefined4 *)((int)vm + 0x90) = 0xe;
          goto LAB_0049997a;
        }
        if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
          iVar2 = *(int *)((int)vm + 0x54) + 1;
          *(int *)((int)vm + 0x54) = iVar2;
          uStack_c8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
          uStack_c4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
        }
        else {
          FUN_00404ab0(vm,6);
          uStack_c8 = 0;
        }
        iVar2 = FUN_004026a0(&uStack_c8,puVar4,&uStack_bc,&fStack_a4);
        if (iVar2 == 0) goto LAB_0049992b;
        iVar1 = iVar1 + -1;
        puVar4 = puVar4 + -2;
      } while (-1 < iVar1);
    }
    uVar3 = FUN_00498cb0(&DAT_005ae958,auStack_a0,uStack_c0);
    if (*(int *)((int)vm + 0x54) != 0) {
      iVar2 = *(int *)((int)vm + 0x54) + -1;
      *(int *)((int)vm + 0x54) = iVar2;
      iVar1 = *(int *)((int)vm + 0x50);
      *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = uVar3;
      return;
    }
    *(undefined4 *)((int)vm + 0x90) = 3;
  }
LAB_0049997a:
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
}


