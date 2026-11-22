
void __thiscall FUN_00448f50(void *this,int param_1)

{
  int iVar1;
  int *this_00;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_4;
  
  if (-1 < param_1) {
    iVar1 = *(int *)((int)this + 0x48);
    uVar4 = 0;
    iVar7 = 0;
    if ((iVar1 != 0) && (iVar2 = 0, 0 < *(int *)(iVar1 + 0x4c))) {
      iVar6 = 0;
      iVar5 = DAT_005cd2f4;
      do {
        iVar3 = *(int *)(iVar6 + 0xc4 + iVar1);
        if (((iVar3 < 0) || (DAT_005cd2f0 <= iVar3)) || (iVar5 == 0)) {
          iVar3 = 0;
        }
        else {
          iVar3 = iVar5 + iVar3 * 1000;
        }
        if (((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) == 7)) &&
           ((*(byte *)(iVar6 + 0xe8 + iVar1) & 1) == 0)) {
          *(undefined4 *)(iVar6 + 0xd0 + iVar1) = 0;
          uVar4 = uVar4 | 1 << ((byte)iVar2 & 0x1f);
          iVar7 = iVar7 + 1;
          iVar5 = DAT_005cd2f4;
        }
        iVar2 = iVar2 + 1;
        iVar6 = iVar6 + 0x4c;
        iVar1 = *(int *)((int)this + 0x48);
      } while (iVar2 < *(int *)(iVar1 + 0x4c));
    }
    if (0 < iVar7) {
      this_00 = *(int **)((int)this + 0x48);
      if (iVar7 <= this_00[0x13]) {
        if (iVar7 < this_00[0x13]) {
          iVar1 = FUN_00414e50(this_00,~uVar4,&local_4);
          if (iVar1 == 0) {
            return;
          }
          this_00 = (int *)FUN_00482ac0(&DAT_005aa12c,local_4,0);
          (/*IC:00449028*/**(code **)(*this_00 + 0x2c))(this_00);
          FUN_00420630((int)this_00);
          if (this_00 == (int *)0x0) {
            return;
          }
        }
        else {
          *(undefined4 *)((int)this + 0x48) = 0;
        }
        FUN_004237d0(this_00,param_1);
      }
    }
  }
  return;
}


