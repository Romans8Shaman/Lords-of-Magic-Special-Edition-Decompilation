
undefined4 __thiscall FUN_004d4a10(void *this,uint *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 local_3f0;
  int *local_3ec;
  char local_3e8 [1000];
  
  FUN_004d4b10(this,&local_3f0,param_1);
  uVar2 = 0;
  if (*(int *)((int)this + 0x90) == 0) {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar1 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar1;
      uVar2 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
      local_3ec = *(int **)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
    }
    else {
      *(undefined4 *)((int)this + 0x90) = 6;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
    }
    FUN_004d05e0(this,uVar2,local_3ec);
    FUN_004d2ac0(this,(char)uVar2,local_3ec);
    return 1;
  }
  if (*(uint *)((int)this + 0x874) == 0) {
    FUN_0053a090(local_3e8,s_scan_failed__line__d_column__d_0055e6f0,*(uint *)((int)this + 0x878),
                 *(undefined4 *)((int)this + 0x87c));
  }
  else {
    FUN_0053a090(local_3e8,s_scan_failed___s__line__d_column___0055e6c8,*(uint *)((int)this + 0x874)
                 ,*(undefined4 *)((int)this + 0x878),*(undefined4 *)((int)this + 0x87c));
  }
  if (*(int *)((int)this + 0xa4) == 0) {
    FUN_004d4550(this);
  }
  FUN_004d41c0(this,local_3e8);
  return 0;
}


