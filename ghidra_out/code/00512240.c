
undefined4 __thiscall FUN_00512240(void *this,LPCSTR param_1)

{
  int *piVar1;
  uint uVar2;
  
  if (param_1 != (LPCSTR)0x0) {
    piVar1 = (int *)FUN_004fe6e0(&DAT_00584ae8,param_1);
    if (piVar1 != (int *)0x0) {
      uVar2 = FUN_005397f0((char *)((int)this + 0x2a4),0x20000,1,piVar1);
      FUN_005394d0(piVar1);
      if (uVar2 == 1) {
        return 1;
      }
      OutputDebugStringA(s_Failed_to_load_light_tables_00573b60);
    }
  }
  return 0;
}


