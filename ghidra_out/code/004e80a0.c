
void __cdecl op_getaveunithealth(void *vm)

{
  int *this;
  void *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  uint uStack_1c;
  int iStack_18;
  uint uStack_14;
  uint uStack_10;
  float fStack_c;
  uint uStack_8;
  undefined4 uStack_4;
  
  this_00 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,&uStack_10,&uStack_1c,&fStack_c);
  if (iVar1 == 0) {
    FUN_00404ab0(this_00,0xe);
    return;
  }
  if (*(int *)((int)this_00 + 0x54) < *(int *)((int)this_00 + 0x58)) {
    iVar1 = *(int *)((int)this_00 + 0x54) + 1;
    *(int *)((int)this_00 + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)this_00 + 0x50) + -8 + iVar1 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)this_00 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this_00,6);
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,&uStack_14,&uStack_1c,&fStack_c);
  if (iVar1 == 0) {
    FUN_00404ab0(this_00,0xe);
    return;
  }
  vm = (void *)0x0;
  uStack_1c = 0;
  fStack_c = DAT_005ae98c;
  iVar1 = DAT_005ae998;
  fVar4 = DAT_005ae98c;
  if (DAT_005ae998 <= (int)DAT_005ae98c) {
    do {
      iVar2 = FUN_004f6000(&DAT_005ae974,iVar1);
      if ((((iVar2 != 0) && (*(int *)(iVar2 + 4) == 0)) && (*(uint *)(iVar2 + 0x48) == uStack_14))
         && (((int)*(char *)(iVar2 + 0x5ac) == uStack_10 &&
             ((~*(uint *)(iVar2 + 0x30) & 0x100) != 0)))) {
        if (vm == (void *)0x0) {
          iStack_18 = 0;
          FUN_00527e90((int *)(iVar2 + 0xc4),0x2f,&iStack_18);
          iVar3 = FUN_00521e00((int *)(iVar2 + 0xc4));
          if (iVar3 != 0) {
            vm = (void *)(*(int *)(iVar3 + 0x120) * iStack_18);
          }
        }
        this = (int *)(iVar2 + 0xc4);
        iVar3 = FUN_00527860(this);
        if (iVar3 != 0) {
          iVar3 = FUN_005278b0(this);
          if (((iVar3 < 0) || (DAT_005cd2f0 <= iVar3)) || (DAT_005cd2f4 == 0)) {
            iVar3 = 0;
          }
          else {
            iVar3 = DAT_005cd2f4 + iVar3 * 1000;
          }
          if ((iVar3 != 0) && (*(int *)(iVar3 + 0x120) == 1)) {
            FUN_00527e90(this,0x2f,(int *)&vm);
          }
        }
        uStack_1c = uStack_1c + *(int *)(iVar2 + 200);
        fVar4 = fStack_c;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 <= (int)fVar4);
  }
  if ((uStack_1c == 0) || (vm == (void *)0x0)) {
    if (*(int *)((int)this_00 + 0x54) == 0) {
      *(undefined4 *)((int)this_00 + 0x90) = 3;
      FUN_004d4550(this_00);
      *(undefined4 *)((int)this_00 + 0x90) = 0;
      *(undefined4 *)((int)this_00 + 0xa4) = 0;
      return;
    }
    iVar1 = *(int *)((int)this_00 + 0x50);
    iVar2 = *(int *)((int)this_00 + 0x54) + -1;
    *(int *)((int)this_00 + 0x54) = iVar2;
    *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0xffffffff;
    return;
  }
  if (*(int *)((int)this_00 + 0x54) == 0) {
    *(undefined4 *)((int)this_00 + 0x90) = 3;
    FUN_004d4550(this_00);
    *(undefined4 *)((int)this_00 + 0x90) = 0;
    *(undefined4 *)((int)this_00 + 0xa4) = 0;
    return;
  }
  iVar1 = *(int *)((int)this_00 + 0x50);
  iVar2 = *(int *)((int)this_00 + 0x54) + -1;
  *(int *)((int)this_00 + 0x54) = iVar2;
  *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
  *(int *)(iVar1 + 4 + iVar2 * 8) = (int)(uStack_1c * 100) / (int)vm;
  return;
}


