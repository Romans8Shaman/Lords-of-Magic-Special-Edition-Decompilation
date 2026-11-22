
int FUN_00511630(byte *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar1 = ((((uint)*param_1 - (uint)*param_2) - (uint)param_2[2]) - (uint)param_2[1]) +
          (uint)param_1[2] + (uint)param_1[1];
  uVar5 = (int)uVar1 >> 0x1f;
  uVar2 = (uint)*param_1 - (uint)*param_2;
  uVar6 = (int)uVar2 >> 0x1f;
  uVar3 = (uint)param_1[2] - (uint)param_2[2];
  uVar7 = (int)uVar3 >> 0x1f;
  uVar4 = (uint)param_1[1] - (uint)param_2[1];
  uVar8 = (int)uVar4 >> 0x1f;
  return ((uVar4 ^ uVar8) - uVar8) +
         ((uVar1 ^ uVar5) - uVar5) + ((uVar2 ^ uVar6) - uVar6) + ((uVar3 ^ uVar7) - uVar7);
}


