/* Rebuilt from lomse.exe FUN_00489560 @ 0x00489560 (97 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FUN_00489260 ((undefined4 (__thiscall *)(void *, int *, uint, int *))0x00489260)
#define FUN_004a5390 ((undefined4 (__stdcall *)(int *))0x004a5390)
#define FUN_004fe6e0 ((undefined4 (__thiscall *)(void *, LPCSTR))0x004fe6e0)
#define FUN_005394d0 ((undefined4 (__cdecl *)(int *))0x005394d0)
#define FUN_005397f0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005397f0)

#define LOM_SELF_00489560 1
undefined4 __thiscall rb_00489560(void *this,LPCSTR param_1,uint param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_004fe6e0(&DAT_00584ae8,param_1);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  FUN_005397f0(this,4,1,piVar1);
  FUN_004a5390(piVar1);
  FUN_00489260((void *)((int)this + 0x4848),piVar1,param_2,param_3);
  FUN_005394d0(piVar1);
  return 1;
}
