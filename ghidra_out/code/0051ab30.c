
void __thiscall FUN_0051ab30(void *this,int param_1,int param_2,int param_3,int param_4)

{
  short *psVar1;
  
  if ((((*(int *)((int)this + 0x202ac) != 0) && (-1 < param_1)) && (-1 < param_2)) &&
     ((param_1 < *(int *)((int)this + 0x202b4) && (param_2 < *(int *)((int)this + 0x202b0))))) {
    psVar1 = (short *)(*(int *)(*(int *)((int)this + 0x202ac) + param_2 * 4) + param_1 * 8);
    *(int *)((int)this + 0x1a4) = param_3 - *psVar1;
    *(int *)((int)this + 0x1a8) = param_4 - psVar1[1];
    FUN_0051ab90((int)this);
  }
  return;
}


