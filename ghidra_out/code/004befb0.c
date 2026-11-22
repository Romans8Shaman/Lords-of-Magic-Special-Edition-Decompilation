
undefined4 __thiscall FUN_004befb0(void *this,int param_1)

{
  uint *puVar1;
  
  if ((param_1 < 0) || (*(int *)((int)this + 4) <= param_1)) {
    FUN_005047d0(s_Invalid_access_to_SpellKnowledge_0055d8cc);
    return 0;
  }
  puVar1 = (uint *)(*(int *)this + (param_1 >> 5) * 4);
  *puVar1 = *puVar1 & ~(1 << ((byte)param_1 & 0x1f));
  return 1;
}


