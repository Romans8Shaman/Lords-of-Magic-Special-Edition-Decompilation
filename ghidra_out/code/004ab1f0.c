
uint __thiscall FUN_004ab1f0(void *this,int param_1,int param_2)

{
  return (uint)*(byte *)((*(int *)((int)this + 8) + param_2) * (*(int **)this)[3] +
                         *(int *)((int)this + 4) + param_1 + **(int **)this);
}


