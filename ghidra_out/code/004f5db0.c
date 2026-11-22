
undefined4 __thiscall
FUN_004f5db0(void *this,int unused_stack_4,int unused_stack_8,undefined4 in_stack_c)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054b9eb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004f5f40((int)this);
  iVar1 = Ordinal_401(unused_stack_4 * 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  *(int *)((int)this + 8) = iVar1;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = Ordinal_401(unused_stack_4 * 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    *(int *)((int)this + 0xc) = iVar1;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      if (unused_stack_8 < 1) {
        *(undefined4 *)((int)this + 0x1c) = 0;
      }
      else {
        piVar3 = (int *)Ordinal_401(unused_stack_8 * 0x58 + 4,s_C__lomse_source_storm_h_00555130,
                                    0x3fa,0);
        uStack_4 = 0;
        if (piVar3 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = piVar3 + 1;
          *piVar3 = unused_stack_8;
          FUN_00539ff0(piVar4,0x58,unused_stack_8,FUN_004ba150,FUN_004ba1a0);
        }
        uStack_4 = 0xffffffff;
        *(int **)((int)this + 0x1c) = piVar4;
        if (piVar4 == (int *)0x0) {
          ExceptionList = pvStack_c;
          return 0;
        }
      }
      *(int *)((int)this + 0x24) = unused_stack_8;
      *(undefined4 *)((int)this + 0x20) = in_stack_c;
      iVar1 = 0;
      *(int *)((int)this + 0x10) = unused_stack_4;
      *(undefined4 *)((int)this + 0x18) = 0;
      if (0 < unused_stack_4) {
        do {
          iVar1 = iVar1 + 1;
          *(undefined4 *)(*(int *)((int)this + 8) + -4 + iVar1 * 4) = 0;
          *(undefined4 *)(*(int *)((int)this + 0xc) + -4 + iVar1 * 4) = 0;
        } while (iVar1 < *(int *)((int)this + 0x10));
      }
      FUN_004f5d20(this);
      uVar2 = 1;
    }
  }
  ExceptionList = pvStack_c;
  return uVar2;
}


