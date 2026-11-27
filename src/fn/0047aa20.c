/* Rebuilt from lomse.exe op_playambientsfx @ 0x0047aa20 (311 bytes, __cdecl).
 * HAND v1.01b (was Ghidra 12.2 via tools/gen.py): vanilla pops TWO numbers (A = top, B = next), converts each by type
 * (1 int raw, 2 fixed >>8, 4 float __ftol) and calls 0047a8b0(this=0x585408, B, A). The generated version dropped A
 * (passed a literal 0) and value-converted the raw int bits of a type-1 B as if they were a float. */
#include "lom.h"

#define DAT_00585408 (*(undefined4 *)0x00585408)
#define FUN_0047a8b0 ((undefined4 (__thiscall *)(void *, undefined4, undefined4))0x0047a8b0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_0047aa20 1
static int lom_paf_pop(void *vm, int *out)
{
  int i;
  uint t;
  int raw = 0;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    i = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = i;
    t = *(uint *)(*(int *)((int)vm + 0x50) + -8 + i * 8);
    raw = *(int *)(*(int *)((int)vm + 0x50) + -4 + i * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    t = 0;
  }
  t &= 0xff;
  if (t == 1) *out = raw;
  else if (t == 2) *out = raw >> 8;
  else if (t == 4) *out = (int)__ftol((float10)__BC(float, raw));
  else return 0;
  return 1;
}

void __cdecl rb_0047aa20(void *vm)
{
  int a, b;
  if (lom_paf_pop(vm, &a) && lom_paf_pop(vm, &b)) {
    FUN_0047a8b0(&DAT_00585408, b, a);
    return;
  }
  *(undefined4 *)((int)vm + 0x90) = 0xe;
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
}
