
void __cdecl op_getoutnow(int *param_1)

{
  int *this;
  int iVar1;
  
  this = param_1;
  iVar1 = FUN_0041be40(param_1,&param_1);
  if (iVar1 != 0) {
    if ((param_1[0xc] & 0x1c00000U) != 0) {
      FUN_004245a0(param_1);
      return;
    }
    FUN_004d41c0(this,s_not_inside_00572a24);
  }
  return;
}


