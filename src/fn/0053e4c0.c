/* Rebuilt from lomse.exe FUN_0053e4c0 @ 0x0053e4c0 (205 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053e590 ((undefined4 (__cdecl *)(PEXCEPTION_RECORD, PVOID, DWORD, undefined4, int, char, int, PVOID))0x0053e590)
#define FUN_0053e930 ((undefined4 (__cdecl *)(int, undefined4, int, int))0x0053e930)
#define FUN_0053f160 ((undefined4 (__stdcall *)(void))0x0053f160)

#define LOM_SELF_0053e4c0 1
undefined4 __cdecl
rb_0053e4c0(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int *param_5,
            int param_6,PVOID param_7,char param_8)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (*param_5 != 0x19930520) {
    FUN_0053f160();
  }
  if ((param_1->ExceptionFlags & 0x66) == 0) {
    if (param_5[3] != 0) {
      if (((param_1->ExceptionCode == 0xe06d7363) && (0x19930520 < param_1->ExceptionInformation[0])
          ) && (pcVar1 = *(code **)(param_1->ExceptionInformation[2] + 8), pcVar1 != (code *)0x0)) {
        uVar2 = ((undefined4 (__cdecl *)(__typeof__(param_1), __typeof__(param_2), __typeof__(param_3), __typeof__(param_4), __typeof__(param_5), __typeof__(param_6), __typeof__(param_7), __typeof__(param_8)))(*pcVar1))(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        return uVar2;
      }
      FUN_0053e590(param_1,param_2,param_3,param_4,(int)param_5,param_8,param_6,param_7);
    }
  }
  else if ((param_5[1] != 0) && (param_6 == 0)) {
    FUN_0053e930((int)param_2,param_4,(int)param_5,-1);
    return 1;
  }
  return 1;
}
