
int __thiscall FUN_0049adb0(void *this,uint param_1)

{
  int iVar1;
  
  if ((*(int *)this != 0) && (iVar1 = *(int *)(*(int *)this + 8), iVar1 != 0)) {
    if (*(int *)((int)this + 4) != 0) {
      if ((int)param_1 < 0) {
        return 0;
      }
      if (*(int *)((int)this + 8) <= (int)param_1) {
        return 0;
      }
      param_1 = *(uint *)(*(int *)((int)this + 4) + param_1 * 4);
    }
    if ((-1 < (int)param_1) && ((int)param_1 < (int)(uint)*(ushort *)(iVar1 + 0x1a))) {
      return (param_1 & 0xffff) * 0x10 + *(int *)(iVar1 + 0x1c);
    }
  }
  return 0;
}


