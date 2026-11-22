/* Rebuilt from lomse.exe FUN_0053e9f0 @ 0x0053e9f0 (137 bytes, __cdecl).
 * HAND FIX r65: 00539970 takes (continuation, pRN=param_2) and pops 8; gen passed 1 arg.
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00539970 ((void (__stdcall *)(undefined *, PVOID))0x00539970)  /* _JumpToContinuation(addr, pRN) */
#define FUN_005399c0 ((undefined4 (__stdcall *)(PVOID, PEXCEPTION_RECORD))0x005399c0)
#define FUN_0053e930 ((undefined4 (__cdecl *)(int, undefined4, int, int))0x0053e930)
#define FUN_0053ea80 ((undefined4 (__cdecl *)(DWORD, undefined4, DWORD, undefined4, undefined4, int, int))0x0053ea80)
#define FUN_0053ec10 ((undefined4 (__cdecl *)(int, int, byte *, byte *))0x0053ec10)

#define LOM_SELF_0053e9f0 1
void __cdecl
rb_0053e9f0(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,
            byte *param_6,byte *param_7,int *param_8,int param_9,PVOID param_10)

{
  undefined *UNRECOVERED_JUMPTABLE;
  
  if (param_7 != (byte *)0x0) {
    FUN_0053ec10((int)param_1,(int)param_2,param_6,param_7);
  }
  if (param_10 == (PVOID)0x0) {
    param_10 = param_2;
  }
  else {
  }
  FUN_005399c0(param_10,param_1);
  FUN_0053e930((int)param_2,param_4,param_5,*param_8);
  *(int *)((int)param_2 + 8) = param_8[1] + 1;
  UNRECOVERED_JUMPTABLE =
       (undefined *)
       FUN_0053ea80((DWORD)param_1,param_2,param_3,param_5,*(undefined4 *)(param_6 + 0xc),param_9,
                    0x100);
  if (UNRECOVERED_JUMPTABLE != (undefined *)0x0) {
    FUN_00539970(UNRECOVERED_JUMPTABLE, param_2);
  }
  return;
}
