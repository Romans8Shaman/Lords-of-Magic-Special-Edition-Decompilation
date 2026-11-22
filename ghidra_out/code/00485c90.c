
undefined4 __thiscall FUN_00485c90(void *this,LPCSTR param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_004fe6e0(&DAT_00584ae8,param_1);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  FUN_004fd670((int)this + 0x4848);
  FUN_005397f0(this,4,1,piVar1);
  FUN_004a52e0((void *)((int)this + 0x482c),piVar1,0);
  *(undefined4 *)((int)this + 0x4834) = 0;
  FUN_004f7120((void *)((int)this + 0x4848),piVar1,1,0);
  FUN_005394d0(piVar1);
  FUN_004a9ca0((void *)((int)this + 0x482c),1);
  FUN_004c5ef0((void *)((int)this + 0x4dd8),*(int *)((int)this + 0x4898),
               *(int *)((int)this + 0x489c));
  return 1;
}


