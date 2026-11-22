/* Rebuilt from lomse.exe FUN_00512240 @ 0x00512240 (93 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FUN_004fe6e0 ((undefined4 (__thiscall *)(void *, LPCSTR))0x004fe6e0)
#define FUN_005394d0 ((undefined4 (__cdecl *)(int *))0x005394d0)
#define FUN_005397f0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005397f0)
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_Failed_to_load_light_tables_00573b60 (*(char (*)[])0x00573b60)

#define LOM_SELF_00512240 1
undefined4 __thiscall rb_00512240(void *this,LPCSTR param_1)

{
  int *piVar1;
  uint uVar2;
  
  if (param_1 != (LPCSTR)0x0) {
    piVar1 = (int *)FUN_004fe6e0(&DAT_00584ae8,param_1);
    if (piVar1 != (int *)0x0) {
      uVar2 = FUN_005397f0((char *)((int)this + 0x2a4),0x20000,1,piVar1);
      FUN_005394d0(piVar1);
      if (uVar2 == 1) {
        return 1;
      }
      OutputDebugStringA(s_Failed_to_load_light_tables_00573b60);
    }
  }
  return 0;
}
