
void __cdecl op_eventalarm(void *param_1)

{
  float *pfVar1;
  void *this;
  int iVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  longlong lVar6;
  uint local_58;
  uint local_54;
  uint local_50;
  float local_4c;
  uint local_48;
  float local_44;
  float afStack_40 [10];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00549118;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040c580((int)&local_48);
  this = param_1;
  local_4 = 0;
  local_18 = 0;
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar2 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar2;
    local_50 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar2 * 8);
    local_4c = *(float *)(*(int *)((int)param_1 + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(param_1,6);
    local_50 = 0;
  }
  iVar2 = FUN_004026a0(&local_50,&local_58,&local_54,(float *)&param_1);
  if (iVar2 == 0) {
    FUN_00404ab0(this,0xe);
  }
  else {
    do {
      if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
        iVar2 = *(int *)((int)this + 0x54) + 1;
        *(int *)((int)this + 0x54) = iVar2;
        uVar3 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
        fVar5 = *(float *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
      }
      else {
        *(undefined4 *)((int)this + 0x90) = 6;
        FUN_004d4550(this);
        *(undefined4 *)((int)this + 0x90) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
        uVar3 = 0;
        fVar5 = local_4c;
      }
      param_1 = (void *)(uVar3 & 0xff);
      local_4c = fVar5;
      if (param_1 == (void *)0x0) goto LAB_0040cf3f;
      if ((param_1 != (void *)0x5) || ((uVar3 & 0x100) != 0)) {
        if (9 < local_18) {
          FUN_004d41c0(this,s_too_many_args_00555744);
          goto LAB_0040cf3f;
        }
        pfVar1 = afStack_40 + local_18;
        if (param_1 == (void *)0x1) {
          *pfVar1 = fVar5;
        }
        else if (param_1 == (void *)0x2) {
          *pfVar1 = (float)((int)fVar5 >> 8);
        }
        else {
          if (param_1 != (void *)0x4) {
            FUN_004d41c0(this,s_invalid_arg_00555738);
            goto LAB_0040cf3f;
          }
          lVar6 = __ftol((float10)fVar5);
          *pfVar1 = (float)lVar6;
        }
        local_18 = local_18 + 1;
      }
    } while ((param_1 != (void *)0x5) || ((uVar3 & 0x100) != 0));
    local_48 = uVar3;
    local_44 = fVar5;
    uVar3 = FUN_0040c820(&DAT_005aeea0,&local_48,local_58,0xffffffff,0,0);
    if (*(int *)((int)this + 0x54) == 0) {
      *(undefined4 *)((int)this + 0x90) = 3;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
    }
    else {
      iVar4 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar4;
      iVar2 = *(int *)((int)this + 0x50);
      *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
      *(uint *)(iVar2 + 4 + iVar4 * 8) = uVar3;
    }
  }
LAB_0040cf3f:
  local_4 = 0xffffffff;
  FUN_0040c5a0();
  ExceptionList = local_c;
  return;
}


