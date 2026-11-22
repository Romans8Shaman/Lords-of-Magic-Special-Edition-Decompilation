
void __cdecl op_sendcallbackmessage(void *vm)

{
  float *pfVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  longlong lVar7;
  float fStack_38;
  uint uStack_34;
  float fStack_30;
  int iStack_2c;
  float afStack_28 [10];
  
  puVar5 = &uStack_34;
  for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  iStack_2c = 0;
  do {
    if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
      iVar3 = *(int *)((int)vm + 0x54) + 1;
      *(int *)((int)vm + 0x54) = iVar3;
      uVar6 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
      fStack_38 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
    }
    else {
      *(undefined4 *)((int)vm + 0x90) = 6;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
      uVar6 = 0;
    }
    uVar4 = uVar6 & 0xff;
    if (uVar4 == 0) {
      return;
    }
    if ((uVar4 != 5) || ((uVar6 & 0x100) != 0)) {
      if (9 < iStack_2c) {
        FUN_004d41c0(vm,s_too_many_args_00555744);
        return;
      }
      pfVar1 = afStack_28 + iStack_2c;
      if (uVar4 == 1) {
        *pfVar1 = fStack_38;
      }
      else if (uVar4 == 2) {
        *pfVar1 = (float)((int)fStack_38 >> 8);
      }
      else {
        if (uVar4 != 4) {
          FUN_004d41c0(vm,s_invalid_arg_00555738);
          return;
        }
        lVar7 = __ftol((float10)fStack_38);
        *pfVar1 = (float)lVar7;
      }
      iStack_2c = iStack_2c + 1;
    }
    if ((uVar4 == 5) && ((uVar6 & 0x100) == 0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
  } while (!bVar2);
  uStack_34 = uVar6;
  fStack_30 = fStack_38;
  FUN_004111d0(&uStack_34,0);
  return;
}


