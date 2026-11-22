
void __cdecl op_getmouseloc(void *vm)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  tagPOINT tStack_8;
  
  GetCursorPos(&tStack_8);
  if ((tStack_8.x < 0x280) && (tStack_8.y < 0x1e0)) {
    uVar2 = FUN_004a61e0(tStack_8.x,tStack_8.y);
    if (*(int *)((int)vm + 0x54) != 0) {
      iVar3 = *(int *)((int)vm + 0x54) + -1;
      *(int *)((int)vm + 0x54) = iVar3;
      iVar1 = *(int *)((int)vm + 0x50);
      *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = uVar2;
      return;
    }
  }
  else if (*(int *)((int)vm + 0x54) != 0) {
    iVar3 = *(int *)((int)vm + 0x54) + -1;
    *(int *)((int)vm + 0x54) = iVar3;
    iVar1 = *(int *)((int)vm + 0x50);
    *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = 0xffffffff;
    return;
  }
  *(undefined4 *)((int)vm + 0x90) = 3;
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
}


