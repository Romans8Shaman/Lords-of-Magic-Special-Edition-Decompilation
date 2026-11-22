/* Rebuilt from lomse.exe FUN_004b9940 @ 0x004b9940 (177 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004b9940 1
int __thiscall rb_004b9940(void *this,int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)this;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)Ordinal_401(0x18,s_C__lomse_source_storm_h_00555130,0x3ef,0);
      if (piVar1 == (int *)0x0) {
        return 0;
      }
      *piVar1 = param_1;
      piVar1[1] = param_2;
      piVar1[3] = param_3;
      iVar2 = Ordinal_401(0x200,s_C__lomse_source_storm_h_00555130,0x3fa,0);
      piVar1[2] = iVar2;
      piVar1[4] = 1;
      piVar1[5] = *(int *)this;
      *(int **)this = piVar1;
      *param_4 = 0;
      return piVar1[2];
    }
    if (((*piVar1 == param_1) && (piVar1[1] == param_2)) && (piVar1[3] == param_3)) break;
    piVar1 = (int *)piVar1[5];
  }
  piVar1[4] = piVar1[4] + 1;
  *param_4 = 1;
  return piVar1[2];
}
