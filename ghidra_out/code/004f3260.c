
uint __thiscall FUN_004f3260(void *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_1 + *(float *)((int)this + 0x48);
  *(float *)((int)this + 0x48) = fVar1;
  fVar2 = (float)*(ushort *)(*(int *)((int)this + 0x44) + 2);
  return (uint)((!NAN(fVar1) && !NAN(fVar2)) && fVar2 <= fVar1);
}


