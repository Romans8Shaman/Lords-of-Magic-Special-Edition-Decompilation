/* Rebuilt from lomse.exe FUN_00470090 @ 0x00470090 (128 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004b7b90 ((undefined4 (__thiscall *)(void *, int))0x004b7b90)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)
#define FUN_004b8b80 ((undefined4 (__fastcall *)(int))0x004b8b80)
#define LAB_00470480 (*(undefined *)0x00470480) /* code label used as address */
#define LAB_004704a0 (*(undefined *)0x004704a0) /* code label used as address */
#define Ordinal_123 ((undefined4 (__stdcall *)(undefined4, undefined4))0x00533876) /* thunk -> STORM.DLL!Ordinal_123 */

#define LOM_SELF_00470090 1
void __thiscall rb_00470090(void *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)this + param_1 * 4 + 0x3b4);
  *(undefined4 *)((int)this + 0x120) = 3;
  *(undefined4 *)((int)this + 0x3c8) = uVar1;
  *(undefined4 *)((int)this + 0x390) = 1;
  FUN_004b7dd0((int)this);
  *(undefined4 *)((int)this + 0x390) = 1;
  Ordinal_123(2,&LAB_00470480);
  Ordinal_123(3,&LAB_004704a0);
  *(undefined4 *)((int)this + 0xd4) = 1;
  *(undefined4 *)((int)this + 0x36c) = 0;
  *(undefined4 *)((int)this + 0xd0) = 1;
  ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*(int *)this + 0x18)))(this);
  FUN_004b7b90(this,param_1);
  FUN_004b8b80((int)this);
  return;
}
