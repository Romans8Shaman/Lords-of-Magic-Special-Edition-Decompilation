
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_00540240(uint param_1,uint param_2,int *param_3)

{
  ushort uVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  
  dVar2 = (double)CONCAT17(param_2._3_1_,
                           CONCAT16(param_2._2_1_,CONCAT24((undefined2)param_2,param_1)));
  if ((NAN(dVar2) || NAN(_DAT_0054f100)) || dVar2 == _DAT_0054f100) {
    *param_3 = 0;
    return (float10)0.0;
  }
  if (((param_2 & 0x7ff00000) != 0) || (((param_2 & 0xfffff) == 0 && (param_1 == 0)))) {
    fVar6 = FUN_005401a0(param_1,param_2,0);
    *param_3 = (short)((ushort)(param_2 >> 0x14) & 0x7ff) + -0x3fe;
    return (float10)(double)fVar6;
  }
  dVar2 = (double)CONCAT17(param_2._3_1_,
                           CONCAT16(param_2._2_1_,CONCAT24((undefined2)param_2,param_1)));
  iVar5 = -0x3fd;
  uVar4 = param_2;
  uVar3 = param_2;
  while ((uVar3 & 0x100000) == 0) {
    uVar3 = uVar4 << 1;
    param_2._0_2_ = (undefined2)uVar3;
    param_2._2_1_ = (undefined1)(uVar3 >> 0x10);
    param_2._3_1_ = (byte)(uVar3 >> 0x18);
    uVar4 = uVar3;
    if ((param_1 & 0x80000000) != 0) {
      uVar4 = uVar3 | 1;
      param_2._0_2_ = (undefined2)uVar4;
    }
    param_1 = param_1 << 1;
    iVar5 = iVar5 + -1;
  }
  uVar1 = CONCAT11(param_2._3_1_,param_2._2_1_) & 0xffef;
  param_2._2_1_ = (undefined1)uVar1;
  param_2._3_1_ = (byte)(uVar1 >> 8);
  if ((NAN(dVar2) || NAN(_DAT_0054f100)) || dVar2 < _DAT_0054f100) {
    param_2._3_1_ = param_2._3_1_ | 0x80;
  }
  fVar6 = FUN_005401a0(param_1,CONCAT13(param_2._3_1_,CONCAT12(param_2._2_1_,(undefined2)param_2)),0
                      );
  *param_3 = iVar5;
  return (float10)(double)fVar6;
}


