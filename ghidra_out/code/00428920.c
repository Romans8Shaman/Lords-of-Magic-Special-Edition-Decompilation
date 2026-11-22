
void __cdecl op_addartifacttowonlist(void *param_1)

{
  void *this;
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  float fVar4;
  longlong lVar5;
  int local_c [2];
  float local_4;
  
  this = param_1;
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    uVar3 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_4 = *(float *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar3 = 0;
  }
  uVar3 = uVar3 & 0xff;
  if (uVar3 == 1) {
    fVar4 = local_4;
  }
  else if (uVar3 == 2) {
    fVar4 = (float)((int)local_4 >> 8);
  }
  else {
    if (uVar3 != 4) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      return;
    }
    lVar5 = __ftol((float10)local_4);
    fVar4 = (float)lVar5;
  }
  iVar1 = FUN_0041bf10(this,local_c,(int *)&param_1);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)
             FUN_00428840((void *)(local_c[0] + 0xc4 + (int)param_1 * 0x4c),(int)fVar4);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_004d41c0(this,s_no_such_artifact_00555da0);
      return;
    }
    iVar1 = FUN_004288e0(&DAT_005aa12c,puVar2);
    if (iVar1 == 0) {
      FUN_004d41c0(this,s_no_more_room_in_list_of_artifact_00555d78);
    }
  }
  return;
}


