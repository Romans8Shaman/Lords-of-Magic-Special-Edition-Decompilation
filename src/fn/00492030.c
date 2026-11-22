/* Rebuilt from lomse.exe FUN_00492030 @ 0x00492030 (200 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00491c20 ((int (__thiscall *)(void *, int))0x00491c20)
#define FUN_00491c70 ((int (__fastcall *)(int *))0x00491c70)
#define FUN_00492760 ((int (__thiscall *)(void *, int))0x00492760)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_Animation_frames_exceed_graphic_p_0055c56c (*(char (*)[])0x0055c56c)
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_00492030 1
int __thiscall
rb_00492030(void *this,int param_1,int param_2,int unused_stack_12,undefined4 unused_stack_16,
            undefined4 in_stack_14)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  iVar1 = FUN_00491c70(this);
  puVar2 = (undefined4 *)FUN_00491c20(this,iVar1);
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = (int *)FUN_00492760(this,param_1);
    if (piVar3 != (int *)0x0) {
      if ((*(int *)(*piVar3 + 4) < piVar3[3] * unused_stack_12 + piVar3[1]) ||
         (*(int *)(*piVar3 + 8) <
          piVar3[2] + ((unused_stack_12 + -1 + param_2) / unused_stack_12) * piVar3[4])) {
        OutputDebugStringA(s_Animation_frames_exceed_graphic_p_0055c56c);
      }
      else {
        puVar4 = (undefined4 *)Ordinal_401(0x14,s_C__lomse_source_storm_h_00555130,0x3ef,0);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          *puVar4 = piVar3;
          puVar4[1] = param_2;
          puVar4[2] = unused_stack_12;
          puVar4[3] = unused_stack_16;
          puVar4[4] = in_stack_14;
        }
        puVar2[1] = puVar4;
        if (puVar4 != (undefined4 *)0x0) {
          *puVar2 = 8;
          return iVar1;
        }
      }
    }
  }
  return 0xffffffff;
}
