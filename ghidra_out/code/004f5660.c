
undefined4 __thiscall FUN_004f5660(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = *param_1;
  puVar2 = (undefined4 *)(**(int **)((int)this + 0x118) + -4);
  **(int **)((int)this + 0x118) = (int)puVar2;
  *puVar2 = uVar1;
  *param_1 = 0;
  return 0;
}


