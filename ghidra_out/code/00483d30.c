
undefined4 __fastcall
FUN_00483d30(int param_1,undefined4 unused_reg_1,undefined4 unused_stack_0,undefined4 unused_stack_4
            )

{
  int iVar1;
  int iVar2;
  void *this;
  uint uVar3;
  bool bVar4;
  int local_108 [5];
  DWORD local_f3;
  int local_ef [59];
  
  FUN_004f5f40(0x5ae974);
  FUN_0052b260((int *)&DAT_005cd18c);
  if (DAT_005d1e84 == (void *)0x0) {
    bVar4 = true;
  }
  else {
    iVar2 = *(int *)((int)DAT_005d1e84 + 0x390);
    iVar1 = FUN_004b7dd0((int)DAT_005d1e84);
    bVar4 = iVar2 == iVar1;
  }
  if ((bVar4) && (*(int *)(param_1 + 0x5034) == 0)) {
    iVar2 = FUN_0048c420(0x5e);
    if (iVar2 == 0) {
      FUN_0048cc70(local_108,0x5e);
      iVar2 = FUN_004b1e60(&local_f3,local_ef,1);
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 0x5034) = 1;
        uVar3 = 0;
        iVar2 = 1;
        this = DAT_005d1e84;
        while( true ) {
          if ((this == (void *)0x0) || (iVar1 = *(int *)((int)this + 0x100), iVar1 < 1)) {
            iVar1 = 1;
          }
          if (iVar1 < iVar2) break;
          if (this == (void *)0x0) {
            iVar1 = 1;
          }
          else {
            iVar1 = FUN_004b7dd0((int)this);
            this = DAT_005d1e84;
          }
          if (iVar2 != iVar1) {
            if (this == (void *)0x0) {
              iVar1 = 0;
            }
            else {
              iVar1 = FUN_004b7890(this,iVar2);
              this = DAT_005d1e84;
            }
            if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
              uVar3 = uVar3 | 1 << ((byte)iVar2 & 0x1f);
            }
          }
          iVar2 = iVar2 + 1;
        }
        *(uint *)(param_1 + 0x503c) = uVar3;
        *(uint *)(param_1 + 0x5038) = uVar3;
        FUN_00489b70(&DAT_00584ae8,local_108);
      }
    }
  }
  return 1;
}


