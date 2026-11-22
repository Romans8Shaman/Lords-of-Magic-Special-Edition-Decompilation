
uint __fastcall FUN_0048c960(int param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_0048c2b0(param_1);
  if ((puVar1 == (uint *)0x0) || (*puVar1 == 0xfffffffe)) {
switchD_0048c993_caseD_4c:
    return 1;
  }
  if (puVar1[1] != 0) {
    return 0;
  }
  switch(*(undefined1 *)(param_1 + 4)) {
  case 0x3e:
    return DAT_00583574;
  default:
    return (uint)(*puVar1 <= DAT_00583560);
  case 0x4c:
  case 0x51:
  case 0x52:
    goto switchD_0048c993_caseD_4c;
  }
}


