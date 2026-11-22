
char * FUN_004b9570(undefined1 param_1,short param_2)

{
  undefined4 *puVar1;
  char *pcVar2;
  
  switch(param_1) {
  case 0x44:
    pcVar2 = FUN_00505110(&DAT_00584ae8,7,(int)param_2);
    return pcVar2;
  default:
    pcVar2 = FUN_00505110(&DAT_00584ae8,4,0xffffffff);
    return pcVar2;
  case 0x47:
    pcVar2 = FUN_00505110(&DAT_00584ae8,2,0xffffffff);
    return pcVar2;
  case 0x4d:
    puVar1 = FUN_004b54c0();
    return (char *)puVar1;
  case 0x53:
    pcVar2 = FUN_00505110(&DAT_00584ae8,3,0xffffffff);
    return pcVar2;
  }
}


