
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0040e250(void *this,void *param_1,int param_2)

{
  uint *puVar1;
  uint *this_00;
  bool bVar2;
  int *this_01;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  float10 fVar8;
  longlong lVar9;
  uint *local_4;
  
  local_4 = (uint *)0x0;
  this_01 = (int *)FUN_00482ac0(&DAT_005aa12c,param_2,0);
  if (((this_01 != (int *)0x0) && (iVar4 = this_01[0x12], -1 < iVar4)) && (iVar4 != 0xf)) {
    DAT_0055572c = param_2;
    bVar2 = false;
    uVar3 = 1 << ((byte)iVar4 & 0x1f);
    *(undefined4 *)((int)this + 0xc) = 1;
    puVar1 = *(uint **)this;
    while ((this_00 = puVar1, this_00 != (uint *)0x0 && (!bVar2))) {
      bVar7 = false;
      iVar4 = FUN_004f6000(&DAT_005ae974,this_00[2]);
      if (iVar4 == 0) {
LAB_0040e37f:
        bVar7 = true;
      }
      else {
        FUN_0040dfb0(this_00);
        if (((uVar3 & *this_00) != 0) &&
           (iVar5 = FUN_004abe50(&DAT_005ae958,*(int *)(iVar4 + 0x1c),(byte)this_01[0x12]),
           iVar5 != 0)) {
          iVar5 = (/*IC:0040e311*/**(code **)(*this_01 + 0x38))(this_01);
          fVar8 = FUN_004a89d0(0x5ae958,*(int *)(iVar4 + 0x1c),this_01[7]);
          lVar9 = __ftol(fVar8 - (float10)_DAT_0054d3a0);
          if ((int)lVar9 <= iVar5) {
            FUN_0040dd00(this_00,param_1);
            bVar7 = DAT_00578138 != 0;
            uVar6 = *this_00 & ~uVar3;
            *this_00 = uVar6;
            if ((uVar6 == 0) || ((this_00[1] & 1) != 0)) {
              bVar7 = true;
            }
            bVar2 = true;
          }
        }
        if (*this_00 == 0) goto LAB_0040e37f;
      }
      if (bVar7) {
        puVar1 = (uint *)this_00[0x10];
        if (local_4 == (uint *)0x0) {
          *(uint **)this = puVar1;
          FUN_0040d760(this,(int)this_00);
        }
        else {
          local_4[0x10] = (uint)puVar1;
          FUN_0040d760(this,(int)this_00);
        }
      }
      else {
        puVar1 = (uint *)this_00[0x10];
        local_4 = this_00;
      }
    }
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  return;
}


