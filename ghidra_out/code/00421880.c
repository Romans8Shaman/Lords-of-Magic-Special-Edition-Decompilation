
int __thiscall FUN_00421880(void *this,uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_10;
  
  iVar3 = 0;
  local_10 = 0;
  if (0 < *(int *)((int)this + 0x4c)) {
    piVar4 = (int *)((int)this + 0xcc);
    do {
      if ((param_1 & 1 << ((byte)iVar3 & 0x1f)) != 0) {
        uVar1 = *(undefined4 *)((int)this + 0x28);
        if ((piVar4[7] & 8U) == 0) {
          iVar2 = *piVar4;
        }
        else {
          piVar4[7] = piVar4[7] & 0xfffffff7;
          iVar2 = FUN_00521e00(piVar4 + -2);
          if (iVar2 == 0) {
            *piVar4 = 1;
            iVar2 = 1;
          }
          else if (((char)*(uint *)(iVar2 + 0x104) == '\x06') &&
                  ((*(uint *)(iVar2 + 0x104) & 0x100) == 0)) {
            iVar2 = FUN_00522080(piVar4 + -2,iVar2,uVar1,iVar3);
          }
          else {
            *piVar4 = 1;
            iVar2 = 1;
          }
        }
        local_10 = local_10 + iVar2;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 0x13;
    } while (iVar3 < *(int *)((int)this + 0x4c));
  }
  return local_10;
}


