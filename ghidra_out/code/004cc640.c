
void __cdecl op_known(void *vm)

{
  void *this;
  int iVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iStack_c;
  char cStack_8;
  int *piStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    cStack_8 = (char)*(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    piStack_4 = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    cStack_8 = '\0';
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    cVar3 = (char)*(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    piVar4 = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    cVar3 = '\0';
    piVar4 = piStack_4;
  }
  if (cVar3 != '\a') {
    *(undefined4 *)((int)vm + 0x90) = 0xe;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    return;
  }
  if (cStack_8 == '\x05') {
    iStack_c = *(int *)(*(int *)((int)vm + 0x80) + (int)piStack_4 * 4);
    if ((((piVar4 == *(int **)(*(int *)((int)vm + 0x5c) + -4 + *(int *)((int)vm + 100) * 4)) &&
         (-1 < (int)piStack_4)) && ((int)piStack_4 < piVar4[1])) &&
       (*(int **)(*piVar4 + 4 + (int)piStack_4 * 0x10) == piStack_4)) {
      *(int **)(iStack_c + 0x10) = piVar4;
      *(int **)(iStack_c + 0x14) = piStack_4;
      puVar5 = (undefined4 *)(*piVar4 + (int)piStack_4 * 0x10);
      goto LAB_004cc79a;
    }
    if ((piVar4 == *(int **)(iStack_c + 0x10)) && (*(int *)(iStack_c + 0x14) < piVar4[1])) {
      iVar1 = *(int *)(iStack_c + 0x14) * 0x10;
      puVar5 = (undefined4 *)(*piVar4 + iVar1);
      if (((int *)puVar5[1] == piStack_4) &&
         (iVar2 = FUN_004d3190((char)*puVar5,'\x05'), iVar2 != 0)) {
        puVar5 = (undefined4 *)(*piVar4 + iVar1);
        goto LAB_004cc79a;
      }
    }
    if (((-1 < piVar4[3]) && (piVar4[2] <= (int)piStack_4)) && ((int)piStack_4 <= piVar4[3]))
    goto LAB_004cc7c9;
  }
  else {
    iStack_c = 0;
LAB_004cc7c9:
    iVar1 = 0;
    vm = (void *)0x0;
    if (0 < piVar4[1]) {
      do {
        puVar5 = (undefined4 *)(*piVar4 + iVar1);
        if (((int *)puVar5[1] == piStack_4) &&
           (iVar2 = FUN_004d3190((char)*puVar5,cStack_8), iVar2 != 0)) {
          if (iStack_c != 0) {
            *(int **)(iStack_c + 0x10) = piVar4;
            *(void **)(iStack_c + 0x14) = vm;
          }
          goto LAB_004cc79a;
        }
        vm = (void *)((int)vm + 1);
        iVar1 = iVar1 + 0x10;
      } while ((int)vm < piVar4[1]);
    }
  }
  puVar5 = (undefined4 *)0x0;
LAB_004cc79a:
  if (puVar5 == (undefined4 *)0x0) {
    FUN_0041d1d0(this,1,0);
    return;
  }
  FUN_004d1980(this);
  return;
}


