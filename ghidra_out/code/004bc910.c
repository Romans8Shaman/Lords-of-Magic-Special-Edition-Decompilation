
void __fastcall FUN_004bc910(int param_1)

{
  undefined4 *this;
  int iVar1;
  
  this = (undefined4 *)(param_1 + 0x5068);
  iVar1 = 0x10;
  do {
    FUN_0042d750(this,this[2],*this,-1);
    FUN_0042d620(this,3);
    this = this + 0x761;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


