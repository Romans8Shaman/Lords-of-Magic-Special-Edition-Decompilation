
void __thiscall FUN_004f2f90(void *this,uint param_1,ushort param_2)

{
  if (*(int *)((int)this + 0x40) != 0) {
    FUN_004f2f70(this,param_1);
    *(float *)((int)this + 0x48) = (float)param_2;
  }
  return;
}


