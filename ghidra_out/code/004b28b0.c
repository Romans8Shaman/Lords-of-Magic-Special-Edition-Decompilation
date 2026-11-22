
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004b28b0(void *this,undefined4 param_1)

{
  char *pcVar1;
  void *this_00;
  undefined4 uVar2;
  int iVar3;
  uint unaff_EDI;
  char *pcVar4;
  int local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0054b408;
  local_c = ExceptionList;
  DAT_00583650 = DAT_00583650 + 0x10;
  local_1c[3] = 0;
  local_1c[2] = 0;
  local_1c[1] = 0;
  local_1c[0] = 0;
  pcVar1 = (char *)((int)this + 0x138);
  _DAT_00584cd0 = 0;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0x5e4) = 1;
  pcVar4 = pcVar1;
  for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + 4;
  }
  local_4 = 0;
  FUN_0053a090(pcVar1,&DAT_0055ce58,unaff_EDI);
  uVar2 = DAT_005a7d8c;
  this_00 = (void *)((int)this + 0x4c0);
  *(undefined4 *)((int)this + 0x134) = param_1;
  *(undefined4 *)((int)this + 0x130) = uVar2;
  *(undefined4 *)((int)this + 0x19c) = 3;
  FUN_004952c0(this_00,0x280,0xe,1);
  FUN_00497270(this_00,0,0,*(uint *)((int)this + 0x4c4),*(int *)((int)this + 0x4c8),0);
  FUN_00497270(this_00,0,0,*(uint *)((int)this + 0x4c4),*(int *)((int)this + 0x4c8),1);
  local_1c[0] = 0;
  local_1c[1] = 0;
  local_1c[2] = 0x27f;
  local_1c[3] = 0xe;
  FUN_0047f230(*(void **)((int)this + 0x518),this_00,pcVar1,local_1c,2,-1,0);
  DAT_00583650 = DAT_00583650 + -0x10;
  ExceptionList = local_c;
  return;
}


