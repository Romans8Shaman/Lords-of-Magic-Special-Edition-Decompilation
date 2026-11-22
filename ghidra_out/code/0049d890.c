
uint __thiscall FUN_0049d890(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  
  uVar1 = param_1;
  if (*(int *)this != 0) {
    pbVar2 = (byte *)FUN_0049adb0(this,param_1);
    iVar3 = FUN_0049acf0(this,uVar1,param_2,&param_1);
    if ((iVar3 != 0) && (pbVar2 != (byte *)0x0)) {
      if ((*pbVar2 & 7) == 4) {
        return (uint)*(ushort *)(iVar3 + 2) * 2 - 1;
      }
      return (uint)*(ushort *)(iVar3 + 2);
    }
  }
  return 0;
}


