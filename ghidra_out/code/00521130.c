
void __cdecl op_unloadboat(void *vm)

{
  int iVar1;
  uint uVar2;
  undefined *this;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  void *pvStack_74;
  float fStack_70;
  uint uStack_6c;
  float fStack_68;
  CHAR aCStack_64 [100];
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_68 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
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
    fStack_70 = fStack_68;
  }
  else if (uVar3 == 2) {
    fStack_70 = (float)((int)fStack_68 >> 8);
  }
  else {
    if (uVar3 != 4) {
      *(undefined4 *)((int)vm + 0x90) = 0xe;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
      return;
    }
    lVar7 = __ftol((float10)fStack_68);
    fStack_70 = (float)lVar7;
  }
  iVar1 = FUN_0041be40(vm,&pvStack_74);
  if (iVar1 != 0) {
    uVar3 = 0;
    iVar1 = 0;
    uStack_6c = 0;
    if (0 < *(int *)((int)pvStack_74 + 0x4c)) {
      iVar6 = 0;
      do {
        uVar2 = FUN_00521e50((int *)((int)pvStack_74 + iVar6 + 0xc4));
        if (uVar2 == 0) {
          uVar2 = FUN_00521e30((int *)((int)pvStack_74 + iVar6 + 0xc4));
          if (uVar2 != 0) goto LAB_005211ff;
        }
        else {
LAB_005211ff:
          uVar3 = uVar3 | 1 << ((byte)iVar1 & 0x1f);
        }
        iVar1 = iVar1 + 1;
        iVar6 = iVar6 + 0x4c;
      } while (iVar1 < *(int *)((int)pvStack_74 + 0x4c));
      uStack_6c = uVar3;
    }
    if (uStack_6c != 0) {
      uVar3 = FUN_004207b0(pvStack_74,uStack_6c);
      piVar4 = &DAT_00573c38;
      iVar1 = *(int *)((int)pvStack_74 + 0x1c);
      do {
        uVar5 = *(int *)((int)pvStack_74 + 0x44) + *piVar4 & 7;
        uVar2 = uVar5;
        uVar8 = uVar3;
        this = FUN_004c6fc0();
        iVar6 = FUN_004a4c70(this,iVar1,uVar2,uVar8);
        uVar2 = uStack_6c;
        iVar1 = *(int *)((int)pvStack_74 + 0x1c);
        if (iVar6 != iVar1) break;
        piVar4 = piVar4 + 1;
      } while ((int)piVar4 < 0x573c58);
      if (iVar6 != *(int *)((int)pvStack_74 + 0x1c)) {
        FUN_0053a090(aCStack_64,s_self__d__unit_bits__d__old_loc___00573fc8,
                     *(uint *)((int)pvStack_74 + 0x28),uStack_6c,*(int *)((int)pvStack_74 + 0x1c),
                     iVar6,uVar5,uVar3);
        OutputDebugStringA(aCStack_64);
        if ((-1 < iVar6) && (iVar6 < DAT_005ae9c0)) {
          FUN_00420b80(pvStack_74,iVar6,0x20040,uVar2,0xffffffff,fStack_70,0);
          return;
        }
        FUN_004d41c0(vm,s_invalid_destination_00573ee8);
      }
    }
  }
  return;
}


