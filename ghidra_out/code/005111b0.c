
void __cdecl op_isdungeonempty_q(void *vm)

{
  short sVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  pvVar2 = vm;
  iVar3 = FUN_0050cd20(vm,(uint *)&vm);
  if (iVar3 == 0) {
    return;
  }
  if (vm != (void *)0x0) {
    if (*(int *)((int)vm + 0x58) != 0) {
LAB_00511242:
      if (*(int *)((int)pvVar2 + 0x54) != 0) {
        iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
        *(int *)((int)pvVar2 + 0x54) = iVar4;
        iVar3 = *(int *)((int)pvVar2 + 0x50);
        *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
        *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 0;
        return;
      }
      goto LAB_00511221;
    }
    if ((*(int *)((int)vm + 0x50) != 0) && (sVar1 = *(short *)((int)vm + 0x4e), 0 < sVar1)) {
      iVar3 = 0;
      if (0 < sVar1) {
        piVar5 = (int *)(*(int *)((int)vm + 0x50) + 8);
        do {
          if (*piVar5 != 0) goto LAB_00511242;
          iVar3 = iVar3 + 1;
          piVar5 = piVar5 + 3;
        } while (iVar3 < sVar1);
      }
    }
  }
  if (*(int *)((int)pvVar2 + 0x54) != 0) {
    iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
    *(int *)((int)pvVar2 + 0x54) = iVar4;
    iVar3 = *(int *)((int)pvVar2 + 0x50);
    *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
    *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 0xffffffff;
    return;
  }
LAB_00511221:
  *(undefined4 *)((int)pvVar2 + 0x90) = 3;
  FUN_004d4550(pvVar2);
  *(undefined4 *)((int)pvVar2 + 0x90) = 0;
  *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  return;
}


