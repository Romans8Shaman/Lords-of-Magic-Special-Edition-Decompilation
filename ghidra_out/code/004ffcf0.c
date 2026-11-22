
undefined4 __thiscall FUN_004ffcf0(void *this,uint param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *this_00;
  int iVar3;
  uint unaff_EDI;
  CHAR local_64 [100];
  
  this_00 = (undefined4 *)FUN_005005f0(this,param_1);
  if (this_00 == (undefined4 *)0x0) {
    FUN_0053a090(local_64,s_GetDialog__d__returned_NULL_005735f8,param_1);
    OutputDebugStringA(local_64);
    return 0;
  }
  puVar1 = *(undefined4 **)((int)this + 0x25318);
  for (puVar2 = puVar1; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
    if (puVar2 == this_00) {
      FUN_0053a090(local_64,s_dialog_id__d_already_open_005735bc,param_1);
      OutputDebugStringA(local_64);
      return 0;
    }
  }
  *(undefined4 **)((int)this + 0x25318) = this_00;
  iVar3 = FUN_0048e9a0(this_00,puVar1);
  if (iVar3 == 0) {
    FUN_0053a090(local_64,s_gd_>Open_active_dialog__failed_005735d8,unaff_EDI);
    OutputDebugStringA(local_64);
    *(undefined4 **)((int)this + 0x25318) = puVar1;
    return 0;
  }
  FUN_00473930((int)this + 0x2531c);
  return 1;
}


