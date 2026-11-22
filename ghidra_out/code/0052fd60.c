
void __fastcall FUN_0052fd60(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *this;
  int iVar3;
  
  puVar1 = FUN_0052d240((int)param_1);
  if ((puVar1 != (undefined4 *)0x0) && (puVar1[0x12] == *param_1)) {
    iVar2 = FUN_0052c8a0((int)param_1);
    if (-1 < iVar2) {
      this = (void *)FUN_00428c40((int)(puVar1 + iVar2 * 0x13 + 0x31));
      if (this != (void *)0x0) {
        iVar3 = FUN_0042c500(this,puVar1[10],iVar2,1);
        if (iVar3 != 0) {
          FUN_0042c300(this,puVar1[10],iVar2);
        }
      }
    }
  }
  return;
}


