
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_004b6200(void *this,int param_1)

{
  int *this_00;
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *this_01;
  bool bVar5;
  float10 fVar6;
  undefined4 *puStack_bc;
  int iStack_b8;
  uint auStack_b4 [10];
  char acStack_8c [128];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054b46a;
  local_c = ExceptionList;
  iVar4 = 1;
  ExceptionList = &local_c;
  FUN_004b64d0((int)this);
  this_01 = (int *)0x0;
  if (param_1 == 0) {
    puStack_bc = (undefined4 *)Ordinal_401(0x40c,s_C__lomse_source_storm_h_00555130,0x3ef,0);
    uStack_4 = 0;
    if (puStack_bc == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = FUN_0046fb00(puStack_bc);
    }
    *(undefined4 **)((int)this + 0x4b2c) = puVar3;
  }
  else if ((param_1 == 1) || (param_1 == 2)) {
    if (*(int *)((int)this + 0x4b30) == 0) {
      puStack_bc = (undefined4 *)Ordinal_401(0x398,s_C__lomse_source_storm_h_00555130,0x3ef,0);
      uStack_4 = 1;
      if (puStack_bc == (undefined4 *)0x0) {
        this_00 = (int *)0x0;
      }
      else {
        this_00 = FUN_0046f300(puStack_bc);
      }
      uStack_4 = 0xffffffff;
      *(int **)((int)this + 0x4b2c) = this_00;
      if (this_00 != (int *)0x0) {
        iVar4 = (/*IC:004b62a0*/**(code **)(*this_00 + 0x40))(this_00);
        if (iVar4 != 0) {
          puStack_bc = (undefined4 *)Ordinal_401(0x4e8,s_C__lomse_source_storm_h_00555130,0x3ef,0);
          uStack_4 = 2;
          if (puStack_bc != (undefined4 *)0x0) {
            this_01 = FUN_00449f70(puStack_bc);
          }
          uStack_4 = 0xffffffff;
          if (this_01 != (int *)0x0) {
            (/*IC:004b62f9*/**(code **)(**(int **)((int)this + 0x4b2c) + 0x44))(*(int **)((int)this + 0x4b2c));
            puVar3 = *(undefined4 **)((int)this + 0x4b2c);
            if (puVar3 != (undefined4 *)0x0) {
              (/*IC:004b630a*/**(code **)*puVar3)(puVar3,1);
            }
            *(int **)((int)this + 0x4b2c) = this_01;
            iVar1 = (/*IC:004b6316*/**(code **)(*this_01 + 0x40))(this_01);
            if (iVar1 == 0) {
              iVar4 = 0;
            }
            FUN_004b80a0(DAT_005d1e84,&DAT_00583138 + DAT_00557a78 * 0x28,1);
            bVar5 = iVar4 != 0;
            iVar4 = 0;
            if (bVar5) {
              iVar4 = FUN_004eb280((int)DAT_005831dc);
              if (iVar4 == 0) {
                FUN_004eb500(DAT_005831dc,0,auStack_b4);
                FUN_0053a090(acStack_8c,s__d__d__d__d_0055d2d4,auStack_b4[0] & 0xff,
                             auStack_b4[0] >> 8 & 0xff,auStack_b4[0] >> 0x10 & 0xff,
                             auStack_b4[0] >> 0x18);
                FUN_0044a030(this_01,acStack_8c);
                FUN_0053b220(&iStack_b8);
                do {
                  Sleep(0x7d);
                  iVar4 = (/*IC:004b63d7*/**(code **)(**(int **)((int)this + 0x4b2c) + 0xc))
                                    (*(int **)((int)this + 0x4b2c),0);
                  FUN_0053b220((int *)&puStack_bc);
                  fVar6 = FUN_0053b200((int)puStack_bc,iStack_b8);
                  if ((!NAN(fVar6) && !NAN((float10)_DAT_0054dbd8)) &&
                      (float10)_DAT_0054dbd8 <= fVar6) break;
                } while (iVar4 == 0);
                if (iVar4 == 0) {
                  MessageBoxA(DAT_00584d54,s_Error_connecting_to_host_0055d2a8,
                              s_CONNECT_ERROR_0055d2c4,0);
                }
                else if (*(int *)((int)this + 0x4b2c) == 0) {
                  FUN_004b8e20(1);
                }
                else {
                  uVar2 = FUN_004b7dd0(*(int *)((int)this + 0x4b2c));
                  FUN_004b8e20(uVar2);
                }
              }
              else {
                iVar4 = (/*IC:004b6360*/**(code **)(**(int **)((int)this + 0x4b2c) + 8))
                                  (*(int **)((int)this + 0x4b2c),s_WON_GAME_00556af4);
              }
            }
          }
        }
      }
    }
    else {
      iVar4 = 0;
    }
  }
  else {
    iVar4 = 0;
  }
  if (*(int *)((int)this + 0x4b2c) != 0) {
    *(undefined4 *)(*(int *)((int)this + 0x4b2c) + 0xd8) = 1;
  }
  ExceptionList = local_c;
  return iVar4;
}


