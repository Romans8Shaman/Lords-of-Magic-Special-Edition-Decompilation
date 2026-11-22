
void __fastcall thunk_FUN_004b0260(int *param_1)

{
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (/*IC:004b026d*/*(code *)**(undefined4 **)*param_1)(1);
    *param_1 = 0;
  }
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (/*IC:004b0280*/*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    (/*IC:004b0294*/*(code *)**(undefined4 **)param_1[2])(1);
    param_1[2] = 0;
  }
  return;
}


