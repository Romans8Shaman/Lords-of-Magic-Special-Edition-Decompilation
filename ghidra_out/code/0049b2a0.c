
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short * __thiscall FUN_0049b2a0(void *this,int unused_stack_4,undefined4 param_p2)

{
  short sVar1;
  int iVar2;
  byte *pbVar3;
  short *psVar4;
  short *psVar5;
  int unaff_EBX;
  int iVar6;
  int unaff_EBP;
  int iVar7;
  int iVar8;
  int local_210;
  int local_20c;
  short local_200 [256];
  
  if (*(int *)((int)this + 0x6d0) == 0) {
    iVar2 = Ordinal_401(*(int *)((int)this + 0x6d4) << 9,s_C__lomse_source_storm_h_00555130,0x3fa,0)
    ;
    *(int *)((int)this + 0x6d0) = iVar2;
    if (iVar2 == 0) {
      return (short *)0x0;
    }
  }
  DAT_0058371c = DAT_0058371c + *(int *)((int)this + 0x6d4) * 0x200;
  iVar2 = 0x100;
  pbVar3 = (byte *)(unused_stack_4 + 1);
  psVar4 = local_200;
  while( true ) {
    iVar6 = CONCAT22((short)((uint)unaff_EBX >> 0x10),
                     (ushort)(pbVar3[-1] >> ((byte)_DAT_005853f0 & 0x1f))) <<
            ((byte)DAT_005853ec & 0x1f);
    unaff_EBX = CONCAT22((short)((uint)iVar6 >> 0x10),
                         (ushort)(pbVar3[1] >> ((byte)_DAT_00585400 & 0x1f))) <<
                ((byte)DAT_005853fc & 0x1f);
    unaff_EBP = (CONCAT22((short)((uint)unaff_EBP >> 0x10),
                          (ushort)(*pbVar3 >> ((byte)_DAT_005853f8 & 0x1f))) <<
                ((byte)DAT_005853f4 & 0x1f)) + iVar6 + unaff_EBX;
    iVar2 = iVar2 + -1;
    *psVar4 = (short)unaff_EBP;
    if (iVar2 == 0) break;
    pbVar3 = pbVar3 + 3;
    psVar4 = psVar4 + 1;
  }
  iVar6 = 0;
  local_20c = 0;
  local_210 = 0;
  iVar2 = *(int *)((int)this + 0x6d8);
  if (0 < iVar2) {
    psVar4 = *(short **)((int)this + 0x6d0);
    do {
      iVar8 = 0;
      psVar5 = local_200;
      iVar7 = 0x100;
      do {
        if (*psVar5 == *psVar4) {
          iVar8 = iVar8 + 1;
        }
        psVar4 = psVar4 + 1;
        psVar5 = psVar5 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      if (iVar8 == 0x100) {
        return *(short **)((int)this + 0x6d0) + iVar6 * 0x100;
      }
      if (local_20c < iVar8) {
        local_210 = iVar6;
        local_20c = iVar8;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2);
  }
  if (iVar2 < *(int *)((int)this + 0x6d4)) {
    psVar4 = local_200;
    local_210 = iVar6 << 9;
    *(int *)((int)this + 0x6d8) = iVar2 + 1;
    iVar6 = 0x100;
    iVar2 = local_210;
    do {
      sVar1 = *psVar4;
      psVar4 = psVar4 + 1;
      *(short *)(iVar2 + *(int *)((int)this + 0x6d0)) = sVar1;
      iVar2 = iVar2 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  else {
    local_210 = local_210 << 9;
  }
  return (short *)(local_210 + *(int *)((int)this + 0x6d0));
}


