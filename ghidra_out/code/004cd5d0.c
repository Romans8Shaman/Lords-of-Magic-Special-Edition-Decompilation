
void __fastcall FUN_004cd5d0(void *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  int local_4;
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar2 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar2;
    cVar5 = (char)*(undefined4 *)(*(int *)((int)param_1 + 0x50) + -8 + iVar2 * 8);
    local_4 = *(int *)(*(int *)((int)param_1 + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    cVar5 = '\0';
  }
  if (cVar5 == '\x03') {
    piVar1 = *(int **)((int)param_1 + local_4 * 8);
    if (piVar1 == (int *)0x0) {
      *(undefined4 *)((int)param_1 + 0x90) = 0x14;
    }
    else {
      if ((*(byte *)(piVar1 + 3) & 0x10) == 0) {
        uVar4 = FUN_0053b4e0(piVar1);
        if (*(int *)((int)param_1 + 0x54) == 0) {
          *(undefined4 *)((int)param_1 + 0x90) = 3;
          FUN_004d4550(param_1);
          *(undefined4 *)((int)param_1 + 0x90) = 0;
          *(undefined4 *)((int)param_1 + 0xa4) = 0;
        }
        else {
          iVar2 = *(int *)((int)param_1 + 0x50);
          iVar3 = *(int *)((int)param_1 + 0x54) + -1;
          *(int *)((int)param_1 + 0x54) = iVar3;
          *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
          *(uint *)(iVar2 + 4 + iVar3 * 8) = uVar4;
        }
        if (*(int *)((int)param_1 + 0x54) != 0) {
          iVar2 = *(int *)((int)param_1 + 0x50);
          iVar3 = *(int *)((int)param_1 + 0x54) + -1;
          *(int *)((int)param_1 + 0x54) = iVar3;
          *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
          *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 0xffffffff;
          return;
        }
      }
      else if (*(int *)((int)param_1 + 0x54) != 0) {
        iVar2 = *(int *)((int)param_1 + 0x50);
        iVar3 = *(int *)((int)param_1 + 0x54) + -1;
        *(int *)((int)param_1 + 0x54) = iVar3;
        *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
        *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 0;
        return;
      }
      *(undefined4 *)((int)param_1 + 0x90) = 3;
    }
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 0xe;
  }
  FUN_004d4550(param_1);
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  return;
}


