/* Rebuilt from lomse.exe FUN_0048e170 @ 0x0048e170 (227 bytes, __thiscall).
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
#define FUN_00497b00 ((undefined4 (__thiscall *)(void *, int, int))0x00497b00)
#define FUN_00500650 ((undefined4 (__thiscall *)(void *, int, int, int, int))0x00500650)
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define _DAT_005a79f0 (*(undefined4 *)0x005a79f0)
#define _DAT_005a79f8 (*(undefined4 *)0x005a79f8)
#define _DAT_005a79fc (*(undefined4 *)0x005a79fc)
#define s_Can_t_LockBackBuffer__0055c340 (*(char (*)[])0x0055c340)

#define LOM_SELF_0048e170 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall rb_0048e170(void *this,int param_1,int param_2)

{
  void *this_00;
  int iVar1;
  int *piVar2;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_10[4];
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
  
  this_00 = (void *)FUN_00493360(&DAT_005a7b50,*(int *)((int)this + 0xc));
  if (this_00 != (void *)0x0) {
    iVar1 = FUN_00497b00(this_00,param_1,param_2);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_004754c0(0x584ae8);
      if (piVar2 == (int *)0x0) {
        OutputDebugStringA(s_Can_t_LockBackBuffer__0055c340);
        return 1;
      }
      _DAT_005a79f0 = 0;
      _DAT_005a79f8 = 0;
      _DAT_005a79fc = 0;
      FUN_0048ee50(this,piVar2,1);
      FUN_004755a0(&DAT_00584ae8,piVar2);
      piVar2 = (int *)FUN_0048eb70(this,local_10);
      FUN_00500650(&DAT_00584ae8,*piVar2,piVar2[1],piVar2[2],piVar2[3]);
      FUN_00476c20(&DAT_00584ae8);
      return 1;
    }
  }
  return 0;
#undef local_10
}
