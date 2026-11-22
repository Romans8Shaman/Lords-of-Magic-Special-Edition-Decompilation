/* Rebuilt from lomse.exe FUN_00489b70 @ 0x00489b70 (687 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055b570 (*(int *)0x0055b570)
#define DAT_005835dc (*(int *)0x005835dc)
#define DAT_005d1e84 (*(int *)0x005d1e84)
#define FUN_00481c20 ((undefined4 (__thiscall *)(void *, int *))0x00481c20)
#define FUN_00489a30 ((undefined4 (__thiscall *)(void *, undefined4 *, int))0x00489a30)
#define FUN_00489b50 ((int (__stdcall *)(int))0x00489b50)
#define FUN_0048a400 ((undefined4 (__fastcall *)(int))0x0048a400)
#define FUN_0048c2b0 ((int (__fastcall *)(int))0x0048c2b0)
#define FUN_0048c9e0 ((undefined4 (__fastcall *)(void *))0x0048c9e0)
#define FUN_0048cb80 ((uint (__fastcall *)(void *))0x0048cb80)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)
#define FUN_005047d0 ((undefined4 (__stdcall *)(undefined4))0x005047d0)
#define s_Unknown_message_type_0055c008 (*(char (*)[])0x0055c008)

#define LOM_SELF_00489b70 1
undefined4 __thiscall rb_00489b70(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  if ((*(char *)((int)param_1 + 6) == -1) && ((char)param_1[1] != '=')) {
    DAT_0055b570 = DAT_0055b570 + 1;
    if (DAT_005d1e84 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = FUN_004b7dd0(DAT_005d1e84);
    }
    *param_1 = DAT_0055b570 * 0x100 + iVar2;
    uVar3 = FUN_0048a400((int)this);
    *(char *)((int)param_1 + 7) = (char)uVar3;
  }
  iVar2 = FUN_0048a400((int)this);
  if (iVar2 == 2) {
    if ((char)param_1[1] != '=') {
      uVar3 = FUN_0048a400((int)this);
      *(char *)((int)param_1 + 7) = (char)uVar3;
    }
    iVar2 = FUN_00481c20((void *)((int)this + 0x25644),param_1);
    if (iVar2 == 0) {
      return 0;
    }
  }
  uVar4 = FUN_00489b50((uint)*(byte *)(param_1 + 1));
  if ((int)uVar4 < 1) {
    FUN_005047d0(s_Unknown_message_type_0055c008);
    return 0;
  }
  do {
    uVar1 = uVar4;
    uVar4 = uVar1 - 1;
    if (uVar4 < 0x15) break;
  } while (*(char *)(uVar4 + (int)param_1) == '\0');
  *(uint *)((int)param_1 + 0x101) = uVar1;
  if (*(char *)((int)param_1 + 6) == -1) {
    if ((((char)param_1[1] != '=') && ((char)param_1[1] == '\x1f')) &&
       (*(char *)((int)param_1 + 7) == '\x02')) {
      *(undefined1 *)((int)param_1 + 7) = 1;
    }
    FUN_0048c9e0(param_1);
  }
  if ((char)param_1[1] == ':') {
    *(int *)((int)this + 0x2a63c) = *param_1;
  }
  *(undefined1 *)((int)param_1 + 6) = 0xff;
  iVar2 = FUN_0048c2b0((int)param_1);
  if (iVar2 != 0) {
    uVar4 = FUN_0048cb80(param_1);
    *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) & uVar4;
  }
  switch((char)param_1[1]) {
  case '\x01':
  case '\x02':
  case '\x03':
  case '\x04':
  case '\x05':
  case '\x06':
  case '\a':
  case '\b':
  case '\t':
  case '\n':
  case '\v':
  case '\f':
  case '\r':
  case '\x0e':
  case '\x0f':
  case '\x10':
  case '\x11':
  case '\x12':
  case '\x13':
  case '\x14':
  case '\x15':
  case '\x16':
  case '\x17':
  case '\x18':
  case '\x19':
  case '\x1a':
  case '\x1b':
  case '\x1c':
  case '\x1d':
  case '\x1e':
  case '#':
  case '$':
  case '%':
  case '&':
  case '\'':
  case '(':
  case ')':
  case '*':
  case '+':
  case ',':
  case '-':
  case '.':
  case '/':
  case '0':
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
  case ':':
  case ';':
  case '<':
  case 'C':
  case 'D':
  case 'E':
  case 'F':
  case 'G':
    if ((DAT_005835dc != 0) || (iVar2 = FUN_0048a400((int)this), iVar2 == 0)) {
      if (*(int *)((int)this + 0x4d39c) == 0) {
        FUN_00489a30(this,param_1,1);
        return 1;
      }
      iVar2 = FUN_004b7dd0(*(int *)((int)this + 0x4d39c));
      FUN_00489a30(this,param_1,iVar2);
      return 1;
    }
    iVar2 = 1;
    while( true ) {
      if ((*(int *)((int)this + 0x4d39c) == 0) ||
         (iVar5 = *(int *)(*(int *)((int)this + 0x4d39c) + 0x100), iVar5 < 1)) {
        iVar5 = 1;
      }
      if (iVar5 < iVar2) break;
      FUN_00489a30(this,param_1,iVar2);
      iVar2 = iVar2 + 1;
    }
    break;
  case '\x1f':
    if (*(byte *)((int)param_1 + 0x16) != 0) {
      FUN_00489a30(this,param_1,(uint)*(byte *)((int)param_1 + 0x16));
      return 1;
    }
    iVar2 = 1;
    while( true ) {
      if ((*(int *)((int)this + 0x4d39c) == 0) ||
         (iVar5 = *(int *)(*(int *)((int)this + 0x4d39c) + 0x100), iVar5 < 1)) {
        iVar5 = 1;
      }
      if (iVar5 < iVar2) break;
      if (*(int *)((int)this + 0x4d39c) == 0) {
        iVar5 = 1;
      }
      else {
        iVar5 = FUN_004b7dd0(*(int *)((int)this + 0x4d39c));
      }
      if (iVar2 != iVar5) {
        FUN_00489a30(this,param_1,iVar2);
      }
      iVar2 = iVar2 + 1;
    }
    break;
  case ' ':
  case 'H':
  case 'N':
  case ']':
    FUN_00489a30(this,param_1,1);
    break;
  case '!':
  case '\"':
  case '>':
  case '?':
  case '@':
  case 'A':
  case 'B':
  case 'I':
  case 'K':
  case 'L':
  case 'M':
  case 'Q':
  case 'R':
  case 'S':
  case 'T':
  case 'U':
  case 'V':
  case 'W':
  case 'X':
  case 'Y':
  case '\\':
  case '_':
  case '`':
    iVar2 = 1;
    while( true ) {
      if ((*(int *)((int)this + 0x4d39c) == 0) ||
         (iVar5 = *(int *)(*(int *)((int)this + 0x4d39c) + 0x100), iVar5 < 1)) {
        iVar5 = 1;
      }
      if (iVar5 < iVar2) break;
      FUN_00489a30(this,param_1,iVar2);
      iVar2 = iVar2 + 1;
    }
    break;
  case '=':
  case 'O':
  case 'P':
  case 'Z':
  case '[':
  case '^':
  case 'a':
    iVar2 = 1;
    while( true ) {
      if ((*(int *)((int)this + 0x4d39c) == 0) ||
         (iVar5 = *(int *)(*(int *)((int)this + 0x4d39c) + 0x100), iVar5 < 1)) {
        iVar5 = 1;
      }
      if (iVar5 < iVar2) break;
      if (*(int *)((int)this + 0x4d39c) == 0) {
        iVar5 = 1;
      }
      else {
        iVar5 = FUN_004b7dd0(*(int *)((int)this + 0x4d39c));
      }
      if (iVar2 != iVar5) {
        FUN_00489a30(this,param_1,iVar2);
      }
      iVar2 = iVar2 + 1;
    }
  }
  return 1;
}
