
void __thiscall FUN_004b0460(void *this,void *param_1,int param_2,int param_3)

{
  int *piVar1;
  int local_10 [4];
  
  if (*(void **)this != (void *)0x0) {
    piVar1 = (int *)FUN_0049cc10(*(void **)this,local_10,param_2,param_3);
    FUN_00476010(param_1,*piVar1,piVar1[1],piVar1[2],piVar1[3]);
  }
  if (*(void **)((int)this + 4) != (void *)0x0) {
    piVar1 = (int *)FUN_0049cc10(*(void **)((int)this + 4),local_10,param_2,param_3);
    FUN_00476010(param_1,*piVar1,piVar1[1],piVar1[2],piVar1[3]);
  }
  if (*(void **)((int)this + 8) != (void *)0x0) {
    piVar1 = (int *)FUN_0049cc10(*(void **)((int)this + 8),local_10,param_2,param_3);
    FUN_00476010(param_1,*piVar1,piVar1[1],piVar1[2],piVar1[3]);
  }
  return;
}


