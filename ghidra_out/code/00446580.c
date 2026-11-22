
void __thiscall FUN_00446580(void *this,int param_1)

{
  int iVar1;
  void *this_00;
  int iVar2;
  
  iVar1 = DAT_005ae98c;
  for (iVar2 = DAT_005ae998; iVar2 <= iVar1; iVar2 = iVar2 + 1) {
    this_00 = (void *)FUN_004f6000(&DAT_005ae974,iVar2);
    if ((((this_00 != (void *)0x0) && (*(int *)((int)this_00 + 4) == 2)) &&
        (*(int *)((int)this_00 + 0x4c) != param_1)) &&
       (*(int *)((int)this_00 + 0x80) == *(int *)((int)this + 0x28))) {
      if (*(int **)((int)this_00 + 0x48) != (int *)0x0) {
        FUN_004245a0(*(int **)((int)this_00 + 0x48));
      }
      *(int *)((int)this_00 + 0x4c) = param_1;
      *(undefined4 *)((int)this_00 + 0x84) = 0xffffffff;
      *(undefined4 *)((int)this_00 + 0x88) = 0;
      FUN_00446580(this_00,param_1);
    }
  }
  return;
}


