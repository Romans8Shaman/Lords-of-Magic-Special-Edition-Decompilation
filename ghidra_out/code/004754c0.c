
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __fastcall FUN_004754c0(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  if ((DAT_005832c8 & 1) == 0) {
    DAT_005832c8 = DAT_005832c8 | 1;
    DAT_00583648 = DAT_00583648 + 0x20;
    FUN_00494610((undefined4 *)&DAT_005832a8);
    FUN_00539e50(0x475580);
  }
  pcVar2 = s_DDSURFACE_BACKBUFFER__>Lock_NULL_005587e0;
  iVar1 = (/*IC:00475514*/**(code **)(**(int **)(param_1 + 0x688) + 100))
                    (*(int **)(param_1 + 0x688),0,param_1 + 0x750,1,0);
  iVar1 = FUN_004756f0(iVar1,pcVar2);
  if (iVar1 == 0) {
    return (undefined *)0x0;
  }
  _DAT_005832ac = *(undefined4 *)(param_1 + 0x75c);
  _DAT_005832b0 = *(undefined4 *)(param_1 + 0x758);
  _DAT_005832b4 = *(undefined4 *)(param_1 + 0x760);
  _DAT_005832a8 = *(undefined4 *)(param_1 + 0x774);
  _DAT_005832c0 = *(undefined4 *)(param_1 + 0x688);
  _DAT_005832bc = 0xc;
  _DAT_005832b8 = 0;
  return &DAT_005832a8;
}


