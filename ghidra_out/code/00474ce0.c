
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl op_setwindowswaitcursorstate(void *vm)

{
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 uStack_c;
  float fStack_8;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar4 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_8 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar4 = 0;
  }
  uVar4 = uVar4 & 0xff;
  fVar3 = fStack_8;
  if (uVar4 != 1) {
    if (uVar4 == 2) {
      fVar3 = (float)((int)fStack_8 >> 8);
    }
    else {
      if (uVar4 != 4) {
        *(undefined4 *)((int)vm + 0x90) = 0xe;
        FUN_004d4550(vm);
        *(undefined4 *)((int)vm + 0x90) = 0;
        *(undefined4 *)((int)vm + 0xa4) = 0;
        return;
      }
      lVar5 = __ftol((float10)fStack_8);
      fVar3 = (float)lVar5;
    }
  }
  if (fVar3 == 0.0) {
    if (DAT_0058327c != 0) {
      FUN_00474a90(&DAT_005a9e04,(uint *)&DAT_00583270);
      DAT_0058327c = 0;
    }
    return;
  }
  if (DAT_0058327c == 0) {
    puVar2 = FUN_00474a60(&DAT_005a9e04,&uStack_c);
    _DAT_00583270 = *puVar2;
    _DAT_00583274 = puVar2[1];
    _DAT_00583278 = puVar2[2];
    DAT_0058327c = 1;
  }
  FUN_00474af0(&DAT_005a9e04);
  return;
}


