
void __cdecl op_enumallplayerarmies(void *vm)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *this;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  float fStack_18;
  uint uStack_14;
  uint uStack_10;
  int *piStack_c;
  uint uStack_8;
  int *piStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uStack_10 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    piStack_c = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uStack_10 = 0;
    piStack_c = piStack_4;
  }
  if ((char)uStack_10 != '\0') {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar3 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar3;
      uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar3 * 8);
      piStack_4 = *(int **)(*(int *)((int)this + 0x50) + -4 + iVar3 * 8);
    }
    else {
      *(undefined4 *)((int)this + 0x90) = 6;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      uStack_8 = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
    }
    iVar3 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_14,&fStack_18);
    if (iVar3 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      return;
    }
    puVar4 = FUN_004fbed0(&DAT_005ae974,0);
    do {
      do {
        puVar2 = puVar4;
        if (puVar2 == (undefined4 *)0x0) {
          return;
        }
        puVar4 = FUN_004fbed0(&DAT_005ae974,(int)puVar2);
      } while ((void *)puVar2[0x12] != vm);
      uVar1 = puVar2[10];
      if (*(int *)((int)this + 0x54) == 0) {
        *(undefined4 *)((int)this + 0x90) = 3;
        FUN_004d4550(this);
        *(undefined4 *)((int)this + 0x90) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
      }
      else {
        iVar3 = *(int *)((int)this + 0x50);
        iVar5 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar5;
        *(undefined4 *)(iVar3 + iVar5 * 8) = 1;
        *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = uVar1;
      }
      FUN_004d05e0(this,uStack_10,piStack_c);
      iVar3 = *(int *)((int)this + 0x6c);
      *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)((int)this + 0x70);
    } while (iVar3 == 0);
  }
  return;
}


