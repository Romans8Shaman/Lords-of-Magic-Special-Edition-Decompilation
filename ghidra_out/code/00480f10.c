
undefined4 __thiscall FUN_00480f10(void *this,int *param_1)

{
  undefined4 *this_00;
  
  this_00 = FUN_00485080(this,*param_1,0x2f);
  if (this_00 == (undefined4 *)0x0) {
    OutputDebugStringA(s_msg_StopArmy__no_army_0055b1fc);
    return 0;
  }
  FUN_004176d0(this_00,0);
  return 1;
}


