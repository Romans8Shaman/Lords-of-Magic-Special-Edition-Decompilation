/* Rebuilt from lomse.exe FUN_0046fd10 @ 0x0046fd10 (104 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define _strncmp ((int (__cdecl *)(char *, char *, size_t))0x0053aa30)

#define LOM_SELF_0046fd10 1
int __cdecl rb_0046fd10(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  iVar5 = 0;
  local_4 = 0;
  do {
    uVar3 = 0xffffffff;
    pcVar6 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar4 = 0xffffffff;
    pcVar6 = param_2;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if ((int)((~uVar3 - 1) - (~uVar4 - 1)) <= iVar5) {
      return local_4;
    }
    uVar3 = 0xffffffff;
    pcVar6 = param_2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar2 = _strncmp(param_1 + iVar5,param_2,~uVar3 - 1);
    if (iVar2 == 0) {
      local_4 = 1;
    }
    iVar5 = iVar5 + 1;
    if (local_4 != 0) {
      return local_4;
    }
  } while( true );
#undef local_4
}
