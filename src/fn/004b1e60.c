/* Rebuilt from lomse.exe FUN_004b1e60 @ 0x004b1e60 (239 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005572ec (*(undefined *)0x005572ec)
#define DAT_00583ad4 (*(DWORD *)0x00583ad4)
#define DAT_00583ad8 (*(int *)0x00583ad8)
#define FUN_004b54c0 ((undefined4 * (__stdcall *)(void))0x004b54c0)
#define FUN_005394d0 ((undefined4 (__cdecl *)(int *))0x005394d0)
#define FUN_00539610 ((undefined4 (__cdecl *)(LPCSTR, char *))0x00539610)
#define FUN_005397f0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005397f0)
#define FUN_00548e10 ((DWORD (__cdecl *)(uint))0x00548e10)
#define FUN_00548ec0 ((undefined4 (__cdecl *)(int))0x00548ec0)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004b1e60 1
undefined4 __stdcall rb_004b1e60(DWORD *param_1,int *param_2,int param_3)

{
  LPCSTR pCVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  DWORD arg1;
  char *pcVar6;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  iVar5 = 0;
  pcVar6 = &DAT_005572ec;
  local_4 = 0;
  arg1 = 0;
  pCVar1 = (LPCSTR)FUN_004b54c0();
  piVar2 = (int *)FUN_00539610(pCVar1,pcVar6);
  if (piVar2 != (int *)0x0) {
    uVar3 = FUN_00548ec0((int)piVar2);
    arg1 = FUN_00548e10(uVar3);
    pcVar6 = (char *)Ordinal_401(arg1,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    FUN_005397f0(pcVar6,1,arg1,piVar2);
    iVar4 = 0;
    if (0 < (int)arg1) {
      do {
        iVar5 = iVar5 + (uint)(byte)pcVar6[iVar4];
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)arg1);
    }
    if (pcVar6 != (char *)0x0) {
      Ordinal_403(pcVar6,s_C__lomse_source_storm_h_00555130,0x3f6,0);
    }
    FUN_005394d0(piVar2);
  }
  if (param_3 == 0) {
    if ((*param_1 == arg1) && (*param_2 == iVar5)) {
      local_4 = 1;
    }
    DAT_00583ad4 = arg1;
    DAT_00583ad8 = iVar5;
  }
  else if (param_3 == 1) {
    DAT_00583ad4 = arg1;
    DAT_00583ad8 = iVar5;
    *param_1 = arg1;
    *param_2 = iVar5;
    return 1;
  }
  *param_1 = arg1;
  *param_2 = iVar5;
  return local_4;
#undef local_4
}
