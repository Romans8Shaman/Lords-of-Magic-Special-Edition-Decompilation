
undefined4 __fastcall
FUN_004ff050(void *param_1,undefined4 unused_reg_1,undefined4 unused_stack_0,
            undefined4 unused_stack_4,undefined4 unused_stack_8,uint *unused_stack_12)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 unused_reg_1_00;
  int iVar6;
  void *this;
  char *pcVar7;
  char *pcVar8;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054c02b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar2 = (undefined4 *)Ordinal_401(0xaa0,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  uStack_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_004d2160(puVar2,unused_reg_1_00,&PTR_s_cameraposition_00560f20,&PTR_DAT_0055ea60);
  }
  uStack_4 = 0xffffffff;
  *(undefined4 **)((int)param_1 + 0x23090) = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    FUN_004c4b10((void *)((int)param_1 + 0x487dc),1000,0x105);
    FUN_00524100((void *)((int)param_1 + 0x48804),500);
    FUN_0050d030((void *)((int)param_1 + 0x4881c),0x32);
    *(undefined4 *)((int)param_1 + 0x232a4) = 0;
    iVar6 = 0;
    this = (void *)((int)param_1 + 0x232a8);
    do {
      *(undefined4 *)((int)this + 0x2e8) = 2;
      FUN_0052c720(this,iVar6);
      iVar6 = iVar6 + 1;
      this = (void *)((int)this + 0x400);
    } while (iVar6 < 8);
    *(undefined4 *)(*(int *)((int)param_1 + 0x232a4) * 0x400 + 0x23590 + (int)param_1) = 0;
    if (*(int *)((int)param_1 + 0x22f18) != 0) {
      Ordinal_403(*(int *)((int)param_1 + 0x22f18),s_C__lomse_source_storm_h_00555130,0x3f6,0);
    }
    *(undefined4 *)((int)param_1 + 0x22f1c) = 0;
    *(undefined4 *)((int)param_1 + 0x22f18) = 0;
    *(undefined4 *)((int)param_1 + 0x22f20) = 0;
    *(undefined4 *)((int)param_1 + 0x22f08) = 0;
    *(undefined4 *)((int)param_1 + 0x22f0c) = 0;
    *(undefined4 *)((int)param_1 + 0x22f10) = 0;
    *(undefined4 *)((int)param_1 + 0x22f24) = 0x27f;
    *(undefined4 *)((int)param_1 + 0x22f14) = 0;
    *(undefined4 *)((int)param_1 + 0x22f28) = 0x1df;
    iVar6 = Ordinal_401(16000,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    *(int *)((int)param_1 + 0x22f18) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((int)param_1 + 0x22f0c) = 1000;
    }
    if (*(int *)((int)param_1 + 0x22fcc) != 0) {
      Ordinal_403(*(int *)((int)param_1 + 0x22fcc),s_C__lomse_source_storm_h_00555130,0x3f6,0);
    }
    *(undefined4 *)((int)param_1 + 0x22fd0) = 0;
    *(undefined4 *)((int)param_1 + 0x22fcc) = 0;
    *(undefined4 *)((int)param_1 + 0x22fd4) = 0;
    *(undefined4 *)((int)param_1 + 0x22fbc) = 0;
    *(undefined4 *)((int)param_1 + 0x22fc0) = 0;
    *(undefined4 *)((int)param_1 + 0x22fc4) = 0;
    *(undefined4 *)((int)param_1 + 0x22fd8) = 0x27f;
    *(undefined4 *)((int)param_1 + 0x22fc8) = 0;
    *(undefined4 *)((int)param_1 + 0x22fdc) = 0x1df;
    iVar6 = Ordinal_401(800,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    *(int *)((int)param_1 + 0x22fcc) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((int)param_1 + 0x22fc0) = 0x32;
    }
    if (*(int *)((int)param_1 + 0x22f60) != 0) {
      Ordinal_403(*(int *)((int)param_1 + 0x22f60),s_C__lomse_source_storm_h_00555130,0x3f6,0);
    }
    *(undefined4 *)((int)param_1 + 0x22f64) = 0;
    *(undefined4 *)((int)param_1 + 0x22f60) = 0;
    *(undefined4 *)((int)param_1 + 0x22f68) = 0;
    *(undefined4 *)((int)param_1 + 0x22f50) = 0;
    *(undefined4 *)((int)param_1 + 0x22f54) = 0;
    *(undefined4 *)((int)param_1 + 0x22f58) = 0;
    *(undefined4 *)((int)param_1 + 0x22f6c) = 0x27f;
    *(undefined4 *)((int)param_1 + 0x22f5c) = 0;
    *(undefined4 *)((int)param_1 + 0x22f70) = 0x17f;
    iVar6 = Ordinal_401(800,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    *(int *)((int)param_1 + 0x22f60) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((int)param_1 + 0x22f54) = 0x32;
    }
    if (*(int *)((int)param_1 + 0x22f3c) != 0) {
      Ordinal_403(*(int *)((int)param_1 + 0x22f3c),s_C__lomse_source_storm_h_00555130,0x3f6,0);
    }
    *(undefined4 *)((int)param_1 + 0x22f40) = 0;
    *(undefined4 *)((int)param_1 + 0x22f3c) = 0;
    *(undefined4 *)((int)param_1 + 0x22f44) = 0;
    *(undefined4 *)((int)param_1 + 0x22f2c) = 0;
    *(undefined4 *)((int)param_1 + 0x22f30) = 0;
    *(undefined4 *)((int)param_1 + 0x22f34) = 0;
    *(undefined4 *)((int)param_1 + 0x22f48) = 0x27f;
    *(undefined4 *)((int)param_1 + 0x22f38) = 0;
    *(undefined4 *)((int)param_1 + 0x22f4c) = 0x17f;
    iVar6 = Ordinal_401(16000,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    *(int *)((int)param_1 + 0x22f3c) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((int)param_1 + 0x22f30) = 1000;
    }
    if (*(int *)((int)param_1 + 0x22f84) != 0) {
      Ordinal_403(*(int *)((int)param_1 + 0x22f84),s_C__lomse_source_storm_h_00555130,0x3f6,0);
    }
    *(undefined4 *)((int)param_1 + 0x22f88) = 0;
    *(undefined4 *)((int)param_1 + 0x22f84) = 0;
    *(undefined4 *)((int)param_1 + 0x22f8c) = 0;
    *(undefined4 *)((int)param_1 + 0x22f74) = 0;
    *(undefined4 *)((int)param_1 + 0x22f78) = 0;
    *(undefined4 *)((int)param_1 + 0x22f7c) = 0;
    *(undefined4 *)((int)param_1 + 0x22f90) = 0x27f;
    *(undefined4 *)((int)param_1 + 0x22f80) = 0;
    *(undefined4 *)((int)param_1 + 0x22f94) = 0x17f;
    iVar6 = Ordinal_401(16000,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    *(int *)((int)param_1 + 0x22f84) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((int)param_1 + 0x22f78) = 1000;
    }
    FUN_00504f60(param_1);
    *(undefined4 *)((int)param_1 + 0x6d4) = 0x30;
    *(undefined4 *)((int)param_1 + 0x6d0) = 0;
    *(undefined4 *)((int)param_1 + 0x26c) = unused_stack_8;
    *(undefined4 *)((int)param_1 + 0x268) = unused_stack_4;
    *(undefined4 *)((int)param_1 + 0x128) = 0;
    if (DAT_00584c14 != 0) {
      FUN_004feac0(param_1,5000000);
      uVar3 = FUN_004fec10();
      *(undefined4 *)((int)param_1 + 8) = uVar3;
    }
    uVar4 = 0xffffffff;
    pcVar8 = s_START_GS_00573500;
    do {
      pcVar7 = pcVar8;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar7 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar7;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar8 = pcVar7 + -uVar4;
    pcVar7 = (char *)((int)param_1 + 0xc);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar7 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar7 = pcVar7 + 1;
    }
    *(undefined4 *)((int)param_1 + 0x110) = 0;
    FUN_004fec80((int)param_1);
    FUN_004fee00(param_1,unused_stack_12);
    FUN_004fed50((int)param_1);
    CreateDirectoryA(s_custldr_005572e4,(LPSECURITY_ATTRIBUTES)0x0);
    if (*(int *)((int)param_1 + 300) != 0) {
      if (*(int *)((int)param_1 + 8) == 0) {
        FUN_004feb10(param_1,s_sndfx_mpq_005734f4,(int)param_1 + 0x120);
        FUN_004feb10(param_1,s_imp_mpq_005734ec,(int)param_1 + 0x124);
        FUN_004feb10(param_1,s_pic_mpq_005734e4,(int)param_1 + 0x118);
        iVar6 = (int)param_1 + 0x11c;
        pcVar8 = s_gs_mpq_005734dc;
      }
      else {
        FUN_004feb10(param_1,s_special_mpq_005734d0,(int)param_1 + 0x114);
        FUN_004feb10(param_1,s_imp_mpq_005734ec,(int)param_1 + 0x124);
        FUN_004feb10(param_1,s_pic_mpq_005734e4,(int)param_1 + 0x118);
        FUN_004feb10(param_1,s_gs_mpq_005734dc,(int)param_1 + 0x11c);
        iVar6 = (int)param_1 + 0x120;
        pcVar8 = s_sndfx_mpq_005734f4;
      }
      FUN_004feb10(param_1,pcVar8,iVar6);
    }
    iVar6 = FUN_004751e0(param_1);
    uVar3 = 0;
    if (iVar6 != 0) {
      iVar6 = (/*IC:004ff525*/**(code **)(*(int *)((int)param_1 + 0x2be8) + 0x44))
                        ((void *)((int)param_1 + 0x2be8),*(undefined4 *)((int)param_1 + 0x68c));
      uVar3 = 0;
      if (iVar6 != 0) {
        iVar6 = FUN_0049aa80(param_1);
        uVar3 = 0;
        if (iVar6 != 0) {
          iVar6 = FUN_004783d0((int)param_1 + 0x920);
          if (iVar6 != 0) {
            Ordinal_38(0);
          }
          op_sunlight();
          FUN_0047c520(0x5aa12c);
          FUN_004c98c0();
          FUN_004d5c70(*(void **)((int)param_1 + 0x23090),*(undefined4 *)((int)param_1 + 0x6b0));
          *(undefined4 *)(*(int *)((int)param_1 + 0x23090) + 0x8c) =
               *(undefined4 *)((int)param_1 + 0x6b4);
          DAT_00584604 = 0;
          DAT_00584600 = 1;
          FUN_004d48a0(*(void **)((int)param_1 + 0x23090),(int)param_1 + 0xc);
          DAT_00584600 = 0;
          uVar3 = 1;
        }
      }
    }
  }
  ExceptionList = pvStack_c;
  return uVar3;
}


