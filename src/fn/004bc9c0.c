/* Rebuilt from lomse.exe FUN_004bc9c0 @ 0x004bc9c0 (178 bytes, __thiscall).
 * HAND (2026-11-13): gen.py REJECT sehShape. EH frame stripped (game does not throw); behaviour is the
 * list walk / 0x24-byte node alloc otherwise. */
#include "lom.h"

#define FUN_0050b940 ((undefined4 (__thiscall *)(void *, int *))0x0050b940)
#define FUN_0050b770 ((int (__fastcall *)(int))0x0050b770)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864)
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004bc9c0 1
undefined4 __thiscall rb_004bc9c0(void *this, int *param_1)
{
  void *p;
  int alloc;
  int *node;
  int *dst;
  int i;
  int *src;

  for (p = *(void **)((int)this + 0xd24); p != 0; p = *(void **)((int)p + 0x20)) {
    if (FUN_0050b940(p, param_1) != 0) return 1;
  }
  alloc = Ordinal_401(0x24, s_C__lomse_source_storm_h_00555130, 0x3ef, 0);
  if (alloc == 0) node = 0;
  else node = (int *)FUN_0050b770(alloc);
  if (node == 0) return 0;
  dst = node;
  src = param_1;
  for (i = 9; i != 0; i = i - 1) {
    *dst = *src;
    src = src + 1;
    dst = dst + 1;
  }
  node[8] = *(int *)((int)this + 0xd24);
  *(int **)((int)this + 0xd24) = node;
  return 1;
}
