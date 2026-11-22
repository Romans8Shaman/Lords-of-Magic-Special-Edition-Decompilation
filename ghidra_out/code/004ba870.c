
void __fastcall FUN_004ba870(void *param_1)

{
  undefined4 *puVar1;
  
  if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] != 3) {
    puVar1 = FUN_0052d240((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
    if (((puVar1 != (undefined4 *)0x0) && (-1 < (int)puVar1[0x14e])) &&
       (DAT_005cc9d4 == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400))) {
      FUN_004ba910(param_1,(int)puVar1);
      return;
    }
    FUN_004ba940((int)param_1);
  }
  return;
}


