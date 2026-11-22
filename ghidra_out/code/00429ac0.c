
void __cdecl op_setartifacttypedata(void *vm)

{
  void *this;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  void *pvVar5;
  longlong lVar6;
  void *apvStack_c [2];
  void *pvStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    pvVar5 = *(void **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar4 = 0;
    pvVar5 = pvStack_4;
  }
  if ((char)uVar4 != '\0') {
    if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
      iVar1 = *(int *)((int)vm + 0x54) + 1;
      *(int *)((int)vm + 0x54) = iVar1;
      uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
      pvStack_4 = *(void **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
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
      vm = pvStack_4;
    }
    else if (uVar3 == 2) {
      vm = (void *)((int)pvStack_4 >> 8);
    }
    else {
      if (uVar3 != 4) {
        *(undefined4 *)((int)vm + 0x90) = 0xe;
        FUN_004d4550(vm);
        *(undefined4 *)((int)vm + 0x90) = 0;
        *(undefined4 *)((int)vm + 0xa4) = 0;
        return;
      }
      lVar6 = __ftol((float10)(float)pvStack_4);
      vm = (void *)lVar6;
    }
    iVar1 = FUN_00428fc0(this,(int *)apvStack_c);
    if (iVar1 != 0) {
      if (*(int *)((int)this + 0x54) == 0) {
        *(undefined4 *)((int)this + 0x90) = 3;
        FUN_004d4550(this);
        *(undefined4 *)((int)this + 0x90) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
      }
      else {
        iVar1 = *(int *)((int)this + 0x50);
        iVar2 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar2;
        *(undefined4 *)(iVar1 + iVar2 * 8) = uVar4;
        *(void **)(iVar1 + 4 + iVar2 * 8) = pvVar5;
      }
      iVar1 = FUN_00428f00(apvStack_c[0],this,(int)vm);
      if (iVar1 == 0) {
        FUN_004d41c0(this,s_invalid_data_id_00555b78);
      }
    }
  }
  return;
}


