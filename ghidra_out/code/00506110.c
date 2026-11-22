
uint __thiscall FUN_00506110(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_00506100(param_1);
  uVar2 = 1;
  if (uVar1 != 0) {
    uVar2 = (uint)((1 << ((byte)*(undefined4 *)((int)this + 0x48) & 0x1f) &
                   *(uint *)(param_1 + 0x5cc)) == 0);
  }
  return uVar2;
}


