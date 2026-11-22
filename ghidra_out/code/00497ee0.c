
void __cdecl op_getstartingline(void *param_1)

{
  void *this;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  this = param_1;
  iVar1 = FUN_00498040(param_1,(int *)&param_1);
  if (iVar1 != 0) {
    if (param_1 == (void *)0x0) {
      FUN_004d41c0(this,s_no_editbox_0055c6f4);
      return;
    }
    uVar2 = FUN_00497dc0((int)param_1);
    if (*(int *)((int)this + 0x54) != 0) {
      iVar3 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar3;
      iVar1 = *(int *)((int)this + 0x50);
      *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = uVar2;
      return;
    }
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  return;
}


