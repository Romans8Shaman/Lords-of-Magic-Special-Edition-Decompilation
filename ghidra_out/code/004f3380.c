
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_004f3380(int param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  
  iVar4 = 0;
  fVar1 = (float)*(ushort *)(*(int *)(param_1 + 0x44) + 2);
  if ((!NAN(*(float *)(param_1 + 0x48)) && !NAN(fVar1)) && fVar1 <= *(float *)(param_1 + 0x48)) {
    do {
      if (iVar4 != 0) {
        return iVar4;
      }
      fVar2 = *(float *)(param_1 + 0x48) - fVar1;
      *(float *)(param_1 + 0x48) = fVar2;
      if ((*(short *)(param_1 + 0x68) != 0) &&
         (sVar3 = *(short *)(param_1 + 0x68) + -1, *(short *)(param_1 + 0x68) = sVar3, sVar3 == 0))
      {
        if ((!NAN(fVar2) && !NAN(fVar1)) && fVar1 <= fVar2) {
          *(float *)(param_1 + 0x48) = fVar1 - _DAT_0054de2c;
        }
        iVar4 = 1;
        *(ushort *)(param_1 + 0x68) =
             (ushort)(*(byte **)(param_1 + 0x40))[3] << ((**(byte **)(param_1 + 0x40) & 7) == 4);
      }
    } while ((!NAN(*(float *)(param_1 + 0x48)) && !NAN(fVar1)) &&
             fVar1 <= *(float *)(param_1 + 0x48));
  }
  return iVar4;
}


