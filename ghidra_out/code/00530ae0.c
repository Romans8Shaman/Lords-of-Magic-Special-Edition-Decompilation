
void __thiscall
FUN_00530ae0(void *this,LPCSTR param_1,LPCSTR param_2,uint param_3,int *param_4,void *param_5)

{
  int iVar1;
  HANDLE pvVar2;
  int iVar3;
  uint local_1cc [5];
  char local_1b8 [260];
  char local_b4 [180];
  
  FUN_0053b850(local_b4,0xb4);
  iVar1 = FUN_0053b7b0(param_1);
  if (iVar1 == 0) {
    *(undefined4 *)this = 0;
    pvVar2 = FUN_0053af20(param_2,local_1cc);
    if (pvVar2 != (HANDLE)0xffffffff) {
      iVar1 = _strncmp(local_1b8,(char *)&DAT_0055e260,1);
      if ((iVar1 != 0) && (iVar1 = _strncmp(local_1b8,&DAT_0055e264,2), iVar1 != 0)) {
        if (*(int *)((int)param_5 + 0x54) == 0) {
          *(undefined4 *)((int)param_5 + 0x90) = 3;
          FUN_004d4550(param_5);
          *(undefined4 *)((int)param_5 + 0x90) = 0;
          *(undefined4 *)((int)param_5 + 0xa4) = 0;
        }
        else {
          iVar1 = *(int *)((int)param_5 + 0x50);
          iVar3 = *(int *)((int)param_5 + 0x54) + -1;
          *(int *)((int)param_5 + 0x54) = iVar3;
          *(undefined4 *)(iVar1 + iVar3 * 8) = 8;
          *(char **)(iVar1 + 4 + iVar3 * 8) = local_1b8;
        }
        FUN_004d05e0(param_5,param_3,param_4);
        iVar1 = *(int *)((int)param_5 + 0x6c);
        *(undefined4 *)((int)param_5 + 0x6c) = *(undefined4 *)((int)param_5 + 0x70);
        if (iVar1 != 0) {
          return;
        }
      }
      iVar1 = FUN_0053b050(pvVar2,local_1cc);
      while (iVar1 == 0) {
        iVar1 = _strncmp(local_1b8,(char *)&DAT_0055e260,1);
        if ((iVar1 != 0) && (iVar1 = _strncmp(local_1b8,&DAT_0055e264,2), iVar1 != 0)) {
          if (*(int *)((int)param_5 + 0x54) == 0) {
            *(undefined4 *)((int)param_5 + 0x90) = 3;
            FUN_004d4550(param_5);
            *(undefined4 *)((int)param_5 + 0x90) = 0;
            *(undefined4 *)((int)param_5 + 0xa4) = 0;
          }
          else {
            iVar1 = *(int *)((int)param_5 + 0x50);
            iVar3 = *(int *)((int)param_5 + 0x54) + -1;
            *(int *)((int)param_5 + 0x54) = iVar3;
            *(undefined4 *)(iVar1 + iVar3 * 8) = 8;
            *(char **)(iVar1 + 4 + iVar3 * 8) = local_1b8;
          }
          FUN_004d05e0(param_5,param_3,param_4);
          iVar1 = *(int *)((int)param_5 + 0x6c);
          *(undefined4 *)((int)param_5 + 0x6c) = *(undefined4 *)((int)param_5 + 0x70);
          if (iVar1 != 0) {
            return;
          }
        }
        iVar1 = FUN_0053b050(pvVar2,local_1cc);
      }
    }
    FUN_0053b7b0(local_b4);
  }
  return;
}


