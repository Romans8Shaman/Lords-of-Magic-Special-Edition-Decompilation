
void __cdecl op_setheirasleader(void *vm)

{
  void *this;
  int iVar1;
  undefined *this_00;
  int iStack_4;
  
  this = vm;
  iVar1 = FUN_0041bf10(vm,(int *)&vm,&iStack_4);
  if (iVar1 != 0) {
    iVar1 = *(int *)((int)vm + 0x48);
    if ((iVar1 < 0) || (0xf < iVar1)) {
      this_00 = (undefined *)0x0;
    }
    else {
      this_00 = &DAT_005af194 + iVar1 * 0x1d84;
    }
    if (this_00 == (undefined *)0x0) {
      FUN_004d41c0(this,s_army_has_no_owner___0055d918);
      return;
    }
    iVar1 = FUN_004c08c0(this_00,(int)vm,iStack_4);
    if (iVar1 == 0) {
      FUN_004d41c0(this,s_setheirasleader_failed___not_an_h_0055d8f0);
    }
  }
  return;
}


