
void __fastcall FUN_00424080(void *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)((int)param_1 + 0x4c)) {
    piVar1 = (int *)((int)param_1 + 200);
    do {
      if ((*piVar1 < 1) && (iVar2 == *(int *)((int)param_1 + 0x50))) {
        FUN_0041efa0(param_1,8);
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x13;
    } while (iVar2 < *(int *)((int)param_1 + 0x4c));
  }
  return;
}


