/* Hand C for lomse.exe FUN_0053f920 @ 0x0053f920 (188 bytes, __cdecl).
 * CRT _except1-style wrapper around _handle_exc (0053fd20). Written from
 * the original instruction stream in src/asmfn/0053f920.c.
 *
 * Signature (cdecl, 7 dwords): flags, opcode, arg1 as two raw dwords,
 * result as two raw dwords, cw. Returns the (possibly updated) result
 * in ST0 (float10). No fs:0.
 *
 * Control flow matches the original:
 *   typ_ok = 0053fd20(flags, &result, cw);          // _handle_exc, cw by value
 *   if typ_ok == 0: clear bit 0 of the 0x58-byte
 *     exception record at +0x38 (original AND of an
 *     otherwise uninitialised slot) and call
 *     0053f9e0(record, &cw, flags, opcode, &arg1, &result)
 *     which may update cw and result through those pointers.
 *   typ = 00540160(flags);
 *   if ([00577b9c] == 0 && typ != 0):
 *     return 00540050(typ, opcode, arg1, 0.0, result, cw)
 *     (ST0 comes from that callee; args moved as raw dwords).
 *   else:
 *     00540100(typ); 00540380(cw, 0xffff); fld result; ret.
 *
 * The 0x58-byte record is not zeroed, same as the original. Offset
 * +0x38 is not read by 0053f9e0 itself (it uses [0..5], [8], [0x10],
 * [0x11], [0x14]); the AND is kept for honesty.
 * Verification needs an ST0 + FPSW compare (same reason as g223/g227).
 */
#include "lom.h"

#define LOM_SELF_0053f920 1

#define FUN_0053fd20 ((uint (__cdecl *)(uint, uint *, uint))0x0053fd20)
#define FUN_0053f9e0 ((void (__cdecl *)(uint *, uint *, uint, uint, uint *, uint *))0x0053f9e0)
#define FUN_00540160 ((int (__cdecl *)(uint))0x00540160)
#define FUN_00540050 ((double (__cdecl *)(int, uint, uint, uint, uint, uint, uint, uint, uint))0x00540050)
#define FUN_00540100 ((void (__cdecl *)(int))0x00540100)
#define FUN_00540380 ((int (__cdecl *)(uint, uint))0x00540380)

#define DAT_00577b9c (*(volatile int *)0x00577b9c)

float10 __cdecl rb_0053f920(uint flags, uint opcode, uint a1lo, uint a1hi, uint rlo, uint rhi, uint cw)
{
  uint local[0x58 / 4];
  int typ;

  if (FUN_0053fd20(flags, &rlo, cw) == 0) {
    local[0x38 / 4] &= 0xfffffffe;
    FUN_0053f9e0(local, &cw, flags, opcode, &a1lo, &rlo);
  }
  typ = FUN_00540160(flags);
  if ((DAT_00577b9c == 0) && (typ != 0)) {
    return (float10)FUN_00540050(typ, opcode, a1lo, a1hi, 0, 0, rlo, rhi, cw);
  }
  FUN_00540100(typ);
  FUN_00540380(cw, 0xffff);
  return (float10)*(volatile double *)&rlo;
}
