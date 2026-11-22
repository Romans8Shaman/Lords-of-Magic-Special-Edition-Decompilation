
void __cdecl op_setdungeonconquer(void *vm)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_0050cd20(vm,(uint *)&vm);
  if ((iVar3 != 0) && (vm != (void *)0x0)) {
    puVar2 = *(undefined4 **)((int)vm + 0x58);
    if (puVar2 != (undefined4 *)0x0) {
      (/*IC:005112a6*/**(code **)*puVar2)(puVar2,1);
    }
    *(undefined4 *)((int)vm + 0x58) = 0;
    *(uint *)((int)vm + 0x30) = *(uint *)((int)vm + 0x30) | 0x100;
    *(uint *)((int)vm + 0x30) = *(uint *)((int)vm + 0x30) | 4;
    if ((*(int *)((int)vm + 0x50) != 0) && (0 < *(short *)((int)vm + 0x4e))) {
      iVar3 = 0;
      if (0 < *(short *)((int)vm + 0x4e)) {
        iVar4 = 0;
        do {
          puVar2 = *(undefined4 **)(*(int *)((int)vm + 0x50) + 8 + iVar4);
          if (puVar2 != (undefined4 *)0x0) {
            (/*IC:005112fe*/**(code **)*puVar2)(puVar2,1);
          }
          *(undefined4 *)(*(int *)((int)vm + 0x50) + 8 + iVar4) = 0;
          puVar1 = (uint *)(*(int *)((int)vm + 0x50) + 4 + iVar4);
          iVar4 = iVar4 + 0xc;
          iVar3 = iVar3 + 1;
          *puVar1 = *puVar1 | 1;
        } while (iVar3 < *(short *)((int)vm + 0x4e));
      }
      iVar3 = *(int *)((int)vm + 0x50);
      if (iVar3 != 0) {
        FUN_00539eb0(iVar3,0xc,*(int *)(iVar3 + -4),&LAB_00462c80);
        if (iVar3 + -4 != 0) {
          Ordinal_403(iVar3 + -4,s_C__lomse_source_storm_h_00555130,0x3f6,0);
        }
      }
      *(undefined4 *)((int)vm + 0x50) = 0;
      *(undefined2 *)((int)vm + 0x4e) = 0;
    }
  }
  return;
}


