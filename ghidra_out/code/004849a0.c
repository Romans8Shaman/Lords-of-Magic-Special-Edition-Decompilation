
undefined4 __thiscall FUN_004849a0(void *this,char *in_stack_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (in_stack_4 == (char *)0x0) {
    return 0;
  }
  uVar2 = 0xffffffff;
  pcVar4 = in_stack_4;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (0x103 < ~uVar2 - 1) {
    return 0;
  }
  uVar2 = 0xffffffff;
  do {
    pcVar4 = in_stack_4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4 = in_stack_4 + 1;
    cVar1 = *in_stack_4;
    in_stack_4 = pcVar4;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar4 + -uVar2;
  pcVar5 = (char *)((int)this + 0x4b38);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 3) {
    FUN_004a4be0((void *)((int)this + 0x482c),(char *)((int)this + 0x4b38));
  }
  return 1;
}


