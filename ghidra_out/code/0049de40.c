
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_0049de40(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 **ppuVar3;
  undefined4 *puVar4;
  int *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  uint local_44;
  undefined4 *local_40 [3];
  uint local_34;
  uint local_30;
  int local_2c [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054af50;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((DAT_005836cc & 2) == 0) {
    DAT_005836cc = DAT_005836cc | 2;
    DAT_0058364c = DAT_0058364c + 0x14;
    DAT_005836e0 = 0;
    _DAT_005836f0 = 0;
    _DAT_005836ec = 0;
    _DAT_005836e8 = 0;
    DAT_005836e4 = 0;
    ExceptionList = &local_c;
    FUN_00539e50(0x49e060);
  }
  iVar2 = *(int *)(param_1 + 0x1c);
  if (iVar2 == 0) {
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  if ((DAT_005836fc < (int)(uint)*(ushort *)(iVar2 + 2)) ||
     (DAT_00583700 < (int)(uint)*(ushort *)(iVar2 + 4))) {
    FUN_004952c0(&DAT_005836f8,(uint)*(ushort *)(iVar2 + 2),(uint)*(ushort *)(iVar2 + 4),0);
    if (DAT_005836f8 == 0) {
      ExceptionList = local_c;
      return (undefined4 *)0x0;
    }
  }
  _DAT_00583708 = *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x11c);
  piVar1 = FUN_0049d360(param_1);
  if (piVar1 == (int *)0x0) {
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  FUN_00495120(local_2c,piVar1,*(int **)(param_1 + 0x3c),*(int *)(param_1 + 0x1c));
  if (local_2c[0] == 0) {
    DAT_00583648 = DAT_00583648 + -0x20;
    local_4 = 0xffffffff;
    FUN_00495590(local_2c);
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  local_44 = (uint)*(ushort *)(*(int *)(param_1 + 0x1c) + 4);
  local_48 = (uint)*(ushort *)(*(int *)(param_1 + 0x1c) + 2);
  local_50 = 0;
  DAT_0058364c = DAT_0058364c + 0x14;
  local_4c = 0;
  local_54 = local_2c;
  local_4 = 1;
  FUN_00495db0(&DAT_005836f8,(int *)&local_54,0,0);
  local_40[1] = (undefined4 *)0x0;
  local_40[2] = (undefined4 *)0x0;
  local_34 = (uint)*(ushort *)(*(int *)(param_1 + 0x1c) + 2);
  local_40[0] = &DAT_005836f8;
  local_30 = (uint)*(ushort *)(*(int *)(param_1 + 0x1c) + 4);
  ppuVar3 = local_40;
  puVar4 = &DAT_005836e0;
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *ppuVar3;
    ppuVar3 = ppuVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  DAT_00583648 = DAT_00583648 + -0x20;
  DAT_0058364c = DAT_0058364c + -0x14;
  local_4 = 0xffffffff;
  FUN_00495590(local_2c);
  ExceptionList = local_c;
  return &DAT_005836e0;
}


