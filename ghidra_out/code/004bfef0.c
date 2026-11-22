
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl op_setfamefromactions(void *vm)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  float fStack_4;
  
  pvVar1 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    uVar3 = 0;
  }
  uVar3 = uVar3 & 0xff;
  if (uVar3 == 1) {
    fStack_4 = (float)((int)fStack_4 << 8);
  }
  else if (uVar3 != 2) {
    if (uVar3 != 4) {
      *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
      FUN_004d4550(pvVar1);
      *(undefined4 *)((int)pvVar1 + 0x90) = 0;
      *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
      return;
    }
    lVar4 = __ftol((float10)fStack_4 * (float10)_DAT_0054dcc0);
    fStack_4 = (float)lVar4;
  }
  iVar2 = FUN_004bdce0(pvVar1,&vm);
  if (iVar2 != 0) {
    *(float *)((int)vm + 0x3c) = fStack_4;
  }
  return;
}


