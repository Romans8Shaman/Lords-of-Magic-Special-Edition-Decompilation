
void __fastcall FUN_004d1880(void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  int extraout_EDX;
  int iVar5;
  undefined4 *puVar6;
  int local_4;
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar5 = *(int *)((int)param_1 + 0x50);
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    cVar3 = (char)*(undefined4 *)(iVar5 + -8 + iVar1 * 8);
    local_4 = *(int *)(iVar5 + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    cVar3 = '\0';
    iVar5 = extraout_EDX;
  }
  if (cVar3 == '\x01') {
    if (local_4 < 1) {
      *(undefined4 *)((int)param_1 + 0x90) = 0x12;
    }
    else {
      puVar2 = (undefined4 *)FUN_004d3110((int)param_1,iVar5,local_4 + 2);
      if (puVar2 == (undefined4 *)0x0) {
        *(undefined4 *)((int)param_1 + 0x90) = 2;
      }
      else {
        *(int *)((int)param_1 + 0xa7c) = *(int *)((int)param_1 + 0xa7c) + local_4 + 2;
        puVar6 = puVar2;
        for (uVar4 = local_4 + 1U >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        for (uVar4 = local_4 + 1U & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar6 = 0;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        *(undefined1 *)((int)puVar2 + local_4 + 1) = 1;
        if (*(int *)((int)param_1 + 0x54) != 0) {
          iVar1 = *(int *)((int)param_1 + 0x54) + -1;
          *(int *)((int)param_1 + 0x54) = iVar1;
          iVar5 = *(int *)((int)param_1 + 0x50);
          *(undefined4 *)(iVar5 + iVar1 * 8) = 8;
          *(undefined4 **)(iVar5 + 4 + iVar1 * 8) = puVar2;
          return;
        }
        *(undefined4 *)((int)param_1 + 0x90) = 3;
      }
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


