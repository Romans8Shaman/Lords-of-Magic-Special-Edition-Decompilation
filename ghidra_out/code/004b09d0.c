
void __thiscall FUN_004b09d0(void *this,int *param_1,int *param_2)

{
  int iVar1;
  int local_8;
  int local_4;
  
  if (*(void **)this != (void *)0x0) {
    iVar1 = FUN_0049cb20(*(void **)this,&local_8,&local_4,6,0xffffffff);
    if (iVar1 != 0) {
      *param_1 = *param_1 + local_8;
      *param_2 = *param_2 + local_4;
    }
  }
  return;
}


