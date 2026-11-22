/* Rebuilt from lomse.exe FUN_00482830 @ 0x00482830 (156 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005cd358 (*(undefined *)0x005cd358)
#define DAT_005d1e84 (*(int *)0x005d1e84)
#define FUN_00482af0 ((undefined4 (__thiscall *)(void *, LPCSTR))0x00482af0)
#define FUN_00489b70 ((undefined4 (__thiscall *)(void *, int *))0x00489b70)
#define FUN_0048cc40 ((int (__fastcall *)(int))0x0048cc40)
#define FUN_004b7410 ((undefined4 (__thiscall *)(void *, char, int, short))0x004b7410)
#define FUN_004b9570 ((undefined4 (__stdcall *)(undefined1, short))0x004b9570)
#define FUN_005047d0 ((undefined4 (__stdcall *)(undefined4))0x005047d0)
#define s_DoXfer_failed_0055b274 (*(char (*)[])0x0055b274)

#define LOM_SELF_00482830 1
undefined4 __thiscall rb_00482830(void *this,int *param_1)

{
  LPCSTR pCVar1;
  int iVar2;
  undefined4 uVar3;
  uchar _fr[0x110] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_108;
  typedef undefined1 _t_local_104;
  typedef int _t_local_f3;
  typedef int _t_local_ef;
  typedef undefined4 _t_local_eb;
#define local_108 (*(_t_local_108 *)(_fr + 0x0))
#define local_104 (*(_t_local_104 *)(_fr + 0x4))
#define local_f3 (*(_t_local_f3 *)(_fr + 0x15))
#define local_ef (*(_t_local_ef *)(_fr + 0x19))
#define local_eb (*(_t_local_eb *)(_fr + 0x1d))
  
  pCVar1 = (LPCSTR)FUN_004b9570(0x47,-1);
  FUN_0048cc40((int)&local_108);
  FUN_00482af0(this,pCVar1);
  iVar2 = FUN_004b7410(&DAT_005cd358,'G',*param_1,-1);
  if (iVar2 != 0) {
    local_f3 = *param_1;
    local_eb = *(undefined4 *)((int)this + 0x228a8);
    local_ef = local_f3 + -1;
    local_104 = 0x21;
    uVar3 = FUN_00489b70(&DAT_00584ae8,&local_108);
    return uVar3;
  }
  if (DAT_005d1e84 != 0) {
    FUN_005047d0(s_DoXfer_failed_0055b274);
  }
  return 0;
#undef local_108
#undef local_104
#undef local_f3
#undef local_ef
#undef local_eb
}
