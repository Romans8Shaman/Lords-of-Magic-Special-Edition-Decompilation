
void __thiscall
FUN_004aaf50(void *this,int unused_stack_4,undefined4 unused_stack_8,undefined4 param_p3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((DAT_00583100 != '\x02') && (iVar1 = 0, 0 < *(int *)((int)this + 0x68))) {
    iVar2 = DAT_005af144 * DAT_005af144;
    do {
      iVar3 = iVar1 % DAT_005ae9c4 - *(int *)((int)this + 0x6c) / 2;
      iVar4 = iVar1 / DAT_005ae9c4 - *(int *)((int)this + 0x70) / 2;
      if ((iVar2 < iVar3 * iVar3 + iVar4 * iVar4) &&
         (*(undefined2 *)(*(int *)((int)this + 0x54) + 2 + iVar1 * 8) =
               *(undefined2 *)((int)this + 0x4c), unused_stack_4 != 0)) {
        *(uint *)(*(int *)((int)this + 100) + 4 + iVar1 * 8) =
             *(uint *)(*(int *)((int)this + 100) + 4 + iVar1 * 8) | 0x200;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)((int)this + 0x68));
  }
  return;
}


