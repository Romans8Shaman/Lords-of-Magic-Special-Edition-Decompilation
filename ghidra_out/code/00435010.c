
undefined4 __thiscall FUN_00435010(void *this,int param_1,int param_2)

{
  char cVar1;
  short sVar2;
  short *this_00;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar3 = *(int *)((int)this + 8);
  if (param_1 == iVar3) {
    iVar3 = *(int *)((int)this + 0xc);
    if ((-1 < iVar3) && (iVar3 < 0x10)) {
      local_20 = &DAT_005af194 + iVar3 * 0x1d84;
      goto LAB_00435090;
    }
  }
  else {
    if (param_1 != *(int *)((int)this + 0xc)) {
      return 0;
    }
    if ((-1 < iVar3) && (iVar3 < 0x10)) {
      local_20 = &DAT_005af194 + iVar3 * 0x1d84;
      goto LAB_00435090;
    }
  }
  local_20 = (undefined *)0x0;
LAB_00435090:
  local_8 = FUN_004348c0(this,param_1,0);
  local_c = local_8 << 8;
  local_18 = FUN_004348c0(this,param_1,1);
  local_18 = local_18 << 8;
  if (local_18 < 1) {
    return 0;
  }
  local_8 = local_8 << 0x10;
  if (param_2 <= local_8 / local_18) {
    return 1;
  }
  local_10 = 0;
  do {
    local_14 = 0;
    do {
      this_00 = (short *)FUN_00432a90(this,param_1,local_14,local_10);
      cVar1 = (char)this_00[2];
      if (cVar1 == '\x01') {
        iVar3 = (int)*this_00;
        local_1c = *(int *)(local_20 + 0xcfc);
      }
      else if (cVar1 == '\x02') {
        iVar3 = (int)*this_00;
        local_1c = *(int *)(local_20 + 0xd04);
      }
      else if (cVar1 == '\x03') {
        iVar3 = (int)*this_00;
        local_1c = *(int *)(local_20 + 0xd08);
      }
      else {
        iVar3 = 0;
      }
      if (iVar3 != 0) {
        if (local_14 == 1) {
          sVar2 = *this_00;
          while (2 < sVar2) {
            iVar3 = (int)sVar2 / 3;
            if (iVar3 < 2) {
              iVar3 = 1;
            }
            iVar4 = FUN_00434680(this_00,this,param_1);
            *this_00 = *this_00 - (short)iVar3;
            iVar3 = FUN_00434680(this_00,this,param_1);
            local_18 = local_18 + iVar3 * 0x100 + iVar4 * -0x100;
            if ((local_18 < 1) || (param_2 <= local_8 / local_18)) {
              return 1;
            }
            sVar2 = *this_00;
          }
        }
        else {
          iVar4 = local_1c >> 8;
          if (iVar3 < iVar4) {
            sVar2 = *this_00;
            while (iVar3 = (int)sVar2, iVar3 < iVar4) {
              iVar5 = iVar3 / 3;
              if (iVar5 < 2) {
                iVar5 = 1;
              }
              if (iVar4 < iVar5 + iVar3) {
                iVar5 = local_1c + iVar3 * -0x100 >> 8;
              }
              iVar3 = FUN_00434680(this_00,this,param_1);
              *this_00 = *this_00 + (short)iVar5;
              iVar5 = FUN_00434680(this_00,this,param_1);
              local_c = local_c + iVar5 * 0x100 + iVar3 * -0x100;
              local_8 = local_c * 0x100;
              if (param_2 <= local_8 / local_18) {
                return 1;
              }
              sVar2 = *this_00;
            }
          }
        }
      }
      local_14 = local_14 + 1;
    } while (local_14 < 2);
    local_10 = local_10 + 1;
    if (6 < local_10) {
      return 0;
    }
  } while( true );
}


