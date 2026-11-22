
undefined4 __thiscall FUN_004fffc0(void *this,uint param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *this_00;
  
  *(undefined4 *)((int)this + 0x25634) = 0;
  this_00 = (undefined4 *)FUN_005005f0(this,param_1);
  if (this_00 != (undefined4 *)0x0) {
    bVar1 = false;
    puVar4 = *(undefined4 **)((int)this + 0x25318);
    puVar3 = (undefined4 *)0x0;
    while (puVar2 = puVar4, puVar2 != (undefined4 *)0x0) {
      if (puVar2 == this_00) {
        bVar1 = true;
        if (puVar3 == (undefined4 *)0x0) {
          *(undefined4 *)((int)this + 0x25318) = *puVar2;
        }
        else {
          *puVar3 = *puVar2;
        }
        break;
      }
      puVar3 = puVar2;
      puVar4 = (undefined4 *)*puVar2;
    }
    if (bVar1) {
      *this_00 = 0;
      FUN_0048ed70(this_00,0xffffffff);
      if (*(int *)((int)this + 0x25318) != 0) {
        FUN_004903e0(*(int *)((int)this + 0x25318));
      }
      FUN_00473930((int)this + 0x2531c);
      return 1;
    }
  }
  return 0;
}


