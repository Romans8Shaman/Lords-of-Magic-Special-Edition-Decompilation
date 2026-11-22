/* Rebuilt from lomse.exe FUN_004d2f40 @ 0x004d2f40 (313 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004d3110 ((int (__fastcall *)(int, undefined4, undefined4))0x004d3110)
unsigned lom_inreg_004d2f40[2] __asm__("lom_inreg_004d2f40");
undefined4 * __thiscall lom_body_004d2f40(void *this,undefined4 *param_1,char *param_2) __asm__("lom_body_004d2f40");

#define LOM_SELF_004d2f40 1
__attribute__((naked)) undefined4 * __thiscall rb_004d2f40(void *this,undefined4 *param_1,char *param_2)
{
  __asm__("movl %eax, lom_inreg_004d2f40\n\tmovl %edx, lom_inreg_004d2f40+4\n\tjmp lom_body_004d2f40");
}

undefined4 * __thiscall lom_body_004d2f40(void *this,undefined4 *param_1,char *param_2)
{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_EDX = (undefined4)*(unsigned *)((char *)lom_inreg_004d2f40 + 4);
  undefined3 uVar7;
  char *pcVar8;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  if (param_2 == (char *)0x0) {
    *param_1 = 0;
    param_1[1] = local_4;
    return param_1;
  }
  cVar1 = *param_2;
  pcVar3 = param_2;
  while (cVar1 != '\0') {
    if (*pcVar3 == '\\') {
      pcVar2 = pcVar3;
      do {
        uVar7 = (undefined3)((uint)in_EDX >> 8);
        *pcVar2 = pcVar2[1];
        pcVar8 = pcVar2 + 1;
        in_EDX = CONCAT31(uVar7,*pcVar8);
        pcVar2 = pcVar2 + 1;
      } while (*pcVar8 != '\0');
      cVar1 = *pcVar3;
      in_EDX = CONCAT31(uVar7,cVar1);
      switch(cVar1) {
      case '\n':
      case '\r':
        pcVar2 = pcVar3;
        while (uVar7 = (undefined3)((uint)in_EDX >> 8), cVar1 != '\0') {
          *pcVar2 = pcVar2[1];
          cVar1 = pcVar2[1];
          in_EDX = CONCAT31(uVar7,cVar1);
          pcVar2 = pcVar2 + 1;
        }
        cVar1 = *pcVar3;
        in_EDX = CONCAT31(uVar7,cVar1);
        pcVar2 = pcVar3;
        if ((cVar1 == '\r') || (cVar1 == '\n')) {
          while (cVar1 != '\0') {
            *pcVar2 = pcVar2[1];
            cVar1 = pcVar2[1];
            in_EDX = CONCAT31((uint)((uint)in_EDX >> 8),cVar1);
            pcVar2 = pcVar2 + 1;
          }
        }
        break;
      case '\\':
        goto switchD_004d2fa0_caseD_5c;
      case 'n':
        *pcVar3 = '\n';
        break;
      case 'r':
        *pcVar3 = '\r';
        break;
      case 't':
        *pcVar3 = '\t';
      }
    }
    else {
switchD_004d2fa0_caseD_5c:
      pcVar3 = pcVar3 + 1;
    }
    cVar1 = *pcVar3;
  }
  uVar4 = 0xffffffff;
  pcVar3 = param_2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar3 = (char *)FUN_004d3110((int)this,in_EDX,uVar4 + 1);
  if (pcVar3 == (char *)0x0) {
    *param_1 = 0;
    param_1[1] = local_4;
    return param_1;
  }
  uVar5 = 0xffffffff;
  *(uint *)((int)this + 0xa7c) = *(int *)((int)this + 0xa7c) + uVar4 + 1;
  do {
    pcVar2 = param_2;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar2 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar2;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar2 = pcVar2 + -uVar5;
  pcVar8 = pcVar3;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar8 = pcVar8 + 1;
  }
  pcVar3[uVar4] = '\x01';
  *param_1 = 8;
  param_1[1] = pcVar3;
  return param_1;
#undef local_4
}
