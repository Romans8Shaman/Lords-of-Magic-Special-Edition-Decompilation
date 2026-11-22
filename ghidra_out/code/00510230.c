
void __cdecl op_set_retreat_flag(void *vm)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  float fStack_4;
  
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
      lVar3 = __ftol((float10)fStack_4);
      fStack_4 = (float)lVar3;
    }
  }
  uVar2 = FUN_00482ac0(&DAT_005aa12c,(int)fStack_4,1);
  if (uVar2 != 0) {
    *(byte *)(uVar2 + 0x44) =
         *(byte *)(uVar2 + 0x44) |
         '\x01' << ((byte)*(undefined4 *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400) & 0x1f);
  }
  return;
}


