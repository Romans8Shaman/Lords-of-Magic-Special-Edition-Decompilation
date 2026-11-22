
void __thiscall FUN_0044b0a0(void *this)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_50 [6];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  piVar1 = *(int **)((int)this + 0x4a0);
  if ((piVar1 != (int *)0x0) && (*(int *)((int)this + 0xd4) == 0)) {
    *(undefined4 *)((int)this + 0x36c) = 0;
    puVar3 = auStack_50;
    for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    uStack_34 = DAT_0055689c;
    uStack_38 = DAT_00556898;
    uStack_2c = DAT_005568a4;
    auStack_50[0] = 0x50;
    uStack_30 = DAT_005568a0;
    iVar2 = (/*IC:0044b115*/**(code **)(*piVar1 + 0x34))
                      (piVar1,auStack_50,0x32,&LAB_0044ab50,0,1,
                       s_lpDirectPlay3A_>EnumSessions__dp_005570dc);
    FUN_004756f0(iVar2);
  }
  return;
}


