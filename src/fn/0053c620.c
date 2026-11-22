/* Rebuilt from lomse.exe FUN_0053c620 @ 0x0053c620 (93 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00575094 (*(int *)0x00575094)
#define DAT_00575098 (*(char *)0x00575098)
#define FUN_00541d40 ((uint (__cdecl *)(int, uint))0x00541d40)
#define FUN_00543a70 ((uint (__cdecl *)(uint))0x00543a70)
#define PTR_DAT_00574e88 (*(undefined * *)0x00574e88)

#define LOM_SELF_0053c620 1
void __cdecl rb_0053c620(char *param_1)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  
  uVar3 = FUN_00543a70((int)*param_1);
  if (uVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_00575094 < 2) {
        uVar3 = (byte)PTR_DAT_00574e88[*param_1 * 2] & 4;
      }
      else {
        uVar3 = FUN_00541d40((int)*param_1,4);
      }
    } while (uVar3 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_00575098;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}
