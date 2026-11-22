
void __cdecl op_armycouldbenefitfromspecialbuilding_q(void *vm)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  void *pvStack_4;
  
  pvVar2 = vm;
  iVar3 = FUN_004409e0(vm,&pvStack_4);
  if (iVar3 != 0) {
    iVar3 = FUN_0041be40(pvVar2,&vm);
    if (iVar3 != 0) {
      iVar3 = FUN_004498d0(pvStack_4,(int)vm);
      if (*(int *)((int)pvVar2 + 0x54) != 0) {
        iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
        *(int *)((int)pvVar2 + 0x54) = iVar4;
        iVar1 = *(int *)((int)pvVar2 + 0x50);
        *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
        *(uint *)(iVar1 + 4 + iVar4 * 8) = -(uint)(iVar3 != 0);
        return;
      }
      *(undefined4 *)((int)pvVar2 + 0x90) = 3;
      FUN_004d4550(pvVar2);
      *(undefined4 *)((int)pvVar2 + 0x90) = 0;
      *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    }
  }
  return;
}


