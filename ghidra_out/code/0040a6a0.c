
void __cdecl op_enumconetargetlocations(void *vm)

{
  void *this;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack_48;
  int iStack_44;
  uint uStack_40;
  int *piStack_3c;
  int aiStack_38 [14];
  
  this = vm;
  aiStack_38[7] = 1;
  aiStack_38[8] = 0;
  aiStack_38[9] = 2;
  aiStack_38[10] = 3;
  aiStack_38[0xb] = 7;
  aiStack_38[0xc] = 0xd;
  aiStack_38[0xd] = 0x11;
  aiStack_38[0] = 0x17;
  aiStack_38[1] = 0x18;
  aiStack_38[2] = 0x13;
  aiStack_38[3] = 0x14;
  aiStack_38[4] = 8;
  aiStack_38[5] = 0xe;
  aiStack_38[6] = 3;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_40 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    piStack_3c = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uStack_40 = 0;
  }
  iVar1 = FUN_0041be40(this,&vm);
  if (iVar1 != 0) {
    iVar1 = 0;
    do {
      iVar2 = *(int *)((int)vm + 0x44);
      if ((((iVar2 == 0) || (iVar2 == 2)) || (iVar2 == 4)) || (iVar2 == 6)) {
        iVar4 = *(int *)((int)aiStack_38 + iVar1 + 0x1c);
      }
      else {
        iVar4 = *(int *)((int)aiStack_38 + iVar1);
      }
      iVar2 = FUN_00409f70(&DAT_005ae958,*(int *)((int)vm + 0x1c),iVar2,iVar4,&iStack_44,&iStack_48)
      ;
      if (iVar2 != -1) {
        if (*(int *)((int)this + 0x54) == 0) {
          *(undefined4 *)((int)this + 0x90) = 3;
          FUN_004d4550(this);
          *(undefined4 *)((int)this + 0x90) = 0;
          *(undefined4 *)((int)this + 0xa4) = 0;
        }
        else {
          iVar4 = *(int *)((int)this + 0x50);
          iVar3 = *(int *)((int)this + 0x54) + -1;
          *(int *)((int)this + 0x54) = iVar3;
          *(undefined4 *)(iVar4 + iVar3 * 8) = 1;
          *(int *)(iVar4 + 4 + iVar3 * 8) = iVar2;
        }
        FUN_004d05e0(this,uStack_40,piStack_3c);
        iVar2 = *(int *)((int)this + 0x6c);
        *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)((int)this + 0x70);
        if (iVar2 != 0) {
          return;
        }
      }
      iVar1 = iVar1 + 4;
    } while (iVar1 < 0x1c);
  }
  return;
}


