
uint __fastcall FUN_004f3660(int param_1)

{
  int iVar1;
  uint in_EAX;
  uint uVar2;
  float10 extraout_ST0;
  uint uStack_8;
  int iStack_4;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    return in_EAX & 0xffff0000;
  }
  uVar2 = 0;
  if (*(int *)(*(int *)(param_1 + 0x38) + 8) != 0) {
    iVar1 = *(int *)(param_1 + 0x40);
    (/*IC:004f3688*/*(code *)**(undefined4 **)(param_1 + 4))((void *)(param_1 + 4));
    FUN_004f3b50(&uStack_8,iVar1,(float)extraout_ST0);
    if (iStack_4 != 0) {
      *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 1;
      return uStack_8;
    }
    *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) & 0xfffffffe;
    uVar2 = uStack_8;
  }
  return uVar2;
}


