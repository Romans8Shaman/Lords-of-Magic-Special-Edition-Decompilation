
void FUN_00480850(int *param_1)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  
  uVar2 = 0;
  if (0 < *(int *)((int)param_1 + 0x21)) {
    do {
      bVar3 = *(byte *)(uVar2 + 0x39 + (int)param_1);
      iVar4 = (int)uVar2 >> 1;
      if ((uVar2 & 1) == 0) {
        bVar1 = *(byte *)(iVar4 + 0x39 + (int)param_1);
        bVar1 = (bVar3 ^ bVar1) & 0xf ^ bVar1;
      }
      else {
        bVar1 = bVar3 << 4 | *(byte *)(iVar4 + 0x39 + (int)param_1) & 0xf;
      }
      *(byte *)(iVar4 + 0x39 + (int)param_1) = bVar1;
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < *(int *)((int)param_1 + 0x21));
  }
  for (; (int)uVar2 < 400; uVar2 = uVar2 + 1) {
    iVar4 = (int)uVar2 >> 1;
    if ((uVar2 & 1) == 0) {
      bVar3 = *(byte *)(iVar4 + 0x39 + (int)param_1) & 0xf0;
    }
    else {
      bVar3 = *(byte *)(iVar4 + 0x39 + (int)param_1) & 0xf;
    }
    *(byte *)(iVar4 + 0x39 + (int)param_1) = bVar3;
  }
  FUN_00489b70(&DAT_00584ae8,param_1);
  return;
}


