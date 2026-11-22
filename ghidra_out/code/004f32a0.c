
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_004f32a0(void *this,float param_1)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  
  fVar3 = param_1 + *(float *)((int)this + 0x48);
  bVar1 = NAN(_DAT_0054de1c);
  bVar2 = fVar3 < _DAT_0054de1c;
  *(float *)((int)this + 0x48) = fVar3;
  return (uint)((NAN(fVar3) || bVar1) || bVar2);
}


