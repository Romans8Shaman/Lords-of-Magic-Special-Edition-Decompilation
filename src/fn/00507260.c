/* Rebuilt from lomse.exe FUN_00507260 @ 0x00507260 (136 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FUN_004192c0 ((uint (__fastcall *)(int))0x004192c0)
#define FUN_00420580 ((undefined4 (__fastcall *)(int))0x00420580)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_00489b70 ((undefined4 (__thiscall *)(void *, int *))0x00489b70)
#define FUN_0048cc40 ((int (__fastcall *)(int))0x0048cc40)
#define FUN_004c2330 ((int (__fastcall *)(int))0x004c2330)
#define FUN_00507200 ((undefined4 (__fastcall *)(int))0x00507200)

#define LOM_SELF_00507260 1
undefined4 __thiscall rb_00507260(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uchar _fr[0x110] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_108;
  typedef undefined1 _t_local_104;
  typedef int _t_local_f3;
#define local_108 (*(_t_local_108 *)(_fr + 0x0))
#define local_104 (*(_t_local_104 *)(_fr + 0x4))
#define local_f3 (*(_t_local_f3 *)(_fr + 0x15))
  
  puVar1 = FUN_00485080(this,param_1,0x2f);
  if ((puVar1 == (undefined4 *)0x0) || (iVar2 = FUN_004c2330((int)puVar1), iVar2 < 1)) {
    return 0;
  }
  iVar2 = FUN_00420580((int)puVar1);
  if (iVar2 == 0) {
    uVar3 = FUN_004192c0((int)puVar1);
    iVar2 = FUN_00507200((int)puVar1);
    if ((int)uVar3 < iVar2 / 2) {
      return 0;
    }
  }
  FUN_0048cc40((int)&local_108);
  local_104 = 0x12;
  local_f3 = param_1;
  uVar4 = FUN_00489b70(&DAT_00584ae8,&local_108);
  return uVar4;
#undef local_108
#undef local_104
#undef local_f3
}
