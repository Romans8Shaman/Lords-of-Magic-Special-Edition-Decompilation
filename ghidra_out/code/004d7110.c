
void __cdecl op_clearscriptoutputfile(void)

{
  char *pcVar1;
  int *piVar2;
  
  pcVar1 = FUN_00505110(&DAT_00584ae8,1,0xffffffff);
  piVar2 = (int *)FUN_00539610(pcVar1,&DAT_00556168);
  if (piVar2 != (int *)0x0) {
    FUN_005394d0(piVar2);
  }
  return;
}


