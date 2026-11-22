
void * __thiscall FUN_004f5560(void *this,byte param_1)

{
  if ((param_1 & 2) == 0) {
    FUN_004f5770(this);
    if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
      Ordinal_403(this,s_c__NEWERSTORM_H_storm_h_00573258,0x3eb,0);
    }
  }
  else {
    FUN_00539eb0(this,0x20,*(int *)((int)this + -4),FUN_004f5770);
    if ((int)this + -4 != 0) {
      Ordinal_403((int)this + -4,s_c__NEWERSTORM_H_storm_h_00573258,0x3f6,0);
      return this;
    }
  }
  return this;
}


