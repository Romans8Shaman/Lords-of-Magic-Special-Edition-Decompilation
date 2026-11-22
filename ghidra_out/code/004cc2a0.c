
void __cdecl op_strcat(void *vm)

{
  void *this;
  int iVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  size_t _Count;
  char *pcStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    cVar3 = (char)*(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    pcVar2 = *(char **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    cVar3 = '\0';
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    pcVar2 = pcStack_4;
  }
  iVar1 = *(int *)((int)vm + 0x90);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  if (iVar1 == 0) {
    if (cVar3 == '\b') {
      vm = pcVar2;
    }
    else {
      *(undefined4 *)((int)vm + 0x90) = 0xe;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
      vm = (void *)0x0;
    }
  }
  else {
    vm = (void *)0x0;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    cVar3 = (char)*(undefined4 *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    pcStack_4 = *(char **)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    cVar3 = '\0';
  }
  iVar1 = *(int *)((int)this + 0x90);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  if (iVar1 == 0) {
    if (cVar3 != '\b') {
      *(undefined4 *)((int)this + 0x90) = 0xe;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      pcStack_4 = (char *)0x0;
    }
  }
  else {
    pcStack_4 = (char *)0x0;
  }
  if ((pcStack_4 != (char *)0x0) && (vm != (void *)0x0)) {
    uVar4 = 0xffffffff;
    pcVar2 = pcStack_4;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar3 != '\0');
    iVar5 = ~uVar4 - 1;
    iVar1 = FUN_004cee20(pcStack_4);
    _Count = iVar1 - iVar5;
    if (0 < (int)_Count) {
      _strncpy(pcStack_4 + iVar5,vm,_Count);
    }
    uVar4 = 0xffffffff;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar3 = *(char *)vm;
      vm = (char *)((int)vm + 1);
    } while (cVar3 != '\0');
    if ((int)_Count < (int)(~uVar4 - 1)) {
      *(undefined4 *)((int)this + 0x90) = 0xf;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      pcStack_4[_Count + iVar5] = '\0';
    }
  }
  return;
}


