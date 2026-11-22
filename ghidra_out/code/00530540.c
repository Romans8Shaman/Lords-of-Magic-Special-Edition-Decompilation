
void __thiscall FUN_00530540(void *this,char param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_005ae98c;
  for (iVar4 = DAT_005ae998; iVar4 <= iVar1; iVar4 = iVar4 + 1) {
    iVar2 = FUN_004f6000(&DAT_005ae974,iVar4);
    if ((((iVar2 != 0) && (*(int *)(iVar2 + 4) == 0)) && (iVar3 = FUN_00407d50(iVar2), iVar3 == 0))
       && ((*(int *)(iVar2 + 0x48) == *(int *)this && (*(char *)(iVar2 + 0x5d8) == param_1)))) {
      *(undefined1 *)(iVar2 + 0x5d8) = 0xff;
    }
  }
  return;
}


