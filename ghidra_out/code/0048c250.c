
uint __cdecl FUN_0048c250(int param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  undefined *puVar4;
  
  if ((param_1 == DAT_00583580) || (param_1 == DAT_00583584)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  if (uVar2 == 0) {
    pcVar3 = FUN_004b1db0(&DAT_005aa64c,8);
    cVar1 = *pcVar3;
    puVar4 = FUN_004b1db0(&DAT_005aa64c,8);
    uVar2 = (uint)((int)cVar1 * (int)(char)puVar4[4] != 0);
  }
  return uVar2;
}


