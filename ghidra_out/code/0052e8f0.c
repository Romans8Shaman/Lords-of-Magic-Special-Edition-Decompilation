
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0052e8f0(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  float10 fVar5;
  
  uVar4 = 0;
  iVar1 = FUN_004a8470(&DAT_005ae958,param_1,param_2,0);
  if (0 < iVar1) {
    uVar4 = FUN_00482ac0(&DAT_005aa12c,iVar1,0);
  }
  if (uVar4 == 0) {
    return 0;
  }
  iVar1 = 0;
  piVar3 = (int *)((int)this + 0x18);
  do {
    puVar2 = FUN_00485080(&DAT_005aa12c,*piVar3,0x2f);
    if ((((puVar2 != (undefined4 *)0x0) && (puVar2[0x12] == *(int *)this)) &&
        (puVar2[0x12] == *(int *)(uVar4 + 0x48))) && (puVar2[10] != *(int *)(uVar4 + 0x28))) {
      FUN_004a6180(&DAT_005ae958,param_1,param_2);
      fVar5 = FUN_004a89d0(0x5ae958,puVar2[7],*(int *)(uVar4 + 0x1c));
      if ((NAN(fVar5) || NAN((float10)_DAT_0054e9fc)) || fVar5 <= (float10)_DAT_0054e9fc) {
        if (param_3 != 0) {
          FUN_00429110(puVar2[10],*(undefined4 *)(uVar4 + 0x28));
        }
        return 1;
      }
    }
    iVar1 = iVar1 + 1;
    piVar3 = piVar3 + 3;
  } while (iVar1 < 0x1e);
  return 0;
}


