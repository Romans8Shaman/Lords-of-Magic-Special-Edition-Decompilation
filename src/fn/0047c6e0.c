/* Rebuilt from lomse.exe FUN_0047c6e0 @ 0x0047c6e0 (255 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00420890 ((undefined4 (__thiscall *)(void *, int))0x00420890)
#define FUN_0047be80 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0047be80)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)

#define LOM_SELF_0047c6e0 1
undefined4 __thiscall rb_0047c6e0(void *this,int *param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uchar _fr[0x100] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_f8[59];
  typedef uint _t_local_c;
#define local_f8 (*(_t_local_f8 *)(_fr + 0x0))
#define local_c (*(_t_local_c *)(_fr + 0xec))
  
  if (param_1 == (int *)0x0) {
    local_c = 0x100;
    FUN_0047be80((void *)((int)this + 0x228bc),local_f8);
    return 1;
  }
  piVar3 = param_1;
  piVar4 = local_f8;
  for (iVar2 = 0x3b; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  local_c = param_2;
  if ((param_2 & 1) == 0) {
    puVar1 = FUN_00485080(this,local_f8[0],0x2f);
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    if (puVar1[7] == param_1[5]) {
      iVar2 = FUN_00420890(puVar1,param_1[5]);
      if (iVar2 == 0) {
        puVar1[0xc] = puVar1[0xc] & 0xfffffffd | 0x80;
        return 0;
      }
    }
    puVar1[0xc] = puVar1[0xc] | 2;
  }
  iVar2 = FUN_0047be80((void *)((int)this + 0x228bc),local_f8);
  if (iVar2 == 0) {
    puVar1 = FUN_00485080(this,local_f8[0],0x2f);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[0xc] = puVar1[0xc] & 0xfffffffd | 0x80;
    }
  }
  return 1;
#undef local_f8
#undef local_c
}
