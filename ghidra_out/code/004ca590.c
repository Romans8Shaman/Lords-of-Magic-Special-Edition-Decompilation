
void __cdecl op_get(void *vm)

{
  void *this;
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  float fStack_10;
  uint uStack_c;
  uint uStack_8;
  int *piStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    piStack_4 = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uStack_8 = 0;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uVar6 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    piVar5 = *(int **)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uVar6 = 0;
    piVar5 = piStack_4;
  }
  uVar6 = uVar6 & 0xff;
  if (uVar6 != 7) {
    iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_c,&fStack_10);
    if (iVar1 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
      goto LAB_004ca721;
    }
  }
  if (uVar6 == 6) {
    if (((int)vm < 0) || (piVar5[1] <= (int)vm)) goto LAB_004ca717;
    uVar6 = *(uint *)(*piVar5 + (int)vm * 8);
    uVar4 = *(uint *)(*piVar5 + 4 + (int)vm * 8);
  }
  else {
    if (uVar6 != 7) {
      if (uVar6 != 8) {
        *(undefined4 *)((int)this + 0x90) = 0xe;
        goto LAB_004ca721;
      }
      if (-1 < (int)vm) {
        uVar6 = 0xffffffff;
        piVar7 = piVar5;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          iVar1 = *piVar7;
          piVar7 = (int *)((int)piVar7 + 1);
        } while ((char)iVar1 != '\0');
        if ((int)vm < (int)(~uVar6 - 1)) {
          uVar4 = (uint)*(char *)((int)vm + (int)piVar5);
          uVar6 = 1;
          goto LAB_004ca6ee;
        }
      }
LAB_004ca717:
      *(undefined4 *)((int)this + 0x90) = 0xf;
      goto LAB_004ca721;
    }
    puVar2 = FUN_004d31b0(this,piVar5,uStack_8,(uint)piStack_4);
    if (puVar2 == (uint *)0x0) {
      *(uint *)((int)this + 0x9c) = uStack_8;
      *(int **)((int)this + 0xa0) = piStack_4;
      *(undefined4 *)((int)this + 0x90) = 0x11;
      goto LAB_004ca721;
    }
    uVar6 = puVar2[2];
    uVar4 = puVar2[3];
  }
LAB_004ca6ee:
  if (*(int *)((int)this + 0x54) != 0) {
    iVar3 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar3;
    iVar1 = *(int *)((int)this + 0x50);
    *(uint *)(iVar1 + iVar3 * 8) = uVar6;
    *(uint *)(iVar1 + 4 + iVar3 * 8) = uVar4;
    return;
  }
  *(undefined4 *)((int)this + 0x90) = 3;
LAB_004ca721:
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


