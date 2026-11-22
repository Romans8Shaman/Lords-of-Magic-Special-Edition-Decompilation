/* Rebuilt from lomse.exe FUN_004f5840 @ 0x004f5840 (141 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ac8 (*(int *)0x00584ac8)
#define DAT_00584acc (*(uint *)0x00584acc)
#define DAT_00584ad0 (*(int *)0x00584ad0)
#define FUN_004f58d0 ((undefined4 (__stdcall *)(void))0x004f58d0)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_No_memory_for_scratch_buffer__005732a8 (*(char (*)[])0x005732a8)
#define s_c__NEWERSTORM_H_storm_h_00573258 (*(char (*)[])0x00573258)

#define LOM_SELF_004f5840 1
bool __fastcall rb_004f5840(int param_1)

{
  uint arg1;
  
  DAT_00584ad0 = DAT_00584ad0 + 1;
  arg1 = (uint)*(ushort *)(*(int *)(param_1 + 8) + 4) * (uint)*(ushort *)(*(int *)(param_1 + 8) + 6)
  ;
  if (arg1 <= DAT_00584acc) {
    return DAT_00584ac8 != 0;
  }
  FUN_004f58d0();
  DAT_00584ac8 = Ordinal_401(arg1,s_c__NEWERSTORM_H_storm_h_00573258,0x3fa,0);
  if (DAT_00584ac8 == 0) {
    OutputDebugStringA(s_No_memory_for_scratch_buffer__005732a8);
    DAT_00584acc = 0;
    return DAT_00584ac8 != 0;
  }
  DAT_00584acc = arg1;
  return DAT_00584ac8 != 0;
}
