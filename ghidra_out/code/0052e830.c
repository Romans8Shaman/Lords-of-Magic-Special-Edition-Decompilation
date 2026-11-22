
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0052e830(void *this,int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  
  iVar5 = 0;
  piVar4 = (int *)((int)this + 0x18);
  do {
    puVar1 = FUN_00485080(&DAT_005aa12c,*piVar4,0x2f);
    if ((puVar1 != (undefined4 *)0x0) && (puVar1[0x12] == *(int *)this)) {
      iVar2 = FUN_004a6180(&DAT_005ae958,param_1,param_2);
      fVar6 = FUN_004a89d0(0x5ae958,puVar1[7],iVar2);
      if ((NAN(fVar6) || NAN((float10)_DAT_0054e9f8)) || fVar6 <= (float10)_DAT_0054e9f8) {
        if ((param_3 != 0) &&
           (uVar3 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + (iVar5 + 2) * 0xc),2),
           uVar3 != 0)) {
          FUN_00449ab0(uVar3,iVar2);
        }
        return 1;
      }
    }
    iVar5 = iVar5 + 1;
    piVar4 = piVar4 + 3;
  } while (iVar5 < 0x1e);
  return 0;
}


