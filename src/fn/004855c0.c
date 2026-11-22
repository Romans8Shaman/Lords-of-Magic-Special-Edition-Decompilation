/* Rebuilt from lomse.exe FUN_004855c0 @ 0x004855c0 (171 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FUN_004a52e0 ((undefined4 (__thiscall *)(void *, int *, int))0x004a52e0)
#define FUN_004a9ca0 ((undefined4 (__thiscall *)(void *, int))0x004a9ca0)
#define FUN_004c5ef0 ((undefined4 (__thiscall *)(void *, int, int))0x004c5ef0)
#define FUN_004c8f90 ((undefined4 (__fastcall *)(undefined4 *))0x004c8f90)
#define FUN_004c8fa0 ((undefined4 (__thiscall *)(void *, int *))0x004c8fa0)
#define FUN_004f7120 ((undefined4 (__thiscall *)(void *, int *, int, int))0x004f7120)
#define FUN_004fe6e0 ((undefined4 (__thiscall *)(void *, LPCSTR))0x004fe6e0)
#define FUN_005394d0 ((undefined4 (__cdecl *)(int *))0x005394d0)
#define FUN_005397f0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005397f0)

#define LOM_SELF_004855c0 1
undefined4 __thiscall rb_004855c0(void *this,LPCSTR param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_004fe6e0(&DAT_00584ae8,param_1);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  FUN_005397f0(this,4,1,piVar1);
  FUN_004a52e0((void *)((int)this + 0x482c),piVar1,1);
  *(undefined4 *)((int)this + 0x4834) = 0;
  FUN_004f7120((void *)((int)this + 0x4848),piVar1,0,0);
  if (*(int *)this < 100) {
    FUN_004c8f90((undefined4 *)((int)this + 0x4b34));
  }
  else {
    FUN_004c8fa0((void *)((int)this + 0x4b34),piVar1);
  }
  FUN_005394d0(piVar1);
  FUN_004a9ca0((void *)((int)this + 0x482c),1);
  FUN_004c5ef0((void *)((int)this + 0x4dd8),*(int *)((int)this + 0x4898),
               *(int *)((int)this + 0x489c));
  return 1;
}
