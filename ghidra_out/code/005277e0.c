
void __fastcall FUN_005277e0(void *param_1)

{
  int *piVar1;
  
  *(undefined4 *)((int)param_1 + 0x48) = 0xffffffff;
  *(uint *)((int)param_1 + 0x24) = *(uint *)((int)param_1 + 0x24) | 8;
  piVar1 = FUN_0052b540(&DAT_005cd18c,*(int *)((int)param_1 + 0x20));
  if (piVar1 == (int *)0x0) {
    return;
  }
  FUN_005274b0(param_1,(undefined4 *)piVar1[1]);
  return;
}


