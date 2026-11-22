/* Rebuilt from lomse.exe FUN_0046fc50 @ 0x0046fc50 (177 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004b6520 ((undefined4 (__stdcall *)(undefined4))0x004b6520)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)
#define FUN_004b8b80 ((undefined4 (__fastcall *)(int))0x004b8b80)
#define LAB_00470480 (*(undefined *)0x00470480) /* code label used as address */
#define LAB_004704a0 (*(undefined *)0x004704a0) /* code label used as address */
#define Ordinal_123 ((undefined4 (__stdcall *)(undefined4, undefined4))0x00533876) /* thunk -> STORM.DLL!Ordinal_123 */
#define _strncpy ((char * (__cdecl *)(char *, char *, size_t))0x0053a220)

#define LOM_SELF_0046fc50 1
void __thiscall rb_0046fc50(void *this,char *param_1)

{
  undefined4 uVar1;
  
  _strncpy((char *)((int)this + 0xe0),param_1,0x1d);
  *(undefined1 *)((int)this + 0xfd) = 0;
  *(undefined4 *)((int)this + 0xd4) = 1;
  *(undefined4 *)((int)this + 0x36c) = 0;
  *(undefined4 *)((int)this + 0x120) = 1;
  uVar1 = FUN_004b7dd0((int)this);
  *(undefined4 *)((int)this + 0x390) = uVar1;
  *(undefined4 *)((int)this + 0xd0) = 1;
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)this + 0x2c4);
  *(undefined4 *)((int)this + 0x10) = 1;
  *(undefined4 *)((int)this + 0x2d) = 0;
  _strncpy((char *)((int)this + 0x14),(char *)((int)this + 0x104),0x17);
  *(undefined1 *)((int)this + 0x2b) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  Ordinal_123(2,&LAB_00470480);
  Ordinal_123(3,&LAB_004704a0);
  FUN_004b6520(1);
  ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*(int *)this + 0x18)))(this);
  FUN_004b8b80((int)this);
  return;
}
