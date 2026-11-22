
void * __thiscall FUN_004f5ed0(void *this,byte param_1)

{
  if ((param_1 & 2) == 0) {
    FUN_004ba1a0(this);
    if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
      Ordinal_403(this,s_C__lomse_source_storm_h_00555130,0x3eb,0);
    }
  }
  else {
    FUN_00539eb0(this,0x58,*(int *)((int)this + -4),FUN_004ba1a0);
    if ((int)this + -4 != 0) {
      Ordinal_403((int)this + -4,s_C__lomse_source_storm_h_00555130,0x3f6,0);
      return this;
    }
  }
  return this;
}


