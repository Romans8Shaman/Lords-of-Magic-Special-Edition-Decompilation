
uint __thiscall FUN_004ab220(void *this,int param_1,int param_2)

{
  return (uint)*(ushort *)
                (**(int **)this +
                ((*(int *)((int)this + 8) + param_2) * ((*(int **)this)[3] >> 1) +
                 *(int *)((int)this + 4) + param_1) * 2);
}


