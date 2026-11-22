
byte * __thiscall FUN_0049abe0(void *this,uint param_1,uint param_2,uint param_3,uint *param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  
  if ((*(int *)this != 0) && (iVar2 = *(int *)(*(int *)this + 8), iVar2 != 0)) {
    if (*(int *)((int)this + 4) != 0) {
      if ((int)param_1 < 0) {
        return (byte *)0x0;
      }
      if (*(int *)((int)this + 8) <= (int)param_1) {
        return (byte *)0x0;
      }
      param_1 = *(uint *)(*(int *)((int)this + 4) + param_1 * 4);
    }
    if ((-1 < (int)param_1) && ((int)param_1 < (int)(uint)*(ushort *)(iVar2 + 0x1a))) {
      iVar2 = (param_1 & 0xffff) * 0x10;
      *param_4 = 0;
      pbVar3 = (byte *)(*(int *)(*(int *)(*(int *)this + 8) + 0x1c) + iVar2);
      if (((pbVar3[1] & 0x80) != 0) && (bVar1 = pbVar3[0xb], (int)(uint)bVar1 <= (int)param_2)) {
        *param_4 = 1;
        param_2 = ((uint)bVar1 * 2 - param_2) - 2;
      }
      if ((-1 < (int)param_2) && ((int)param_2 < (int)(uint)pbVar3[0xb])) {
        uVar4 = (uint)*(ushort *)(*(int *)(pbVar3 + 0xc) + 2 + param_2 * 8);
        if (((*pbVar3 & 7) == 4) && ((int)uVar4 <= (int)param_3)) {
          param_3 = (uVar4 * 2 - param_3) - 2;
        }
        if ((-1 < (int)param_3) && ((int)param_3 < (int)uVar4)) {
          pbVar3 = (byte *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)this + 8) + 0x1c) + 0xc +
                                             iVar2) + 4 + (param_2 & 0xffff) * 8) +
                           (param_3 & 0xffff) * 0x10);
          if ((*pbVar3 & 1) == 0) {
            return pbVar3;
          }
          *param_4 = *param_4 ^ 1;
          return pbVar3;
        }
      }
    }
  }
  return (byte *)0x0;
}


