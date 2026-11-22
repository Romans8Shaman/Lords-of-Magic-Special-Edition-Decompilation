
void FUN_004a8700(short param_1)

{
  int *this;
  DWORD DVar1;
  HANDLE pvVar2;
  int iVar3;
  uint uVar4;
  LPCSTR pCVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint local_42c;
  char local_428 [4];
  CHAR local_424 [260];
  uint local_320 [5];
  undefined1 local_30c [260];
  CHAR local_208 [260];
  CHAR local_104 [260];
  
  DVar1 = GetTempPathA(0x104,local_424);
  if (DVar1 == 0) {
    local_424[0] = '\0';
  }
  FUN_0053a090(local_104,s__slomd__tmp_0055cbc4,(uint)local_424);
  pvVar2 = FUN_0053af20(local_104,local_320);
  if (pvVar2 != (HANDLE)0xffffffff) {
    FUN_0053a090(local_208,&DAT_00557ab8,(uint)local_424,local_30c);
    FUN_0053a790(local_208);
    iVar3 = FUN_0053b050(pvVar2,local_320);
    while (iVar3 == 0) {
      FUN_0053a090(local_208,&DAT_00557ab8,(uint)local_424,local_30c);
      FUN_0053a790(local_208);
      iVar3 = FUN_0053b050(pvVar2,local_320);
    }
  }
  uVar4 = FUN_00482ac0(&DAT_005aa12c,(int)param_1,1);
  DAT_005cd1c0 = *(undefined2 *)(uVar4 + 0x54);
  pCVar5 = (LPCSTR)FUN_004b9570(0x44,*(short *)(uVar4 + 0x54));
  piVar6 = (int *)FUN_00539610(pCVar5,&DAT_00556168);
  iVar3 = 0;
  if (piVar6 != (int *)0x0) {
    local_428[0] = '\0';
    local_428[1] = '\0';
    local_428[2] = '\0';
    local_428[3] = '\0';
    if (*(int *)(uVar4 + 0x58) == 0) {
      local_42c = 0;
      FUN_00539660((char *)&local_42c,4,1,piVar6);
    }
    else {
      local_42c = 1;
      FUN_00539660((char *)&local_42c,4,1,piVar6);
      FUN_00539660(local_428,4,1,piVar6);
      (/*IC:004a8879*/**(code **)(**(int **)(uVar4 + 0x58) + 0x20))(*(int **)(uVar4 + 0x58),piVar6);
    }
    FUN_005394d0(piVar6);
    if (0 < *(short *)(uVar4 + 0x4e)) {
      iVar8 = 0;
      do {
        pCVar5 = (LPCSTR)FUN_004b9570(0x44,*(short *)(iVar8 + *(int *)(uVar4 + 0x50)));
        iVar7 = *(int *)(uVar4 + 0x50) + iVar8;
        if ((*(int *)(iVar7 + 8) == 0) && ((*(byte *)(iVar7 + 4) & 1) == 0)) {
          FUN_0053a790(pCVar5);
        }
        else {
          piVar6 = (int *)FUN_00539610(pCVar5,&DAT_00556168);
          if (piVar6 == (int *)0x0) {
            return;
          }
          local_42c = (uint)(*(int *)(iVar8 + 8 + *(int *)(uVar4 + 0x50)) != 0);
          FUN_00539660((char *)&local_42c,4,1,piVar6);
          FUN_00539660(local_428,4,1,piVar6);
          if (local_42c != 0) {
            this = *(int **)(iVar8 + 8 + *(int *)(uVar4 + 0x50));
            (/*IC:004a8934*/**(code **)(*this + 0x20))(this,piVar6);
          }
          FUN_005394d0(piVar6);
        }
        iVar3 = iVar3 + 1;
        iVar8 = iVar8 + 0xc;
      } while (iVar3 < *(short *)(uVar4 + 0x4e));
    }
  }
  return;
}


