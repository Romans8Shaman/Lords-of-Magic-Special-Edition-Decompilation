
void __cdecl op_addblankitem(void *param_1)

{
  int iVar1;
  void *this;
  int iVar2;
  int iVar3;
  
  this = param_1;
  iVar2 = FUN_004906d0(param_1,(int *)&param_1);
  if (iVar2 != 0) {
    iVar2 = FUN_0048d840((int)param_1);
    if (iVar2 < 0) {
      FUN_004d41c0(this,s_dialog_full_0055c478);
    }
    if (*(int *)((int)this + 0x54) != 0) {
      iVar1 = *(int *)((int)this + 0x50);
      iVar3 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar3;
      *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
      *(int *)(iVar1 + 4 + iVar3 * 8) = iVar2;
      return;
    }
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  return;
}


