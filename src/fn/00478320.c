/* Rebuilt from lomse.exe FUN_00478320 @ 0x00478320 (166 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005832ec (*(int *)0x005832ec)
#define DeleteCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0e0) /* KERNEL32.DLL!DeleteCriticalSection via IAT */
#define FUN_00478410 ((undefined4 (__fastcall *)(int *))0x00478410)
#define FUN_00539eb0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *))0x00539eb0)
#define LAB_0047a770 (*(undefined *)0x0047a770) /* code label used as address */
#define op_sunlight ((undefined4 (__stdcall *)(void))0x0051bc30)
#define thunk_FUN_00477f50 ((undefined4 (__fastcall *)(int))0x00477f40)

#define LOM_SELF_00478320 1
void __fastcall rb_00478320(int *param_1)

{

  DAT_005832ec = DAT_005832ec + -0x13b8;
  FUN_00478410(param_1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x489));
  FUN_00539eb0(param_1 + 0x3f0,300,2,op_sunlight);
  thunk_FUN_00477f50((int)(param_1 + 0x3ed));
  FUN_00539eb0(param_1 + 0x1e3,0xd0,10,&LAB_0047a770);
  return;
}
