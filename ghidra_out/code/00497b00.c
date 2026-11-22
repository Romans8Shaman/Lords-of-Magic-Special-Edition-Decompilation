
undefined4 __thiscall FUN_00497b00(void *this,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  char *pcVar7;
  char *pcVar8;
  char local_3e8 [1000];
  
  pcVar7 = *(char **)((int)this + 8);
  if (pcVar7 == (char *)0x0) {
    return 0;
  }
  if (*(int *)((int)this + 0x10) < 1) {
    return 0;
  }
  if (*(int *)((int)this + 0xc) < 0) {
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  uVar3 = 0xffffffff;
  pcVar8 = pcVar7;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  if (param_2 == 0) {
    switch(param_1) {
    case 8:
      iVar2 = *(int *)((int)this + 0xc);
      if (0 < iVar2) {
        for (; iVar2 <= (int)(uVar3 - 1); iVar2 = iVar2 + 1) {
          puVar6 = (undefined1 *)(*(int *)((int)this + 8) + iVar2);
          puVar6[-1] = *puVar6;
        }
        *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + -1;
        return 1;
      }
      break;
    default:
      return 0;
    case 0x25:
      if ((*(byte *)((int)this + 0x1c) & 2) == 0) {
        return 0;
      }
      if (0 < *(int *)((int)this + 0xc)) {
        *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + -1;
        return 1;
      }
      break;
    case 0x26:
      if ((*(byte *)((int)this + 0x1c) & 1) == 0) {
        return 0;
      }
      FUN_00497e00((int)this);
      return 1;
    case 0x27:
      if ((*(byte *)((int)this + 0x1c) & 2) == 0) {
        return 0;
      }
      if (pcVar7[*(int *)((int)this + 0xc)] != '\0') {
        *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
        return 1;
      }
      break;
    case 0x28:
      if ((*(byte *)((int)this + 0x1c) & 1) == 0) {
        return 0;
      }
      FUN_00497dd0(this);
    }
    return 1;
  }
  if (((*(int *)((int)this + 0x10) + -1 <= (int)(uVar3 - 1)) || (param_1 < 0x20)) ||
     (0xff < param_1)) {
    if (param_1 == 0x1b) {
      FUN_00497a20((int)this);
    }
    else if (param_1 != 0xd) {
      return 0;
    }
    FUN_00497ac0(this,0);
    thunk_FUN_004903c0();
    return 1;
  }
  uVar4 = 0xffffffff;
  do {
    pcVar8 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar7 = pcVar8 + -uVar4;
  pcVar8 = local_3e8;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  if (*(int *)((int)this + 0xc) < (int)uVar3) {
    do {
      puVar6 = (undefined1 *)(*(int *)((int)this + 8) + uVar3);
      uVar3 = uVar3 - 1;
      *puVar6 = puVar6[-1];
    } while (*(int *)((int)this + 0xc) < (int)uVar3);
  }
  *(char *)(*(int *)((int)this + 0xc) + *(int *)((int)this + 8)) = (char)param_1;
  iVar2 = FUN_004978f0(this);
  if (iVar2 == 0) {
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
    return 1;
  }
  uVar3 = 0xffffffff;
  pcVar7 = local_3e8;
  do {
    pcVar8 = pcVar7;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar7 = pcVar8 + -uVar3;
  pcVar8 = *(char **)((int)this + 8);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  return 1;
}


