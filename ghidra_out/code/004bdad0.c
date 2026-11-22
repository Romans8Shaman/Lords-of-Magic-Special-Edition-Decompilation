
void __thiscall FUN_004bdad0(void *this,int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00525fc0(param_1);
  *(undefined4 *)((int)this + 0x15b4) = uVar1;
  *(int *)((int)this + 0x15b8) = *param_1;
  iVar2 = FUN_00521e00(param_1);
  if (iVar2 == 0) {
    FUN_005047d0(s_Unknown_leader_type_0055d8a4);
    return;
  }
  uVar1 = *(undefined4 *)(iVar2 + 0x18);
  *(undefined4 *)((int)this + 0x15ac) = uVar1;
  *(undefined4 *)((int)this + 0x15b0) = uVar1;
  return;
}


