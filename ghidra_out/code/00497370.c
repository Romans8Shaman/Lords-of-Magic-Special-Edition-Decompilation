
undefined4 * __thiscall
FUN_00497370(void *this,undefined4 param_1,int param_2,char *param_3,int param_4,int param_5,
            undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  uint uVar2;
  
  DAT_0058365c = DAT_0058365c + 0x38;
  *(undefined4 *)this = param_1;
  *(int *)((int)this + 4) = param_2;
  *(int *)((int)this + 0x10) = param_4;
  *(char **)((int)this + 8) = param_3;
  *(int *)((int)this + 0x14) = param_5;
  *(undefined4 *)((int)this + 0x18) = param_6;
  if ((param_4 < 1) || (param_3 == (char *)0x0)) {
    *(undefined4 *)((int)this + 0xc) = 0xffffffff;
  }
  else {
    uVar2 = 0xffffffff;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *param_3;
      param_3 = param_3 + 1;
    } while (cVar1 != '\0');
    *(uint *)((int)this + 0xc) = ~uVar2 - 1;
  }
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x1c) = param_7;
  *(undefined4 *)((int)this + 0x24) = 0xfa;
  *(undefined4 *)((int)this + 0x28) = 3;
  *(undefined4 *)((int)this + 0x2c) = 3;
  *(int *)((int)this + 0x30) = *(int *)(param_5 + 8) + -1;
  *(int *)((int)this + 0x34) = param_2 + (2 - *(int *)(param_5 + 8)) * 3;
  return this;
}


