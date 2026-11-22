
undefined4 __thiscall FUN_00507260(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int local_108;
  undefined1 local_104;
  int local_f3;
  
  puVar1 = FUN_00485080(this,param_1,0x2f);
  if ((puVar1 == (undefined4 *)0x0) || (iVar2 = FUN_004c2330((int)puVar1), iVar2 < 1)) {
    return 0;
  }
  iVar2 = FUN_00420580((int)puVar1);
  if (iVar2 == 0) {
    uVar3 = FUN_004192c0((int)puVar1);
    iVar2 = FUN_00507200((int)puVar1);
    if ((int)uVar3 < iVar2 / 2) {
      return 0;
    }
  }
  FUN_0048cc40((int)&local_108);
  local_104 = 0x12;
  local_f3 = param_1;
  uVar4 = FUN_00489b70(&DAT_00584ae8,&local_108);
  return uVar4;
}


