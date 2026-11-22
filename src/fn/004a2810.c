/* Rebuilt from lomse.exe FUN_004a2810 @ 0x004a2810 (219 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055c980 (*(undefined *)0x0055c980)
#define FUN_00548ed0 ((undefined4 (__cdecl *)(byte *, byte *, int))0x00548ed0)

#define LOM_SELF_004a2810 1
undefined4 __cdecl rb_004a2810(undefined4 *param_1, int volatile param_2, int *volatile param_3, int *volatile param_4)

{
  undefined1 uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  
  piVar3 = param_3;
  iVar5 = param_2;
  *param_3 = 0;
  *param_4 = 0;
  param_3 = (int *)*param_1;
  puVar6 = param_1 + 1;
  iVar7 = 0;
  if (0 < param_2) {
    do {
      iVar4 = FUN_00548ed0((byte *)&param_3,&DAT_0055c980,4);
      if (iVar4 == 0) break;
      iVar4 = 1;
      do {
        *(undefined1 *)((int)&param_2 + iVar4 + 3) = *(undefined1 *)((int)&param_3 + iVar4);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 4);
      uVar1 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      iVar7 = iVar7 + 1;
      param_3 = (int *)CONCAT13(uVar1,((uint)((uchar *)&param_3 + 0)[0] | (uint)((uchar *)&param_3 + 0)[1] << 8 | (uint)((uchar *)&param_3 + 0)[2] << 16));
    } while (iVar7 < iVar5);
  }
  iVar5 = FUN_00548ed0((byte *)&param_3,&DAT_0055c980,4);
  if (iVar5 == 0) {
    uVar2 = puVar6[1];
    *piVar3 = (uVar2 & 0xff) * 0x100 + (uVar2 >> 8 & 0xff);
    *param_4 = (uVar2 >> 0x10 & 0xff) * 0x100 + (uVar2 >> 0x18);
    return 1;
  }
  return 0;
}
