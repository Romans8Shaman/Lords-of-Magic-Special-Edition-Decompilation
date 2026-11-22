
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl op_playvideo_stretch(void *vm)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  float in_stack_8;
  longlong lVar4;
  float fStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_14 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar3 = 0;
  }
  uVar3 = uVar3 & 0xff;
  if (uVar3 == 1) {
    in_stack_8 = fStack_14;
  }
  else if (uVar3 == 2) {
    in_stack_8 = (float)((int)fStack_14 >> 8);
  }
  else {
    if (uVar3 != 4) {
      *(undefined4 *)((int)vm + 0x90) = 0xe;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
      return;
    }
    lVar4 = __ftol((float10)fStack_14);
    in_stack_8 = (float)lVar4;
  }
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    cVar2 = (char)*(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_14 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    cVar2 = '\0';
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  iVar1 = *(int *)((int)vm + 0x90);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  if (iVar1 == 0) {
    if (cVar2 != '\b') {
      *(undefined4 *)((int)vm + 0x90) = 0xe;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
      fStack_14 = 0.0;
    }
  }
  else {
    fStack_14 = 0.0;
  }
  if (fStack_14 == 0.0) {
    FUN_004d41c0(vm,s_no_filename_0055cfb0);
    return;
  }
  _DAT_005869e0 = 0;
  _DAT_005869dc = 0;
  _DAT_005869e4 = 0;
  uStack_c = 0;
  uStack_4 = 0x1e0;
  uStack_10 = 0;
  uStack_8 = 0x280;
  (/*IC:0053164f*/**(code **)(*DAT_00585174 + 0x1c))(DAT_00585174,0,0,DAT_0058516c,&uStack_10,0);
  _DAT_005869f0 = 0xffffffff;
  iVar1 = FUN_00531120(&DAT_005867c0,fStack_14,in_stack_8);
  if (iVar1 == 0) {
    FUN_004d41c0(vm,s_ERROR__>_SF_playvideo_005743ec);
  }
  return;
}


