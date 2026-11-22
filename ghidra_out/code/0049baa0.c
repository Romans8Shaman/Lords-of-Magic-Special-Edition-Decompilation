
void __cdecl op_replaceimp(void *vm)

{
  int iVar1;
  void *this;
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  longlong lVar5;
  byte *pbStack_68;
  char acStack_64 [100];
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    cVar2 = (char)*(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    pbVar4 = *(byte **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    cVar2 = '\0';
    *(undefined4 *)((int)vm + 0xa4) = 0;
    pbVar4 = pbStack_68;
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
      pbVar4 = (byte *)0x0;
    }
  }
  else {
    pbVar4 = (byte *)0x0;
  }
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    pbStack_68 = *(byte **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar3 = 0;
  }
  uVar3 = uVar3 & 0xff;
  if (uVar3 != 1) {
    if (uVar3 == 2) {
      pbStack_68 = (byte *)((int)pbStack_68 >> 8);
    }
    else {
      if (uVar3 != 4) {
        *(undefined4 *)((int)vm + 0x90) = 0xe;
        FUN_004d4550(vm);
        *(undefined4 *)((int)vm + 0x90) = 0;
        *(undefined4 *)((int)vm + 0xa4) = 0;
        return;
      }
      lVar5 = __ftol((float10)(float)pbStack_68);
      pbStack_68 = (byte *)lVar5;
    }
  }
  this = (void *)FUN_00492850(&DAT_005a7b50,(int)pbStack_68);
  if (this == (void *)0x0) {
    FUN_004d41c0(vm,s_replaceimp___no_such_imp_0055c7e8);
    return;
  }
  iVar1 = FUN_0049b450(this,pbVar4,(int *)0x0);
  if (iVar1 == 0) {
    FUN_0053a090(acStack_64,s_replaceimp___failed_to_load_imp_f_0055c7c0,(uint)pbVar4);
    FUN_004d41c0(vm,acStack_64);
    return;
  }
  FUN_004f6670(&DAT_00584ae8,(int)this);
  return;
}


