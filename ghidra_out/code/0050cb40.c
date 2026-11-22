
void __thiscall FUN_0050cb40(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x1000000;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((int)this + 0x1c);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)((int)this + 0x28);
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_1 + 0x48);
  if (((DAT_005ccab8 < 0) || (*(short *)((int)this + 0x4e) <= DAT_005ccab8)) ||
     (*(int *)((int)this + 0x50) == 0)) {
    puVar1 = *(undefined4 **)((int)this + 0x58);
    if (puVar1 != (undefined4 *)0x0) {
      (/*IC:0050cbab*/**(code **)*puVar1)(puVar1,1);
    }
    *(int *)((int)this + 0x58) = param_1;
    return;
  }
  iVar2 = DAT_005ccab8 * 0xc;
  puVar1 = *(undefined4 **)(iVar2 + 8 + *(int *)((int)this + 0x50));
  if (puVar1 != (undefined4 *)0x0) {
    (/*IC:0050cb91*/**(code **)*puVar1)(puVar1,1);
  }
  *(int *)(*(int *)((int)this + 0x50) + 8 + iVar2) = param_1;
  return;
}


