
void __cdecl op_getcityresourcedelta(void *vm)

{
  undefined4 uVar1;
  void *this;
  int iVar2;
  int iVar3;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_EDI;
  undefined4 *puVar4;
  int in_stack_00000010;
  undefined1 auStack_14 [8];
  int iStack_c;
  undefined4 auStack_8 [2];
  
  this = vm;
  iVar2 = FUN_00451a70(vm,(uint *)&vm);
  if (iVar2 != 0) {
    uVar1 = *(undefined4 *)((int)vm + 0x44);
    *(undefined4 *)((int)vm + 0x44) = 0;
    iVar2 = (/*IC:00452ba8*/**(code **)(*(int *)vm + 0x40))(vm,auStack_14,unaff_EBX,unaff_EBP,unaff_EDI);
    if (iVar2 == 0) {
      FUN_004d41c0(this,s_GetResourceDelta_failed_00557558);
    }
    iStack_c = 5;
    *(undefined4 *)(in_stack_00000010 + 0x44) = uVar1;
    puVar4 = auStack_8;
    do {
      uVar1 = *puVar4;
      if (*(int *)((int)this + 0x54) == 0) {
        *(undefined4 *)((int)this + 0x90) = 3;
        FUN_004d4550(this);
        *(undefined4 *)((int)this + 0x90) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
      }
      else {
        iVar2 = *(int *)((int)this + 0x50);
        iVar3 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar3;
        *(undefined4 *)(iVar2 + iVar3 * 8) = 2;
        *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = uVar1;
      }
      puVar4 = puVar4 + 1;
      iStack_c = iStack_c + -1;
    } while (iStack_c != 0);
  }
  return;
}


