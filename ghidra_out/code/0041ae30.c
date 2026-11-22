
float10 __fastcall FUN_0041ae30(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  float10 fVar4;
  float local_4;
  
  iVar3 = 0;
  local_4 = 999.9;
  if (0 < *(int *)(param_1 + 0x4c)) {
    piVar2 = (int *)(param_1 + 0xc4);
    do {
      uVar1 = FUN_00521e30(piVar2);
      if ((uVar1 != 0) &&
         (fVar4 = FUN_00526000(piVar2),
         (!NAN((float10)local_4) && !NAN(fVar4)) && fVar4 <= (float10)local_4)) {
        fVar4 = FUN_00526000(piVar2);
        local_4 = (float)fVar4;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 0x13;
    } while (iVar3 < *(int *)(param_1 + 0x4c));
  }
  return (float10)local_4;
}


