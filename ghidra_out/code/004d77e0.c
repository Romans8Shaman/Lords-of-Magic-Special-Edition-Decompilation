
void __cdecl op_enummemorystatistics(void *vm)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  int iVar6;
  undefined **ppuVar7;
  undefined4 auStack_8 [2];
  
  puVar5 = (uint *)FUN_0040adb0(vm,auStack_8);
  uVar1 = *puVar5;
  piVar2 = (int *)puVar5[1];
  if ((char)uVar1 != '\0') {
    ppuVar7 = &PTR_DAT_0055e92c;
    do {
      FUN_0041d1d0(vm,8,ppuVar7[-1]);
      FUN_0041d1d0(vm,1,*(undefined4 *)*ppuVar7);
      FUN_004d05e0(vm,uVar1,piVar2);
      iVar3 = *(int *)((int)vm + 0x6c);
      *(undefined4 *)((int)vm + 0x6c) = *(undefined4 *)((int)vm + 0x70);
      if (iVar3 != 0) {
        return;
      }
      ppuVar7 = ppuVar7 + 2;
    } while (ppuVar7 < &DAT_0055ea64);
    FUN_0041d1d0(vm,8,&DAT_005725ec);
    FUN_0041d1d0(vm,1,DAT_0058787c);
    FUN_004d05e0(vm,uVar1,piVar2);
    iVar3 = *(int *)((int)vm + 0x6c);
    *(undefined4 *)((int)vm + 0x6c) = *(undefined4 *)((int)vm + 0x70);
    if (iVar3 == 0) {
      FUN_0041d1d0(vm,8,s_string_0055e144);
      FUN_0041d1d0(vm,1,*(undefined4 *)(DAT_005a7b78 + 0xa7c));
      FUN_004d05e0(vm,uVar1,piVar2);
      iVar3 = *(int *)((int)vm + 0x6c);
      *(undefined4 *)((int)vm + 0x6c) = *(undefined4 *)((int)vm + 0x70);
      if (iVar3 == 0) {
        FUN_0041d1d0(vm,8,&DAT_0055e14c);
        FUN_0041d1d0(vm,1,*(undefined4 *)(DAT_005a7b78 + 0xa80));
        FUN_004d05e0(vm,uVar1,piVar2);
        iVar3 = *(int *)((int)vm + 0x6c);
        *(undefined4 *)((int)vm + 0x6c) = *(undefined4 *)((int)vm + 0x70);
        if (iVar3 == 0) {
          FUN_0041d1d0(vm,8,s_array_0055e154);
          FUN_0041d1d0(vm,1,*(undefined4 *)(DAT_005a7b78 + 0xa84));
          FUN_004d05e0(vm,uVar1,piVar2);
          iVar3 = *(int *)((int)vm + 0x6c);
          *(undefined4 *)((int)vm + 0x6c) = *(undefined4 *)((int)vm + 0x70);
          if (iVar3 == 0) {
            FUN_0041d1d0(vm,8,s_operand_stack_005725dc);
            FUN_0041d1d0(vm,1,*(undefined4 *)(DAT_005a7b78 + 0xa88));
            FUN_004d05e0(vm,uVar1,piVar2);
            iVar3 = *(int *)((int)vm + 0x6c);
            *(undefined4 *)((int)vm + 0x6c) = *(undefined4 *)((int)vm + 0x70);
            if (iVar3 == 0) {
              FUN_0041d1d0(vm,8,s_dict_stack_005725d0);
              FUN_0041d1d0(vm,1,*(undefined4 *)(DAT_005a7b78 + 0xa8c));
              FUN_004d05e0(vm,uVar1,piVar2);
              iVar3 = *(int *)((int)vm + 0x6c);
              *(undefined4 *)((int)vm + 0x6c) = *(undefined4 *)((int)vm + 0x70);
              if (iVar3 == 0) {
                FUN_0041d1d0(vm,8,&DAT_005725c8);
                FUN_0041d1d0(vm,1,*(undefined4 *)(DAT_005a7b78 + 0xa90));
                FUN_004d05e0(vm,uVar1,piVar2);
                iVar3 = *(int *)((int)vm + 0x6c);
                *(undefined4 *)((int)vm + 0x6c) = *(undefined4 *)((int)vm + 0x70);
                if (iVar3 == 0) {
                  FUN_0041d1d0(vm,8,s_debug_0055e0fc);
                  FUN_0041d1d0(vm,1,*(undefined4 *)(DAT_005a7b78 + 0xa94));
                  FUN_004d05e0(vm,uVar1,piVar2);
                  iVar3 = *(int *)((int)vm + 0x6c);
                  *(undefined4 *)((int)vm + 0x6c) = *(undefined4 *)((int)vm + 0x70);
                  if (iVar3 == 0) {
                    FUN_0041d1d0(vm,8,s_trace_0055de90);
                    FUN_0041d1d0(vm,1,*(undefined4 *)(DAT_005a7b78 + 0xa98));
                    FUN_004d05e0(vm,uVar1,piVar2);
                    iVar3 = *(int *)((int)vm + 0x6c);
                    *(undefined4 *)((int)vm + 0x6c) = *(undefined4 *)((int)vm + 0x70);
                    if (iVar3 == 0) {
                      if (*(int *)((int)vm + 0x54) == 0) {
                        FUN_00404ab0(vm,3);
                      }
                      else {
                        iVar3 = *(int *)((int)vm + 0x50);
                        iVar6 = *(int *)((int)vm + 0x54) + -1;
                        *(int *)((int)vm + 0x54) = iVar6;
                        *(undefined4 *)(iVar3 + iVar6 * 8) = 8;
                        *(char **)(iVar3 + 4 + iVar6 * 8) = s_object_overhead_005725b8;
                      }
                      uVar4 = *(undefined4 *)(DAT_005a7b78 + 0xa9c);
                      if (*(int *)((int)vm + 0x54) == 0) {
                        FUN_00404ab0(vm,3);
                      }
                      else {
                        iVar3 = *(int *)((int)vm + 0x50);
                        iVar6 = *(int *)((int)vm + 0x54) + -1;
                        *(int *)((int)vm + 0x54) = iVar6;
                        *(undefined4 *)(iVar3 + iVar6 * 8) = 1;
                        *(undefined4 *)(iVar3 + 4 + iVar6 * 8) = uVar4;
                      }
                      FUN_004d05e0(vm,uVar1,piVar2);
                      *(undefined4 *)((int)vm + 0x6c) = *(undefined4 *)((int)vm + 0x70);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}


