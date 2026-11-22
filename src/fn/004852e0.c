/* Rebuilt from lomse.exe FUN_004852e0 @ 0x004852e0 (200 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa78c (*(undefined4 *)0x005aa78c)
#define DAT_005aad68 (*(undefined4 *)0x005aad68)
#define DAT_005ab344 (*(undefined4 *)0x005ab344)
#define DAT_005ab920 (*(undefined4 *)0x005ab920)
#define DAT_005abefc (*(undefined *)0x005abefc)
#define DAT_005ac4d8 (*(undefined *)0x005ac4d8)
#define DAT_005acab4 (*(undefined *)0x005acab4)
#define DAT_005ad090 (*(undefined *)0x005ad090)
#define DAT_005ad66c (*(undefined *)0x005ad66c)
#define DAT_005adc50 (*(undefined *)0x005adc50)
#define DAT_005ae22c (*(undefined *)0x005ae22c)
#define DAT_005ae950 (*(undefined4 * *)0x005ae950)

#define LOM_SELF_004852e0 1
undefined4 __stdcall rb_004852e0(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  if (param_1 == DAT_005ae950) {
    return 0xfffffffd;
  }
  if (param_1 == &DAT_005aa78c) {
    return 0xfffffffc;
  }
  if (param_1 == &DAT_005aad68) {
    return 0xfffffffb;
  }
  if (param_1 == &DAT_005ab344) {
    return 0xfffffffa;
  }
  if (param_1 == &DAT_005ab920) {
    return 0xfffffff9;
  }
  if (param_1 == (undefined4 *)&DAT_005abefc) {
    return 0xfffffff8;
  }
  if (param_1 == (undefined4 *)&DAT_005ac4d8) {
    return 0xfffffff7;
  }
  if (param_1 == (undefined4 *)&DAT_005acab4) {
    return 0xfffffff6;
  }
  if (param_1 == (undefined4 *)&DAT_005ad090) {
    return 0xfffffff5;
  }
  if (param_1 == (undefined4 *)&DAT_005ad66c) {
    return 0xfffffff4;
  }
  if (param_1 == (undefined4 *)&DAT_005adc50) {
    return 0xfffffff3;
  }
  if (param_1 == (undefined4 *)&DAT_005ae22c) {
    return 0xfffffff2;
  }
  return param_1[10];
}
