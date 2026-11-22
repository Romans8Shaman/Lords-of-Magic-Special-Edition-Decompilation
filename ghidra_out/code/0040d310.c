
void __thiscall FUN_0040d310(void *this,void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *this_00;
  int iVar3;
  undefined4 *puVar4;
  
  this_00 = param_1;
  DAT_00555728 = *(undefined4 *)((int)this + 0x44);
  DAT_00578138 = 0;
  param_1 = *(void **)((int)this + 0x3c);
  if (-1 < (int)param_1 + -1) {
    puVar4 = (undefined4 *)((int)this + ((int)param_1 + -1) * 4 + 0x14);
    do {
      uVar1 = *puVar4;
      if (*(int *)((int)this_00 + 0x54) == 0) {
        *(undefined4 *)((int)this_00 + 0x90) = 3;
        FUN_004d4550(this_00);
        *(undefined4 *)((int)this_00 + 0x90) = 0;
        *(undefined4 *)((int)this_00 + 0xa4) = 0;
      }
      else {
        iVar2 = *(int *)((int)this_00 + 0x50);
        iVar3 = *(int *)((int)this_00 + 0x54) + -1;
        *(int *)((int)this_00 + 0x54) = iVar3;
        *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
        *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = uVar1;
      }
      puVar4 = puVar4 + -1;
      param_1 = (void *)((int)param_1 + -1);
    } while (param_1 != (void *)0x0);
  }
  FUN_004d09a0(this_00,*(uint *)((int)this + 0xc),*(int **)((int)this + 0x10),
               -*(int *)((int)this + 0x3c));
  DAT_00555728 = 0xffffffff;
  return;
}


