
undefined4 __thiscall FUN_004c5840(void *this,int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  
  piVar2 = param_1;
  FUN_00539660((char *)((int)this + 8),1,1,param_1);
  FUN_00539660((char *)((int)this + 9),1,1,piVar2);
  if (*(char **)((int)this + 0xc) == (char *)0x0) {
    param_1 = (int *)((uint)param_1._1_3_ << 8);
  }
  else {
    iVar3 = -1;
    pcVar4 = *(char **)((int)this + 0xc);
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    param_1 = (int *)CONCAT31(param_1._1_3_,~(byte)iVar3);
  }
  FUN_00539660((char *)&param_1,1,1,piVar2);
  if ((char)param_1 != '\0') {
    FUN_00539660(*(char **)((int)this + 0xc),(uint)param_1 & 0xff,1,piVar2);
  }
  FUN_00539660((char *)((int)this + 0x10),4,1,piVar2);
  FUN_00539660((char *)((int)this + 0x18),0x40,1,piVar2);
  FUN_00539660((char *)((int)this + 0x58),0x40,1,piVar2);
  FUN_00539660((char *)((int)this + 0x98),0x40,1,piVar2);
  FUN_00539660((char *)((int)this + 0xd8),0x40,1,piVar2);
  FUN_00539660((char *)((int)this + 0x118),0x40,1,piVar2);
  FUN_00539660((char *)((int)this + 0x158),0x40,1,piVar2);
  return 1;
}


