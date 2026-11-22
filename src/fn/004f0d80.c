/* Rebuilt from lomse.exe FUN_004f0d80 @ 0x004f0d80 (225 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_004a7d50 ((int (__thiscall *)(void *, int *, int))0x004a7d50)
#define FUN_004f6b00 ((undefined4 (__thiscall *)(void *, int *))0x004f6b00)
#define FUN_005397f0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005397f0)

#define LOM_SELF_004f0d80 1
undefined4 __thiscall rb_004f0d80(void *this,int *param_1)

{
  FUN_004f6b00(this,param_1);
  FUN_005397f0((char *)((int)this + 0x44),4,1,param_1);
  FUN_005397f0((char *)((int)this + 0x48),4,1,param_1);
  FUN_005397f0((char *)((int)this + 0x4c),4,1,param_1);
  FUN_005397f0((char *)((int)this + 0x50),4,1,param_1);
  FUN_005397f0((char *)((int)this + 0x54),4,1,param_1);
  FUN_005397f0((char *)((int)this + 0x58),4,1,param_1);
  FUN_005397f0((char *)((int)this + 0x5c),4,1,param_1);
  FUN_005397f0((char *)((int)this + 0x68),4,1,param_1);
  FUN_005397f0((char *)((int)this + 0x60),4,1,param_1);
  FUN_005397f0((char *)((int)this + 100),4,1,param_1);
  FUN_005397f0((char *)((int)this + 0x68),4,1,param_1);
  FUN_004a7d50(&DAT_005ae958,this,*(int *)((int)this + 0x1c));
  return 1;
}
