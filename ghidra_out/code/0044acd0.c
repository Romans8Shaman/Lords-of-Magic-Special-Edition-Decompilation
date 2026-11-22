
/* WARNING: Removing unreachable block (ram,0x0044ad7f) */
/* WARNING: Removing unreachable block (ram,0x0044ad96) */
/* WARNING: Removing unreachable block (ram,0x0044ad9b) */
/* WARNING: Removing unreachable block (ram,0x0044ada1) */
/* WARNING: Removing unreachable block (ram,0x0044ada9) */
/* WARNING: Removing unreachable block (ram,0x0044adad) */
/* WARNING: Removing unreachable block (ram,0x0044adc5) */
/* WARNING: Removing unreachable block (ram,0x0044adb7) */
/* WARNING: Removing unreachable block (ram,0x0044adc1) */
/* WARNING: Removing unreachable block (ram,0x0044adca) */
/* WARNING: Removing unreachable block (ram,0x0044adce) */
/* WARNING: Removing unreachable block (ram,0x0044add5) */
/* WARNING: Removing unreachable block (ram,0x0044ade2) */
/* WARNING: Removing unreachable block (ram,0x0044ade6) */
/* WARNING: Removing unreachable block (ram,0x0044adf3) */
/* WARNING: Removing unreachable block (ram,0x0044adf5) */
/* WARNING: Removing unreachable block (ram,0x0044ae02) */
/* WARNING: Removing unreachable block (ram,0x0044ae04) */
/* WARNING: Removing unreachable block (ram,0x0044ae09) */
/* WARNING: Removing unreachable block (ram,0x0044ae0b) */
/* WARNING: Removing unreachable block (ram,0x0044ae56) */
/* WARNING: Removing unreachable block (ram,0x0044ae1b) */
/* WARNING: Removing unreachable block (ram,0x0044ae5b) */
/* WARNING: Removing unreachable block (ram,0x0044af72) */

void __thiscall FUN_0044acd0(void *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined1 auStack_10a [6];
  int aiStack_104 [10];
  undefined1 auStack_dc [220];
  
  piVar7 = *(int **)((int)this + 0x4a0);
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  if (piVar7 != (int *)0x0) {
    iVar1 = (/*IC:0044ad05*/**(code **)(*piVar7 + 0x30))
                      (piVar7,0,&LAB_0044ac70,0,0,s_lpDirectPlay3A_>EnumPlayers_0_En_00556f8c);
    FUN_004756f0(iVar1);
    iVar1 = 0;
    if (0 < *(int *)((int)this + 8)) {
      piVar7 = (int *)((int)this + 0x124);
      do {
        iVar4 = *piVar7;
        iVar2 = (/*IC:0044ad63*/**(code **)(**(int **)((int)this + 0x4a0) + 0x50))
                          (*(int **)((int)this + 0x4a0),iVar4,aiStack_104,auStack_10a + -0x12,1,
                           s_lpDirectPlay3A_>GetPlayerData_aP_00556f48);
        iVar2 = FUN_004756f0(iVar2);
        FUN_004b69a0(s__s__GetPlayerData__d__00556e7c,iVar2,iVar1);
        if (iVar2 == 1) {
          if (((aiStack_104[1] < 1) || (4 < aiStack_104[1])) || (aiStack_104[0] != iVar4)) {
            FUN_0053a090(auStack_dc,s_Error__Invalid_player_info__id___00556e18,aiStack_104[1],
                         aiStack_104[0],0x25);
            FUN_005047d0(auStack_dc);
          }
          else {
            FUN_0053a090(auStack_dc,s_Got_info_for_player__d__dpId__x__00556e58,aiStack_104[1],
                         aiStack_104[0]);
            FUN_005047d0(auStack_dc);
            piVar5 = aiStack_104;
            piVar6 = (int *)((int)this + aiStack_104[1] * 0x25 + -0x19);
            for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
              *piVar6 = *piVar5;
              piVar5 = piVar5 + 1;
              piVar6 = piVar6 + 1;
            }
            *(char *)piVar6 = (char)*piVar5;
            if (aiStack_104[0] == *(int *)((int)this + 0x2c4)) {
              FUN_005047d0(s_That_s_me__00556e4c);
              *(int *)((int)this + 0x120) = aiStack_104[1];
            }
            uVar3 = *(uint *)((int)this + 0x100);
            if ((int)*(uint *)((int)this + 0x100) < aiStack_104[1]) {
              uVar3 = aiStack_104[1];
            }
            *(uint *)((int)this + 0x100) = uVar3;
          }
        }
        iVar1 = iVar1 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar1 < *(int *)((int)this + 8));
    }
  }
  return;
}


