
void __cdecl op_spellrequest(void *vm)

{
  int iVar1;
  undefined4 unused_stack_4;
  int extraout_EDX;
  int unused_reg_1;
  undefined4 uStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    unused_reg_1 = *(int *)((int)vm + 0x50);
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    unused_stack_4 = *(undefined4 *)(unused_reg_1 + -8 + iVar1 * 8);
    uStack_4 = *(undefined4 *)(unused_reg_1 + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    unused_stack_4 = 0;
    unused_reg_1 = extraout_EDX;
  }
  if ((char)unused_stack_4 != '\0') {
    FUN_004ef4f0((undefined4 *)&DAT_005ccff4,unused_reg_1,&DAT_00584c1c,unused_stack_4,uStack_4);
  }
  return;
}


