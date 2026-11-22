
void __thiscall FUN_00497ac0(void *this,int param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 0xc) = 0xffffffff;
  }
  else if ((*(char **)((int)this + 8) != (char *)0x0) && (0 < *(int *)((int)this + 0x10))) {
    uVar2 = 0xffffffff;
    pcVar3 = *(char **)((int)this + 8);
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    *(uint *)((int)this + 0xc) = ~uVar2 - 1;
    FUN_00497a00((int)this);
    return;
  }
  return;
}


