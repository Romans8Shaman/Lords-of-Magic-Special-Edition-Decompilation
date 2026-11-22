
undefined4 __thiscall FUN_005122a0(void *this,LPCSTR param_1)

{
  int *piVar1;
  uint uVar2;
  
  if (param_1 != (LPCSTR)0x0) {
    piVar1 = (int *)FUN_00539610(param_1,&DAT_00556168);
    if (piVar1 != (int *)0x0) {
      uVar2 = FUN_00539660((char *)((int)this + 0x2a4),0x20000,1,piVar1);
      FUN_005394d0(piVar1);
      if (uVar2 == 1) {
        return 1;
      }
      OutputDebugStringA(s_Failed_to_save_light_tables_00573b80);
    }
  }
  return 0;
}


