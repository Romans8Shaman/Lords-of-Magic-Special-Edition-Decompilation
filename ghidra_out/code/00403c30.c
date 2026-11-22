
void __thiscall FUN_00403c30(void *this,void *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x1c);
  *(undefined4 *)this = 1;
  *(undefined4 *)((int)this + 8) = uVar1;
  FUN_0041efa0(param_1,2);
  return;
}


