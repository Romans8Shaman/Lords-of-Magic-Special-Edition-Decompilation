
void __thiscall FUN_0052ff40(void *this,void *param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  pvVar1 = param_1;
  if (((((((*(int *)((int)this + 0x2f0) != 0) && (*(int *)((int)this + 0x2e8) != 3)) &&
         (*(int *)((int)this + 0x2e8) != 6)) &&
        ((iVar2 = FUN_005071c0(param_1,*(int *)this), iVar2 != 0 &&
         ((*(byte *)((int)pvVar1 + 0x30) & 8) == 0)))) &&
       ((DAT_005a79e4 == -1 &&
        ((DAT_005ae95c == 0 ||
         (iVar2 = FUN_004abdc0(&DAT_005ae958,*(int *)((int)pvVar1 + 0x1c),*(int *)this), iVar2 != 0)
         ))))) &&
      ((*(int *)((int)pvVar1 + 0xc) < 0 ||
       (((0x27f < *(int *)((int)pvVar1 + 0xc) || (*(int *)((int)pvVar1 + 0x10) < 0)) ||
        (0x17f < *(int *)((int)pvVar1 + 0x10))))))) &&
     ((((*(int *)((int)pvVar1 + 0x28) == DAT_005743b4 ||
        (uVar3 = FUN_00482ac0(&DAT_005aa12c,DAT_005743b4,0), uVar3 == 0)) ||
       ((*(int *)(uVar3 + 0x48) != *(int *)((int)pvVar1 + 0x48) ||
        (uVar4 = FUN_00419460(uVar3), uVar4 == 0)))) ||
      (((*(byte *)(uVar3 + 0x30) & 0x20) == 0 &&
       (((*(byte *)((int)pvVar1 + 0x30) & 0x20) != 0 ||
        (iVar2 = FUN_00416a30((int)pvVar1), iVar2 != 0)))))))) {
    DAT_005743b4 = *(int *)((int)pvVar1 + 0x28);
    param_1 = *(void **)((int)pvVar1 + 0x538);
    if ((int)param_1 < 0) {
      iVar2 = *(int *)((int)pvVar1 + 0x1c);
    }
    else {
      iVar5 = FUN_00427880(&DAT_005aeefc,(int *)&param_1,0);
      iVar6 = 0;
      iVar2 = *(int *)(DAT_005ae970 + (iVar5 + *(int *)((int)pvVar1 + 0x1c) * 8) * 4);
      if (iVar5 != 8) {
        while (-1 < (int)param_1) {
          iVar5 = FUN_00427880(&DAT_005aeefc,(int *)&param_1,0);
          iVar6 = iVar6 + 1;
          iVar2 = *(int *)(DAT_005ae970 + (iVar5 + iVar2 * 8) * 4);
          if ((iVar6 == 4) || (iVar5 == 8)) break;
        }
      }
    }
    FUN_0051ab30(&DAT_005876d0,iVar2 % DAT_005ae9c4,iVar2 / DAT_005ae9c4,0x140,0xc0);
    FUN_00504ce0(&DAT_00584ae8,1,0);
  }
  return;
}


