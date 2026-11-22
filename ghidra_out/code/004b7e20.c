
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004b7e20(void *param_1)

{
  undefined4 uVar1;
  LONG LVar2;
  uint uVar3;
  int iVar4;
  int local_11c;
  char local_118;
  uint local_115;
  int local_107;
  undefined4 local_103;
  int local_ff;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054b4eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004b4450((int)&local_11c);
  local_4 = 0;
  LVar2 = InterlockedExchange((LONG *)&DAT_005cd2dc,1);
  if (LVar2 == 0) {
    *(undefined4 *)((int)param_1 + 0xdc) = 1;
    do {
      FUN_004b8ba0(param_1,(int)&local_11c);
      uVar1 = local_103;
      if (local_118 == '\x1f') {
        if (0 < local_ff) {
          FUN_00482800(&DAT_005aa12c,(char *)&local_107);
          goto LAB_004b7eed;
        }
      }
      else {
        if (local_118 == 'P') {
          *(undefined4 *)(&DAT_00583598 + local_107 * 4) = local_103;
          uVar3 = FUN_0048a400(0x584ae8);
          if ((local_115 & 0xff) == uVar3) {
            DAT_00583558 = uVar1;
          }
        }
        else {
          if (local_118 != '_') goto LAB_004b7ef3;
          FUN_004b4dc0(&DAT_005cd358,&local_107);
        }
LAB_004b7eed:
        local_118 = '\0';
      }
LAB_004b7ef3:
      if (local_118 != '\0') {
        if ((char)local_115 == '\x02') {
          iVar4 = FUN_00481e40(&DAT_005aa12c,&local_11c);
          if (iVar4 == 0) {
            if (local_118 == '=') {
              FUN_0048cca0(&local_11c);
            }
            local_118 = '\0';
          }
        }
        if (local_118 != '\0') {
          FUN_004c4c10(&DAT_005cd2c4,&local_11c);
        }
      }
    } while (*(int *)((int)param_1 + 0xdc) != 0);
    InterlockedExchange((LONG *)&DAT_005cd2dc,0);
  }
  else {
    _DAT_00583ff4 = 1;
  }
  local_4 = 0xffffffff;
  op_sunlight();
  ExceptionList = local_c;
  return;
}


