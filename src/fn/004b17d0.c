/* Rebuilt from lomse.exe FUN_004b17d0 @ 0x004b17d0 (232 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004208d0 ((int (__thiscall *)(void *, int, int))0x004208d0)
#define FUN_004b1730 ((undefined4 (__thiscall *)(void *, int, int))0x004b1730)
#define FUN_00533370 ((undefined4 (__thiscall *)(void *, int, int *, int *, undefined4, int, undefined4, int, undefined4))0x00533370)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004b17d0 1
undefined4 __fastcall
rb_004b17d0(void *param_1,undefined4 unused_reg_1,void *unused_stack_0,int *unused_stack_4,
            int *unused_stack_8,undefined4 unused_stack_12)

{
  undefined4 *arg1;
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  arg1 = (undefined4 *)
         Ordinal_401(*(undefined4 *)((int)param_1 + 0x68),s_C__lomse_source_storm_h_00555130,0x3fa,0
                    );
  if (arg1 == (undefined4 *)0x0) {
    return 0;
  }
  uVar3 = *(uint *)((int)param_1 + 0x68);
  puVar5 = arg1;
  for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar5 = 0x1010101;
    puVar5 = puVar5 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar5 = 1;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  FUN_004b1730(param_1,(int)arg1,(int)unused_stack_0);
  *(undefined4 *)((int)param_1 + 0xc0) = 0;
  iVar4 = 0;
  do {
    piVar1 = (int *)FUN_004208d0(unused_stack_0,(int)unused_stack_8,iVar4);
    if (piVar1 != unused_stack_8) break;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
  if (iVar4 == 8) {
    Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3f6,0);
    return 0;
  }
  piVar1 = (int *)((int)param_1 + 0xc0);
  iVar4 = FUN_00533370((void *)((int)param_1 + 0x2e8),(int)unused_stack_0,unused_stack_4,
                       unused_stack_8,*(undefined4 *)((int)param_1 + 200),(int)arg1,piVar1,
                       *(int *)((int)param_1 + 0xd4),2);
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3f6,0);
  return (uint)(*piVar1 != 0);
}
