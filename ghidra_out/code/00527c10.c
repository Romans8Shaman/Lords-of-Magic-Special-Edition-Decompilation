
void __cdecl op_permanentpolymorph(void *vm)

{
  void *this;
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  int aiStack_c [2];
  undefined4 *puStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar2 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    puStack_4 = *(undefined4 **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar2 = 0;
  }
  uVar2 = uVar2 & 0xff;
  if (uVar2 == 1) {
    puVar3 = puStack_4;
  }
  else if (uVar2 == 2) {
    puVar3 = (undefined4 *)((int)puStack_4 >> 8);
  }
  else {
    if (uVar2 != 4) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      return;
    }
    lVar4 = __ftol((float10)(float)puStack_4);
    puVar3 = (undefined4 *)lVar4;
  }
  iVar1 = FUN_0041bf10(this,(int *)&vm,aiStack_c);
  if (iVar1 != 0) {
    iVar1 = FUN_00527820((void *)((int)vm + aiStack_c[0] * 0x4c + 0xc4),puVar3);
    if (iVar1 == 0) {
      FUN_004d41c0(this,s_failed_005729c8);
    }
    (/*IC:00527cc1*/**(code **)(*(int *)vm + 0x2c))(vm);
  }
  return;
}


