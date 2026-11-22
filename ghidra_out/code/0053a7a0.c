
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_0053a7a0(uint param_1,uint param_2)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  uint local_8;
  undefined4 uStack_4;
  
  uVar3 = FUN_00540380();
  if ((param_2._2_2_ & 0x7ff0) != 0x7ff0) {
    fVar5 = FUN_0053f8b0((double)CONCAT44(param_2,param_1));
    dVar1 = (double)fVar5;
    dVar2 = (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
    if (((NAN(dVar1) || NAN(dVar2)) || dVar1 == dVar2) || ((uVar3 & 0x20) != 0)) {
      FUN_00540380();
      return (float10)dVar1;
    }
    uStack_4 = (undefined4)((ulonglong)dVar1 >> 0x20);
    local_8 = SUB84(dVar1,0);
    fVar5 = FUN_0053f920(0x10,0xb,param_1,param_2,local_8,uStack_4,uVar3);
    return fVar5;
  }
  iVar4 = FUN_005401e0(param_1,param_2);
  if (0 < iVar4) {
    if (iVar4 < 3) {
      FUN_00540380();
      return (float10)(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
    }
    if (iVar4 == 3) {
      fVar5 = FUN_0053f8d0(0xb,param_1,param_2,uVar3);
      return fVar5;
    }
  }
  dVar1 = (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) - _DAT_0054eec0;
  fVar5 = FUN_0053f920(8,0xb,param_1,param_2,SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20),uVar3);
  return fVar5;
}


