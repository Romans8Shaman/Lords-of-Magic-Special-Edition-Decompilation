
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004b4570(void *param_1)

{
  int iVar1;
  
  FUN_004b64d0((int)param_1);
  iVar1 = 0;
  do {
    FUN_004b6be0(param_1,iVar1,-1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  FUN_004b45f0((int)param_1);
  DAT_00584440 = 0;
  DAT_00584444 = 0;
  _DAT_00584448 = 0;
  _DAT_0058444c = 0;
  FUN_00483cd0(0x5aa12c);
  *(undefined4 *)((int)param_1 + 0x4c10) = 0;
  FUN_004a4b00(&DAT_005ae958,1);
  DAT_005851a0 = 0;
  FUN_004b1bc0(&DAT_005aa64c,0);
  return;
}


