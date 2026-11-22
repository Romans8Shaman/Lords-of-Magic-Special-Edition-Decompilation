
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __fastcall FUN_004755e0(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  if ((DAT_005832cc & 1) == 0) {
    DAT_005832cc = DAT_005832cc | 1;
    DAT_00583648 = DAT_00583648 + 0x20;
    FUN_00494610((undefined4 *)&DAT_00583288);
    FUN_00539e50(0x4756a0);
  }
  pcVar2 = s_DDSURFACE_RENDERBUFFER__>Lock_NU_00558878;
  iVar1 = (/*IC:00475634*/**(code **)(**(int **)(param_1 + 0x68c) + 100))
                    (*(int **)(param_1 + 0x68c),0,param_1 + 0x7bc,1,0);
  iVar1 = FUN_004756f0(iVar1,pcVar2);
  if (iVar1 == 0) {
    return (undefined *)0x0;
  }
  _DAT_0058328c = *(undefined4 *)(param_1 + 0x7c8);
  _DAT_00583290 = *(undefined4 *)(param_1 + 0x7c4);
  _DAT_00583294 = *(undefined4 *)(param_1 + 0x7cc);
  _DAT_00583288 = *(undefined4 *)(param_1 + 0x7e0);
  _DAT_005832a0 = *(undefined4 *)(param_1 + 0x68c);
  _DAT_0058329c = 0xc;
  _DAT_00583298 = 0;
  return &DAT_00583288;
}


