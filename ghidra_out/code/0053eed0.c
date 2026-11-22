
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Library Function - Single Match
    __CallSettingFrame@12
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

undefined4 __CallSettingFrame_12(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 in_EDX;
  undefined4 unused_reg_1;
  
  pcVar1 = (code *)__NLG_Notify1(param_3,in_EDX,param_3);
  (/*IC:0053eef5*/*pcVar1)();
  if (param_3 == 0x100) {
    param_3 = 2;
  }
  uVar2 = __NLG_Notify1(param_3,unused_reg_1,param_3);
  return uVar2;
}


