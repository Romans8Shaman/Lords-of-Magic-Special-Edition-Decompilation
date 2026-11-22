
void __cdecl op_enumunits(void *vm)

{
  int iVar1;
  void *this;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar4 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    piStack_4 = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    uVar4 = 0;
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  if ((char)uVar4 != '\0') {
    iVar2 = FUN_0041be40(this,&vm);
    if ((iVar2 != 0) && (iVar2 = 0, 0 < *(int *)((int)vm + 0x4c))) {
      do {
        if (*(int *)((int)this + 0x54) == 0) {
          *(undefined4 *)((int)this + 0x90) = 3;
          FUN_004d4550(this);
          *(undefined4 *)((int)this + 0x90) = 0;
          *(undefined4 *)((int)this + 0xa4) = 0;
        }
        else {
          iVar1 = *(int *)((int)this + 0x50);
          iVar3 = *(int *)((int)this + 0x54) + -1;
          *(int *)((int)this + 0x54) = iVar3;
          *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
          *(int *)(iVar1 + 4 + iVar3 * 8) = iVar2;
        }
        FUN_004d05e0(this,uVar4,piStack_4);
        iVar1 = *(int *)((int)this + 0x6c);
        *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)((int)this + 0x70);
      } while ((iVar1 == 0) && (iVar2 = iVar2 + 1, iVar2 < *(int *)((int)vm + 0x4c)));
    }
  }
  return;
}


