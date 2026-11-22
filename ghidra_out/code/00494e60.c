
void __thiscall
FUN_00494e60(void *this,int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  ushort *puVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  byte *pbVar8;
  int local_4;
  
  iVar5 = *(int *)this;
  if (iVar5 != 0) {
    iVar4 = (param_3 - param_1) + 1;
    local_4 = (param_4 - param_2) + 1;
    if (param_1 < 0) {
      iVar4 = iVar4 + param_1;
      param_1 = 0;
    }
    if (param_2 < 0) {
      local_4 = local_4 + param_2;
      param_2 = 0;
    }
    if (*(int *)((int)this + 4) <= iVar4 + param_1) {
      iVar4 = *(int *)((int)this + 4) - param_1;
    }
    if (*(int *)((int)this + 8) <= local_4 + param_2) {
      local_4 = *(int *)((int)this + 8) - param_2;
    }
    if ((*(byte *)((int)this + 0x14) & 4) == 0) {
      iVar3 = *(int *)((int)this + 0xc);
      iVar5 = param_2 * iVar3 + param_1 + iVar5;
      iVar6 = 0;
      if (0 < iVar4) {
        do {
          if ((param_5 & 0xffff & 1 << ((byte)iVar6 & 0xf)) != 0) {
            *(byte *)(iVar5 + iVar6) = ~*(byte *)(iVar5 + iVar6);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar4);
      }
      pbVar2 = (byte *)(iVar5 + iVar3);
      iVar5 = 1;
      if (1 < local_4 + -1) {
        pbVar8 = pbVar2 + iVar4;
        do {
          if (((param_5 & 0xffff & 1 << ((byte)iVar5 & 0xf)) != 0) &&
             (*pbVar2 = ~*pbVar2, 1 < iVar4)) {
            pbVar8[-1] = ~pbVar8[-1];
          }
          iVar5 = iVar5 + 1;
          pbVar2 = pbVar2 + iVar3;
          pbVar8 = pbVar8 + iVar3;
        } while (iVar5 < local_4 + -1);
      }
      iVar5 = 0;
      if (0 < iVar4) {
        do {
          if ((param_5 & 0xffff & 1 << ((byte)iVar5 & 0xf)) != 0) {
            pbVar2[iVar5] = ~pbVar2[iVar5];
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar4);
      }
    }
    else {
      iVar3 = (int)*(uint *)((int)this + 0xc) >> 1;
      puVar1 = (ushort *)(iVar5 + (*(uint *)((int)this + 0xc) & 0xfffffffe) * param_2 + param_1 * 2)
      ;
      iVar5 = 0;
      if (0 < iVar4) {
        puVar7 = puVar1;
        do {
          if ((param_5 & 0xffff & 1 << ((byte)iVar5 & 0xf)) != 0) {
            *puVar7 = ~*puVar7;
          }
          iVar5 = iVar5 + 1;
          puVar7 = puVar7 + 1;
        } while (iVar5 < iVar4);
      }
      iVar5 = 1;
      puVar1 = puVar1 + iVar3;
      if (1 < local_4 + -1) {
        do {
          if (((param_5 & 0xffff & 1 << ((byte)iVar5 & 0xf)) != 0) &&
             (*puVar1 = ~*puVar1, 1 < iVar4)) {
            puVar1[iVar4 + -1] = ~puVar1[iVar4 + -1];
          }
          iVar5 = iVar5 + 1;
          puVar1 = puVar1 + iVar3;
        } while (iVar5 < local_4 + -1);
      }
      iVar5 = 0;
      if (0 < iVar4) {
        do {
          if ((param_5 & 0xffff & 1 << ((byte)iVar5 & 0xf)) != 0) {
            *puVar1 = ~*puVar1;
          }
          iVar5 = iVar5 + 1;
          puVar1 = puVar1 + 1;
        } while (iVar5 < iVar4);
        return;
      }
    }
  }
  return;
}


