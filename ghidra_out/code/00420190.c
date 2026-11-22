
void __fastcall FUN_00420190(void *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *this;
  char local_8 [4];
  int local_4;
  
  iVar3 = 0;
  *(undefined4 *)((int)param_1 + 0x5cc) = 0;
  *(uint *)((int)param_1 + 0x30) = *(uint *)((int)param_1 + 0x30) & 0x99ffffd7;
  *(undefined1 *)((int)param_1 + 0x5d0) = 0;
  *(undefined4 *)((int)param_1 + 0x5d4) = 0;
  *(undefined1 *)((int)param_1 + 0x5d8) = 0xff;
  FUN_004176d0(param_1,0);
  *(undefined4 *)((int)param_1 + 0x68) = 1;
  *(undefined4 *)((int)param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x74) = 0xffffffff;
  *(undefined1 *)((int)param_1 + 0x78) = 0;
  *(undefined1 *)((int)param_1 + 0xc0) = 0;
  FUN_004010d0((undefined4 *)((int)param_1 + 0x68),(int)param_1);
  if (0 < *(int *)((int)param_1 + 0x4c)) {
    this = (int *)((int)param_1 + 0xc4);
    do {
      FUN_00428680(this,*(undefined4 *)((int)param_1 + 0x28),iVar3);
      iVar1 = *this;
      if (((iVar1 < 0) || (DAT_005cd2f0 <= iVar1)) || (DAT_005cd2f4 == 0)) {
        iVar1 = 0;
      }
      else {
        iVar1 = DAT_005cd2f4 + iVar1 * 1000;
      }
      if ((*(uint *)(iVar1 + 0x14) & 0x400) == 0) {
        *(uint *)((int)param_1 + 0xe8) = *(uint *)((int)param_1 + 0xe8) & 0xffdfffff;
      }
      if ((*(uint *)(iVar1 + 0x14) & 0x400000) == 0) {
        *(uint *)((int)param_1 + 0xe8) = *(uint *)((int)param_1 + 0xe8) & 0xffbfffff;
      }
      if ((*(uint *)(iVar1 + 0x14) & 0x800000) == 0) {
        *(uint *)((int)param_1 + 0xe8) = *(uint *)((int)param_1 + 0xe8) & 0xff7fffff;
      }
      iVar3 = iVar3 + 1;
      this = this + 0x13;
    } while (iVar3 < *(int *)((int)param_1 + 0x4c));
  }
  uVar2 = FUN_0047c9e0(&DAT_005aa12c,*(int *)((int)param_1 + 0x48));
  if ((uVar2 == 0) &&
     (*(int *)((int)param_1 + 0x48) == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400))) {
    if (*(int *)((int)param_1 + 0x48) == DAT_005aa7d4) {
      iVar3 = FUN_004e7400(&DAT_005aa78c,(int)*(char *)((int)param_1 + 0x5ac),(int *)local_8,
                           &local_4,1);
      if (iVar3 != 0) {
        *(char *)((int)param_1 + 0x5d8) = local_8[0] + '\x01';
        return;
      }
    }
    else {
      iVar3 = FUN_004e7400(&DAT_005aad68,(int)*(char *)((int)param_1 + 0x5ac),(int *)local_8,
                           &local_4,1);
      if (iVar3 != 0) {
        *(char *)((int)param_1 + 0x5d8) = local_8[0] + '\x01';
      }
    }
  }
  return;
}


