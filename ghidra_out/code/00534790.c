
uint __cdecl FUN_00534790(int *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = 0;
  do {
    uVar8 = param_1[0x1b];
    if (uVar8 < 0x106) {
      FUN_00534200(param_1);
      uVar8 = param_1[0x1b];
      if ((uVar8 < 0x106) && (param_2 == 0)) {
        return 0;
      }
      if (uVar8 == 0) {
        if (param_1[0x18] != 0) {
          FUN_00536360((int)param_1,0,(uint)*(byte *)(param_1[0x19] + -1 + param_1[0xc]));
          param_1[0x18] = 0;
        }
        iVar7 = param_1[0x15];
        if (iVar7 < 0) {
          puVar6 = (undefined1 *)0x0;
        }
        else {
          puVar6 = (undefined1 *)(param_1[0xc] + iVar7);
        }
        FUN_005352a0(param_1,puVar6,param_1[0x19] - iVar7,(uint)(param_2 == 4));
        param_1[0x15] = param_1[0x19];
        FUN_00533ed0(*param_1);
        if (*(int *)(*param_1 + 0x10) == 0) {
          return (param_2 != 4) - 1 & 2;
        }
        return (-(uint)(param_2 != 4) & 0xfffffffe) + 3;
      }
    }
    if (2 < uVar8) {
      uVar9 = (param_1[0x10] << ((byte)param_1[0x14] & 0x1f) ^
              (uint)*(byte *)(param_1[0xc] + 2 + param_1[0x19])) & param_1[0x13];
      param_1[0x10] = uVar9;
      uVar1 = *(ushort *)(param_1[0xf] + uVar9 * 2);
      uVar9 = (uint)uVar1;
      *(ushort *)(param_1[0xe] + (param_1[0xb] & param_1[0x19]) * 2) = uVar1;
      *(short *)(param_1[0xf] + param_1[0x10] * 2) = (short)param_1[0x19];
    }
    uVar8 = param_1[0x16];
    param_1[0x1c] = uVar8;
    param_1[0x17] = param_1[0x1a];
    param_1[0x16] = 2;
    if (((uVar9 != 0) && (uVar8 < (uint)param_1[0x1e])) &&
       (param_1[0x19] - uVar9 <= param_1[9] - 0x106U)) {
      if (param_1[0x20] != 2) {
        pcVar4 = FUN_00534610((int)param_1,uVar9);
        param_1[0x16] = (int)pcVar4;
      }
      if (((uint)param_1[0x16] < 6) &&
         ((param_1[0x20] == 1 ||
          ((param_1[0x16] == 3 && (0x1000 < (uint)(param_1[0x19] - param_1[0x1a]))))))) {
        param_1[0x16] = 2;
      }
    }
    uVar8 = param_1[0x1c];
    if ((uVar8 < 3) || (uVar8 < (uint)param_1[0x16])) {
      if (param_1[0x18] == 0) {
        param_1[0x18] = 1;
        param_1[0x19] = param_1[0x19] + 1;
        param_1[0x1b] = param_1[0x1b] + -1;
      }
      else {
        iVar7 = FUN_00536360((int)param_1,0,(uint)*(byte *)(param_1[0xc] + -1 + param_1[0x19]));
        if (iVar7 != 0) {
          iVar7 = param_1[0x15];
          if (iVar7 < 0) {
            puVar6 = (undefined1 *)0x0;
          }
          else {
            puVar6 = (undefined1 *)(iVar7 + param_1[0xc]);
          }
          FUN_005352a0(param_1,puVar6,param_1[0x19] - iVar7,0);
          param_1[0x15] = param_1[0x19];
          FUN_00533ed0(*param_1);
        }
        param_1[0x19] = param_1[0x19] + 1;
        param_1[0x1b] = param_1[0x1b] + -1;
        if (*(int *)(*param_1 + 0x10) == 0) {
          return 0;
        }
      }
    }
    else {
      iVar7 = param_1[0x19];
      iVar2 = param_1[0x1b];
      iVar5 = FUN_00536360((int)param_1,(iVar7 - param_1[0x17]) + -1,uVar8 - 3);
      param_1[0x1b] = param_1[0x1b] + (1 - param_1[0x1c]);
      param_1[0x1c] = param_1[0x1c] + -2;
      do {
        uVar8 = param_1[0x19] + 1;
        param_1[0x19] = uVar8;
        if (uVar8 <= (uint)(iVar7 + -3 + iVar2)) {
          uVar9 = (param_1[0x10] << ((byte)param_1[0x14] & 0x1f) ^
                  (uint)*(byte *)(param_1[0xc] + 2 + uVar8)) & param_1[0x13];
          param_1[0x10] = uVar9;
          uVar1 = *(ushort *)(param_1[0xf] + uVar9 * 2);
          uVar9 = (uint)uVar1;
          *(ushort *)(param_1[0xe] + (param_1[0xb] & uVar8) * 2) = uVar1;
          *(short *)(param_1[0xf] + param_1[0x10] * 2) = (short)param_1[0x19];
        }
        iVar3 = param_1[0x1c];
        param_1[0x1c] = iVar3 + -1;
      } while (iVar3 + -1 != 0);
      iVar7 = param_1[0x19];
      param_1[0x18] = 0;
      param_1[0x16] = 2;
      param_1[0x19] = iVar7 + 1;
      if (iVar5 != 0) {
        iVar2 = param_1[0x15];
        if (iVar2 < 0) {
          puVar6 = (undefined1 *)0x0;
        }
        else {
          puVar6 = (undefined1 *)(param_1[0xc] + iVar2);
        }
        FUN_005352a0(param_1,puVar6,(iVar7 + 1) - iVar2,0);
        param_1[0x15] = param_1[0x19];
        FUN_00533ed0(*param_1);
        if (*(int *)(*param_1 + 0x10) == 0) {
          return 0;
        }
      }
    }
  } while( true );
}


