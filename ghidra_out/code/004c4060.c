
void __thiscall FUN_004c4060(void *this,uint param_1,int *param_2,void *param_3)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  local_8 = 0;
  if (0 < *(int *)((int)this + 4)) {
    do {
      piVar3 = (int *)FUN_004c3ed0(this,local_8);
      if ((piVar3 != (int *)0x0) && (iVar1 = *piVar3, -1 < iVar1)) {
        if (*(int *)((int)param_3 + 0x54) == 0) {
          *(undefined4 *)((int)param_3 + 0x90) = 3;
          FUN_004d4550(param_3);
          *(undefined4 *)((int)param_3 + 0x90) = 0;
          *(undefined4 *)((int)param_3 + 0xa4) = 0;
        }
        else {
          iVar5 = *(int *)((int)param_3 + 0x50);
          iVar4 = *(int *)((int)param_3 + 0x54) + -1;
          *(int *)((int)param_3 + 0x54) = iVar4;
          *(undefined4 *)(iVar5 + iVar4 * 8) = 1;
          *(int *)(iVar5 + 4 + iVar4 * 8) = iVar1;
        }
        cVar2 = FUN_004c3be0((int)piVar3);
        if (*(int *)((int)param_3 + 0x54) == 0) {
          *(undefined4 *)((int)param_3 + 0x90) = 3;
          FUN_004d4550(param_3);
          *(undefined4 *)((int)param_3 + 0x90) = 0;
          *(undefined4 *)((int)param_3 + 0xa4) = 0;
        }
        else {
          iVar1 = *(int *)((int)param_3 + 0x50);
          iVar5 = *(int *)((int)param_3 + 0x54) + -1;
          *(int *)((int)param_3 + 0x54) = iVar5;
          *(undefined4 *)(iVar1 + iVar5 * 8) = 1;
          *(int *)(iVar1 + 4 + iVar5 * 8) = (int)cVar2;
        }
        FUN_004d05e0(param_3,param_1,param_2);
      }
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)((int)this + 4));
  }
  return;
}


