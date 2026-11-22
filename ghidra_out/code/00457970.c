
void __fastcall FUN_00457970(void *param_1)

{
  int iVar1;
  int *this;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((DAT_005ae935 != '\b') && (DAT_005ae935 == '\x06')) {
    FUN_00455850(&DAT_005ae8e8,&local_10,&local_14,&local_c,&local_4,&local_8);
    iVar1 = FUN_004a51c0(param_1,local_10,local_14);
    iVar1 = FUN_004a8300(param_1,iVar1,0);
    if ((iVar1 == -1) || (iVar1 == DAT_005ae92c)) {
      if ((local_c == 0) || (local_c == 4)) {
        iVar1 = FUN_004a51c0(param_1,local_10 + -1,local_14);
        iVar1 = FUN_004a8300(param_1,iVar1,0);
        if ((iVar1 != -1) && (iVar1 != DAT_005ae92c)) {
          return;
        }
        iVar1 = FUN_004a51c0(param_1,local_10 + 1,local_14);
        iVar1 = FUN_004a8300(param_1,iVar1,0);
        if ((iVar1 != -1) && (iVar1 != DAT_005ae92c)) {
          return;
        }
      }
      else {
        iVar1 = FUN_004a51c0(param_1,local_10,local_14 + -1);
        iVar1 = FUN_004a8300(param_1,iVar1,0);
        if ((iVar1 != -1) && (iVar1 != DAT_005ae92c)) {
          return;
        }
        iVar1 = FUN_004a51c0(param_1,local_10 + 1,local_14 + 1);
        iVar1 = FUN_004a8300(param_1,iVar1,0);
        if ((iVar1 != -1) && (iVar1 != DAT_005ae92c)) {
          return;
        }
      }
      this = (int *)FUN_00482ac0(&DAT_005aa12c,DAT_005ae92c,0);
      if (this != (int *)0x0) {
        FUN_0041efa0(this,0xf);
        DAT_005ae935 = '\a';
        (/*IC:00457ac7*/**(code **)(*this + 0x2c))(this);
        FUN_00456e70(param_1,local_10,local_14,local_c);
        FUN_00456670(param_1,local_10,local_14,local_c,0);
      }
    }
  }
  return;
}


