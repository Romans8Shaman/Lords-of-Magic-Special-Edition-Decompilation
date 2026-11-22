
void __thiscall FUN_004805b0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  void *local_4;
  
  iVar1 = param_1[3];
  if (((iVar1 < 0) || (DAT_005cd2f0 <= iVar1)) || (DAT_005cd2f4 == 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = DAT_005cd2f4 + iVar1 * 1000;
  }
  local_4 = this;
  FUN_00480130(this,*param_1,(void *)param_1[1],param_1[2],iVar1,*(undefined4 *)(iVar2 + 0xec),
               param_1[4],*(undefined4 *)(iVar2 + 0xe8),(int *)&local_4,(int *)&param_1,0,-1);
  return;
}


