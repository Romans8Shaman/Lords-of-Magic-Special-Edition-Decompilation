/* Rebuilt from lomse.exe FUN_00427a40 @ 0x00427a40 (117 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004277e0 ((int (__thiscall *)(void *, int))0x004277e0)
#define FUN_005397f0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005397f0)
#define FUN_0053a140 ((int (__cdecl *)(int *, int, DWORD))0x0053a140)
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_Out_of_ArmyPath_space_00555d54 (*(char (*)[])0x00555d54)

#define LOM_SELF_00427a40 1
undefined4 __thiscall rb_00427a40(void *this, int *param_1, int *volatile param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_2;
  FUN_005397f0((char *)&param_2,4,1,param_2);
  if (0 < (int)param_2) {
    iVar2 = FUN_004277e0(this,(int)param_2);
    *param_1 = iVar2;
    if (iVar2 < 0) {
      FUN_0053a140(piVar1,(int)param_2,1);
      OutputDebugStringA(s_Out_of_ArmyPath_space_00555d54);
      return 0;
    }
    FUN_005397f0((char *)(*(int *)this + iVar2),1,(uint)param_2,piVar1);
  }
  return 1;
}
