/* Rebuilt from lomse.exe FUN_00540050 @ 0x00540050 (173 bytes, __cdecl). HAND (2026-11-13, was asmfn):
 * CRT _umatherr(type, opcode, double arg1, double arg2, double retval, cw). opcode -> name via 00540130; known name:
 * build struct _exception {type, name, arg1, arg2, retval} (doubles moved as raw dwords, never through the FPU, like
 * the original), _control87(cw, 0xffff), _matherr(&exc) (004f5c70) and if it returns 0 _set_errno-style 00540100(type);
 * return exc.retval. Unknown name: _control87(cw, 0xffff), 00540100(type), return retval. */
#include "lom.h"

#define FUN_00540130 ((int (__cdecl *)(uint))0x00540130)
#define FUN_00540380 ((int (__cdecl *)(uint, uint))0x00540380)
#define FUN_004f5c70 ((int (__cdecl *)(void *))0x004f5c70)
#define FUN_00540100 ((void (__cdecl *)(int))0x00540100)

struct lom_exc_00540050 { int type; int name; uint a1[2]; uint a2[2]; uint ret[2]; };

#define LOM_SELF_00540050 1
double __cdecl rb_00540050(int type, uint op, uint a1lo, uint a1hi, uint a2lo, uint a2hi, uint rlo, uint rhi, uint cw)
{
  volatile struct lom_exc_00540050 e;
  int name = FUN_00540130(op);
  e.name = name;
  if (name == 0) {
    FUN_00540380(cw, 0xffff);
    FUN_00540100(type);
    return *(volatile double *)&rlo;
  }
  e.a1[0] = a1lo; e.a1[1] = a1hi; e.a2[0] = a2lo; e.a2[1] = a2hi;
  e.type = type; e.ret[0] = rlo; e.ret[1] = rhi;
  FUN_00540380(cw, 0xffff);
  if (FUN_004f5c70((void *)&e) == 0) FUN_00540100(type);
  return *(volatile double *)&e.ret[0];
}
