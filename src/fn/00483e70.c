/* Rebuilt from lomse.exe FUN_00483e70 @ 0x00483e70 (85 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005aa170 (*(uint *)0x005aa170)
#define DAT_005aa174 (*(int * *)0x005aa174)
#define DAT_005cd18c (*(undefined *)0x005cd18c)
#define FUN_00483ed0 ((undefined4 (__stdcall *)(void))0x00483ed0)
#define FUN_004b1e60 ((undefined4 (__stdcall *)(DWORD *, int *, int))0x004b1e60)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004f5f40 ((undefined4 (__fastcall *)(int))0x004f5f40)
#define FUN_0052b260 ((undefined4 (__fastcall *)(int *))0x0052b260)

#define LOM_SELF_00483e70 1
undefined4 __thiscall rb_00483e70(void *this,DWORD *param_1)

{
  FUN_004d05e0(DAT_005a7b78,DAT_005aa170,DAT_005aa174);
  FUN_004f5f40(0x5ae974);
  FUN_0052b260((int *)&DAT_005cd18c);
  FUN_004b1e60(param_1,(int *)(param_1 + 1),0);
  FUN_00483ed0();
  return 1;
}
