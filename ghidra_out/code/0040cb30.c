
void __thiscall FUN_0040cb30(void *this,void *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_48 [15];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005490d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040c580((int)local_48);
  local_4 = 0;
  *(undefined4 *)((int)this + 0xc) = 1;
  puVar1 = (undefined4 *)0x0;
  puVar2 = *(undefined4 **)this;
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) goto LAB_0040cbb4;
    if (puVar2[0xd] == param_2) break;
    puVar1 = puVar2;
    puVar2 = (undefined4 *)puVar2[0xe];
  }
  puVar4 = puVar2;
  puVar5 = local_48;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  if (puVar1 == (undefined4 *)0x0) {
    *(undefined4 *)this = puVar2[0xe];
  }
  else {
    puVar1[0xe] = puVar2[0xe];
  }
  FUN_0040caf0(this,(int)puVar2);
  FUN_0040c5b0(local_48,param_1);
LAB_0040cbb4:
  *(undefined4 *)((int)this + 0xc) = 0;
  local_4 = 0xffffffff;
  FUN_0040c5a0();
  ExceptionList = local_c;
  return;
}


