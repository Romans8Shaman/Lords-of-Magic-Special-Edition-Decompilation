
void __cdecl op_addhotkey(void *param_1)

{
  void *this;
  int iVar1;
  float fVar2;
  uint uVar3;
  longlong lVar4;
  uint local_24;
  uint local_20;
  float local_1c;
  uint local_18;
  uint local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054add8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0049a500(&local_18);
  this = param_1;
  local_4 = 0;
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    local_14 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_10 = *(float *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    local_14 = 0;
    local_10 = local_1c;
  }
  iVar1 = *(int *)((int)this + 0x90);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  if (iVar1 == 0) {
    if (((char)local_14 != '\x06') || ((local_14 & 0x100) != 0)) {
      *(undefined4 *)((int)this + 0x90) = 0x12;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      goto LAB_0049a67a;
    }
  }
  else {
LAB_0049a67a:
    local_14 = 0;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    local_20 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    local_1c = *(float *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    local_20 = 0;
  }
  iVar1 = FUN_004026a0(&local_20,&local_18,&local_24,(float *)&param_1);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  else {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar1 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar1;
      uVar3 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
      local_1c = *(float *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
    }
    else {
      *(undefined4 *)((int)this + 0x90) = 6;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      uVar3 = 0;
    }
    uVar3 = uVar3 & 0xff;
    fVar2 = local_1c;
    if (uVar3 != 1) {
      if (uVar3 == 2) {
        fVar2 = (float)((int)local_1c >> 8);
      }
      else {
        if (uVar3 != 4) {
          FUN_00404ab0(this,0xe);
          goto LAB_0049a788;
        }
        lVar4 = __ftol((float10)local_1c);
        fVar2 = (float)lVar4;
      }
    }
    if (fVar2 == 0.0) {
      local_18 = local_18 + 1000;
    }
    FUN_0049a340(&DAT_00584cc4,(int *)&local_18);
  }
LAB_0049a788:
  local_4 = 0xffffffff;
  op_sunlight();
  ExceptionList = local_c;
  return;
}


