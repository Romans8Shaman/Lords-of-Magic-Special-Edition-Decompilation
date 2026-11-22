/* Rebuilt from lomse.exe FUN_00443280 @ 0x00443280 (193 bytes, __fastcall). HAND (2026-11-13, was asmfn; gen: computedSwitch).
 * Walks up a chain of objects by type (+0x58, cases 9..14 via the jump table at 00443344):
 *   9,10,12: parent = lookup(5aa12c, +0x80, 2); if parent && parent->v3c() == obj->v3c() continue with parent,
 *            else fallback: q = FUN_0043e7b0(obj); return q && q->v3c() == obj->v3c();
 *   14:      same lookup but a miss / mismatch returns 0;   13: return 1;   11 or other: return 0.
 * Virtual +0x3c is called on the other object first, then on obj (same order as the original). */
#include "lom.h"

#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_0043e7b0 ((undefined4 (__fastcall *)(int))0x0043e7b0)
#define VCALL_3C(o) ((*(int (__thiscall **)(void *))(*(int *)(o) + 0x3c))(o))

#define LOM_SELF_00443280 1
undefined4 __fastcall rb_00443280(int *obj)
{
  int *p;
  int a;
  for (;;) {
    switch ((uint)(obj[0x16] - 9)) {
    case 0: case 1: case 3:
      p = (int *)FUN_00482ac0((void *)0x005aa12c, obj[0x20], 2);
      if (p == 0) goto fallback;
      a = VCALL_3C(p);
      if (a != VCALL_3C(obj)) goto fallback;
      break;
    case 5:
      p = (int *)FUN_00482ac0((void *)0x005aa12c, obj[0x20], 2);
      if (p == 0) return 0;
      a = VCALL_3C(p);
      if (a != VCALL_3C(obj)) return 0;
      break;
    case 4:
      return 1;
    default:
      return 0;
    }
    obj = p;
  }
fallback:
  p = (int *)FUN_0043e7b0((int)obj);
  if (p == 0) return 0;
  a = VCALL_3C(p);
  return a == VCALL_3C(obj) ? 1 : 0;
}
