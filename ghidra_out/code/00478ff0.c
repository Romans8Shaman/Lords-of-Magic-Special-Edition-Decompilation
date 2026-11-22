
void __fastcall FUN_00478ff0(uint param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint local_4;
  
  iVar2 = 5;
  puVar4 = (undefined4 *)(param_1 + 0x6f8);
  piVar3 = (int *)(param_1 + 0xdc);
  local_4 = param_1;
  do {
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      (/*IC:00479016*/**(code **)(*piVar1 + 0x24))(piVar1,&local_4);
      if ((local_4 & 5) == 0) {
        FUN_00478f60((int *)*piVar3);
        FUN_00479050(puVar4 + -1,piVar3);
        *puVar4 = 0xffffffff;
      }
    }
    piVar3 = piVar3 + 1;
    puVar4 = puVar4 + 7;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


