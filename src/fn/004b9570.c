/* Rebuilt from lomse.exe FUN_004b9570 @ 0x004b9570 (112 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FUN_004b54c0 ((undefined4 * (__stdcall *)(void))0x004b54c0)
#define FUN_00505110 ((char * (__thiscall *)(void *, int, uint))0x00505110)

#define LOM_SELF_004b9570 1
char * __stdcall rb_004b9570(undefined1 param_1,short param_2)

{
  undefined4 *puVar1;
  char *pcVar2;
  
  switch(param_1) {
  case 0x44:
    pcVar2 = FUN_00505110(&DAT_00584ae8,7,(int)param_2);
    return pcVar2;
  default:
    pcVar2 = FUN_00505110(&DAT_00584ae8,4,0xffffffff);
    return pcVar2;
  case 0x47:
    pcVar2 = FUN_00505110(&DAT_00584ae8,2,0xffffffff);
    return pcVar2;
  case 0x4d:
    puVar1 = FUN_004b54c0();
    return (char *)puVar1;
  case 0x53:
    pcVar2 = FUN_00505110(&DAT_00584ae8,3,0xffffffff);
    return pcVar2;
  }
}
