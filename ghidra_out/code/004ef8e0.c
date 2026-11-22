
void __cdecl op_setspellinfo(void *vm)

{
  int iVar1;
  undefined4 *this;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uStack_9c;
  undefined4 uStack_98;
  float fStack_94;
  float fStack_90;
  uint uStack_8c;
  uint uStack_88;
  undefined4 auStack_84 [30];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054b86b;
  pvStack_c = ExceptionList;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    ExceptionList = &pvStack_c;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar3 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uVar4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    ExceptionList = &pvStack_c;
    FUN_00404ab0(vm,6);
    uVar3 = 0;
    uVar4 = uStack_98;
  }
  if ((char)uVar3 != '\0') {
    if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
      iVar1 = *(int *)((int)vm + 0x54) + 1;
      *(int *)((int)vm + 0x54) = iVar1;
      uStack_9c = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
      uStack_98 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
    }
    else {
      FUN_00404ab0(vm,6);
      uStack_9c = 0;
    }
    iVar1 = FUN_004026a0(&uStack_9c,&uStack_8c,(uint *)&fStack_90,&fStack_94);
    if (iVar1 == 0) {
      *(undefined4 *)((int)vm + 0x90) = 0xe;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
    }
    else {
      if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
        iVar1 = *(int *)((int)vm + 0x54) + 1;
        *(int *)((int)vm + 0x54) = iVar1;
        uStack_9c = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
        uStack_98 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
      }
      else {
        FUN_00404ab0(vm,6);
        uStack_9c = 0;
      }
      iVar1 = FUN_004026a0(&uStack_9c,&uStack_88,(uint *)&fStack_94,&fStack_90);
      if (iVar1 == 0) {
        FUN_00404ab0(vm,0xe);
      }
      else {
        FUN_004ef610(auStack_84,&DAT_00584c1c);
        uStack_4 = 0;
        if (uStack_88 == 0xfffffffe) {
          this = auStack_84;
        }
        else if (uStack_88 == 0xffffffff) {
          this = (undefined4 *)FUN_00482ac0(&DAT_005aa12c,DAT_00584c94,4);
        }
        else {
          this = (undefined4 *)FUN_00482ac0(&DAT_005aa12c,uStack_88,4);
        }
        if (this == (undefined4 *)0x0) {
          FUN_004d41c0(vm,s_no_such_spell_005731d8);
        }
        else {
          if (*(int *)((int)vm + 0x54) == 0) {
            *(undefined4 *)((int)vm + 0x90) = 3;
            FUN_004d4550(vm);
            *(undefined4 *)((int)vm + 0x90) = 0;
            *(undefined4 *)((int)vm + 0xa4) = 0;
          }
          else {
            iVar1 = *(int *)((int)vm + 0x50);
            iVar2 = *(int *)((int)vm + 0x54) + -1;
            *(int *)((int)vm + 0x54) = iVar2;
            *(undefined4 *)(iVar1 + iVar2 * 8) = uVar3;
            *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = uVar4;
          }
          FUN_004ef8a0(this,vm,uStack_8c);
        }
        uStack_4 = 0xffffffff;
        FUN_004ef740(auStack_84);
      }
    }
  }
  ExceptionList = pvStack_c;
  return;
}


