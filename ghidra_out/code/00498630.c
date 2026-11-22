
undefined4 __thiscall FUN_00498630(void *this,int param_1)

{
  int *arg1;
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = 0;
  puVar4 = (undefined4 *)((int)this + 0x5e4);
  do {
    piVar2 = (int *)*puVar4;
    piVar1 = (int *)0x0;
    while (arg1 = piVar2, arg1 != (int *)0x0) {
      if (*arg1 == param_1) {
        if (piVar1 == (int *)0x0) {
          *(int *)(iVar3 * 0x10 + 0x5e4 + (int)this) = arg1[1];
        }
        else {
          piVar1[1] = arg1[1];
        }
        if (arg1 != (int *)0x0) {
          FUN_00498410(arg1);
          Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
        }
        return 1;
      }
      piVar1 = arg1;
      piVar2 = (int *)arg1[1];
    }
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 4;
  } while (iVar3 < 10);
  return 0;
}


