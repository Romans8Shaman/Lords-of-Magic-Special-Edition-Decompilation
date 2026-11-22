
void __thiscall FUN_00451500(void *this)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  longlong lVar5;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  
  if (*(int *)((int)this + 0x2c) != 0) {
    puVar1 = FUN_004c6fc0();
    if (puVar1 != (undefined *)0x0) {
      iVar3 = *(int *)((int)this + 0x1c);
      puVar1 = FUN_004c6fc0();
      iVar3 = iVar3 % *(int *)(puVar1 + 0x6c);
      iVar2 = *(int *)((int)this + 0x1c);
      puVar1 = FUN_004c6fc0();
      iVar2 = iVar2 / *(int *)(puVar1 + 0x6c);
      puVar1 = FUN_004c6fc0();
      fStack_2c = (float)(iVar3 - (*(int *)(puVar1 + 0x5c) >> 1));
      puVar1 = FUN_004c6fc0();
      fStack_28 = (float)(iVar2 - (*(int *)(puVar1 + 0x60) >> 1));
      puVar1 = FUN_004c6fc0();
      fVar4 = FUN_004a5210(puVar1,iVar3,iVar2);
      fStack_24 = (float)fVar4;
      FUN_00469ae0(&DAT_005876d0,&fStack_2c);
      lVar5 = __ftol((float10)fStack_20);
      *(int *)((int)this + 0xc) = (int)lVar5;
      lVar5 = __ftol((float10)fStack_1c);
      *(int *)((int)this + 0x10) = (int)lVar5;
      *(undefined4 *)((int)this + 8) = uStack_18;
    }
  }
  return;
}


