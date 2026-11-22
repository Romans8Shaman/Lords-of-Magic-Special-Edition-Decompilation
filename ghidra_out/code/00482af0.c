
undefined4 __thiscall FUN_00482af0(void *this,LPCSTR param_1)

{
  char cVar1;
  int *piVar2;
  DWORD DVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  int local_274;
  int local_270;
  void *local_26c;
  int local_268;
  undefined4 local_264 [5];
  char *local_250;
  char local_24c [4];
  char local_248 [572];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054a77b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = (int *)FUN_00539610(param_1,&DAT_00556168);
  if (piVar2 != (int *)0x0) {
    if (*(int *)((int)this + 0x8c) != 7) {
      *(undefined4 *)((int)this + 0x8c) = 6;
    }
    FUN_00487590(local_264);
    local_4 = 0;
    FUN_00487610(local_264,*(int *)((int)this + 0xa4));
    FUN_00539660(s_LS_VER__0055b190,8,1,piVar2);
    FUN_00539660((char *)&DAT_0055b1b0,4,1,piVar2);
    DVar3 = FUN_0053ac20(piVar2);
    FUN_00487650(local_264,DVar3);
    FUN_00539660(s_LS_MULT_0055b1a8,8,1,piVar2);
    cVar1 = *(char *)((int)this + 0x54f);
    *(undefined1 *)((int)this + 0x54d) = 1;
    if ('\x01' < cVar1) {
      cVar1 = '\x01';
    }
    *(char *)((int)this + 0x54d) = cVar1;
    if (cVar1 <= *(char *)((int)this + 0x54e)) {
      cVar1 = *(char *)((int)this + 0x54e);
    }
    local_274 = 0;
    *(char *)((int)this + 0x54d) = cVar1;
    do {
      local_26c = (void *)((int)this + local_274 * 0x1d84);
      local_268 = local_274 * 0x24;
      local_250 = local_248 + local_274 * 0x24;
      uVar5 = 0xffffffff;
      pcVar7 = (char *)((int)local_26c + 0x50ac);
      do {
        pcVar8 = pcVar7;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar7 = pcVar8 + -uVar5;
      pcVar8 = local_250;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      local_274 = local_274 + 1;
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
      *(undefined4 *)(local_24c + local_268) = *(undefined4 *)((int)local_26c + 0x6620);
    } while (local_274 < 0x10);
    FUN_004839a0(piVar2,(char *)((int)this + 0x520),local_24c);
    FUN_00539660(s_LS_MAP__0055b168,8,1,piVar2);
    FUN_004a5440((void *)((int)this + 0x482c),piVar2);
    FUN_004a54e0((void *)((int)this + 0x482c),piVar2);
    FUN_004c8fc0((void *)((int)this + 0x4b34),piVar2);
    FUN_00539660(s_LS_SPR__0055b170,8,1,piVar2);
    FUN_004f6bc0((void *)((int)this + 0x4848),piVar2);
    FUN_00539660(s_LS_USER_0055b178,8,1,piVar2);
    FUN_0052d040(&DAT_00584ae8,piVar2);
    DVar3 = FUN_0053ac20(piVar2);
    FUN_00487650(local_264,DVar3);
    FUN_00539660(s_LS_GAME_0055b180,8,1,piVar2);
    FUN_00539660((char *)((int)this + 0x5004),4,1,piVar2);
    FUN_00539660((char *)((int)this + 0x5008),4,1,piVar2);
    FUN_00539660((char *)((int)this + 0x228a8),4,1,piVar2);
    iVar4 = FUN_0052b3b0((void *)((int)this + 0x23060),piVar2);
    if ((((iVar4 != 0) &&
         (uVar5 = FUN_00539660((char *)((int)this + 0x4fb4),4,1,piVar2), uVar5 == 1)) &&
        (uVar5 = FUN_00539660((char *)((int)this + 0x4fc8),4,1,piVar2), uVar5 == 1)) &&
       (uVar5 = FUN_00539660((char *)((int)this + 0x4fcc),0x20,1,piVar2), uVar5 == 1)) {
      FUN_00539660((char *)((int)this + 0x4dc4),4,1,piVar2);
      iVar4 = FUN_004c4010((void *)((int)this + 0x4db0),piVar2);
      if (((iVar4 != 0) &&
          (uVar5 = FUN_00539660((char *)((int)this + 0x230cc),200,1,piVar2), uVar5 == 1)) &&
         (uVar5 = FUN_00539660((char *)((int)this + 0x23194),4,1,piVar2), uVar5 == 1)) {
        DVar3 = FUN_0053ac20(piVar2);
        FUN_00487650(local_264,DVar3);
        FUN_00539660(s_LS_PLR__0055b188,8,1,piVar2);
        local_274 = 0;
        do {
          DVar3 = FUN_0053ac20(piVar2);
          FUN_00487650(local_264,DVar3);
          uVar5 = *(uint *)((int)this + local_274 * 0x1d84 + 0x6640);
          if (((uVar5 & 1) != 0) || (((byte)uVar5 & 0x80) == 0x80)) {
            FUN_00539660((char *)&local_274,4,1,piVar2);
            FUN_004bce20((void *)((int)this + local_274 * 0x1d84 + 0x5068),piVar2);
          }
          local_274 = local_274 + 1;
        } while (local_274 < 0x10);
        local_274 = -1;
        FUN_00539660((char *)&local_274,4,1,piVar2);
        local_274 = 0;
        do {
          local_270 = *(int *)((int)this + local_274 * 0x1d84 + 0x6620);
          if (local_270 < 0) {
            local_270 = FUN_00524340(&DAT_005cd2ec,*(int *)((int)this + local_274 * 0x1d84 + 0x6618)
                                     ,*(int *)((int)this + local_274 * 4 + 0x4fcc));
          }
          FUN_00539660((char *)&local_270,4,1,piVar2);
          local_274 = local_274 + 1;
        } while (local_274 < 8);
        FUN_00539660(s_LS_REGN_0055b198,8,1,piVar2);
        FUN_004c7390(&DAT_005aef04,piVar2);
        DVar3 = FUN_0053ac20(piVar2);
        FUN_00487650(local_264,DVar3);
        FUN_00539660(s_LS_ALRM_0055b1a0,8,1,piVar2);
        FUN_0040b7d0((void *)((int)this + 0x4d4c),piVar2);
        FUN_0040c230((void *)((int)this + 0x4d60),piVar2);
        FUN_0040ccf0((void *)((int)this + 0x4d74),piVar2);
        FUN_0040d9f0((void *)((int)this + 0x4d84),piVar2);
        FUN_0040e4e0((void *)((int)this + 0x4d94),piVar2);
        FUN_0040f600((void *)((int)this + 0x4da4),piVar2);
        DVar3 = FUN_0053ac20(piVar2);
        FUN_00487650(local_264,DVar3);
        FUN_005394d0(piVar2);
        local_4 = 0xffffffff;
        FUN_004875f0(local_264);
        ExceptionList = local_c;
        return 1;
      }
    }
    FUN_005394d0(piVar2);
    local_4 = 0xffffffff;
    FUN_004875f0(local_264);
  }
  ExceptionList = local_c;
  return 0;
}


