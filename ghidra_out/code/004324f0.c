
void __cdecl op_barteraccept(void *vm)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStack_7c [31];
  
  iVar1 = *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400);
  puVar3 = &DAT_00584cd4;
  puVar4 = auStack_7c;
  for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar1 = FUN_00432200(&DAT_00584cd4,iVar1);
  if (iVar1 == 0) {
    FUN_004d41c0(vm,s_command_failed_00555ff0);
  }
  else {
    FUN_00431a10(&DAT_00584cd4);
  }
  puVar3 = auStack_7c;
  puVar4 = &DAT_00584cd4;
  for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return;
}


