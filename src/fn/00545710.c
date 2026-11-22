/* Rebuilt from lomse.exe FUN_00545710 @ 0x00545710 (51 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00545710 1
void __cdecl rb_00545710(char *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  cVar2 = *param_1;
  do {
    if (cVar2 == '\0') {
      return;
    }
    if ((cVar2 < '0') || ('9' < cVar2)) {
      if (cVar2 != ';') goto LAB_00545726;
      pcVar3 = param_1;
      do {
        *pcVar3 = pcVar3[1];
        pcVar1 = pcVar3 + 1;
        pcVar3 = pcVar3 + 1;
      } while (*pcVar1 != '\0');
    }
    else {
      *param_1 = cVar2 + -0x30;
LAB_00545726:
      param_1 = param_1 + 1;
    }
    cVar2 = *param_1;
  } while( true );
}
