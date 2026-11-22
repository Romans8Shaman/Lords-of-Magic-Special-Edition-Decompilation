
void __cdecl op_nsetarmydata(void *vm)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  float fVar4;
  longlong lVar5;
  undefined4 uStack_10;
  float fStack_c;
  float fStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_10 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_c = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uStack_10 = 0;
    fStack_c = fStack_4;
  }
  if ((char)uStack_10 != '\0') {
    if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
      iVar1 = *(int *)((int)vm + 0x54) + 1;
      *(int *)((int)vm + 0x54) = iVar1;
      uVar2 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
      fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
    }
    else {
      *(undefined4 *)((int)vm + 0x90) = 6;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
      uVar2 = 0;
    }
    uVar2 = uVar2 & 0xff;
    if (uVar2 == 1) {
      fVar4 = fStack_4;
    }
    else if (uVar2 == 2) {
      fVar4 = (float)((int)fStack_4 >> 8);
    }
    else {
      if (uVar2 != 4) {
        *(undefined4 *)((int)vm + 0x90) = 0xe;
        FUN_004d4550(vm);
        *(undefined4 *)((int)vm + 0x90) = 0;
        *(undefined4 *)((int)vm + 0xa4) = 0;
        return;
      }
      lVar5 = __ftol((float10)fStack_4);
      fVar4 = (float)lVar5;
    }
    if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
      iVar1 = *(int *)((int)vm + 0x54) + 1;
      *(int *)((int)vm + 0x54) = iVar1;
      uVar2 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
      fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
    }
    else {
      *(undefined4 *)((int)vm + 0x90) = 6;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
      uVar2 = 0;
    }
    uVar2 = uVar2 & 0xff;
    if (uVar2 != 1) {
      if (uVar2 == 2) {
        fStack_4 = (float)((int)fStack_4 >> 8);
      }
      else {
        if (uVar2 != 4) {
          FUN_00404ab0(vm,0xe);
          return;
        }
        lVar5 = __ftol((float10)fStack_4);
        fStack_4 = (float)lVar5;
      }
    }
    if ((-8 < (int)fStack_4) && ((int)fStack_4 < -2)) {
      FUN_004d41c0(vm,s_Can_t_nset_this_army_s_data_00555994);
      return;
    }
    puVar3 = FUN_00485080(&DAT_005aa12c,(int)fStack_4,0x2f);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_004d41c0(vm,s_no_army_00555960);
      return;
    }
    FUN_0041c490(fStack_4,fVar4,uStack_10,fStack_c);
  }
  return;
}


