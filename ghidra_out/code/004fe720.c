
int * __thiscall
FUN_004fe720(void *this,LPCSTR param_1,uint param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  DWORD DVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  LPCSTR pCVar10;
  char *pcVar11;
  undefined4 local_114;
  uint local_110;
  undefined4 uStack_10c;
  undefined1 auStack_108 [4];
  char local_104 [260];
  
  *(uint *)((int)this + 0xc) = param_2;
  local_110 = (param_2 & 0xff) >> 1 & 1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  if (DAT_00584c14 == 0) {
LAB_004fe8ae:
    if ((*(int *)this == 0) && ((DAT_00584c14 == 0 || ((*(byte *)((int)this + 0xc) & 1) != 0)))) {
      piVar5 = (int *)FUN_004fe6e0(&DAT_00584ae8,param_1);
      if (piVar5 != (int *)0x0) {
        uVar7 = FUN_00548ec0((int)piVar5);
        DVar6 = FUN_00548e10(uVar7);
        *(DWORD *)((int)this + 8) = DVar6;
        uStack_10c = 0;
        if ((param_3 == 0) || (param_4 < (int)(local_110 + DVar6))) {
          uVar4 = Ordinal_401(local_110 + DVar6,s_C__lomse_source_storm_h_00555130,0x3fa,0);
          *(undefined4 *)this = uVar4;
        }
        else {
          *(int *)this = param_3;
          *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) | 4;
        }
        if (*(char **)this == (char *)0x0) {
          *(undefined4 *)((int)this + 4) = 2;
        }
        else {
          FUN_005397f0(*(char **)this,*(uint *)((int)this + 8),1,piVar5);
          *(undefined4 *)((int)this + 4) = 3;
          if ((*(byte *)((int)this + 0xc) & 2) != 0) {
            *(undefined1 *)(*(int *)this + *(int *)((int)this + 8)) = 0;
            FUN_005394d0(piVar5);
            return this;
          }
        }
        FUN_005394d0(piVar5);
        return this;
      }
      *(undefined4 *)((int)this + 4) = 1;
    }
    return this;
  }
  uVar7 = 0xffffffff;
  pCVar10 = param_1;
  do {
    pcVar9 = pCVar10;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar9 = pCVar10 + 1;
    cVar1 = *pCVar10;
    pCVar10 = pcVar9;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  pcVar9 = pcVar9 + -uVar7;
  pcVar11 = local_104;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar11 = pcVar11 + 4;
  }
  pcVar2 = local_104;
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar11 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar11 = pcVar11 + 1;
  }
  while (local_104[0] != '\0') {
    if (*pcVar2 == '/') {
      *pcVar2 = '\\';
    }
    pcVar9 = pcVar2 + 1;
    pcVar2 = pcVar2 + 1;
    local_104[0] = *pcVar9;
  }
  iVar3 = Ordinal_268(*(undefined4 *)(&DAT_00584bfc + param_5 * 4),local_104,0,&local_114);
  if (iVar3 == 0) {
    iVar3 = 0;
    if (param_5 == 0) {
      iVar3 = Ordinal_268(DAT_00584c08,local_104,0,&local_114);
    }
    if (iVar3 == 0) {
      *(undefined4 *)((int)this + 4) = 1;
      goto LAB_004fe8ae;
    }
  }
  iVar3 = Ordinal_265(local_114,&uStack_10c);
  *(int *)((int)this + 8) = iVar3;
  if ((param_3 == 0) || (param_4 < (int)(local_110 + iVar3))) {
    uVar4 = Ordinal_401(local_110 + iVar3,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    *(undefined4 *)this = uVar4;
  }
  else {
    *(int *)this = param_3;
    *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) | 4;
  }
  if (*(int *)this == 0) {
    *(undefined4 *)((int)this + 4) = 2;
  }
  else {
    Ordinal_269(local_114,*(int *)this,*(undefined4 *)((int)this + 8),auStack_108,0);
    *(undefined4 *)((int)this + 4) = 3;
    if ((*(byte *)((int)this + 0xc) & 2) != 0) {
      *(undefined1 *)(*(int *)this + *(int *)((int)this + 8)) = 0;
      Ordinal_253(local_114);
      return this;
    }
  }
  Ordinal_253(local_114);
  return this;
}


