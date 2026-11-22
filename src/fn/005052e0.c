/* Rebuilt from lomse.exe op_settemppath @ 0x005052e0 (262 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

/* register-held (not in _fr, see gen.py regvar_locals): pcStack_4 */
#define DAT_00573464 (*(undefined1 *)0x00573464)
#define DAT_005d1f8e (*(undefined *)0x005d1f8e)
#define DAT_005d1f90 (*(undefined4 *)0x005d1f90)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_005052e0 1
void __cdecl rb_005052e0(void *vm)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    cVar2 = (char)*(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    pcStack_4 = *(char **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    cVar2 = '\0';
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  iVar1 = *(int *)((int)vm + 0x90);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  if (iVar1 == 0) {
    if (cVar2 != '\b') {
      *(undefined4 *)((int)vm + 0x90) = 0xe;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
      pcStack_4 = (char *)0x0;
    }
  }
  else {
    pcStack_4 = (char *)0x0;
  }
  if (pcStack_4 != (char *)0x0) {
    uVar3 = 0xffffffff;
    do {
      pcVar5 = pcStack_4;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar5 = pcStack_4 + 1;
      cVar2 = *pcStack_4;
      pcStack_4 = pcVar5;
    } while (cVar2 != '\0');
    uVar3 = ~uVar3;
    pcVar5 = pcVar5 + -uVar3;
    pcVar7 = (char *)&DAT_005d1f90;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar7 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar5 = (char *)&DAT_005d1f90;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    if (((0 < (int)(~uVar3 - 1)) && ((&DAT_005d1f8e)[~uVar3] != '\\')) &&
       ((&DAT_005d1f8e)[~uVar3] != '/')) {
      uVar3 = 0xffffffff;
      pcVar5 = &DAT_00573464;
      do {
        pcVar7 = pcVar5;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar7 = pcVar5 + 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar7;
      } while (cVar2 != '\0');
      uVar3 = ~uVar3;
      iVar1 = -1;
      pcVar5 = (char *)&DAT_005d1f90;
      do {
        pcVar6 = pcVar5;
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        pcVar6 = pcVar5 + 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar6;
      } while (cVar2 != '\0');
      pcVar5 = pcVar7 + -uVar3;
      pcVar7 = pcVar6 + -1;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar7 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar7 = pcVar7 + 1;
      }
    }
  }
  return;
}
