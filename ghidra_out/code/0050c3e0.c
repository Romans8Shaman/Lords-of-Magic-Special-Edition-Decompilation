
void __fastcall FUN_0050c3e0(int *param_1)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = (void *)FUN_004b0ee0(&DAT_005cd304,param_1[0x12]);
  if (pvVar1 == (void *)0x0) {
    OutputDebugStringA(s_Unknown_drawn_tree_type_00573a7c);
    return;
  }
  iVar2 = FUN_0050cf40(pvVar1);
  FUN_004f5a90(param_1,iVar2);
  FUN_004f5b30(param_1,0);
  (/*IC:0050c41e*/**(code **)(*param_1 + 0x1c))(param_1);
  return;
}


