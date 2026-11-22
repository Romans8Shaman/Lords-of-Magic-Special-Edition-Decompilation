
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004cee40(void *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  uint unaff_EDI;
  char *pcVar7;
  undefined4 local_140;
  char *local_13c;
  char *local_134;
  char local_12c [300];
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar2 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar2;
    local_140 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -8 + iVar2 * 8);
    local_13c = *(char **)(*(int *)((int)param_1 + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    local_140 = 0;
    local_13c = local_134;
  }
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar2 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar2;
    uVar5 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar2 * 8);
    local_134 = *(char **)(*(int *)((int)param_1 + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    uVar5 = 0;
  }
  if ((char)local_140 != '\b') {
    *(undefined4 *)((int)param_1 + 0x90) = 0xe;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    if (*(int *)((int)param_1 + 0x54) == 0) {
      *(undefined4 *)((int)param_1 + 0x90) = 3;
      FUN_004d4550(param_1);
      *(undefined4 *)((int)param_1 + 0x90) = 0;
      *(undefined4 *)((int)param_1 + 0xa4) = 0;
      return;
    }
    iVar2 = *(int *)((int)param_1 + 0x50);
    iVar3 = *(int *)((int)param_1 + 0x54) + -1;
    *(int *)((int)param_1 + 0x54) = iVar3;
    *(undefined4 *)(iVar2 + iVar3 * 8) = local_140;
    *(char **)(iVar2 + 4 + iVar3 * 8) = local_13c;
    return;
  }
  iVar2 = FUN_004cee20(local_13c);
  pcVar4 = local_12c;
  switch(uVar5 & 0xff) {
  case 1:
    iVar3 = FUN_0053a090(local_12c,&DAT_0055e364,(uint)local_134);
    break;
  case 2:
    iVar3 = FUN_0053a090(local_12c,&DAT_0055e360,SUB84((double)(int)local_134 * _DAT_0054dd18,0));
    break;
  default:
    pcVar4 = (char *)FUN_004d1a80(param_1,uVar5,(float)local_134,0);
    if (pcVar4 == (char *)0x0) {
      iVar3 = FUN_0053a090(local_12c,s___nostringval___0055e340,unaff_EDI);
      break;
    }
    goto LAB_004cf00e;
  case 4:
    iVar3 = FUN_0053a090(local_12c,&DAT_0055e360,SUB84((double)(float)local_134,0));
    break;
  case 5:
    pcVar4 = *(char **)(*(int *)(*(int *)((int)param_1 + 0x80) + (int)local_134 * 4) + 4);
    if (pcVar4 == (char *)0x0) {
      pcVar4 = s___unknown___0055e354;
    }
    if ((uVar5 & 0x100) != 0) {
      FUN_0053a090(local_12c,&DAT_0055e350,(uint)pcVar4);
      pcVar4 = local_12c;
    }
LAB_004cf00e:
LAB_004cf010:
    uVar5 = 0xffffffff;
    pcVar7 = pcVar4;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    iVar3 = ~uVar5 - 1;
    break;
  case 8:
    pcVar4 = local_134;
    goto LAB_004cf010;
  }
  if (iVar2 < iVar3) {
    *(undefined4 *)((int)param_1 + 0x90) = 0xf;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
  }
  uVar5 = 0xffffffff;
  do {
    pcVar7 = pcVar4;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar7 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar7;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar4 = pcVar7 + -uVar5;
  pcVar7 = local_13c;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar7 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar7 = pcVar7 + 1;
  }
  if (*(int *)((int)param_1 + 0x54) == 0) {
    *(undefined4 *)((int)param_1 + 0x90) = 3;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    return;
  }
  iVar2 = *(int *)((int)param_1 + 0x50);
  iVar3 = *(int *)((int)param_1 + 0x54) + -1;
  *(int *)((int)param_1 + 0x54) = iVar3;
  *(undefined4 *)(iVar2 + iVar3 * 8) = local_140;
  *(char **)(iVar2 + 4 + iVar3 * 8) = local_13c;
  return;
}


