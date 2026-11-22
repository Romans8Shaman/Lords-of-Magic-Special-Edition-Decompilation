
undefined4 __thiscall FUN_0049a470(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  tagMSG local_1c;
  
  piVar1 = *(int **)((int)this + 8);
  if ((piVar1 != (int *)0x0) && (*(int *)((int)this + 0xc) != 0)) {
    iVar2 = 0;
    if (0 < *(int *)this) {
      do {
        if (*piVar1 == param_1) {
          PeekMessageA(&local_1c,(HWND)0x0,0x100,0x108,1);
          FUN_004d05e0(DAT_005a7b78,*(uint *)(*(int *)((int)this + 8) + 4 + iVar2 * 0xc),
                       *(int **)(*(int *)((int)this + 8) + 8 + iVar2 * 0xc));
          return 1;
        }
        iVar2 = iVar2 + 1;
        piVar1 = piVar1 + 3;
      } while (iVar2 < *(int *)this);
      return 0;
    }
  }
  return 0;
}


