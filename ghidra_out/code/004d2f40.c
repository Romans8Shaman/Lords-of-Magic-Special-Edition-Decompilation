
undefined4 * __thiscall FUN_004d2f40(void *this,undefined4 *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_EDX;
  undefined3 uVar7;
  char *pcVar8;
  undefined4 local_4;
  
  if (param_2 == (char *)0x0) {
    *param_1 = 0;
    param_1[1] = local_4;
    return param_1;
  }
  cVar1 = *param_2;
  pcVar3 = param_2;
  while (cVar1 != '\0') {
    if (*pcVar3 == '\\') {
      pcVar2 = pcVar3;
      do {
        uVar7 = (undefined3)((uint)in_EDX >> 8);
        *pcVar2 = pcVar2[1];
        pcVar8 = pcVar2 + 1;
        in_EDX = CONCAT31(uVar7,*pcVar8);
        pcVar2 = pcVar2 + 1;
      } while (*pcVar8 != '\0');
      cVar1 = *pcVar3;
      in_EDX = CONCAT31(uVar7,cVar1);
      switch(cVar1) {
      case '\n':
      case '\r':
        pcVar2 = pcVar3;
        while (uVar7 = (undefined3)((uint)in_EDX >> 8), cVar1 != '\0') {
          *pcVar2 = pcVar2[1];
          cVar1 = pcVar2[1];
          in_EDX = CONCAT31(uVar7,cVar1);
          pcVar2 = pcVar2 + 1;
        }
        cVar1 = *pcVar3;
        in_EDX = CONCAT31(uVar7,cVar1);
        pcVar2 = pcVar3;
        if ((cVar1 == '\r') || (cVar1 == '\n')) {
          while (cVar1 != '\0') {
            *pcVar2 = pcVar2[1];
            cVar1 = pcVar2[1];
            in_EDX = CONCAT31((int3)((uint)in_EDX >> 8),cVar1);
            pcVar2 = pcVar2 + 1;
          }
        }
        break;
      case '\\':
        goto switchD_004d2fa0_caseD_5c;
      case 'n':
        *pcVar3 = '\n';
        break;
      case 'r':
        *pcVar3 = '\r';
        break;
      case 't':
        *pcVar3 = '\t';
      }
    }
    else {
switchD_004d2fa0_caseD_5c:
      pcVar3 = pcVar3 + 1;
    }
    cVar1 = *pcVar3;
  }
  uVar4 = 0xffffffff;
  pcVar3 = param_2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar3 = (char *)FUN_004d3110((int)this,in_EDX,uVar4 + 1);
  if (pcVar3 == (char *)0x0) {
    *param_1 = 0;
    param_1[1] = local_4;
    return param_1;
  }
  uVar5 = 0xffffffff;
  *(uint *)((int)this + 0xa7c) = *(int *)((int)this + 0xa7c) + uVar4 + 1;
  do {
    pcVar2 = param_2;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar2 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar2;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar2 = pcVar2 + -uVar5;
  pcVar8 = pcVar3;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar8 = pcVar8 + 1;
  }
  pcVar3[uVar4] = '\x01';
  *param_1 = 8;
  param_1[1] = pcVar3;
  return param_1;
}


