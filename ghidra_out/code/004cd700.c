
void __fastcall FUN_004cd700(void *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  uint local_4;
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar2 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar2;
    cVar5 = (char)*(undefined4 *)(*(int *)((int)param_1 + 0x50) + -8 + iVar2 * 8);
    uVar3 = *(uint *)(*(int *)((int)param_1 + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    cVar5 = '\0';
    uVar3 = local_4;
  }
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar2 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar2;
    cVar4 = (char)*(undefined4 *)(*(int *)((int)param_1 + 0x50) + -8 + iVar2 * 8);
    local_4 = *(uint *)(*(int *)((int)param_1 + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    cVar4 = '\0';
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
  }
  if (cVar4 == '\x03') {
    if (cVar5 == '\x01') {
      piVar1 = *(int **)((int)param_1 + local_4 * 8);
      if ((piVar1 != (int *)0x0) && (uVar3 = FUN_0053b530(uVar3,piVar1), uVar3 != 0xffffffff)) {
        return;
      }
      *(undefined4 *)((int)param_1 + 0x90) = 0x14;
    }
    else {
      *(undefined4 *)((int)param_1 + 0x90) = 0xe;
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


