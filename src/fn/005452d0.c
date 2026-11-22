/* Rebuilt from lomse.exe op_C @ 0x005452d0 (502 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055e260 (*(undefined2 *)0x0055e260)
#define DAT_00575098 (*(undefined1 *)0x00575098)
#define DAT_00577d78 (*(undefined *)0x00577d78)
#define DAT_005d5318 (*(int *)0x005d5318)
#define DAT_005d567c (*(undefined4 *)0x005d567c)
#define DAT_005d5680 (*(undefined4 *)0x005d5680)
#define DAT_005d5684 (*(undefined4 *)0x005d5684)
#define DAT_005d56b2 (*(ushort *)0x005d56b2)
#define FUN_0053bce0 ((undefined4 (__cdecl *)(undefined *))0x0053bce0)
#define FUN_0053c1f0 ((undefined4 (__cdecl *)(uint))0x0053c1f0)
#define FUN_00545710 ((undefined4 (__cdecl *)(char *))0x00545710)
#define FUN_005479e0 ((undefined4 (__cdecl *)(int, LCID, LCTYPE, char *))0x005479e0)
#define PTR_PTR_00577db0 (*(undefined * *)0x00577db0)
#define _DAT_0057509c (*(undefined4 *)0x0057509c)

#define LOM_SELF_005452d0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl rb_005452d0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  uVar5 = (uint)DAT_005d56b2;
  if (DAT_005d5318 == 0) {
    FUN_0053bce0(DAT_005d567c);
    FUN_0053bce0(DAT_005d5680);
    FUN_0053bce0(DAT_005d5684);
    DAT_005d567c = (undefined *)0x0;
    DAT_005d5680 = (undefined *)0x0;
    DAT_005d5684 = (char *)0x0;
    uVar4 = FUN_0053c1f0(2);
    *(undefined4 *)PTR_PTR_00577db0 = uVar4;
    if (*(undefined2 **)PTR_PTR_00577db0 == (undefined2 *)0x0) {
      return;
    }
    **(undefined2 **)PTR_PTR_00577db0 = DAT_0055e260;
    uVar4 = FUN_0053c1f0(2);
    *(undefined4 *)(PTR_PTR_00577db0 + 4) = uVar4;
    if (*(undefined1 **)(PTR_PTR_00577db0 + 4) == (undefined1 *)0x0) {
      return;
    }
    **(undefined1 **)(PTR_PTR_00577db0 + 4) = 0;
    uVar4 = FUN_0053c1f0(2);
    *(undefined4 *)(PTR_PTR_00577db0 + 8) = uVar4;
    if (*(undefined1 **)(PTR_PTR_00577db0 + 8) == (undefined1 *)0x0) {
      return;
    }
    **(undefined1 **)(PTR_PTR_00577db0 + 8) = 0;
  }
  else {
    iVar1 = FUN_005479e0(1,uVar5,0xe,(char *)&DAT_005d567c);
    iVar2 = FUN_005479e0(1,uVar5,0xf,(char *)&DAT_005d5680);
    iVar3 = FUN_005479e0(1,uVar5,0x10,(char *)&DAT_005d5684);
    FUN_00545710(DAT_005d5684);
    if ((iVar1 != 0 || iVar2 != 0) || iVar3 != 0) {
      FUN_0053bce0(DAT_005d567c);
      FUN_0053bce0(DAT_005d5680);
      FUN_0053bce0(DAT_005d5684);
      DAT_005d567c = (undefined *)0x0;
      DAT_005d5680 = (undefined *)0x0;
      DAT_005d5684 = (char *)0x0;
      return;
    }
    if (*(undefined **)PTR_PTR_00577db0 != &DAT_00577d78) {
      FUN_0053bce0(*(undefined **)PTR_PTR_00577db0);
      FUN_0053bce0(*(undefined **)(PTR_PTR_00577db0 + 4));
      FUN_0053bce0(*(undefined **)(PTR_PTR_00577db0 + 8));
    }
    *(undefined **)PTR_PTR_00577db0 = DAT_005d567c;
    *(undefined **)(PTR_PTR_00577db0 + 4) = DAT_005d5680;
    *(char **)(PTR_PTR_00577db0 + 8) = DAT_005d5684;
  }
  _DAT_0057509c = 1;
  DAT_00575098 = **(undefined1 **)PTR_PTR_00577db0;
  return;
}
