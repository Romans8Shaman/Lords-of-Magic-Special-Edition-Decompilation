
void __cdecl FUN_0053f340(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (/*IC:0053f354*/*(code *)*param_1)();
    }
  }
  return;
}


