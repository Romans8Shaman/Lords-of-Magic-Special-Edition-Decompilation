
void __thiscall FUN_004c5370(void *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar2 = param_1;
  iVar4 = 0;
  if ((-1 < *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) < 0x10)) {
    piVar5 = (int *)(param_1 + 0x4c);
    param_1 = 0;
    if (0 < *piVar5) {
      piVar5 = (int *)(iVar2 + 0xcc);
      do {
        uVar1 = *(undefined4 *)(iVar2 + 0x28);
        if ((piVar5[7] & 8U) == 0) {
          iVar3 = *piVar5;
        }
        else {
          piVar5[7] = piVar5[7] & 0xfffffff7;
          iVar3 = FUN_00521e00(piVar5 + -2);
          if (iVar3 == 0) {
            *piVar5 = 1;
            iVar3 = 1;
          }
          else if (((char)*(uint *)(iVar3 + 0x104) == '\x06') &&
                  ((*(uint *)(iVar3 + 0x104) & 0x100) == 0)) {
            iVar3 = FUN_00522080(piVar5 + -2,iVar3,uVar1,iVar4);
          }
          else {
            *piVar5 = 1;
            iVar3 = 1;
          }
        }
        piVar5 = piVar5 + 0x13;
        param_1 = param_1 + iVar3;
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(iVar2 + 0x4c));
    }
    *(int *)((int)this + *(int *)(iVar2 + 0x48) * 4 + 0x58) =
         *(int *)((int)this + *(int *)(iVar2 + 0x48) * 4 + 0x58) + param_1;
    if ((*(uint *)(iVar2 + 0x54) & 0x100000) != 0) {
      piVar5 = (int *)((int)this + *(int *)(iVar2 + 0x48) * 4 + 0x118);
      *piVar5 = *piVar5 + param_1;
      return;
    }
    iVar4 = *(int *)(iVar2 + 0x48) * 4 + 0xd8;
    if ((*(uint *)(iVar2 + 0x54) & 0x80000) == 0) {
      iVar4 = *(int *)(iVar2 + 0x48) * 4 + 0x98;
    }
    *(int *)((int)this + iVar4) = *(int *)((int)this + iVar4) + param_1;
  }
  return;
}


