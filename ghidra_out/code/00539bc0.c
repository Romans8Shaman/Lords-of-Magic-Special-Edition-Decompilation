
undefined4 __cdecl FUN_00539bc0(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3)

{
  undefined4 uVar1;
  
  if ((param_1->ExceptionFlags & 0x66) != 0) {
    *(undefined4 *)((int)param_2 + 0x24) = 1;
    return 1;
  }
  FUN_0053e4c0(param_1,*(PVOID *)((int)param_2 + 0xc),param_3,0,*(int **)((int)param_2 + 8),
               *(int *)((int)param_2 + 0x10),*(PVOID *)((int)param_2 + 0x14),'\x01');
  if (*(int *)((int)param_2 + 0x24) == 0) {
    FUN_005399c0(param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00539c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (/*IC:00539c34*/**(code **)((int)param_2 + 0x18))();
  return uVar1;
}


