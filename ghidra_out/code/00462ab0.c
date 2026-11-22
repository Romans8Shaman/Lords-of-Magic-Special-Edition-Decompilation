
void __cdecl op_getincombatspoils(void *vm)

{
  void *this;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_14;
  float fStack_10;
  uint uStack_c;
  uint uStack_8;
  undefined4 uStack_4;
  
  this = vm;
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
  iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_c,&fStack_10);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
LAB_00462bb1:
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  iVar1 = FUN_004bdce0(this,&iStack_14);
  if (iVar1 != 0) {
    if ((-1 < (int)vm) && ((int)vm < 5)) {
      if (*(int *)(iStack_14 + 0x15a8) == DAT_005aa7d4) {
        uVar3 = *(undefined4 *)(&DAT_005cd1c4 + (int)vm * 4);
      }
      else if (*(int *)(iStack_14 + 0x15a8) == DAT_005aadb0) {
        uVar3 = *(undefined4 *)(&DAT_005cd1d8 + (int)vm * 4);
      }
      else {
        FUN_004d41c0(this,s_error___player_not_attacker_or_d_005577a0);
        uVar3 = 0;
      }
      if (*(int *)((int)this + 0x54) != 0) {
        iVar2 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar2;
        iVar1 = *(int *)((int)this + 0x50);
        *(undefined4 *)(iVar1 + iVar2 * 8) = 2;
        *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = uVar3;
        return;
      }
      *(undefined4 *)((int)this + 0x90) = 3;
      goto LAB_00462bb1;
    }
    FUN_004d41c0(this,s_invalid_spoils_type_0055778c);
  }
  return;
}


