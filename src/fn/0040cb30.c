/* Rebuilt from lomse.exe FUN_0040cb30 @ 0x0040cb30 (177 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0040c580 ((undefined4 (__fastcall *)(int))0x0040c580)
#define FUN_0040c5a0 ((undefined4 (__stdcall *)(void))0x0040c5a0)
#define FUN_0040c5b0 ((undefined4 (__thiscall *)(void *, void *))0x0040c5b0)
#define FUN_0040caf0 ((undefined4 (__thiscall *)(void *, int))0x0040caf0)

#define LOM_SELF_0040cb30 1
void __thiscall rb_0040cb30(void *this,void *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uchar _fr[0x50] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_48[15];
#define local_48 (*(_t_local_48 *)(_fr + 0x0))

  FUN_0040c580((int)local_48);
  *(undefined4 *)((int)this + 0xc) = 1;
  puVar1 = (undefined4 *)0x0;
  puVar2 = *(undefined4 **)this;
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) goto LAB_0040cbb4;
    if (puVar2[0xd] == param_2) break;
    puVar1 = puVar2;
    puVar2 = (undefined4 *)puVar2[0xe];
  }
  puVar4 = puVar2;
  puVar5 = local_48;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  if (puVar1 == (undefined4 *)0x0) {
    *(undefined4 *)this = puVar2[0xe];
  }
  else {
    puVar1[0xe] = puVar2[0xe];
  }
  FUN_0040caf0(this,(int)puVar2);
  FUN_0040c5b0(local_48,param_1);
LAB_0040cbb4:
  *(undefined4 *)((int)this + 0xc) = 0;
  FUN_0040c5a0();
  return;
#undef local_48
}
