
void __thiscall FUN_00448e40(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint local_c;
  int local_4;
  
  if (-1 < param_1) {
    iVar2 = *(int *)((int)this + 0x48);
    uVar6 = 0;
    iVar5 = 0;
    local_c = 0;
    if ((iVar2 != 0) && (iVar4 = 0, 0 < *(int *)(iVar2 + 0x4c))) {
      iVar7 = DAT_005cd2f4;
      do {
        iVar1 = *(int *)(uVar6 + 0xc4 + iVar2);
        if (((iVar1 < 0) || (DAT_005cd2f0 <= iVar1)) || (iVar7 == 0)) {
          iVar1 = 0;
        }
        else {
          iVar1 = iVar7 + iVar1 * 1000;
        }
        if (iVar1 != 0) {
          iVar1 = *(int *)(uVar6 + 0xd0 + iVar2);
          if (3 < iVar1) {
            local_c = local_c | 1 << ((byte)iVar4 & 0x1f);
            iVar5 = iVar5 + 1;
            *(int *)(uVar6 + 0xd0 + iVar2) = iVar1 + -4;
            iVar7 = DAT_005cd2f4;
          }
        }
        iVar2 = *(int *)((int)this + 0x48);
        iVar4 = iVar4 + 1;
        uVar6 = uVar6 + 0x4c;
      } while (iVar4 < *(int *)(iVar2 + 0x4c));
      uVar6 = local_c;
    }
    if (0 < iVar5) {
      pvVar3 = *(void **)((int)this + 0x48);
      if (iVar5 <= *(int *)((int)pvVar3 + 0x4c)) {
        if (iVar5 < *(int *)((int)pvVar3 + 0x4c)) {
          iVar2 = FUN_00414e50(pvVar3,~uVar6,&local_4);
          if (iVar2 != 0) {
            pvVar3 = (void *)FUN_00482ac0(&DAT_005aa12c,local_4,0);
            if (pvVar3 != (void *)0x0) {
              FUN_004237d0(pvVar3,param_1);
              return;
            }
          }
        }
        else {
          *(undefined4 *)((int)this + 0x48) = 0;
          FUN_004237d0(pvVar3,param_1);
        }
      }
    }
  }
  return;
}


