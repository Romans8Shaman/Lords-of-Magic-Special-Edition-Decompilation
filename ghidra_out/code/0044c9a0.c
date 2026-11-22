
void __cdecl op_savedefaultarmy(void *vm)

{
  int *piVar1;
  
  FUN_0053a090(&DAT_005d22f0,s_custldr__dtempldr_ldr_005572f0,
               *(uint *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
  piVar1 = (int *)FUN_00539610(&DAT_005d22f0,&DAT_00556168);
  if (piVar1 != (int *)0x0) {
    FUN_00539660(&DAT_00586a4c,0x2a0,1,piVar1);
    (/*IC:0044c946*/**(code **)(*DAT_005869f4 + 0x20))(piVar1);
    FUN_00539660((char *)&DAT_00586a48,4,1,piVar1);
    FUN_00539660((char *)&DAT_00586a40,4,1,piVar1);
    FUN_00539660((char *)&DAT_00586a44,4,1,piVar1);
    FUN_00539660((char *)&DAT_00586a3c,4,1,piVar1);
    FUN_005394d0(piVar1);
  }
  return;
}


