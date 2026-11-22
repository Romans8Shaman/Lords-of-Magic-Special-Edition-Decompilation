
void __cdecl op_armystrength(void *vm)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iStack_18;
  int iStack_14;
  undefined4 *puStack_10;
  int *piStack_c;
  undefined4 uStack_4;
  
  iVar2 = FUN_0041be40(vm,&iStack_14);
  if (iVar2 != 0) {
    iVar2 = 0;
    iStack_18 = 0;
    piStack_c = (int *)(iStack_14 + 0x4c);
    if (0 < *(int *)(iStack_14 + 0x4c)) {
      puStack_10 = (undefined4 *)(iStack_14 + 0x28);
      piVar4 = (int *)(iStack_14 + 0xcc);
      do {
        uVar1 = *puStack_10;
        if ((piVar4[7] & 8U) == 0) {
          iVar3 = *piVar4;
        }
        else {
          piVar4[7] = piVar4[7] & 0xfffffff7;
          iVar3 = FUN_00521e00(piVar4 + -2);
          if (iVar3 == 0) {
            *piVar4 = 1;
            iVar3 = 1;
          }
          else {
            uStack_4 = *(undefined4 *)(iVar3 + 0x108);
            if (((char)*(uint *)(iVar3 + 0x104) == '\x06') &&
               ((*(uint *)(iVar3 + 0x104) & 0x100) == 0)) {
              iVar3 = FUN_00522080(piVar4 + -2,iVar3,uVar1,iVar2);
            }
            else {
              *piVar4 = 1;
              iVar3 = 1;
            }
          }
        }
        piVar4 = piVar4 + 0x13;
        iStack_18 = iStack_18 + iVar3;
        iVar2 = iVar2 + 1;
      } while (iVar2 < *piStack_c);
    }
    if (*(int *)((int)vm + 0x54) != 0) {
      iVar2 = *(int *)((int)vm + 0x50);
      iVar3 = *(int *)((int)vm + 0x54) + -1;
      *(int *)((int)vm + 0x54) = iVar3;
      *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
      *(int *)(iVar2 + 4 + iVar3 * 8) = iStack_18;
      return;
    }
    *(undefined4 *)((int)vm + 0x90) = 3;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  return;
}


