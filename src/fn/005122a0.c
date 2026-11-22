/* Rebuilt from lomse.exe FUN_005122a0 @ 0x005122a0 (96 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00556168 (*(undefined *)0x00556168)
#define FUN_005394d0 ((undefined4 (__cdecl *)(int *))0x005394d0)
#define FUN_00539610 ((undefined4 (__cdecl *)(LPCSTR, char *))0x00539610)
#define FUN_00539660 ((uint (__cdecl *)(char *, uint, uint, int *))0x00539660)
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_Failed_to_save_light_tables_00573b80 (*(char (*)[])0x00573b80)

#define LOM_SELF_005122a0 1
undefined4 __thiscall rb_005122a0(void *this,LPCSTR param_1)

{
  int *piVar1;
  uint uVar2;
  
  if (param_1 != (LPCSTR)0x0) {
    piVar1 = (int *)FUN_00539610(param_1,&DAT_00556168);
    if (piVar1 != (int *)0x0) {
      uVar2 = FUN_00539660((char *)((int)this + 0x2a4),0x20000,1,piVar1);
      FUN_005394d0(piVar1);
      if (uVar2 == 1) {
        return 1;
      }
      OutputDebugStringA(s_Failed_to_save_light_tables_00573b80);
    }
  }
  return 0;
}
