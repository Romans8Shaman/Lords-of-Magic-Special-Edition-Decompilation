
void __cdecl op_kickarmyout(void *vm)

{
  int iVar1;
  
  iVar1 = FUN_0041be40(vm,&vm);
  if (iVar1 != 0) {
    iVar1 = FUN_00413180(vm,*(int *)(DAT_005ae970 +
                                    ((*(int *)((int)vm + 0x44) - 4U & 7) +
                                    *(int *)((int)vm + 0x1c) * 8) * 4));
    FUN_00420b80(vm,iVar1,0,0xffffffff,0xffffffff,0xffffffff,0);
  }
  return;
}


