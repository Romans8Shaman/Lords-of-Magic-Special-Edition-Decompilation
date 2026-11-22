/* Rebuilt from lomse.exe FUN_004b4570 @ 0x004b4570 (113 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584440 (*(undefined4 *)0x00584440)
#define DAT_00584444 (*(undefined4 *)0x00584444)
#define DAT_005851a0 (*(undefined4 *)0x005851a0)
#define DAT_005aa64c (*(undefined *)0x005aa64c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_00483cd0 ((undefined4 (__fastcall *)(int))0x00483cd0)
#define FUN_004a4b00 ((undefined4 (__thiscall *)(void *, int))0x004a4b00)
#define FUN_004b1bc0 ((undefined4 (__thiscall *)(void *, int))0x004b1bc0)
#define FUN_004b45f0 ((undefined4 (__fastcall *)(int))0x004b45f0)
#define FUN_004b64d0 ((undefined4 (__fastcall *)(int))0x004b64d0)
#define FUN_004b6be0 ((undefined4 (__thiscall *)(void *, int, int))0x004b6be0)
#define _DAT_00584448 (*(undefined4 *)0x00584448)
#define _DAT_0058444c (*(undefined4 *)0x0058444c)

#define LOM_SELF_004b4570 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall rb_004b4570(void *param_1)

{
  int iVar1;
  
  FUN_004b64d0((int)param_1);
  iVar1 = 0;
  do {
    FUN_004b6be0(param_1,iVar1,-1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  FUN_004b45f0((int)param_1);
  DAT_00584440 = 0;
  DAT_00584444 = 0;
  _DAT_00584448 = 0;
  _DAT_0058444c = 0;
  FUN_00483cd0(0x5aa12c);
  *(undefined4 *)((int)param_1 + 0x4c10) = 0;
  FUN_004a4b00(&DAT_005ae958,1);
  DAT_005851a0 = 0;
  FUN_004b1bc0(&DAT_005aa64c,0);
  return;
}
