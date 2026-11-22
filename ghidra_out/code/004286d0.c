
void __thiscall FUN_004286d0(void *this,undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int *this_00;
  int iVar2;
  
  piVar1 = *(int **)((int)this + 0x1c);
  while (this_00 = piVar1, this_00 != (int *)0x0) {
    piVar1 = (int *)this_00[5];
    if ((*(byte *)(this_00 + 4) & 0x1f) != 0) {
      iVar2 = FUN_00427b80(*this_00);
      FUN_00428190(this_00,param_1,param_2,*(uint *)(iVar2 + 0x3c),*(int **)(iVar2 + 0x40));
    }
  }
  return;
}


