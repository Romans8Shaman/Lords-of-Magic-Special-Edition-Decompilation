
void __cdecl op_enumallseenarmies(void *vm)

{
  undefined4 uVar1;
  undefined4 *this;
  void *this_00;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piStack_4;
  
  this_00 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar6 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    piStack_4 = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uVar6 = 0;
  }
  iVar2 = FUN_0041da00((int)this_00);
  if (iVar2 == 0) {
    if (((char)uVar6 != '\x06') || ((uVar6 & 0x100) != 0)) {
      *(undefined4 *)((int)this_00 + 0x90) = 0x12;
      FUN_004d4550(this_00);
      uVar6 = 0;
      *(undefined4 *)((int)this_00 + 0x90) = 0;
      *(undefined4 *)((int)this_00 + 0xa4) = 0;
    }
  }
  else {
    uVar6 = 0;
  }
  iVar2 = FUN_004bdce0(this_00,&vm);
  if (iVar2 != 0) {
    iVar2 = *(int *)((int)vm + 0x15a8);
    puVar3 = FUN_004fbed0(&DAT_005ae974,0);
    do {
      do {
        this = puVar3;
        if (this == (undefined4 *)0x0) {
          return;
        }
        puVar3 = FUN_004fbed0(&DAT_005ae974,(int)this);
        iVar4 = FUN_005071c0(this,iVar2);
      } while ((iVar4 == 0) || (iVar4 = FUN_004c1cf0((int)this), iVar4 != 0));
      uVar1 = this[10];
      if (*(int *)((int)this_00 + 0x54) == 0) {
        *(undefined4 *)((int)this_00 + 0x90) = 3;
        FUN_004d4550(this_00);
        *(undefined4 *)((int)this_00 + 0x90) = 0;
        *(undefined4 *)((int)this_00 + 0xa4) = 0;
      }
      else {
        iVar4 = *(int *)((int)this_00 + 0x50);
        iVar5 = *(int *)((int)this_00 + 0x54) + -1;
        *(int *)((int)this_00 + 0x54) = iVar5;
        *(undefined4 *)(iVar4 + iVar5 * 8) = 1;
        *(undefined4 *)(iVar4 + 4 + iVar5 * 8) = uVar1;
      }
      FUN_004d05e0(this_00,uVar6,piStack_4);
      iVar4 = *(int *)((int)this_00 + 0x6c);
      *(undefined4 *)((int)this_00 + 0x6c) = *(undefined4 *)((int)this_00 + 0x70);
    } while (iVar4 == 0);
  }
  return;
}


