/* Rebuilt from lomse.exe FUN_00534c90 @ 0x00534c90 (494 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0054eac8 (*(undefined4 *)0x0054eac8)
#define DAT_0054eb40 (*(undefined4 *)0x0054eb40)
#define DAT_005d385f (*(undefined *)0x005d385f)
#define DAT_005d3860 (*(undefined4 *)0x005d3860)
#define DAT_005d3960 (*(undefined4 *)0x005d3960)
#define DAT_005d39d8 (*(undefined4 *)0x005d39d8)
#define DAT_005d3ad8 (*(undefined *)0x005d3ad8)
#define DAT_005d3bd8 (*(undefined *)0x005d3bd8)
#define DAT_005d3bda (*(undefined2 *)0x005d3bda)
#define DAT_005d3e1a (*(undefined2 *)0x005d3e1a)
#define DAT_005d3fd8 (*(undefined4 *)0x005d3fd8)
#define DAT_005d403a (*(undefined2 *)0x005d403a)
#define DAT_005d4058 (*(undefined2 *)0x005d4058)
#define DAT_005d40d0 (*(undefined4 *)0x005d40d0)
#define DAT_005d4148 (*(int *)0x005d4148)
#define FUN_00534ef0 ((undefined4 (__cdecl *)(undefined2 *, int, short *))0x00534ef0)
#define FUN_00536940 ((uint (__cdecl *)(uint, int))0x00536940)

#define LOM_SELF_00534c90 1
void __stdcall rb_00534c90(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined2 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  short *psVar8;
  uchar _fr[0x30] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_24;
  typedef short _t_local_20[7];
  typedef short _t_local_12;
  typedef short _t_local_10;
  typedef short _t_local_e;
#define local_24 (*(_t_local_24 *)(_fr + 0x4))
#define local_20 (*(_t_local_20 *)(_fr + 0x8))
#define local_12 (*(_t_local_12 *)(_fr + 0x16))
#define local_10 (*(_t_local_10 *)(_fr + 0x18))
#define local_e (*(_t_local_e *)(_fr + 0x1a))
  
  if (DAT_005d4148 == 0) {
    iVar2 = 0;
    local_24 = 0;
    iVar5 = 0;
    do {
      uVar6 = 1 << ((byte)(&DAT_0054eac8)[iVar5] & 0x1f);
      (&DAT_005d3960)[iVar5] = iVar2;
      if (0 < (int)uVar6) {
        uVar1 = (undefined1)iVar5;
        puVar7 = (undefined4 *)((int)&DAT_005d3860 + iVar2);
        for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar7 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
          puVar7 = puVar7 + 1;
        }
        for (uVar4 = uVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar7 = uVar1;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        iVar2 = local_24 + uVar6;
        local_24 = iVar2;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x1c);
    (&DAT_005d385f)[iVar2] = (char)iVar5;
    iVar5 = 0;
    iVar2 = 0;
    do {
      uVar6 = 1 << ((byte)(&DAT_0054eb40)[iVar2] & 0x1f);
      (&DAT_005d40d0)[iVar2] = iVar5;
      if (0 < (int)uVar6) {
        uVar1 = (undefined1)iVar2;
        puVar7 = (undefined4 *)((int)&DAT_005d39d8 + iVar5);
        for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar7 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
          puVar7 = puVar7 + 1;
        }
        for (uVar4 = uVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar7 = uVar1;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        iVar5 = iVar5 + uVar6;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x10);
    iVar5 = iVar5 >> 7;
    for (; iVar2 < 0x1e; iVar2 = iVar2 + 1) {
      (&DAT_005d40d0)[iVar2] = iVar5 << 7;
      uVar6 = 1 << ((char)(&DAT_0054eb40)[iVar2] - 7U & 0x1f);
      if (0 < (int)uVar6) {
        uVar1 = (undefined1)iVar2;
        puVar7 = (undefined4 *)(&DAT_005d3ad8 + iVar5);
        for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar7 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
          puVar7 = puVar7 + 1;
        }
        for (uVar4 = uVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar7 = uVar1;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        iVar5 = iVar5 + uVar6;
      }
    }
    psVar8 = local_20;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      psVar8[0] = 0;
      psVar8[1] = 0;
      psVar8 = psVar8 + 2;
    }
    puVar3 = &DAT_005d3bda;
    do {
      *puVar3 = 8;
      puVar3 = puVar3 + 2;
      local_10 = local_10 + 1;
    } while ((int)puVar3 < 0x5d3e17);
    puVar3 = &DAT_005d3e1a;
    do {
      *puVar3 = 9;
      puVar3 = puVar3 + 2;
      local_e = local_e + 1;
    } while ((int)puVar3 < 0x5d3fd7);
    puVar3 = (undefined2 *)((int)&DAT_005d3fd8 + 2);
    do {
      *puVar3 = 7;
      puVar3 = puVar3 + 2;
      local_12 = local_12 + 1;
    } while ((int)puVar3 < 0x5d4037);
    puVar3 = &DAT_005d403a;
    do {
      *puVar3 = 8;
      puVar3 = puVar3 + 2;
      local_10 = local_10 + 1;
    } while ((int)puVar3 < 0x5d4057);
    FUN_00534ef0((undefined2 *)&DAT_005d3bd8,0x11f,local_20);
    uVar6 = 0;
    puVar3 = &DAT_005d4058;
    do {
      puVar3[1] = 5;
      uVar4 = FUN_00536940(uVar6,5);
      *puVar3 = (short)uVar4;
      puVar3 = puVar3 + 2;
      uVar6 = uVar6 + 1;
    } while ((int)puVar3 < 0x5d40d0);
    DAT_005d4148 = 1;
  }
  return;
#undef local_24
#undef local_20
#undef local_12
#undef local_10
#undef local_e
}
