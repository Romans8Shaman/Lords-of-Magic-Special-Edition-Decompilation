
undefined4 __thiscall FUN_00463080(void *this,int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)((int)this + 0x494) != 0) {
    iVar1 = 0;
    *param_2 = 0xffffffff;
    if (0 < *(int *)((int)this + 0x494)) {
      piVar2 = (int *)((int)this + 0x254);
      do {
        if (*piVar2 == param_1) {
          *param_2 = *(undefined4 *)((int)this + iVar1 * 4 + 0x14);
          return 1;
        }
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar1 < *(int *)((int)this + 0x494));
      return 0;
    }
  }
  return 0;
}


