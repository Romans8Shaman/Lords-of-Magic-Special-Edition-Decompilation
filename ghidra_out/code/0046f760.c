
undefined4 __thiscall FUN_0046f760(void *this,undefined1 *param_1)

{
  int *piVar1;
  int iVar2;
  
  OutputDebugStringA(s_CSigs__ReceiveNetworkMessage___c_00557ac0);
  piVar1 = (int *)(param_1 + 0x108);
  iVar2 = FUN_004eb170(DAT_005831dc,param_1,0x105,piVar1);
  if (iVar2 < 1) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)((int)this + 0x2c4);
  *(int *)(param_1 + 0x101) = iVar2;
  *piVar1 = *piVar1 + 1;
  return 0;
}


