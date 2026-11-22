
undefined4 __thiscall FUN_004058e0(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_8;
  int local_4;
  
  *(undefined4 *)this = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 8);
  *(uint *)((int)this + 0x14) = (uint)*(byte *)(param_1 + 0x10);
  *(byte *)((int)this + 0x10) = *(byte *)((int)this + 0x10) & 0xfc;
  switch(*(undefined4 *)this) {
  case 3:
    *(undefined4 *)((int)this + 8) = 0xffffffff;
    return 1;
  case 4:
  case 0x16:
    puVar2 = (undefined4 *)(param_1 + 0x11);
    puVar3 = (undefined4 *)((int)this + 0x1c);
    for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    break;
  case 6:
    *(undefined1 *)((int)this + 0x11) = 0;
    return 1;
  case 0xe:
    FUN_00407480((void *)((int)this + 0x1c),(undefined4 *)(param_1 + 0x15),
                 (int)*(char *)(param_1 + 0x12));
    FUN_00407500((void *)((int)this + 0x1c),&local_8);
    iVar1 = FUN_004a51c0(&DAT_005ae958,local_8,local_4);
    *(int *)((int)this + 8) = iVar1;
    return 1;
  case 0xf:
    FUN_00407480((void *)((int)this + 0x1c),(undefined4 *)(param_1 + 0x15),
                 (int)*(char *)(param_1 + 0x12));
    return 1;
  }
  return 1;
}


