
undefined4 __thiscall
FUN_0048ec30(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int local_10 [4];
  
  uVar1 = *(undefined4 *)((int)this + 0x40);
  uVar2 = *(undefined4 *)((int)this + 0x3c);
  *(undefined4 *)((int)this + 0x40) = param_3;
  *(undefined4 *)((int)this + 0x3c) = param_2;
  puVar3 = (undefined4 *)FUN_0048ec90(this,local_10);
  *param_1 = *puVar3;
  param_1[1] = puVar3[1];
  param_1[2] = puVar3[2];
  param_1[3] = puVar3[3];
  *(undefined4 *)((int)this + 0x3c) = uVar2;
  *(undefined4 *)((int)this + 0x40) = uVar1;
  return 1;
}


