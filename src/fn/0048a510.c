/* Rebuilt from lomse.exe FUN_0048a510 @ 0x0048a510 (127 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583560 (*(undefined4 *)0x00583560)
#define DAT_0058441c (*(uint *)0x0058441c)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005d1e84 (*(void * *)0x005d1e84)
#define FUN_00489b70 ((undefined4 (__thiscall *)(void *, int *))0x00489b70)
#define FUN_0048cc70 ((int (__thiscall *)(void *, undefined1))0x0048cc70)
#define FUN_004b78c0 ((int (__fastcall *)(void *))0x004b78c0)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)
#define timeGetTime (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d33c) /* WINMM.DLL!timeGetTime via IAT */

#define LOM_SELF_0048a510 1
void __stdcall rb_0048a510(void)

{
  int iVar1;
  DWORD DVar2;
  uchar _fr[0x110] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_108[5];
  typedef undefined4 _t_local_f3;
  typedef undefined4 _t_local_ef;
#define local_108 (*(_t_local_108 *)(_fr + 0x0))
#define local_f3 (*(_t_local_f3 *)(_fr + 0x15))
#define local_ef (*(_t_local_ef *)(_fr + 0x19))
  
  if (DAT_005d1e84 != (void *)0x0) {
    iVar1 = FUN_004b78c0(DAT_005d1e84);
    if (1 < iVar1) {
      DVar2 = timeGetTime();
      if (DAT_0058441c < DVar2 - 0xfa) {
        FUN_0048cc70(local_108,0x50);
        if (DAT_005d1e84 == (void *)0x0) {
          local_f3 = 1;
        }
        else {
          local_f3 = FUN_004b7dd0((int)DAT_005d1e84);
        }
        local_ef = DAT_00583560;
        FUN_00489b70(&DAT_00584ae8,local_108);
        DAT_0058441c = DVar2;
      }
    }
  }
  return;
#undef local_108
#undef local_f3
#undef local_ef
}
