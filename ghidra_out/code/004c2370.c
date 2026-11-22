
void __fastcall FUN_004c2370(int param_1)

{
  void *this;
  
  this = (void *)FUN_00482ac0(&DAT_005aa12c,*(int *)(param_1 + 0x5b4),0);
  if (this != (void *)0x0) {
    FUN_004c2450((int)this);
    FUN_004176d0(this,0);
  }
  *(undefined4 *)(param_1 + 0x5b4) = 0xffffffff;
  return;
}


