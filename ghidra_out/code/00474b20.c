
void __cdecl op_windowswaitcursorsleep(void *vm)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  float fStack_10;
  uint auStack_c [3];
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar2 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_10 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
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
      fStack_10 = (float)((int)fStack_10 >> 8);
    }
    else {
      if (uVar2 != 4) {
        *(undefined4 *)((int)vm + 0x90) = 0xe;
        FUN_004d4550(vm);
        *(undefined4 *)((int)vm + 0x90) = 0;
        *(undefined4 *)((int)vm + 0xa4) = 0;
        return;
      }
      lVar3 = __ftol((float10)fStack_10);
      fStack_10 = (float)lVar3;
    }
  }
  if (((int)fStack_10 < 0) || (30000 < (int)fStack_10)) {
    FUN_004d41c0(vm,s_0_to_30000_only_005586a4);
    return;
  }
  FUN_00474a60(&DAT_005a9e04,auStack_c);
  FUN_00474af0(&DAT_005a9e04);
  Sleep((DWORD)fStack_10);
  FUN_00474a90(&DAT_005a9e04,auStack_c);
  return;
}


