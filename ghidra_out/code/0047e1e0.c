
undefined4 __thiscall FUN_0047e1e0(void *this,int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  if ((DAT_005557e0 != 2) && ((*(byte *)((int)this + 0x30) & 0x32) == 0)) {
    return 0;
  }
  iVar1 = FUN_004b0860((void *)((int)this + 0x88),param_1,*(int *)((int)this + 0xc),
                       *(int *)((int)this + 0x10));
  if (iVar1 != 0) {
    return 1;
  }
  if (*(void **)((int)this + 0xb8) != (void *)0x0) {
    FUN_0049cc10(*(void **)((int)this + 0xb8),&iStack_10,*(int *)((int)this + 0xc),
                 *(int *)((int)this + 0xbc) + *(int *)((int)this + 0x10));
    if ((((*param_1 <= iStack_8) && (param_1[1] <= iStack_4)) && (iStack_10 <= param_1[2])) &&
       (iStack_c <= param_1[3])) {
      return 1;
    }
  }
  if ((*(byte *)((int)this + 0x30) & 2) == 0) {
    uVar2 = FUN_004f5c00(this,param_1);
    return uVar2;
  }
  return 0;
}


