
void __fastcall FUN_0052cb40(int *param_1)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  
  bVar1 = false;
  iVar2 = FUN_0052d140((int)param_1);
  iVar7 = DAT_005ae98c;
  iVar4 = iVar2;
  iVar5 = DAT_005ae998;
  if (iVar2 == -1) {
    while( true ) {
      if (iVar7 < iVar5) {
        return;
      }
      pvVar3 = (void *)FUN_004f6000(&DAT_005ae974,iVar5);
      if ((((pvVar3 != (void *)0x0) && (*(int *)((int)pvVar3 + 4) == 0)) &&
          (*(int *)((int)pvVar3 + 0x48) == *param_1)) &&
         ((iVar4 = FUN_00420970(pvVar3), iVar4 != 0 &&
          ((*(uint *)((int)pvVar3 + 0x30) & 0x1c00000) == 0)))) break;
      iVar5 = iVar5 + 1;
    }
    FUN_0052b6f0(param_1,*(int *)((int)pvVar3 + 0x28),0);
    if (param_1[0xba] != 6) {
      FUN_0041fda0((int)pvVar3);
    }
    FUN_004ba870(&DAT_005a9ddc);
    FUN_0047af50(&DAT_005ae958);
    return;
  }
  do {
    iVar5 = FUN_0041ffb0(&DAT_005ae974,*param_1,iVar4);
    puVar6 = FUN_00485080(&DAT_005aa12c,iVar5,0x3f);
    if (puVar6 == (undefined4 *)0x0) {
LAB_0052cc53:
      bVar1 = true;
    }
    else {
      iVar7 = FUN_00420970(puVar6);
      if ((iVar7 != 0) && ((puVar6[0xc] & 0x1c00000) == 0)) {
        FUN_0052b6f0(param_1,iVar5,0);
        if (param_1[0xba] != 6) {
          FUN_0041fda0((int)puVar6);
        }
        FUN_004ba870(&DAT_005a9ddc);
        goto LAB_0052cc53;
      }
    }
    if (iVar5 == iVar2) {
      bVar1 = true;
    }
    if (iVar5 == iVar4) {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_0047af50(&DAT_005ae958);
      return;
    }
    iVar4 = iVar5;
  } while( true );
}


