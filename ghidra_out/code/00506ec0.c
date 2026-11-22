
void __fastcall FUN_00506ec0(void *param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = DAT_005ae98c;
  for (iVar5 = DAT_005ae998; iVar5 <= iVar1; iVar5 = iVar5 + 1) {
    pvVar2 = (void *)FUN_004f6000(&DAT_005ae974,iVar5);
    if (((((pvVar2 != (void *)0x0) && (*(int *)((int)pvVar2 + 4) == 0)) &&
         (*(int *)((int)pvVar2 + 0x48) != *(int *)((int)param_1 + 0x48))) &&
        ((iVar3 = FUN_004c2330((int)pvVar2), 0 < iVar3 &&
         ((*(uint *)((int)pvVar2 + 0x5cc) & 1 << ((byte)*(undefined4 *)((int)param_1 + 0x48) & 0x1f)
          ) != 0)))) && (iVar3 = FUN_00506460(param_1,pvVar2,0), iVar3 != 0)) {
      *(uint *)((int)pvVar2 + 0x5cc) =
           *(uint *)((int)pvVar2 + 0x5cc) &
           ~(1 << ((byte)*(undefined4 *)((int)param_1 + 0x48) & 0x1f));
      iVar3 = FUN_00420580((int)param_1);
      if (iVar3 != 0) {
        *(undefined1 *)((int)pvVar2 + 0x5d0) = 1;
      }
      iVar3 = FUN_004c1c50((int)pvVar2);
      if ((iVar3 != 0) &&
         (uVar4 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)pvVar2 + 0x5b4),0), uVar4 != 0)) {
        *(undefined4 *)(uVar4 + 0x5cc) = *(undefined4 *)((int)pvVar2 + 0x5cc);
      }
    }
  }
  return;
}


