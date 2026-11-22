
int __fastcall FUN_00432bc0(short *param_1)

{
  char cVar1;
  
  cVar1 = (char)param_1[2];
  if (cVar1 == '\0') {
    return 0;
  }
  if ((cVar1 < '\x01') || ('\x04' < cVar1)) {
    return 1;
  }
  return (int)*param_1;
}


