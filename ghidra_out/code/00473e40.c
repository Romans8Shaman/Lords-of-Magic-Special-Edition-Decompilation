
void __cdecl op_center_toolip_quick(void *vm)

{
  void *this;
  int iVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  longlong lVar6;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  char *pcStack_4;
  
  FUN_00473930(0x5a9e04);
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    cVar3 = (char)*(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    pcVar5 = *(char **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    cVar3 = '\0';
    *(undefined4 *)((int)this + 0xa4) = 0;
    pcVar5 = pcStack_4;
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
      pcVar5 = (char *)0x0;
    }
  }
  else {
    pcVar5 = (char *)0x0;
  }
  if (pcVar5 != (char *)0x0) {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar1 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar1;
      uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
      pcStack_4 = *(char **)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
    }
    else {
      *(undefined4 *)((int)this + 0x90) = 6;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      uStack_8 = 0;
    }
    iVar1 = FUN_004026a0(&uStack_8,&uStack_10,&uStack_c,(float *)&vm);
    if (iVar1 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      return;
    }
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar1 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar1;
      uVar4 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
      pcStack_4 = *(char **)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
    }
    else {
      *(undefined4 *)((int)this + 0x90) = 6;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      uVar4 = 0;
    }
    uVar4 = uVar4 & 0xff;
    pcVar2 = pcStack_4;
    if (uVar4 != 1) {
      if (uVar4 == 2) {
        pcVar2 = (char *)((int)pcStack_4 >> 8);
      }
      else {
        if (uVar4 != 4) {
          FUN_00404ab0(this,0xe);
          return;
        }
        lVar6 = __ftol((float10)(float)pcStack_4);
        pcVar2 = (char *)lVar6;
      }
    }
    FUN_00473790(&DAT_005a9e04,(uint)pcVar2,uStack_10,pcVar5,1,1);
  }
  return;
}


