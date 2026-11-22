
undefined4 __fastcall FUN_0048c860(int *param_1)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int local_108;
  undefined1 local_101;
  int local_ff;
  int local_fb;
  int local_f7;
  
  piVar3 = (int *)FUN_0048c2b0((int)param_1);
  if ((((piVar3 != (int *)0x0) && (cVar1 = (char)param_1[1], cVar1 != '=')) && (*piVar3 != -2)) &&
     (((DAT_00583574 == 0 || (cVar1 == '>')) || (*(char *)((int)param_1 + 7) != '\x02')))) {
    if ((cVar1 == ':') && (iVar4 = FUN_0048c7f0(), iVar4 != 1)) {
      return 0;
    }
    if (piVar3[1] != 0) {
      if (DAT_005d1e84 == 0) {
        bVar2 = 1;
      }
      else {
        uVar5 = FUN_004b7dd0(DAT_005d1e84);
        bVar2 = (byte)uVar5;
      }
      uVar6 = 1 << (bVar2 & 0x1f);
      if (((piVar3[1] & uVar6) != 0) && (((char)param_1[1] != '>' || (DAT_00583574 != 0)))) {
        piVar3[1] = uVar6 ^ piVar3[1];
        FUN_0048c050((int)param_1);
        FUN_0048cc70(&local_108,0x3d);
        local_fb = piVar3[1];
        local_f7 = piVar3[2];
        local_ff = *piVar3;
        local_101 = *(undefined1 *)((int)param_1 + 7);
        local_108 = *param_1;
        FUN_00489b70(&DAT_00584ae8,&local_108);
        return 1;
      }
    }
  }
  return 0;
}


