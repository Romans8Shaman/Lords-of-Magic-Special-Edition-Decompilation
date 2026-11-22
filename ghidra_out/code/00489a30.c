
undefined4 __thiscall FUN_00489a30(void *this,undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  
  if (*(int *)((int)this + 0x4d39c) == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_004b7dd0(*(int *)((int)this + 0x4d39c));
  }
  if (param_2 == iVar1) {
    cVar3 = (char)DAT_0055b57c + '\x01';
    DAT_0055b57c = CONCAT31(DAT_0055b57c._1_3_,cVar3);
    *(char *)((int)param_1 + 5) = cVar3;
    *(char *)((int)this + 0x4d438) = (char)DAT_0055b57c;
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 2;
    uVar2 = FUN_004c4c10((void *)((int)this + 0x487dc),param_1);
    return uVar2;
  }
  if (DAT_005d1e84 == (void *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_004b7890(DAT_005d1e84,param_2);
  }
  if (((iVar1 == 0) || (*(int *)(iVar1 + 4) == 0)) || (*(int *)(iVar1 + 0x21) != 0)) {
    return 0;
  }
  iVar1 = FUN_0048c2b0((int)param_1);
  if (iVar1 != 0) {
    switch(*(undefined1 *)(param_1 + 1)) {
    case 0x1f:
    case 0x32:
    case 0x3d:
    case 0x41:
      break;
    default:
      if ((*(uint *)(iVar1 + 4) & 1 << ((byte)param_2 & 0x1f)) == 0) {
        return 0;
      }
    }
  }
  uVar2 = FUN_004b8020((void *)((int)this + 0x48870),param_1,param_2);
  return uVar2;
}


