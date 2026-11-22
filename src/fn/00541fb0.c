/* Rebuilt from lomse.exe FUN_00541fb0 @ 0x00541fb0 (97 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00541fb0 1
void __cdecl rb_00541fb0(uint param_1,char *param_2,uint param_3,int param_4)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar1 = param_2;
  if (param_4 != 0) {
    *param_2 = '-';
    param_2 = param_2 + 1;
    param_1 = -param_1;
    pcVar1 = param_2;
  }
  do {
    pcVar4 = pcVar1;
    uVar3 = param_1 % param_3;
    param_1 = param_1 / param_3;
    cVar2 = (char)uVar3;
    if (uVar3 < 10) {
      cVar2 = cVar2 + '0';
    }
    else {
      cVar2 = cVar2 + 'W';
    }
    *pcVar4 = cVar2;
    pcVar1 = pcVar4 + 1;
  } while (param_1 != 0);
  pcVar4[1] = '\0';
  do {
    cVar2 = *pcVar4;
    *pcVar4 = *param_2;
    *param_2 = cVar2;
    pcVar4 = pcVar4 + -1;
    param_2 = param_2 + 1;
  } while (param_2 < pcVar4);
  return;
}
