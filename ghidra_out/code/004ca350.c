
void __cdecl op_put(void *vm)

{
  void *this;
  int iVar1;
  uint *puVar2;
  int *piVar3;
  char *pcVar4;
  uint uVar5;
  int *piVar6;
  float fStack_18;
  uint uStack_14;
  uint uStack_10;
  int *piStack_c;
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
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uStack_10 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    piStack_c = *(int **)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_10 = 0;
    piStack_c = piStack_4;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uVar5 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    piVar6 = *(int **)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uVar5 = 0;
    piVar6 = piStack_4;
  }
  uVar5 = uVar5 & 0xff;
  if ((uVar5 == 7) ||
     (iVar1 = FUN_004026a0(&uStack_10,(uint *)&vm,&uStack_14,&fStack_18), iVar1 != 0)) {
    if (uVar5 == 6) {
      if ((-1 < (int)vm) && ((int)vm < piVar6[1])) {
        iVar1 = *piVar6;
        *(uint *)(iVar1 + (int)vm * 8) = uStack_8;
        *(int **)(iVar1 + 4 + (int)vm * 8) = piStack_4;
        return;
      }
    }
    else {
      if (uVar5 == 7) {
        puVar2 = FUN_004d31b0(this,piVar6,uStack_10,(uint)piStack_c);
        if (puVar2 == (uint *)0x0) {
          iVar1 = 0;
          if (0 < piVar6[1]) {
            pcVar4 = (char *)*piVar6;
            do {
              if (*pcVar4 == '\0') {
                puVar2 = (uint *)((char *)*piVar6 + iVar1 * 0x10);
                break;
              }
              iVar1 = iVar1 + 1;
              pcVar4 = pcVar4 + 0x10;
            } while (iVar1 < piVar6[1]);
          }
          if (puVar2 == (uint *)0x0) {
            FUN_00404ab0(this,0xd);
            return;
          }
          *puVar2 = uStack_10;
          puVar2[1] = (uint)piStack_c;
          if ((char)uStack_10 == '\x05') {
            piVar3 = (int *)piVar6[2];
            if ((int)piStack_c <= piVar6[2]) {
              piVar3 = piStack_c;
            }
            piVar6[2] = (int)piVar3;
            piVar3 = (int *)piVar6[3];
            if (piVar6[3] < (int)piStack_c) {
              piVar3 = piStack_c;
            }
            piVar6[3] = (int)piVar3;
          }
        }
        puVar2[2] = uStack_8;
        puVar2[3] = (uint)piStack_4;
        return;
      }
      if (uVar5 != 8) {
        FUN_00404ab0(this,0xe);
        return;
      }
      if ((-1 < (int)vm) && (iVar1 = FUN_004cee20((char *)piVar6), (int)vm < iVar1)) {
        if ((char)uStack_8 == '\x01') {
          *(undefined1 *)((int)vm + (int)piVar6) = piStack_4._0_1_;
          return;
        }
        FUN_00404ab0(this,0xe);
        return;
      }
    }
    *(undefined4 *)((int)this + 0x90) = 0xf;
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


