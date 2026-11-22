
void __cdecl op_setleveldungeonconquer(void *vm)

{
  short sVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  longlong lVar7;
  float fStack_4;
  
  pvVar3 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar4 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar4;
    uVar5 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar4 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar4 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    uVar5 = 0;
  }
  uVar5 = uVar5 & 0xff;
  if (uVar5 != 1) {
    if (uVar5 == 2) {
      fStack_4 = (float)((int)fStack_4 >> 8);
    }
    else {
      if (uVar5 != 4) {
        *(undefined4 *)((int)pvVar3 + 0x90) = 0xe;
        FUN_004d4550(pvVar3);
        *(undefined4 *)((int)pvVar3 + 0x90) = 0;
        *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
        return;
      }
      lVar7 = __ftol((float10)fStack_4);
      fStack_4 = (float)lVar7;
    }
  }
  iVar4 = FUN_0050cd20(pvVar3,(uint *)&vm);
  if ((((iVar4 != 0) && (vm != (void *)0x0)) && (-1 < (int)fStack_4)) && ((int)fStack_4 < 10)) {
    if (fStack_4 == 0.0) {
      puVar2 = *(undefined4 **)((int)vm + 0x58);
      if (puVar2 != (undefined4 *)0x0) {
        (/*IC:00510e68*/**(code **)*puVar2)(puVar2,1);
      }
      *(undefined4 *)((int)vm + 0x58) = 0;
      *(uint *)((int)vm + 0x30) = *(uint *)((int)vm + 0x30) | 0x100;
      if ((*(int *)((int)vm + 0x50) == 0) || (*(short *)((int)vm + 0x4e) == 0)) {
        *(uint *)((int)vm + 0x30) = *(uint *)((int)vm + 0x30) | 4;
        return;
      }
    }
    else if ((*(int *)((int)vm + 0x50) != 0) && ((int)fStack_4 < (int)*(short *)((int)vm + 0x4e))) {
      iVar4 = (int)fStack_4 * 0xc;
      puVar2 = *(undefined4 **)(iVar4 + -4 + *(int *)((int)vm + 0x50));
      if (puVar2 != (undefined4 *)0x0) {
        (/*IC:00510ec5*/**(code **)*puVar2)(puVar2,1);
      }
      *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar4) = 0;
      *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar4) =
           *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar4) | 1;
      if ((*(int *)((int)vm + 0x50) != 0) && (sVar1 = *(short *)((int)vm + 0x4e), 0 < sVar1)) {
        iVar4 = 0;
        if (0 < sVar1) {
          piVar6 = (int *)(*(int *)((int)vm + 0x50) + 8);
          do {
            if (*piVar6 != 0) {
              return;
            }
            iVar4 = iVar4 + 1;
            piVar6 = piVar6 + 3;
          } while (iVar4 < sVar1);
        }
      }
      *(uint *)((int)vm + 0x30) = *(uint *)((int)vm + 0x30) | 4;
      iVar4 = *(int *)((int)vm + 0x50);
      if (iVar4 != 0) {
        FUN_00539eb0(iVar4,0xc,*(int *)(iVar4 + -4),&LAB_00462c80);
        if (iVar4 + -4 != 0) {
          Ordinal_403(iVar4 + -4,s_C__lomse_source_storm_h_00555130,0x3f6,0);
        }
      }
      *(undefined4 *)((int)vm + 0x50) = 0;
      *(undefined2 *)((int)vm + 0x4e) = 0;
    }
  }
  return;
}


