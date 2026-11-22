/* Rebuilt from lomse.exe FUN_004b4460 @ 0x004b4460 (244 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define CreateDirectoryA (*(__typeof__(BOOL (__stdcall *)(LPCSTR, LPSECURITY_ATTRIBUTES)) *)0x0054d0bc) /* KERNEL32.DLL!CreateDirectoryA via IAT */
#define DAT_00579274 (*(undefined1 *)0x00579274)
#define DAT_005af194 (*(undefined *)0x005af194)
#define s_Multisav_0055cfc4 (*(char (*)[])0x0055cfc4)

#define LOM_SELF_004b4460 1
int __fastcall rb_004b4460(int param_1)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined * _t_local_8;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
  
  puVar6 = (undefined4 *)(param_1 + 0x4b34);
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0xffffffff;
    puVar6 = puVar6 + 1;
  }
  puVar6 = (undefined4 *)(param_1 + 0x4b74);
  puVar8 = puVar6;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined4 *)(param_1 + 0x4bb4) = 0;
  iVar3 = 0;
  *(undefined4 *)(param_1 + 0x4bb8) = 0;
  local_8 = &DAT_005af194;
  *(undefined4 *)(param_1 + 0x4bbc) = 0;
  *(undefined4 *)(param_1 + 0x4bc0) = 0;
  *(undefined4 *)(param_1 + 0x4bc4) = 0;
  *(undefined1 *)(param_1 + 0x4bc8) = 0xff;
  *(undefined1 *)(param_1 + 0x4bc9) = 0xff;
  *(undefined4 *)(param_1 + 0x4b2c) = 0;
  do {
    uVar4 = 0xffffffff;
    puVar6[-0x10] = 0xffffffff;
    *puVar6 = 0;
    if ((iVar3 < 0) || (0x1d83f < iVar3)) {
      puVar2 = (undefined *)0x0;
    }
    else {
      puVar2 = local_8;
    }
    pcVar7 = &DAT_00579274;
    do {
      pcVar9 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar9 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar3 = iVar3 + 0x1d84;
    puVar6 = puVar6 + 1;
    pcVar7 = pcVar9 + -uVar4;
    pcVar9 = puVar2 + 0x44;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar9 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar9 = pcVar9 + 1;
    }
    local_8 = local_8 + 0x1d84;
    if (0x1d83f < iVar3) {
      CreateDirectoryA(s_Multisav_0055cfc4,(LPSECURITY_ATTRIBUTES)0x0);
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x4c10) = 0;
      *(undefined4 *)(param_1 + 0x4b30) = 0;
      return param_1;
    }
  } while( true );
#undef local_8
}
