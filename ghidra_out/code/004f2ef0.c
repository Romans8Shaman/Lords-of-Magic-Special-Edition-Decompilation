
int __fastcall FUN_004f2ef0(int param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  
  if ((((byte)**(ushort **)(param_1 + 0x40) & 7) == 4) && ((*(byte *)(param_1 + 0x68) & 1) != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  if ((*(uint *)(param_1 + 0x34) & 0x200 ^ (**(ushort **)(param_1 + 0x40) & 0x4000) >> 0xe) == uVar2
     ) {
    lVar3 = __ftol((float10)*(float *)(param_1 + 0x48));
    return (int)lVar3;
  }
  iVar1 = *(int *)(param_1 + 0x44);
  lVar3 = __ftol((float10)*(float *)(param_1 + 0x48));
  return CONCAT22((short)((ulonglong)lVar3 >> 0x10),*(short *)(iVar1 + 2) - (short)lVar3) + -1;
}


