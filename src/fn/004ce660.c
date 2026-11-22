/* Rebuilt from lomse.exe FUN_004ce660 @ 0x004ce660 (117 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define s_arraytype_0055e2ec (*(char (*)[])0x0055e2ec)
#define s_dicttype_0055e2e0 (*(char (*)[])0x0055e2e0)
#define s_filetype_0055e310 (*(char (*)[])0x0055e310)
#define s_fixed8type_0055e31c (*(char (*)[])0x0055e31c)
#define s_integertype_0055e328 (*(char (*)[])0x0055e328)
#define s_marktype_0055e2c8 (*(char (*)[])0x0055e2c8)
#define s_nametype_0055e2f8 (*(char (*)[])0x0055e2f8)
#define s_nulltype_0055e334 (*(char (*)[])0x0055e334)
#define s_operatortype_0055e2b8 (*(char (*)[])0x0055e2b8)
#define s_realtype_0055e304 (*(char (*)[])0x0055e304)
#define s_stringtype_0055e2d4 (*(char (*)[])0x0055e2d4)
#define s_unknowntype_0055e2ac (*(char (*)[])0x0055e2ac)

#define LOM_SELF_004ce660 1
char * __stdcall rb_004ce660(undefined1 param_1)

{
  switch(param_1) {
  case 0:
    return s_nulltype_0055e334;
  case 1:
    return s_integertype_0055e328;
  case 2:
    return s_fixed8type_0055e31c;
  case 3:
    return s_filetype_0055e310;
  case 4:
    return s_realtype_0055e304;
  case 5:
    return s_nametype_0055e2f8;
  case 6:
    return s_arraytype_0055e2ec;
  case 7:
    return s_dicttype_0055e2e0;
  case 8:
    return s_stringtype_0055e2d4;
  case 9:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    return s_operatortype_0055e2b8;
  case 10:
    return s_marktype_0055e2c8;
  default:
    return s_unknowntype_0055e2ac;
  }
}
