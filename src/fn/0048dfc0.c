/* Rebuilt from lomse.exe FUN_0048dfc0 @ 0x0048dfc0 (214 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_004754c0 ((undefined * (__fastcall *)(int))0x004754c0)
#define FUN_004755a0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x004755a0)
#define FUN_00476c20 ((undefined4 (__fastcall *)(void *))0x00476c20)
#define FUN_0048eb70 ((undefined4 (__thiscall *)(void *, int *))0x0048eb70)
#define FUN_0048ee50 ((undefined4 (__thiscall *)(void *, int *, int))0x0048ee50)
#define FUN_00493360 ((int (__thiscall *)(void *, int))0x00493360)
#define FUN_00497ac0 ((undefined4 (__thiscall *)(void *, int))0x00497ac0)
#define FUN_00500650 ((undefined4 (__thiscall *)(void *, int, int, int, int))0x00500650)
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define _DAT_005a79f0 (*(undefined4 *)0x005a79f0)
#define _DAT_005a79f8 (*(undefined4 *)0x005a79f8)
#define _DAT_005a79fc (*(undefined4 *)0x005a79fc)
#define s_Can_t_LockBackBuffer__0055c340 (*(char (*)[])0x0055c340)

#define LOM_SELF_0048dfc0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall rb_0048dfc0(void *this,int param_1)

{
  void *this_00;
  int *piVar1;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_10[4];
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
  
  this_00 = (void *)FUN_00493360(&DAT_005a7b50,*(int *)((int)this + 0xc));
  if ((this_00 != (void *)0x0) && (*(int *)((int)this_00 + 0x10) != 0)) {
    piVar1 = (int *)FUN_004754c0(0x584ae8);
    if (piVar1 != (int *)0x0) {
      _DAT_005a79f0 = 0;
      _DAT_005a79f8 = 0;
      _DAT_005a79fc = 0;
      FUN_00497ac0(this_00,param_1);
      FUN_0048ee50(this,piVar1,1);
      FUN_004755a0(&DAT_00584ae8,piVar1);
      piVar1 = (int *)FUN_0048eb70(this,local_10);
      FUN_00500650(&DAT_00584ae8,*piVar1,piVar1[1],piVar1[2],piVar1[3]);
      FUN_00476c20(&DAT_00584ae8);
      return;
    }
    OutputDebugStringA(s_Can_t_LockBackBuffer__0055c340);
  }
  return;
#undef local_10
}
