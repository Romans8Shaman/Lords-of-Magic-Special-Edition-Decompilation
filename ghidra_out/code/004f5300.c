
void __fastcall FUN_004f5300(int param_1)

{
  undefined4 *this;
  int arg1;
  
  this = *(undefined4 **)(param_1 + 0x114);
  if (this != (undefined4 *)0x0) {
    (/*IC:004f5311*/**(code **)*this)(this,3);
  }
  arg1 = *(int *)(param_1 + 0x118);
  if (arg1 != 0) {
    if (*(int *)(arg1 + 8) != 0) {
      Ordinal_403(*(int *)(arg1 + 8),s_c__NEWERSTORM_H_storm_h_00573258,0x3f6,0);
    }
    Ordinal_403(arg1,s_c__NEWERSTORM_H_storm_h_00573258,0x3eb,0);
  }
  return;
}


