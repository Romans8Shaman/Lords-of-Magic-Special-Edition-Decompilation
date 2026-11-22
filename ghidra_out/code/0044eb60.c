
int __fastcall FUN_0044eb60(int param_1)

{
  int *this;
  int iVar1;
  int iVar2;
  undefined4 unaff_EDI;
  
  this = *(int **)(param_1 + 0x44);
  if (this == (int *)0x0) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0x340);
  iVar1 = (/*IC:0044eb77*/**(code **)(*this + 0x38))(this,unaff_EDI);
  if (iVar1 < iVar2) {
    return iVar2;
  }
  iVar2 = (/*IC:0044eb88*/**(code **)(**(int **)(param_1 + 0x44) + 0x38))(*(int **)(param_1 + 0x44));
  return iVar2;
}


