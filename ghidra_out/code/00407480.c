
void __thiscall FUN_00407480(void *this,undefined4 *param_1,uint param_2)

{
  int iVar1;
  
  *(char *)((int)this + 1) = (char)param_2;
  *(undefined1 *)this = 0;
  for (iVar1 = (param_2 & 0x1fffffff) << 1; this = (void *)((int)this + 4), iVar1 != 0;
      iVar1 = iVar1 + -1) {
    *(undefined4 *)this = *param_1;
    param_1 = param_1 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)this = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    this = (undefined4 *)((int)this + 1);
  }
  return;
}


