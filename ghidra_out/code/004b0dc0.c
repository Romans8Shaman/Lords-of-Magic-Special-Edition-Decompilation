
void FUN_004b0dc0(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00492850(&DAT_005a7b50,*param_1);
  if (piVar1 != (int *)0x0) {
    FUN_0049ab20(piVar1);
    FUN_004f6670(&DAT_00584ae8,(int)piVar1);
  }
  *param_2 = 0xffffffff;
  return;
}


