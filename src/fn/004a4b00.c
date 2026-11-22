/* Rebuilt from lomse.exe FUN_004a4b00 @ 0x004a4b00 (213 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005838a4 (*(int *)0x005838a4)
#define DAT_005cc9e8 (*(undefined *)0x005cc9e8)
#define FUN_0047c4b0 ((undefined4 (__fastcall *)(int *))0x0047c4b0)
#define FUN_004f5f40 ((undefined4 (__fastcall *)(int))0x004f5f40)
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004a4b00 1
void __thiscall rb_004a4b00(void *this,int param_1)

{
  FUN_0047c4b0((int *)&DAT_005cc9e8);
  if (*(int *)((int)this + 0x54) != 0) {
    DAT_005838a4 = DAT_005838a4 + *(int *)((int)this + 0x58) * -8;
    if (*(int *)((int)this + 0x54) != 0) {
      Ordinal_403(*(int *)((int)this + 0x54),s_C__lomse_source_storm_h_00555130,0x3f6,0);
    }
    *(undefined4 *)((int)this + 0x54) = 0;
  }
  if (*(int *)((int)this + 100) != 0) {
    DAT_005838a4 = DAT_005838a4 + *(int *)((int)this + 0x68) * -8;
    if (*(int *)((int)this + 100) != 0) {
      Ordinal_403(*(int *)((int)this + 100),s_C__lomse_source_storm_h_00555130,0x3f6,0);
    }
    *(undefined4 *)((int)this + 100) = 0;
  }
  if (*(int *)((int)this + 0x18) != 0) {
    DAT_005838a4 = DAT_005838a4 + *(int *)((int)this + 0x68) * -4;
    if (*(int *)((int)this + 0x18) != 0) {
      Ordinal_403(*(int *)((int)this + 0x18),s_C__lomse_source_storm_h_00555130,0x3f6,0);
    }
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  if (param_1 != 0) {
    FUN_004f5f40((int)this + 0x1c);
  }
  return;
}
