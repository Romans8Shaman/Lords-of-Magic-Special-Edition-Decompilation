
int __thiscall
FUN_004f55d0(void *this,int param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  void *this_00;
  
  puVar1 = *(uint **)((int)this + 0x118);
  puVar2 = (undefined4 *)*puVar1;
  if (puVar2 < (undefined4 *)puVar1[1]) {
    this_00 = (void *)*puVar2;
    *puVar1 = (uint)(puVar2 + 1);
  }
  else {
    this_00 = (void *)0xffffffff;
  }
  if ((int)this_00 < 0) {
    return 3;
  }
  *param_3 = this_00;
  iVar3 = *(int *)((int)this + 0x114);
  iVar4 = FUN_004f57d0(this_00,param_1,param_2,param_4);
  if (iVar4 == 0) {
    *(int *)((int)this_00 + 4) = (int)this_00 - iVar3 >> 5;
  }
  else {
    FUN_004f5660(this,param_3);
    if (iVar4 != 0) {
      return iVar4;
    }
  }
  FUN_004f5840((int)this_00);
  return iVar4;
}


