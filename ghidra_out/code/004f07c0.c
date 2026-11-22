
undefined4 __thiscall FUN_004f07c0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = FUN_00485080((void *)((int)this + 0x25644),param_1[3],0x2f);
  if (((puVar2 != (undefined4 *)0x0) && (iVar1 = param_1[5], -1 < iVar1)) &&
     (iVar1 < (int)puVar2[0x13])) {
    param_1[6] = puVar2[(iVar1 + 3) * 0x13];
  }
  puVar2 = FUN_00485080((void *)((int)this + 0x25644),param_1[9],0x2f);
  if (((puVar2 != (undefined4 *)0x0) && (iVar1 = param_1[10], -1 < iVar1)) &&
     (iVar1 < (int)puVar2[0x13])) {
    param_1[0xd] = puVar2[(iVar1 + 3) * 0x13];
  }
  FUN_00405070(param_1);
  return 1;
}


