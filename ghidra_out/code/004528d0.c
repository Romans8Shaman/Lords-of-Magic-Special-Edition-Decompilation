
void __cdecl op_enumchildbuildings(void *vm)

{
  int iVar1;
  void *this;
  undefined *this_00;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  int *piStack_c;
  int *piStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    piStack_c = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uVar3 = 0;
    piStack_c = piStack_4;
  }
  iVar1 = FUN_0041da00((int)vm);
  if (iVar1 == 0) {
    if (((char)uVar3 == '\x06') && ((uVar3 & 0x100) == 0)) goto LAB_00452945;
    *(undefined4 *)((int)vm + 0x90) = 0x12;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  uVar3 = 0;
LAB_00452945:
  if (((char)uVar3 == '\x06') && ((uVar3 & 0x100) == 0)) {
    if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
      iVar1 = *(int *)((int)vm + 0x54) + 1;
      *(int *)((int)vm + 0x54) = iVar1;
      uVar2 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
      piStack_4 = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
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
        piStack_4 = (int *)((int)piStack_4 >> 8);
      }
      else {
        if (uVar2 != 4) {
          *(undefined4 *)((int)vm + 0x90) = 0xe;
          FUN_004d4550(vm);
          *(undefined4 *)((int)vm + 0x90) = 0;
          *(undefined4 *)((int)vm + 0xa4) = 0;
          return;
        }
        lVar4 = __ftol((float10)(float)piStack_4);
        piStack_4 = (int *)lVar4;
      }
    }
    this = (void *)FUN_00485460(&DAT_005aa12c,(int)piStack_4,3);
    this_00 = FUN_00485400(&DAT_005aa12c,(int)piStack_4,7);
    if (this != (void *)0x0) {
      FUN_004526a0(this,vm,uVar3,piStack_c);
      return;
    }
    if (this_00 != (undefined *)0x0) {
      FUN_004526a0(this_00,vm,uVar3,piStack_c);
      return;
    }
    FUN_004d41c0(vm,s_not_a_city_or_building_00557540);
  }
  return;
}


