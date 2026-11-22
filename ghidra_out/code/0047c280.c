
void __thiscall FUN_0047c280(void *this,int *param_1)

{
  undefined4 *this_00;
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 unused_reg_1;
  undefined4 unused_stack_4;
  undefined4 unused_stack_12;
  
  this_00 = FUN_00485080(&DAT_005aa12c,*param_1,0x6f);
  if ((this_00 != (undefined4 *)0x0) && ((~this_00[0xc] & 0x100) != 0)) {
    unused_stack_4 = this_00[7];
    iVar3 = param_1[5];
    iVar1 = FUN_00420890(this_00,iVar3);
    if (iVar1 == 0) {
      param_1[6] = param_1[6] | 0x80;
      FUN_0047bfe0(this,param_1);
      return;
    }
    unused_stack_12 = 0xffffffff;
    puVar2 = FUN_004c6fc0();
    iVar3 = FUN_004b17d0(puVar2,unused_reg_1,this_00,unused_stack_4,iVar3,unused_stack_12);
    if (iVar3 == 0) {
      param_1[6] = param_1[6] | 0x80;
      FUN_0047bfe0(this,param_1);
      return;
    }
    puVar2 = FUN_004c6fc0();
    iVar3 = *(int *)(puVar2 + 0xc0);
    iVar1 = 0;
    param_1[3] = iVar3;
    if (0 < iVar3) {
      do {
        iVar3 = iVar1;
        puVar2 = FUN_004c6fc0();
        iVar3 = FUN_004b13a0(puVar2,iVar3);
        *(char *)(iVar1 + 0x24 + (int)param_1) = (char)iVar3;
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_1[3]);
    }
    FUN_0047bfe0(this,param_1);
  }
  return;
}


