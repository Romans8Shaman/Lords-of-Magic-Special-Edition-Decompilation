/* Rebuilt from lomse.exe FUN_0053f1f0 @ 0x0053f1f0 (48 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00555000 (*(undefined *)0x00555000)
#define DAT_005550fc (*(undefined *)0x005550fc)
#define DAT_00555100 (*(undefined *)0x00555100)
#define DAT_00555110 (*(undefined *)0x00555110)
#define FUN_0053f340 ((undefined4 (__cdecl *)(undefined4 *, undefined4 *))0x0053f340)
#define PTR___fpmath_005747bc (*(undefined * *)0x005747bc)

#define LOM_SELF_0053f1f0 1
void __stdcall rb_0053f1f0(void)

{
  if (PTR___fpmath_005747bc != (undefined *)0x0) {
    /* HAND: `call eax` with no push: __fpmath(int) sees our own return address as its arg */
    ((void (__cdecl *)(int))(*(code *)PTR___fpmath_005747bc))((int)__builtin_return_address(0));
  }
  FUN_0053f340((undefined4 *)&DAT_00555100,(undefined4 *)&DAT_00555110);
  FUN_0053f340((undefined4 *)&DAT_00555000,(undefined4 *)&DAT_005550fc);
  return;
}
