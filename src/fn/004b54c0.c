/* Rebuilt from lomse.exe FUN_004b54c0 @ 0x004b54c0 (194 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583ef0 (*(undefined4 *)0x00583ef0)
#define DAT_00584408 (*(uint *)0x00584408)
#define DAT_0058440c (*(int * *)0x0058440c)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004b54c0 1
undefined4 * __stdcall rb_004b54c0(void)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  if (((char)DAT_00584408 == '\x06') && ((DAT_00584408 & 0x100) == 0)) {
    FUN_004d05e0(DAT_005a7b78,DAT_00584408,DAT_0058440c);
    pvVar3 = DAT_005a7b78;
    if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
      piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
      iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
      uVar5 = *(uint *)(*piVar1 + -8 + iVar4 * 8);
      local_4 = *(uint *)(*piVar1 + -4 + iVar4 * 8);
    }
    else {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
      uVar5 = 0;
    }
    if ((uVar5 & 0xff) == 0) {
      pcVar7 = (char *)0x0;
    }
    else {
      pcVar7 = (char *)(((uVar5 & 0xff) != 8) - 1 & local_4);
    }
    if (pcVar7 != (char *)0x0) {
      uVar5 = 0xffffffff;
      do {
        pcVar8 = pcVar7;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar8 = pcVar7 + 1;
        cVar2 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar2 != '\0');
      uVar5 = ~uVar5;
      pcVar7 = pcVar8 + -uVar5;
      pcVar8 = (char *)&DAT_00583ef0;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
    }
  }
  return &DAT_00583ef0;
#undef local_4
}
