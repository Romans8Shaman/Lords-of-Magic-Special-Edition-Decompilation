/* Rebuilt from lomse.exe FUN_0051a930 @ 0x0051a930 (472 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00573b10 (*(undefined *)0x00573b10)
#define DAT_00573b30 (*(undefined *)0x00573b30)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005a79c8 (*(int *)0x005a79c8)
#define DAT_005a79cc (*(int *)0x005a79cc)
#define DAT_005a79d0 (*(int *)0x005a79d0)
#define DAT_005a79d4 (*(int *)0x005a79d4)
#define DAT_005a79e4 (*(char *)0x005a79e4)
#define FUN_00504ce0 ((undefined4 (__thiscall *)(void *, int, int))0x00504ce0)
#define FUN_005195c0 ((undefined4 (__thiscall *)(void *, undefined1))0x005195c0)
#define FUN_0051a850 ((undefined4 (__fastcall *)(int))0x0051a850)

#define LOM_SELF_0051a930 1
void __fastcall rb_0051a930(void *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)((int)param_1 + 0x214) != 0) goto LAB_0051aaf7;
  iVar1 = FUN_0051a850(0x584ae8);
  if ((iVar1 != 0) && (iVar1 = *(int *)((int)param_1 + 4), -1 < iVar1)) {
    iVar2 = *(int *)((int)param_1 + 0x1a4) -
            *(int *)(&DAT_00573b10 + iVar1 * 4) * *(int *)((int)param_1 + 0x1dc);
    iVar1 = *(int *)((int)param_1 + 0x1a8) -
            *(int *)(&DAT_00573b30 + iVar1 * 4) * *(int *)((int)param_1 + 0x1e0);
    switch(DAT_005a79e4) {
    case '\0':
      if (DAT_005a79d4 < iVar1) {
LAB_0051aadc:
        *(undefined4 *)((int)param_1 + 4) = 0xffffffff;
      }
      break;
    case '\x01':
      if ((DAT_005a79d4 < iVar1) && (DAT_005a79c8 <= iVar2)) {
        *(undefined4 *)((int)param_1 + 4) = 2;
      }
      else {
        if (DAT_005a79d4 < iVar1) goto joined_r0x0051aa5c;
        if (iVar2 < DAT_005a79c8) {
          *(undefined4 *)((int)param_1 + 4) = 0;
        }
        else if (DAT_005a79d4 < iVar1) goto joined_r0x0051aa5c;
      }
      break;
    case '\x02':
joined_r0x0051aa5c:
      if (iVar2 < DAT_005a79c8) goto LAB_0051aadc;
      break;
    case '\x03':
      if ((iVar1 < DAT_005a79cc) && (DAT_005a79c8 <= iVar2)) {
        *(undefined4 *)((int)param_1 + 4) = 2;
      }
      else {
        if (iVar1 < DAT_005a79cc) goto joined_r0x0051aa5c;
        if (iVar2 < DAT_005a79c8) {
          *(undefined4 *)((int)param_1 + 4) = 4;
        }
        else if (iVar1 < DAT_005a79cc) goto joined_r0x0051aa5c;
      }
      break;
    case '\x04':
      if (iVar1 < DAT_005a79cc) goto LAB_0051aadc;
      break;
    case '\x05':
      if ((iVar1 < DAT_005a79cc) && (iVar2 <= DAT_005a79d0)) {
        *(undefined4 *)((int)param_1 + 4) = 6;
      }
      else {
        if (iVar1 < DAT_005a79cc) goto joined_r0x0051aa6a;
        if (DAT_005a79d0 < iVar2) {
          *(undefined4 *)((int)param_1 + 4) = 4;
        }
        else if (iVar1 < DAT_005a79cc) goto joined_r0x0051aa6a;
      }
      break;
    case '\x06':
joined_r0x0051aa6a:
      if (DAT_005a79d0 < iVar2) goto LAB_0051aadc;
      break;
    case '\a':
      if ((DAT_005a79d4 < iVar1) && (iVar2 <= DAT_005a79d0)) {
        *(undefined4 *)((int)param_1 + 4) = 6;
      }
      else {
        if (DAT_005a79d4 < iVar1) goto joined_r0x0051aa6a;
        if (DAT_005a79d0 < iVar2) {
          *(undefined4 *)((int)param_1 + 4) = 0;
        }
        else if (DAT_005a79d4 < iVar1) goto joined_r0x0051aa6a;
      }
    }
  }
  DAT_005a79e4 = *(char *)((int)param_1 + 4);
  if (-1 < DAT_005a79e4) {
    FUN_005195c0(param_1,DAT_005a79e4);
  }
LAB_0051aaf7:
  FUN_00504ce0(&DAT_00584ae8,1,1);
  return;
}
