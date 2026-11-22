
uint __cdecl FUN_005340a0(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  
  uVar6 = 0xffff;
  if (param_1[3] - 5U < 0xffff) {
    uVar6 = param_1[3] - 5U;
  }
  do {
    uVar4 = param_1[0x1b];
    if (uVar4 < 2) {
      FUN_00534200(param_1);
      uVar4 = param_1[0x1b];
      if (uVar4 == 0) {
        if (param_2 == 0) {
          return 0;
        }
        iVar2 = param_1[0x15];
        if (iVar2 < 0) {
          puVar5 = (undefined1 *)0x0;
        }
        else {
          puVar5 = (undefined1 *)(param_1[0xc] + iVar2);
        }
        FUN_005352a0(param_1,puVar5,param_1[0x19] - iVar2,(uint)(param_2 == 4));
        param_1[0x15] = param_1[0x19];
        FUN_00533ed0(*param_1);
        if (*(int *)(*param_1 + 0x10) == 0) {
          return (param_2 != 4) - 1 & 2;
        }
        return (-(uint)(param_2 != 4) & 0xfffffffe) + 3;
      }
    }
    iVar2 = param_1[0x19];
    param_1[0x1b] = 0;
    param_1[0x19] = iVar2 + uVar4;
    iVar3 = param_1[0x15];
    uVar1 = uVar6 + iVar3;
    if ((iVar2 + uVar4 == 0) || (uVar1 <= (uint)param_1[0x19])) {
      param_1[0x1b] = param_1[0x19] - uVar1;
      param_1[0x19] = uVar1;
      if (iVar3 < 0) {
        puVar5 = (undefined1 *)0x0;
      }
      else {
        puVar5 = (undefined1 *)(param_1[0xc] + iVar3);
      }
      FUN_005352a0(param_1,puVar5,uVar1 - iVar3,0);
      param_1[0x15] = param_1[0x19];
      FUN_00533ed0(*param_1);
      if (*(int *)(*param_1 + 0x10) == 0) {
        return 0;
      }
    }
    iVar2 = param_1[0x15];
    if (param_1[9] - 0x106U <= (uint)(param_1[0x19] - iVar2)) {
      if (iVar2 < 0) {
        puVar5 = (undefined1 *)0x0;
      }
      else {
        puVar5 = (undefined1 *)(param_1[0xc] + iVar2);
      }
      FUN_005352a0(param_1,puVar5,param_1[0x19] - iVar2,0);
      param_1[0x15] = param_1[0x19];
      FUN_00533ed0(*param_1);
      if (*(int *)(*param_1 + 0x10) == 0) {
        return 0;
      }
    }
  } while( true );
}


