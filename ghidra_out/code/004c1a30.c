
undefined4 __thiscall FUN_004c1a30(void *this,int *param_1)

{
  void *this_00;
  int iVar1;
  uint uVar2;
  
  this_00 = (void *)FUN_00482ac0(this,*param_1,0);
  if (this_00 != (void *)0x0) {
    iVar1 = FUN_00506340((int)this_00);
    if (iVar1 != 0) {
      if (param_1[1] == 1) {
        *(uint *)((int)this_00 + 0x30) = *(uint *)((int)this_00 + 0x30) | 0x20000000;
        *(uint *)((int)this_00 + 0x5cc) = *(uint *)((int)this_00 + 0x5cc) | 0xffff;
        *(undefined4 *)((int)this_00 + 0x5d4) = 0;
        FUN_00506fb0(this_00,0);
        iVar1 = FUN_004c1c50((int)this_00);
        if (iVar1 != 0) {
          uVar2 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this_00 + 0x5b4),0);
          if (uVar2 != 0) {
            *(uint *)(uVar2 + 0x30) = *(uint *)(uVar2 + 0x30) | 0x20000000;
            *(undefined4 *)(uVar2 + 0x5cc) = *(undefined4 *)((int)this_00 + 0x5cc);
            *(undefined4 *)(uVar2 + 0x5d4) = 0;
            return 1;
          }
        }
      }
      else if (param_1[1] == 2) {
        *(uint *)((int)this_00 + 0x30) = *(uint *)((int)this_00 + 0x30) & 0xdfffffff;
        *(undefined4 *)((int)this_00 + 0x5cc) = 0;
        iVar1 = FUN_004c1c50((int)this_00);
        if (iVar1 != 0) {
          uVar2 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this_00 + 0x5b4),0);
          if (uVar2 != 0) {
            *(undefined4 *)(uVar2 + 0x5cc) = 0;
            *(uint *)(uVar2 + 0x30) = *(uint *)(uVar2 + 0x30) & 0xdfffffff;
          }
        }
      }
      return 1;
    }
  }
  return 0;
}


