
uint __fastcall FUN_004f3570(void *param_1)

{
  int iVar1;
  
  iVar1 = FUN_004f32d0(param_1);
  if (iVar1 != 0) {
    *(uint *)((int)param_1 + 0x34) = *(uint *)((int)param_1 + 0x34) | 8;
  }
  return (uint)(iVar1 != 0);
}


