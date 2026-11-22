
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0042c300(void *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = FUN_00485080(&DAT_005aa12c,param_1,0x2f);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = FUN_00427b80(*(int *)this);
    iVar3 = FUN_004efe80(&DAT_005aee6c,*(int *)(iVar2 + 8));
    if (iVar3 != 0) {
      _DAT_00584c58 = *(undefined4 *)(iVar2 + 8);
      _DAT_00584c78 = *(undefined4 *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400);
      DAT_00584c7c = param_1;
      DAT_00584c80 = param_2;
      _DAT_00584c8c = puVar1[(param_2 + 3) * 0x13];
      _DAT_00584c90 = *(undefined4 *)((int)this + 0xc);
      switch(*(undefined4 *)(iVar3 + 0xc)) {
      case 0:
        FUN_00503040(&DAT_00584ae8,2);
        return 1;
      case 1:
      case 2:
        FUN_00503040(&DAT_00584ae8,3);
        return 1;
      case 3:
        FUN_00503040(&DAT_00584ae8,1);
        _DAT_00584c64 = DAT_00584c7c;
        _DAT_00584c68 = DAT_00584c7c;
        _DAT_00584c6c = DAT_00584c80;
        FUN_004f07c0(&DAT_00584ae8,(undefined4 *)&DAT_00584c58);
        FUN_00503040(&DAT_00584ae8,0);
        return 1;
      case 4:
        FUN_00503040(&DAT_00584ae8,4);
        return 1;
      }
    }
  }
  return 0;
}


