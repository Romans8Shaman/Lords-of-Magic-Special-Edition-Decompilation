
void __cdecl op_getarmyaction(void *vm)

{
  void *pvVar1;
  int iVar2;
  void *this;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uStack_8;
  int iStack_4;
  
  pvVar1 = vm;
  uVar6 = 0;
  uStack_8 = 0xffffffff;
  iVar2 = FUN_0041be40(vm,&vm);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else if (*(int *)((int)vm + 0x538) < 0) {
    if ((*(uint *)((int)vm + 0x30) & 0x1c00000) == 0) {
      iVar2 = 1;
      iVar5 = FUN_00420970(vm);
      if (iVar5 != 0) {
        uVar6 = 1;
      }
    }
    else {
      this = (void *)FUN_00482ac0(&DAT_005aa12c,*(int *)((int)vm + 0x28),2);
      FUN_00521e00((int *)((int)vm + 0xc4));
      if (this != (void *)0x0) {
        iVar2 = *(int *)((int)this + 0x58);
        if (iVar2 == 0xe) {
          iVar2 = FUN_00521e00((int *)((int)vm + 0xc4));
          if ((-1 < *(int *)((int)this + 0x84)) && (*(int *)(iVar2 + 0x20) == 0)) {
            iVar2 = 5;
            goto LAB_004e1b95;
          }
        }
        else {
          if (((iVar2 != 9) && (iVar2 != 10)) && (iVar2 != 0xc)) {
            iVar2 = 3;
            goto LAB_004e1b95;
          }
          iVar5 = FUN_00521e00((int *)((int)vm + 0xc4));
          iVar2 = *(int *)((int)this + 0x58);
          if ((((iVar2 == 9) && (*(int *)(iVar5 + 0x20) == 0)) ||
              ((iVar2 == 10 && (*(int *)(iVar5 + 0x20) == 1)))) ||
             ((iVar2 == 0xc && (*(int *)(iVar5 + 0x20) == 2)))) {
            piVar3 = (int *)FUN_00446be0(this,&iStack_4);
            iVar2 = (0 < *piVar3 - *(int *)((int)this + 0x44)) + 3;
            goto LAB_004e1b95;
          }
        }
      }
      iVar2 = 3;
    }
  }
  else {
    iVar2 = 2;
    iVar5 = FUN_00420970(vm);
    uVar6 = (uint)(iVar5 != 0);
    uStack_8 = FUN_00426a10(vm);
  }
LAB_004e1b95:
  if (*(int *)((int)pvVar1 + 0x54) == 0) {
    *(undefined4 *)((int)pvVar1 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  else {
    iVar5 = *(int *)((int)pvVar1 + 0x50);
    iVar4 = *(int *)((int)pvVar1 + 0x54) + -1;
    *(int *)((int)pvVar1 + 0x54) = iVar4;
    *(undefined4 *)(iVar5 + iVar4 * 8) = 1;
    *(int *)(iVar5 + 4 + iVar4 * 8) = iVar2;
  }
  if (*(int *)((int)pvVar1 + 0x54) == 0) {
    *(undefined4 *)((int)pvVar1 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  else {
    iVar2 = *(int *)((int)pvVar1 + 0x50);
    iVar5 = *(int *)((int)pvVar1 + 0x54) + -1;
    *(int *)((int)pvVar1 + 0x54) = iVar5;
    *(undefined4 *)(iVar2 + iVar5 * 8) = 1;
    *(uint *)(iVar2 + 4 + iVar5 * 8) = uVar6;
  }
  if (*(int *)((int)pvVar1 + 0x54) == 0) {
    *(undefined4 *)((int)pvVar1 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    return;
  }
  iVar2 = *(int *)((int)pvVar1 + 0x50);
  iVar5 = *(int *)((int)pvVar1 + 0x54) + -1;
  *(int *)((int)pvVar1 + 0x54) = iVar5;
  *(undefined4 *)(iVar2 + iVar5 * 8) = 1;
  *(undefined4 *)(iVar2 + 4 + iVar5 * 8) = uStack_8;
  return;
}


