
void __thiscall FUN_004b7380(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  int local_c;
  int local_8;
  
  uVar1 = ~(1 << ((byte)param_1 & 0x1f));
  DAT_005af164 = DAT_005af164 & uVar1;
  DAT_005af168 = DAT_005af168 & uVar1;
  uVar1 = *(uint *)((int)this + 0x4bcc) & uVar1;
  *(uint *)((int)this + 0x4bcc) = uVar1;
  if ((DAT_005851a0 != 0) && (uVar1 == 0)) {
    FUN_004b69e0();
  }
  iVar2 = FUN_0048a400(0x584ae8);
  if (iVar2 == 2) {
    local_8 = param_1 + -1;
    local_c = 1;
    FUN_00461020(&DAT_005aa12c,&local_c);
  }
  return;
}


