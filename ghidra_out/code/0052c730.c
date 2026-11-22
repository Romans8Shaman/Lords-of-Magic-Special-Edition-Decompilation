
void __thiscall FUN_0052c730(void *this,int param_1)

{
  undefined4 *puVar1;
  void *this_00;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int local_18;
  
  piVar5 = (int *)((int)this + 0x18);
  local_18 = 0x1e;
  do {
    puVar1 = FUN_00485080(&DAT_005aa12c,*piVar5,0x2f);
    if (puVar1 != (undefined4 *)0x0) {
      if (param_1 == 0) {
        puVar1[0xc] = puVar1[0xc] & 0xffffffdf;
      }
      else {
        puVar1[0xc] = puVar1[0xc] | 0x20;
        if (puVar1[0x12] == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) {
          this_00 = (void *)FUN_0052be20((int)this);
          if (this_00 != (void *)0x0) {
            uVar2 = FUN_00407d80((int)this_00);
            if (uVar2 == 0) {
              iVar3 = FUN_004c1cf0((int)this_00);
              if (iVar3 == 0) {
                FUN_0041ed80(this_00,0x17);
              }
            }
          }
        }
      }
      *(byte *)(puVar1 + 0xd) = *(byte *)(puVar1 + 0xd) | 2;
    }
    uVar2 = FUN_00482ac0(&DAT_005aa12c,*piVar5,2);
    if (uVar2 != 0) {
      if (param_1 == 0) {
        uVar4 = *(uint *)(uVar2 + 0x30) & 0xfffffffd;
      }
      else {
        uVar4 = *(uint *)(uVar2 + 0x30) | 2;
      }
      *(uint *)(uVar2 + 0x30) = uVar4;
      *(byte *)(uVar2 + 0x34) = *(byte *)(uVar2 + 0x34) | 2;
    }
    uVar2 = FUN_00482ac0(&DAT_005aa12c,*piVar5,3);
    if (uVar2 != 0) {
      if (param_1 == 0) {
        uVar4 = *(uint *)(uVar2 + 0x30) & 0xfffffffd;
      }
      else {
        uVar4 = *(uint *)(uVar2 + 0x30) | 2;
      }
      *(uint *)(uVar2 + 0x30) = uVar4;
      *(byte *)(uVar2 + 0x34) = *(byte *)(uVar2 + 0x34) | 2;
    }
    uVar2 = FUN_00482ac0(&DAT_005aa12c,*piVar5,1);
    if (uVar2 != 0) {
      if (param_1 == 0) {
        uVar4 = *(uint *)(uVar2 + 0x30) & 0xfffffffd;
      }
      else {
        uVar4 = *(uint *)(uVar2 + 0x30) | 2;
      }
      *(uint *)(uVar2 + 0x30) = uVar4;
      *(byte *)(uVar2 + 0x34) = *(byte *)(uVar2 + 0x34) | 2;
    }
    piVar5 = piVar5 + 3;
    local_18 = local_18 + -1;
  } while (local_18 != 0);
  if (param_1 != 0) {
    FUN_004a90b0(&DAT_005ae958,*(int *)this);
  }
  return;
}


