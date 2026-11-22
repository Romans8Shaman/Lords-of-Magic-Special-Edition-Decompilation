
void __thiscall FUN_004142e0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)((int)this + 0x48) == DAT_005aa7d4) {
    iVar1 = *(int *)((int)this + 0x44);
    if ((iVar1 == 0) || (iVar1 == 7)) {
      *(undefined4 *)((int)this + 0x44) = 0;
      *param_1 = 0x19;
      *param_2 = 0x28;
      return;
    }
    if ((iVar1 != 3) && (iVar1 != 4)) {
      if ((iVar1 == 5) || (iVar1 == 6)) {
        *(undefined4 *)((int)this + 0x44) = 6;
        *param_1 = 0x28;
        *param_2 = 0x19;
        return;
      }
      *(undefined4 *)((int)this + 0x44) = 2;
      *param_1 = 8;
      *param_2 = 0x16;
      return;
    }
    uVar2 = 8;
  }
  else {
    if ((DAT_005aa7d0 != 0) && (DAT_005aa7d0 != 7)) {
      if ((DAT_005aa7d0 == 3) || (DAT_005aa7d0 == 4)) {
        *(undefined4 *)((int)this + 0x44) = 0;
        *param_1 = 0x19;
        *param_2 = 0x1e;
        return;
      }
      if ((DAT_005aa7d0 == 5) || (DAT_005aa7d0 == 6)) {
        *(undefined4 *)((int)this + 0x44) = 2;
        *param_1 = 0x11;
        *param_2 = 0x16;
        return;
      }
      *(undefined4 *)((int)this + 0x44) = 6;
      *param_1 = 0x20;
      *param_2 = 0x16;
      return;
    }
    uVar2 = 0x12;
  }
  *(undefined4 *)((int)this + 0x44) = 4;
  *param_1 = 0x16;
  *param_2 = uVar2;
  return;
}


