
void __thiscall FUN_0044a930(void *this)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  OutputDebugStringA(s_Starting_DPlay__Cleanup______00556bb4);
  FUN_004b8b90((int)this);
  piVar1 = *(int **)((int)this + 0x4a0);
  if (piVar1 != (int *)0x0) {
    if (*(int *)((int)this + 0x2c4) != 0) {
      iVar2 = (/*IC:0044a968*/**(code **)(*piVar1 + 0x24))
                        (piVar1,*(int *)((int)this + 0x2c4),
                         s_lpDirectPlay3A_>DestroyPlayer_Th_00556b84);
      FUN_004756f0(iVar2);
      *(undefined4 *)((int)this + 0x2c4) = 0;
    }
    iVar2 = (/*IC:0044a988*/**(code **)(**(int **)((int)this + 0x4a0) + 0x10))
                      (*(int **)((int)this + 0x4a0),s_lpDirectPlay3A_>Close___005568d8);
    FUN_004756f0(iVar2);
    iVar2 = (/*IC:0044a9a2*/**(code **)(**(int **)((int)this + 0x4a0) + 8))
                      (*(int **)((int)this + 0x4a0),s_lpDirectPlay3A_>Release___005568bc);
    FUN_004756f0(iVar2);
    *(undefined4 *)((int)this + 0x4a0) = 0;
  }
  piVar1 = *(int **)((int)this + 0x418);
  if (piVar1 != (int *)0x0) {
    iVar2 = (/*IC:0044a9c6*/**(code **)(*piVar1 + 8))(piVar1,s_lpDirectPlay1_>Release___00556b68);
    FUN_004756f0(iVar2);
    *(undefined4 *)((int)this + 0x418) = 0;
  }
  piVar1 = *(int **)((int)this + 0x4a4);
  if (piVar1 != (int *)0x0) {
    iVar2 = (/*IC:0044a9ea*/**(code **)(*piVar1 + 8))(piVar1,s_lpDirectPlayLobbyA_>Release___00556b48);
    FUN_004756f0(iVar2);
    *(undefined4 *)((int)this + 0x4a4) = 0;
  }
  puVar3 = (undefined4 *)((int)this + 0x4c0);
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  FUN_004b7d40((int)this);
  OutputDebugStringA(s_Exiting_DPlay__Cleanup______00556b28);
  return;
}


