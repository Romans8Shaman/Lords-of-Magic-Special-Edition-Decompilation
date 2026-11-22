
void __cdecl op_enumchildren(void *vm)

{
  void *this;
  int iVar1;
  void *this_00;
  void *this_01;
  uint uVar2;
  float fStack_18;
  uint uStack_14;
  uint uStack_10;
  int *piStack_c;
  uint uStack_8;
  int *piStack_4;
  
  this = vm;
  FUN_0040adb0(vm,&uStack_8);
  iVar1 = FUN_0041da00((int)this);
  if (iVar1 == 0) {
    if (((char)uStack_8 == '\x06') && (uVar2 = uStack_8, (uStack_8 & 0x100) == 0))
    goto LAB_00446461;
    *(undefined4 *)((int)this + 0x90) = 0x12;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  uVar2 = 0;
LAB_00446461:
  if (((char)uVar2 == '\x06') && ((uVar2 & 0x100) == 0)) {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar1 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar1;
      uStack_10 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
      piStack_c = *(int **)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uStack_10 = 0;
      piStack_c = piStack_4;
    }
    iVar1 = FUN_004026a0(&uStack_10,(uint *)&vm,&uStack_14,&fStack_18);
    if (iVar1 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      return;
    }
    if (vm == (void *)0xfffffffd) {
      vm = *(void **)(DAT_005ae94c + 0x28);
    }
    this_00 = (void *)FUN_00482ac0(&DAT_005aa12c,(int)vm,3);
    this_01 = (void *)FUN_00482ac0(&DAT_005aa12c,(int)vm,2);
    if (this_00 != (void *)0x0) {
      FUN_004526a0(this_00,this,uVar2,piStack_4);
      return;
    }
    if (this_01 == (void *)0x0) {
      FUN_004d41c0(this,s_No_building_or_city_00556824);
      return;
    }
    if (this_01 != (void *)0x0) {
      FUN_004526a0(this_01,this,uVar2,piStack_4);
    }
  }
  return;
}


