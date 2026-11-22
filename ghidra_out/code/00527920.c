
undefined4 __thiscall FUN_00527920(void *this,int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = FUN_00485080(this,*param_1,0x2f);
  if (((puVar2 == (undefined4 *)0x0) || (iVar1 = param_1[1], iVar1 < 0)) ||
     ((int)puVar2[0x13] <= iVar1)) {
    return 0;
  }
  uVar3 = FUN_005277e0(puVar2 + iVar1 * 0x13 + 0x31);
  return uVar3;
}


