
void __cdecl op_setcenteronmovement(void *vm)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  longlong lVar4;
  float fStack_4;
  
  pfVar3 = (float *)(&DAT_005a8080 + DAT_005a7d8c * 0x400);
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
    *pfVar3 = fStack_4;
  }
  else if (uVar2 == 2) {
    *pfVar3 = (float)((int)fStack_4 >> 8);
  }
  else if (uVar2 == 4) {
    lVar4 = __ftol((float10)fStack_4);
    *pfVar3 = (float)lVar4;
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 0xe;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  DAT_005aa254 = *(undefined4 *)(&DAT_005a8080 + DAT_005a7d8c * 0x400);
  return;
}


