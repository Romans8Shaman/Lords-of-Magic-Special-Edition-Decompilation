
void __thiscall FUN_005303f0(void *this,int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_00485080(this,*param_1,0x2f);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  puVar1[0xc] = puVar1[0xc] & 0xfffffff7;
  DAT_005aeef4 = 1;
  return;
}


