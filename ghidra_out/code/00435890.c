
void __thiscall FUN_00435890(void *this,void *param_1,int param_2,uint param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  if (param_2 == *(int *)((int)this + 8)) {
    iVar3 = 1;
  }
  else {
    if (param_2 != *(int *)((int)this + 0xc)) {
      return;
    }
    iVar3 = 0;
  }
  param_2 = 0;
  pcVar4 = (char *)((int)this + iVar3 * 0x2a + 0x2c);
  do {
    if (*pcVar4 != '\0') {
      uVar1 = FUN_00432ae0((int)*pcVar4,(int)*(short *)(pcVar4 + -4),(int)*(short *)(pcVar4 + -4),
                           (int)pcVar4[1]);
      if (*(int *)((int)param_1 + 0x54) == 0) {
        *(undefined4 *)((int)param_1 + 0x90) = 3;
        FUN_004d4550(param_1);
        *(undefined4 *)((int)param_1 + 0x90) = 0;
        *(undefined4 *)((int)param_1 + 0xa4) = 0;
      }
      else {
        iVar3 = *(int *)((int)param_1 + 0x50);
        iVar2 = *(int *)((int)param_1 + 0x54) + -1;
        *(int *)((int)param_1 + 0x54) = iVar2;
        *(undefined4 *)(iVar3 + iVar2 * 8) = 1;
        *(uint *)(iVar3 + 4 + iVar2 * 8) = uVar1;
      }
      FUN_004d05e0(param_1,param_3,param_4);
      iVar3 = *(int *)((int)param_1 + 0x6c);
      *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)((int)param_1 + 0x70);
      if (iVar3 != 0) {
        return;
      }
    }
    pcVar4 = pcVar4 + 6;
    param_2 = param_2 + 1;
    if (6 < param_2) {
      return;
    }
  } while( true );
}


