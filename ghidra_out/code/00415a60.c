
void __fastcall FUN_00415a60(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_4;
  
  iVar4 = 0;
  local_4 = -1;
  if (0 < *(int *)(param_1 + 0x4c)) {
    piVar2 = (int *)(param_1 + 0xc4);
    do {
      iVar1 = FUN_00525fc0(piVar2);
      if (-1 < iVar1) {
        local_4 = iVar4;
        break;
      }
      iVar4 = iVar4 + 1;
      piVar2 = piVar2 + 0x13;
    } while (iVar4 < *(int *)(param_1 + 0x4c));
  }
  if ((local_4 != -1) && (iVar4 = 0, 0 < *(int *)(param_1 + 0x4c))) {
    puVar3 = (undefined4 *)(param_1 + 0xe0);
    do {
      iVar1 = FUN_00525fc0(puVar3 + -7);
      if (iVar1 < 0) {
        piVar2 = (int *)*puVar3;
        while ((piVar2 != (int *)0x0 &&
               (iVar1 = FUN_00427b80(*piVar2), (*(byte *)(iVar1 + 0x18) & 0x10) == 0))) {
          FUN_00429150(&DAT_005aa12c,*(int *)(param_1 + 0x28),iVar4,*(int *)(param_1 + 0x28),local_4
                       ,piVar2[3]);
          piVar2 = (int *)*puVar3;
        }
      }
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 0x13;
    } while (iVar4 < *(int *)(param_1 + 0x4c));
  }
  return;
}


