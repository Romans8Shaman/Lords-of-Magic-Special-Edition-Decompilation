
void __thiscall FUN_0047a830(void *this,int in_stack_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)((int)this + 0x13b4) != 0) && (-0x9c4 < *(int *)((int)this + 0x1374))) {
    iVar2 = *(int *)(in_stack_4 * 0xd0 + 0x78c + (int)this);
    if (iVar2 == -1) {
      FUN_0047a7b0((int)this);
      return;
    }
    puVar1 = (undefined4 *)((int)this + 0x780);
    iVar2 = FUN_00478570(this,iVar2,puVar1);
    if (iVar2 == 0) {
      FUN_0047a7b0((int)this);
      return;
    }
    (/*IC:0047a89a*/**(code **)(*(int *)*puVar1 + 0x3c))((int *)*puVar1,*(undefined4 *)((int)this + 0x1378));
    (/*IC:0047a8a8*/**(code **)(*(int *)*puVar1 + 0x30))((int *)*puVar1,0,0,1);
  }
  return;
}


