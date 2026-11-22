/* Rebuilt from lomse.exe FUN_004efeb0 @ 0x004efeb0 (292 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_00584c58 (*(undefined *)0x00584c58)
#define DAT_00584c7c (*(undefined4 *)0x00584c7c)
#define DAT_00584c80 (*(int *)0x00584c80)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define FUN_004f07c0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x004f07c0)
#define FUN_00503040 ((undefined4 (__thiscall *)(void *, undefined4))0x00503040)
#define FUN_0052c8a0 ((int (__fastcall *)(int))0x0052c8a0)
#define FUN_0052d240 ((undefined4 * (__fastcall *)(int))0x0052d240)
#define _DAT_00584c58 (*(undefined4 *)0x00584c58)
#define _DAT_00584c64 (*(undefined4 *)0x00584c64)
#define _DAT_00584c68 (*(undefined4 *)0x00584c68)
#define _DAT_00584c6c (*(undefined4 *)0x00584c6c)
#define _DAT_00584c78 (*(undefined4 *)0x00584c78)
#define _DAT_00584c8c (*(undefined4 *)0x00584c8c)
#define _DAT_00584c90 (*(undefined4 *)0x00584c90)

#define LOM_SELF_004efeb0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall rb_004efeb0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = FUN_0052d240((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
  if ((puVar1 != (undefined4 *)0x0) &&
     (iVar2 = FUN_0052c8a0((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)), -1 < iVar2)) {
    _DAT_00584c58 = *(undefined4 *)(param_1 + 0x48);
    _DAT_00584c78 = *(undefined4 *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400);
    DAT_00584c7c = puVar1[10];
    _DAT_00584c8c = puVar1[(iVar2 + 3) * 0x13];
    _DAT_00584c90 = 0xffffffff;
    DAT_00584c80 = iVar2;
    switch(*(undefined4 *)(param_1 + 0xc)) {
    case 0:
      FUN_00503040(&DAT_00584ae8,2);
      return 1;
    case 1:
    case 2:
      FUN_00503040(&DAT_00584ae8,3);
      return 1;
    case 3:
      FUN_00503040(&DAT_00584ae8,1);
      _DAT_00584c64 = DAT_00584c7c;
      _DAT_00584c68 = DAT_00584c7c;
      _DAT_00584c6c = DAT_00584c80;
      FUN_004f07c0(&DAT_00584ae8,(undefined4 *)&DAT_00584c58);
      FUN_00503040(&DAT_00584ae8,0);
      return 1;
    case 4:
      FUN_00503040(&DAT_00584ae8,4);
      return 1;
    }
  }
  return 0;
}
