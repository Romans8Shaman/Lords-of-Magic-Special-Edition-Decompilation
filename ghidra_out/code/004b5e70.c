
void __cdecl op_netcomputersassigned(void *vm)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int aiStack_108 [5];
  undefined4 uStack_f3;
  
  if (DAT_005d1e84 == 0) {
    bVar3 = true;
  }
  else {
    iVar1 = *(int *)(DAT_005d1e84 + 0x390);
    iVar2 = FUN_004b7dd0(DAT_005d1e84);
    bVar3 = iVar1 == iVar2;
  }
  if (bVar3) {
    FUN_0048cc70(aiStack_108,0x51);
    uStack_f3 = DAT_005843e0;
    FUN_00489b70(&DAT_00584ae8,aiStack_108);
  }
  FUN_004b4ba0(0x5cd358);
  return;
}


