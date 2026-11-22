
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004fc2a0(int param_1)

{
  int iVar1;
  int *this;
  int iVar2;
  int iVar3;
  int local_4;
  
  this = FUN_004fbed0(&DAT_005ae974,0);
  do {
    if (this == (int *)0x0) {
      return;
    }
    if ((this[0xc] & 0x400U) != 0) {
      local_4 = -1;
      FUN_00420630((int)this);
      iVar3 = 0;
      this[0xc] = this[0xc] & 0xfffffbff;
      do {
        iVar1 = *(int *)(*(int *)((int)*(void **)(param_1 + 0x20) + 0x18) +
                        (((uint)(byte)(&DAT_00573318)[iVar3] + this[0x11] & 7) + this[7] * 8) * 4);
        iVar2 = FUN_004edc30(*(void **)(param_1 + 0x20),iVar1,this[0x15]);
        if (iVar2 != 0) break;
        if (local_4 != -1) {
          local_4 = FUN_004a6f60(*(void **)(param_1 + 0x20),iVar1,this[0x15]);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 8);
      if (iVar3 < 8) {
        if ((this[0xc] & 0x1c00000U) == 0) {
          FUN_004a6dd0(*(void **)(param_1 + 0x20),this,this[7],iVar1);
          (/*IC:004fc381*/**(code **)(*this + 0x2c))(this);
        }
        else {
          FUN_004245a0(this);
          FUN_004a6dd0(*(void **)(param_1 + 0x20),this,this[7],iVar1);
          _DAT_005ac500 = this[10];
          FUN_0045d090(&DAT_005aa12c,(undefined4 *)&DAT_005ac4d8);
          (/*IC:004fc36a*/**(code **)(*this + 0x2c))(this);
        }
      }
      else if (local_4 != -1) {
        if ((this[0xc] & 0x1c00000U) == 0) {
          FUN_004a6dd0(*(void **)(param_1 + 0x20),this,this[7],local_4);
        }
        else {
          FUN_004245a0(this);
          FUN_004a6dd0(*(void **)(param_1 + 0x20),this,this[7],local_4);
          _DAT_005ac500 = this[10];
          FUN_0045d090(&DAT_005aa12c,(undefined4 *)&DAT_005ac4d8);
        }
        (/*IC:004fc3d9*/**(code **)(*this + 0x2c))(this);
      }
    }
    this = FUN_004fbed0(&DAT_005ae974,(int)this);
  } while( true );
}


