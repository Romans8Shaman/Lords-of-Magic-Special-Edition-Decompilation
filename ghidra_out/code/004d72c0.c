
void __cdecl op_runestring(void *vm)

{
  byte bVar1;
  uint uVar2;
  void *this;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  uint *puVar12;
  int iStack_18;
  uint uStack_14;
  uint uStack_10;
  uint *puStack_c;
  uint uStack_8;
  uint *puStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uStack_10 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    puStack_c = *(uint **)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    puStack_c = puStack_4;
    uStack_10 = 0;
  }
  iVar3 = FUN_004026a0(&uStack_10,&uStack_14,&uStack_8,(float *)&vm);
  if (iVar3 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar3 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar3;
    cVar8 = (char)*(undefined4 *)(*(int *)((int)this + 0x50) + -8 + iVar3 * 8);
    puVar4 = *(uint **)(*(int *)((int)this + 0x50) + -4 + iVar3 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    cVar8 = '\0';
    puVar4 = puStack_4;
  }
  iVar3 = *(int *)((int)this + 0x90);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  if (iVar3 == 0) {
    if (cVar8 == '\b') {
      vm = puVar4;
    }
    else {
      *(undefined4 *)((int)this + 0x90) = 0xe;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      vm = (void *)0x0;
    }
  }
  else {
    vm = (void *)0x0;
  }
  if (vm != (void *)0x0) {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar3 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar3;
      uVar9 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar3 * 8);
      puVar4 = *(uint **)(*(int *)((int)this + 0x50) + -4 + iVar3 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uVar9 = 0;
      puVar4 = puStack_4;
    }
    if ((uVar9 & 0xff) == 0) {
      pcVar11 = (char *)0x0;
    }
    else {
      pcVar11 = (char *)(((uVar9 & 0xff) != 8) - 1 & (uint)puVar4);
    }
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar3 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar3;
      cVar8 = (char)*(undefined4 *)(*(int *)((int)this + 0x50) + -8 + iVar3 * 8);
      puStack_4 = *(uint **)(*(int *)((int)this + 0x50) + -4 + iVar3 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      cVar8 = '\0';
    }
    iVar3 = *(int *)((int)this + 0x90);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    if (iVar3 == 0) {
      if (cVar8 == '\b') {
        puVar4 = puStack_4;
      }
      else {
        *(undefined4 *)((int)this + 0x90) = 0xe;
        FUN_004d4550(this);
        *(undefined4 *)((int)this + 0x90) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
        puVar4 = (uint *)0x0;
      }
    }
    else {
      puVar4 = (uint *)0x0;
    }
    if (puVar4 != (uint *)0x0) {
      uVar9 = 0xffffffff;
      puVar5 = (uint *)0x0;
      puVar12 = puVar4;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        uVar2 = *puVar12;
        puVar12 = (uint *)((int)puVar12 + 1);
      } while ((char)uVar2 != '\0');
      iVar3 = ~uVar9 - 1;
      if (pcVar11 != (char *)0x0) {
        puVar5 = FUN_0053a560(puVar4,pcVar11);
      }
      if (puVar5 == (uint *)0x0) {
        iVar6 = 0;
        iStack_18 = iVar3;
      }
      else {
        iVar6 = (int)puVar5 - (int)puVar4;
        for (iVar7 = iVar6; iVar7 < iVar3; iVar7 = iVar7 + 1) {
          *(undefined1 *)(iVar7 + (int)puVar4) = *(undefined1 *)(iVar7 + 1 + (int)puVar4);
        }
        iStack_18 = ~uVar9 - 2;
      }
      if (((iVar3 != 0) && (iVar6 < iVar3)) && (-1 < iVar6)) {
        if (iVar3 - iVar6 < iStack_18) {
          iStack_18 = iVar3 - iVar6;
        }
        uVar9 = 0xffffffff;
        pcVar11 = vm;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar8 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar8 != '\0');
        uStack_10 = ~uVar9 - 1;
        if ((0 < (int)uStack_10) && (uStack_14 != 100)) {
          iVar10 = 0;
          uStack_8 = DAT_00573428;
          iVar7 = 0;
          if (0 < iVar3) {
            do {
              iVar10 = iVar10 + *(char *)(iVar7 + (int)puVar4) * iVar7;
              iVar7 = iVar7 + 1;
            } while (iVar7 < iVar3);
          }
          iVar3 = 0;
          DAT_00573428 = iVar10;
          if (0 < iStack_18) {
            do {
              iVar7 = FUN_00504f00(1,100);
              bVar1 = *(byte *)((int)puVar4 + iVar3 + iVar6);
              if ((bVar1 != 0x20) && ((int)uStack_14 < iVar7)) {
                *(undefined1 *)((int)puVar4 + iVar3 + iVar6) =
                     *(undefined1 *)
                      ((int)((longlong)(ulonglong)bVar1 % (longlong)(int)uStack_10) + (int)vm);
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 < iStack_18);
          }
          DAT_00573428 = uStack_8;
        }
      }
    }
  }
  return;
}


