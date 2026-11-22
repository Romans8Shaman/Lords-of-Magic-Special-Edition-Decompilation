/* Rebuilt from lomse.exe FUN_004986b0 @ 0x004986b0 (104 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00498410 ((undefined4 (__fastcall *)(undefined4 *))0x00498410)
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004986b0 1
void __fastcall rb_004986b0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *arg1;
  undefined4 *puVar2;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  puVar2 = (undefined4 *)(param_1 + 0x5e4);
  local_4 = 10;
  do {
    puVar1 = (undefined4 *)*puVar2;
    while (arg1 = puVar1, arg1 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)arg1[1];
      if (arg1 != (undefined4 *)0x0) {
        FUN_00498410(arg1);
        Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
      }
    }
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 1) = 0xff;
    *(undefined1 *)((int)puVar2 + 5) = 0xff;
    puVar2[2] = 0xffffffff;
    puVar2[3] = 0xffffffff;
    puVar2 = puVar2 + 4;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
#undef local_4
}
