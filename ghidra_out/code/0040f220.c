
void __thiscall
FUN_0040f220(void *this,void *param_1,uint param_2,int *param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  void *this_00;
  void *this_01;
  int iVar3;
  int iVar4;
  int local_8;
  void *local_4;
  
  this_01 = param_1;
  local_4 = *(void **)this;
  do {
    do {
      this_00 = local_4;
      if (this_00 == (void *)0x0) {
        return;
      }
      local_4 = *(void **)((int)this_00 + 0x4c);
    } while (*(int *)((int)this_00 + 0x18) != param_5);
    iVar3 = FUN_0040eec0(this_00,&param_1,&local_8);
    if (iVar3 == 0) {
      if (*(int *)((int)this_01 + 0x54) == 0) {
        *(undefined4 *)((int)this_01 + 0x90) = 3;
        FUN_004d4550(this_01);
        *(undefined4 *)((int)this_01 + 0x90) = 0;
        *(undefined4 *)((int)this_01 + 0xa4) = 0;
      }
      else {
        iVar3 = *(int *)((int)this_01 + 0x50);
        iVar4 = *(int *)((int)this_01 + 0x54) + -1;
        *(int *)((int)this_01 + 0x54) = iVar4;
        *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
        *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 0xffffffff;
      }
      iVar3 = *(int *)((int)this_01 + 0x54);
      iVar4 = -1;
      if (iVar3 == 0) goto LAB_0040f319;
LAB_0040f303:
      iVar2 = *(int *)((int)this_01 + 0x50);
      iVar3 = iVar3 + -1;
      *(int *)((int)this_01 + 0x54) = iVar3;
      *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
      *(int *)(iVar2 + 4 + iVar3 * 8) = iVar4;
    }
    else {
      uVar1 = *(undefined4 *)((int)param_1 + 0x28);
      if (*(int *)((int)this_01 + 0x54) == 0) {
        *(undefined4 *)((int)this_01 + 0x90) = 3;
        FUN_004d4550(this_01);
        *(undefined4 *)((int)this_01 + 0x90) = 0;
        *(undefined4 *)((int)this_01 + 0xa4) = 0;
      }
      else {
        iVar3 = *(int *)((int)this_01 + 0x50);
        iVar4 = *(int *)((int)this_01 + 0x54) + -1;
        *(int *)((int)this_01 + 0x54) = iVar4;
        *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
        *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = uVar1;
      }
      iVar3 = *(int *)((int)this_01 + 0x54);
      iVar4 = local_8;
      if (iVar3 != 0) goto LAB_0040f303;
LAB_0040f319:
      *(undefined4 *)((int)this_01 + 0x90) = 3;
      FUN_004d4550(this_01);
      *(undefined4 *)((int)this_01 + 0x90) = 0;
      *(undefined4 *)((int)this_01 + 0xa4) = 0;
    }
    uVar1 = *(undefined4 *)((int)this_00 + 4);
    if (*(int *)((int)this_01 + 0x54) == 0) {
      *(undefined4 *)((int)this_01 + 0x90) = 3;
      FUN_004d4550(this_01);
      *(undefined4 *)((int)this_01 + 0x90) = 0;
      *(undefined4 *)((int)this_01 + 0xa4) = 0;
    }
    else {
      iVar3 = *(int *)((int)this_01 + 0x50);
      iVar4 = *(int *)((int)this_01 + 0x54) + -1;
      *(int *)((int)this_01 + 0x54) = iVar4;
      *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = uVar1;
    }
    FUN_004d05e0(this_01,param_2,param_3);
    iVar3 = *(int *)((int)this_01 + 0x6c);
    *(undefined4 *)((int)this_01 + 0x6c) = *(undefined4 *)((int)this_01 + 0x70);
    if (iVar3 != 0) {
      return;
    }
  } while( true );
}


