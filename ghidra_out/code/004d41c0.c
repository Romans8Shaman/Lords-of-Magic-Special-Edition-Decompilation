
undefined4 __thiscall FUN_004d41c0(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 local_10;
  undefined4 local_c [2];
  int *local_4;
  
  *(undefined1 *)((int)this + 0x880) = 0;
  iVar7 = *(int *)((int)this + 0x558) + -1;
  *(undefined4 *)((int)this + 0xa4c) = 0;
  *(undefined4 *)((int)this + 0xa50) = 0;
  if (-1 < iVar7) {
    piVar6 = (int *)((int)this + iVar7 * 4 + 0x3c8);
    puVar8 = (undefined4 *)((int)this + iVar7 * 8 + 0xa8);
    do {
      if (((char)*puVar8 == '\x06') &&
         (pcVar2 = (char *)FUN_004d5ca0(this,puVar8[1],*piVar6,&local_10,local_c),
         pcVar2 != (char *)0x0)) {
        uVar4 = 0xffffffff;
        goto code_r0x004d422c;
      }
      iVar7 = iVar7 + -1;
      puVar8 = puVar8 + -2;
      piVar6 = piVar6 + -1;
    } while (-1 < iVar7);
  }
  goto LAB_004d425c;
  while( true ) {
    uVar4 = uVar4 - 1;
    pcVar9 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar9;
    if (cVar1 == '\0') break;
code_r0x004d422c:
    pcVar9 = pcVar2;
    if (uVar4 == 0) break;
  }
  uVar4 = ~uVar4;
  pcVar2 = pcVar9 + -uVar4;
  pcVar9 = (char *)((int)this + 0x880);
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar9 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar9 = pcVar9 + 1;
  }
  *(undefined4 *)((int)this + 0xa4c) = local_10;
  *(undefined4 *)((int)this + 0xa50) = local_c[0];
LAB_004d425c:
  *(undefined4 *)((int)this + 0xa58) = *(undefined4 *)((int)this + 0x94);
  *(undefined4 *)((int)this + 0xa5c) = *(undefined4 *)((int)this + 0x98);
  *(undefined4 *)((int)this + 0xa54) = *(undefined4 *)((int)this + 0x558);
  _strncpy((char *)((int)this + 0x984),param_1,199);
  uVar4 = *(uint *)((int)this + 0xa60);
  piVar6 = *(int **)((int)this + 0xa64);
  *(undefined1 *)((int)this + 0xa4b) = 0;
  *(undefined4 *)((int)this + 0xa4) = 1;
  local_4 = piVar6;
  if (((char)uVar4 == '\x06') && ((uVar4 & 0x100) == 0)) {
    *(undefined4 *)((int)this + 0xa60) = 0;
    uVar3 = FUN_004d05e0(this,uVar4,piVar6);
    *(uint *)((int)this + 0xa60) = uVar4;
    *(int **)((int)this + 0xa64) = piVar6;
    return uVar3;
  }
  uVar3 = FUN_004d4060(this);
  return uVar3;
}


