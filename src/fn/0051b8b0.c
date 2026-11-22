/* Rebuilt from lomse.exe FUN_0051b8b0 @ 0x0051b8b0 (254 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004c6fb0 ((undefined4 * (__stdcall *)(void))0x004c6fb0)
#define FUN_005047d0 ((undefined4 (__stdcall *)(undefined4))0x005047d0)
#define FUN_00539eb0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *))0x00539eb0)
#define FUN_00539ff0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *, undefined4))0x00539ff0)
#define LAB_0051bc20 (*(undefined *)0x0051bc20) /* code label used as address */
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define op_sunlight ((undefined4 (__stdcall *)(void))0x0051bc30)
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)
#define s_Can_t_allocate_region_data__00573dd4 (*(char (*)[])0x00573dd4)

#define LOM_SELF_0051b8b0 1
void __fastcall rb_0051b8b0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;

  puVar2 = FUN_004c6fb0();
  iVar4 = puVar2[0x6c];
  if (iVar4 < 1) {
    iVar4 = 1;
  }
  if (*(int *)(param_1 + 0x74) != iVar4) {
    iVar1 = *(int *)(param_1 + 0x70);
    if (iVar1 != 0) {
      FUN_00539eb0(iVar1,0x14,*(int *)(iVar1 + -4),op_sunlight);
      if (iVar1 + -4 != 0) {
        Ordinal_403(iVar1 + -4,s_C__lomse_source_storm_h_00555130,0x3f6,0);
      }
    }
    piVar3 = (int *)Ordinal_401(iVar4 * 0x14 + 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    if (piVar3 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = piVar3 + 1;
      *piVar3 = iVar4;
      FUN_00539ff0(piVar5,0x14,iVar4,&LAB_0051bc20,op_sunlight);
    }
    *(int **)(param_1 + 0x70) = piVar5;
    if (piVar5 == (int *)0x0) {
      FUN_005047d0(s_Can_t_allocate_region_data__00573dd4);
      *(undefined4 *)(param_1 + 0x74) = 0;
    }
    else {
      *(int *)(param_1 + 0x74) = iVar4;
    }
    *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  return;
}
