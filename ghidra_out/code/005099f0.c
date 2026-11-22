
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

undefined4 __thiscall FUN_005099f0(void *this,byte *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  char **ppcVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  uint *puVar11;
  int *piVar12;
  int iStack_caac;
  int iStack_caa8;
  int iStack_caa4;
  int iStack_caa0;
  int iStack_ca9c;
  int *piStack_ca98;
  int *piStack_ca94;
  byte abStack_ca90 [4];
  int iStack_ca8c;
  undefined1 *puStack_ca88;
  undefined4 *puStack_ca84;
  int aiStack_ca80 [2];
  int iStack_ca78;
  undefined4 uStack_ca70;
  char *apcStack_ca6c [4];
  char *pcStack_ca5c;
  byte bStack_ca58;
  undefined1 auStack_ca57 [99];
  undefined4 uStack_c9f4;
  undefined1 auStack_c9f0 [52];
  undefined1 auStack_c9bc [4];
  undefined1 auStack_c9b8 [4];
  undefined1 auStack_c9b4 [4];
  undefined1 auStack_c9b0 [4];
  undefined1 auStack_c9ac [4];
  undefined1 auStack_c9a8 [4];
  undefined1 auStack_c9a4 [4];
  undefined1 auStack_c9a0 [4];
  uint auStack_c99c [8];
  uint auStack_c97c [25];
  undefined1 auStack_c918 [100];
  undefined1 auStack_c8b4 [100];
  undefined1 auStack_c850 [100];
  undefined1 auStack_c7ec [100];
  undefined1 auStack_c788 [100];
  undefined1 auStack_c724 [100];
  undefined1 auStack_c6c0 [100];
  byte abStack_c65c [256];
  byte abStack_c55c [256];
  byte abStack_c45c [256];
  undefined1 auStack_c35c [49996];
  undefined4 uStack_10;
  void *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_0054c1cb;
  local_c = ExceptionList;
  uStack_10 = 0x509a0f;
  apcStack_ca6c[0] = s_LBM__s_0057390c;
  apcStack_ca6c[1] = s_TILES__d__d_00573900;
  apcStack_ca6c[2] = s_TILESIZE__d__d_005738f0;
  apcStack_ca6c[3] = s_TERRAINTYPE__d__d__________d__d__005738bc;
  pcStack_ca5c = s_TILE__d__d_______________________00573880;
  ExceptionList = &local_c;
  FUN_004fe720(aiStack_ca80,(LPCSTR)param_1,0,(int)auStack_c35c,50000,1);
  local_4 = 0;
  if (aiStack_ca80[0] == 0) {
    local_4 = 0xffffffff;
    FUN_004fe9c0(aiStack_ca80);
    uVar1 = 0;
  }
  else {
    puStack_ca88 = (undefined1 *)((int)this + 0x40);
    *(undefined4 *)((int)this + 0x150) = 0;
    piVar12 = (int *)((int)this + 0x148);
    *puStack_ca88 = 0;
    iStack_ca8c = (int)this + 0x150;
    piVar6 = (int *)((int)this + 0x144);
    puStack_ca84 = (undefined4 *)((int)this + 0x14c);
    iStack_caa4 = 0;
    *piVar12 = 0;
    *piVar6 = 0;
    *puStack_ca84 = 0;
    iStack_caa0 = 0;
    iStack_caac = 0;
    piStack_ca98 = piVar12;
    piStack_ca94 = piVar6;
    do {
      iVar2 = FUN_004fe9f0(aiStack_ca80,(int)&bStack_ca58,100);
      if (iVar2 != 0) {
        do {
          FUN_005098a0((char *)&bStack_ca58);
          iVar2 = 0;
          ppcVar7 = apcStack_ca6c;
          do {
            puVar11 = (uint *)*ppcVar7;
            puVar3 = FUN_0053ae60(puVar11,'=');
            iVar9 = (int)puVar3 + (1 - (int)puVar11);
            iVar4 = FUN_00548ed0(&bStack_ca58,(byte *)puVar11,iVar9);
            if (iVar4 == 0) break;
            iVar2 = iVar2 + 1;
            ppcVar7 = ppcVar7 + 1;
          } while (iVar2 < 5);
          switch(iVar2) {
          case 0:
            if (iStack_caac == 0) {
              FUN_0053a8b0(param_1,abStack_ca90,abStack_c65c,abStack_c45c,abStack_c55c);
              FUN_0053a090(puStack_ca88,s__s_s_s_00573878,(uint)abStack_ca90,abStack_c65c,
                           auStack_ca57 + iVar9 + -1);
            }
            break;
          case 1:
            if (iStack_caac == 0) {
              iVar2 = FUN_0053ae00((char *)&bStack_ca58,(byte *)s_TILES__d__d_00573900,piStack_ca94,
                                   piStack_ca98);
joined_r0x00509c0f:
              if (iVar2 != 2) goto LAB_00509dcf;
            }
            break;
          case 2:
            if (iStack_caac == 0) {
              iVar2 = FUN_0053ae00((char *)&bStack_ca58,(byte *)s_TILESIZE__d__d_005738f0,
                                   puStack_ca84,iStack_ca8c);
              goto joined_r0x00509c0f;
            }
            break;
          case 3:
            iVar2 = FUN_0053ae00((char *)&bStack_ca58,
                                 (byte *)s_TERRAINTYPE__d__d__________d__d__005738bc,&iStack_caa8,
                                 &uStack_c9f4,auStack_c9f0,auStack_c9bc,auStack_c9b8,auStack_c9b4,
                                 auStack_c9b0,auStack_c9ac,auStack_c9a8,auStack_c9a4,auStack_c9a0);
            if (iVar2 == 0xb) {
              if (iStack_caac == 0) {
                if (iStack_caa4 < iStack_caa8) {
                  iStack_caa4 = iStack_caa8;
                }
              }
              else {
                puVar8 = &uStack_c9f4;
                puVar10 = (undefined4 *)(*(int *)((int)this + 0x10) + iStack_caa8 * 0x58);
                for (iVar2 = 0x16; iVar2 != 0; iVar2 = iVar2 + -1) {
                  *puVar10 = *puVar8;
                  puVar8 = puVar8 + 1;
                  puVar10 = puVar10 + 1;
                }
              }
            }
            else {
LAB_00509dcf:
              FUN_005098d0((char *)&bStack_ca58);
            }
            break;
          case 4:
            iVar2 = FUN_0053ae00((char *)&bStack_ca58,
                                 (byte *)s_TILE__d__d_______________________00573880,&iStack_ca9c,
                                 &iStack_caa8,auStack_c97c,auStack_c918,auStack_c8b4,auStack_c850,
                                 auStack_c7ec,auStack_c788,auStack_c724,auStack_c6c0);
            if (iVar2 != 10) goto LAB_00509dcf;
            if (iStack_caac == 0) {
              if (iStack_caa4 < iStack_caa8) {
                iStack_caa4 = iStack_caa8;
              }
              iStack_caa0 = iStack_caa0 + 1;
            }
            else {
              puVar11 = auStack_c99c;
              puVar3 = auStack_c97c;
              iVar2 = 8;
              do {
                uVar5 = FUN_00509980(puVar3);
                *puVar11 = uVar5;
                puVar3 = puVar3 + 0x19;
                puVar11 = puVar11 + 1;
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
              iVar2 = FUN_00508f30(this,iStack_ca9c,iStack_caa8);
              if (iVar2 == 0) {
                FUN_005098d0((char *)&bStack_ca58);
              }
              iVar2 = FUN_00508ff0(this,iStack_ca9c,iStack_caa8,(int *)auStack_c99c);
              if (iVar2 == 0) goto LAB_00509dcf;
            }
          }
          iVar2 = FUN_004fe9f0(aiStack_ca80,(int)&bStack_ca58,100);
        } while (iVar2 != 0);
        piVar6 = piStack_ca94;
        piVar12 = piStack_ca98;
      }
      if (iStack_caac == 0) {
        iVar2 = FUN_00508c70(this,iStack_caa4 + 1,*piVar6 * *piVar12,iStack_caa0);
        if (iVar2 == 0) {
          FUN_005047d0(s_TileSet__Load___Init_failed_00573858);
          local_4 = 0xffffffff;
          FUN_004fe9c0(aiStack_ca80);
          ExceptionList = local_c;
          return 0;
        }
        if (iStack_ca78 != 0) {
          uStack_ca70 = 0;
        }
      }
      iStack_caac = iStack_caac + 1;
    } while (iStack_caac < 2);
    local_4 = 0xffffffff;
    FUN_004fe9c0(aiStack_ca80);
    uVar1 = 1;
  }
  ExceptionList = local_c;
  return uVar1;
}


