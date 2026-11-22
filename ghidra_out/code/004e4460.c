
void __cdecl op_blttest(void)

{
  int *a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int aiStack_6c [9];
  undefined4 *puStack_48;
  
  a1 = DAT_0058516c;
  piVar4 = aiStack_6c;
  for (iVar2 = 0x1b; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  pcVar6 = s_surf_>Lock_NULL__desc_DDLOCK_SUR_00572a4c;
  aiStack_6c[0] = 0x6c;
  iVar2 = (/*IC:004e4493*/**(code **)(*DAT_0058516c + 100))(DAT_0058516c,0,aiStack_6c,1,0);
  iVar2 = FUN_004756f0(iVar2,pcVar6);
  if (iVar2 != 0) {
    puVar5 = puStack_48;
    for (uVar3 = (aiStack_6c[2] * aiStack_6c[3] & 0x7fffffffU) >> 1; uVar3 != 0; uVar3 = uVar3 - 1)
    {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    for (uVar3 = aiStack_6c[2] * aiStack_6c[3] * 2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = 0xff;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    iVar2 = (/*IC:004e44d3*/**(code **)(*a1 + 0x80))(a1,puStack_48,s_surf_>Unlock__LPVOID_ptr__00572a30);
    FUN_004756f0(iVar2);
    iStack_74 = 0;
    aiStack_6c[0] = 99;
    iVar2 = 0;
    do {
      iStack_70 = iVar2 + 1;
      iStack_78 = iVar2;
      iVar1 = (/*IC:004e4519*/**(code **)(*DAT_0058516c + 0x1c))(DAT_0058516c,iVar2,0,DAT_00585170,&iStack_78,0);
      if (iVar1 == -0x7789fe3e) {
        FUN_00475360(0x584ae8);
        (/*IC:004e4546*/**(code **)(*DAT_0058516c + 0x1c))(DAT_0058516c,iVar2,0,DAT_00585170,&iStack_78,0);
      }
      iVar2 = iVar2 + 2;
    } while (iVar2 < 100);
    iStack_78 = 0;
    iStack_70 = 99;
    iVar2 = 100;
    do {
      aiStack_6c[0] = iVar2 + 1;
      iStack_74 = iVar2;
      iVar1 = (/*IC:004e4586*/**(code **)(*DAT_0058516c + 0x1c))(DAT_0058516c,0,iVar2,DAT_00585170,&iStack_78,0);
      if (iVar1 == -0x7789fe3e) {
        FUN_00475360(0x584ae8);
        (/*IC:004e45b3*/**(code **)(*DAT_0058516c + 0x1c))(DAT_0058516c,0,iVar2,DAT_00585170,&iStack_78,0);
      }
      iVar2 = iVar2 + 2;
    } while (iVar2 < 200);
  }
  return;
}


