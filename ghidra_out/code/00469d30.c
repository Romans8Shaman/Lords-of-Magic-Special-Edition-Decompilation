
void __thiscall FUN_00469d30(void *this,float param_1,float param_2,float param_3)

{
  float fVar1;
  
  fVar1 = SQRT(param_3 * param_3 + param_2 * param_2 + param_1 * param_1);
  *(float *)((int)this + 0x58) = param_1 / fVar1;
  *(float *)((int)this + 0x5c) = param_2 / fVar1;
  *(float *)((int)this + 0x60) = param_3 / fVar1;
  return;
}


