/* Rebuilt from lomse.exe FUN_004b4a50 @ 0x004b4a50 (261 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005572ec (*(undefined *)0x005572ec)
#define DAT_00584424 (*(int *)0x00584424)
#define DAT_00584aa0 (*(undefined4 *)0x00584aa0)
#define DAT_00584aa4 (*(undefined4 *)0x00584aa4)
#define DAT_00584ae4 (*(undefined4 *)0x00584ae4)
#define FUN_005394d0 ((undefined4 (__cdecl *)(int *))0x005394d0)
#define FUN_00539610 ((undefined4 (__cdecl *)(LPCSTR, char *))0x00539610)
#define FUN_005397f0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005397f0)
#define FUN_00548e10 ((DWORD (__cdecl *)(uint))0x00548e10)
#define FUN_00548ec0 ((undefined4 (__cdecl *)(int))0x00548ec0)
#define GetModuleFileNameA (*(__typeof__(DWORD (__stdcall *)(HMODULE, LPSTR, DWORD)) *)0x0054d048) /* KERNEL32.DLL!GetModuleFileNameA via IAT */
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004b4a50 1
void __fastcall rb_004b4a50(int param_1)

{
  int *piVar1;
  uint uVar2;
  DWORD arg1;
  char *arg1_00;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uchar _fr[0x110] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef CHAR _t_local_104[260];
#define local_104 (*(_t_local_104 *)(_fr + 0x4))
  
  puVar5 = (undefined4 *)(param_1 + 0x14);
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 1;
    puVar5 = puVar5 + 1;
  }
  iVar3 = 100;
  puVar5 = (undefined4 *)(param_1 + 0xd0);
  do {
    puVar5[-0x29] = 0;
    puVar5[6] = 0;
    iVar3 = iVar3 + -1;
    puVar6 = puVar5;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    puVar5 = puVar5 + 0x30;
  } while (iVar3 != 0);
  DAT_00584aa0 = 0;
  DAT_00584aa4 = 1;
  DAT_00584ae4 = 0;
  GetModuleFileNameA((HMODULE)0x0,local_104,0x104);
  piVar1 = (int *)FUN_00539610(local_104,&DAT_005572ec);
  if (piVar1 != (int *)0x0) {
    uVar2 = FUN_00548ec0((int)piVar1);
    arg1 = FUN_00548e10(uVar2);
    arg1_00 = (char *)Ordinal_401(arg1,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    FUN_005397f0(arg1_00,1,arg1,piVar1);
    uVar2 = 0;
    DAT_00584424 = 0;
    if (arg1 != 0) {
      do {
        DAT_00584424 = DAT_00584424 + (uint)(byte)arg1_00[uVar2];
        uVar2 = uVar2 + 1;
      } while (uVar2 < arg1);
    }
    if (arg1_00 != (char *)0x0) {
      Ordinal_403(arg1_00,s_C__lomse_source_storm_h_00555130,0x3f6,0);
    }
    FUN_005394d0(piVar1);
  }
  return;
#undef local_104
}
