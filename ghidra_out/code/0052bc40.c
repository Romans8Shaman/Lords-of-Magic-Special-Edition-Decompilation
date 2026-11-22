
undefined4 __fastcall FUN_0052bc40(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  int local_8;
  
  piVar3 = (int *)(param_1 + 0x18);
  local_8 = 0x1e;
  do {
    puVar1 = FUN_00485080(&DAT_005aa12c,*piVar3,0x2f);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[0xc] = puVar1[0xc] & 0xffffffdf;
      *(byte *)(puVar1 + 0xd) = *(byte *)(puVar1 + 0xd) | 2;
    }
    uVar2 = FUN_00482ac0(&DAT_005aa12c,*piVar3,3);
    if (uVar2 != 0) {
      *(uint *)(uVar2 + 0x30) = *(uint *)(uVar2 + 0x30) & 0xfffffffd;
      *(byte *)(uVar2 + 0x34) = *(byte *)(uVar2 + 0x34) | 2;
    }
    uVar2 = FUN_00482ac0(&DAT_005aa12c,*piVar3,2);
    if (uVar2 != 0) {
      *(uint *)(uVar2 + 0x30) = *(uint *)(uVar2 + 0x30) & 0xfffffffd;
      *(byte *)(uVar2 + 0x34) = *(byte *)(uVar2 + 0x34) | 2;
    }
    uVar2 = FUN_00482ac0(&DAT_005aa12c,*piVar3,1);
    if (uVar2 != 0) {
      *(uint *)(uVar2 + 0x30) = *(uint *)(uVar2 + 0x30) & 0xfffffffd;
      *(byte *)(uVar2 + 0x34) = *(byte *)(uVar2 + 0x34) | 2;
    }
    piVar3[-1] = -1;
    *piVar3 = -1;
    piVar3[1] = 0;
    piVar3 = piVar3 + 3;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  *(undefined4 *)(param_1 + 0x3fc) = 0;
  return 1;
}


