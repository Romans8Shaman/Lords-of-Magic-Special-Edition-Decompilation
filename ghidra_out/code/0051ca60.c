
int __thiscall FUN_0051ca60(void *this,int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_4;
  
  iVar3 = 0;
  local_4 = 0;
  piVar4 = (int *)(param_1 + 0x58);
  do {
    uVar1 = FUN_0051c9b0(this,iVar3);
    if ((param_2 & uVar1) != 0) {
      if ((iVar3 < 0) || (0xf < iVar3)) {
        iVar2 = 0;
      }
      else {
        iVar2 = *piVar4;
      }
      local_4 = local_4 + iVar2;
    }
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar3 < 0x10);
  return local_4;
}


