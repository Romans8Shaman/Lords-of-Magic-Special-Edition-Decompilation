/* Rebuilt from lomse.exe FUN_0048c6a0 @ 0x0048c6a0 (279 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055b574 (*(uint *)0x0055b574)
#define DAT_005cd2c4 (*(undefined *)0x005cd2c4)
#define DAT_005d1e84 (*(void * *)0x005d1e84)
#define FUN_0048a400 ((undefined4 (__fastcall *)(int))0x0048a400)
#define FUN_0048c2b0 ((int (__fastcall *)(int))0x0048c2b0)
#define FUN_0048cc40 ((int (__fastcall *)(int))0x0048cc40)
#define FUN_004b7890 ((int (__thiscall *)(void *, int))0x004b7890)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)
#define FUN_004c4c60 ((undefined4 (__thiscall *)(void *, undefined4 *))0x004c4c60)
#define FUN_004c4d30 ((undefined4 (__thiscall *)(void *, undefined4))0x004c4d30)
#define FUN_005262b0 ((undefined4 (__fastcall *)(undefined4 *))0x005262b0)

#define LOM_SELF_0048c6a0 1
void __stdcall rb_0048c6a0(void)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  void *this;
  int iVar5;
  uint uVar6;
  uchar _fr[0x110] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_108;
  typedef uint _t_local_101;
#define local_108 (*(_t_local_108 *)(_fr + 0x0))
#define local_101 (*(_t_local_101 *)(_fr + 0x7))
  
  FUN_0048cc40((int)&local_108);
  uVar1 = FUN_005262b0((undefined4 *)&DAT_005cd2c4);
  DAT_0055b574 = 0xffffffff;
  uVar6 = 0;
  iVar5 = 1;
  this = DAT_005d1e84;
  while( true ) {
    if ((this == (void *)0x0) || (iVar2 = *(int *)((int)this + 0x100), iVar2 < 1)) {
      iVar2 = 1;
    }
    if (iVar2 < iVar5) break;
    if (this == (void *)0x0) {
      iVar2 = 1;
    }
    else {
      iVar2 = FUN_004b7dd0((int)this);
      this = DAT_005d1e84;
    }
    if (iVar5 != iVar2) {
      if (this == (void *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_004b7890(this,iVar5);
        this = DAT_005d1e84;
      }
      if ((iVar2 != 0) && (*(int *)(iVar2 + 4) != 0)) {
        uVar6 = uVar6 | 1 << ((byte)iVar5 & 0x1f);
      }
    }
    iVar5 = iVar5 + 1;
  }
  iVar5 = FUN_004c4c60(&DAT_005cd2c4,&local_108);
  while (iVar5 != 0) {
    puVar3 = (uint *)FUN_0048c2b0((int)&local_108);
    if ((puVar3 != (uint *)0x0) && (uVar4 = FUN_0048a400(0x584ae8), (local_101 & 0xff) == uVar4)) {
      puVar3[1] = puVar3[1] & uVar6;
      uVar4 = *puVar3;
      if ((uVar4 != 0xfffffffe) && (uVar4 <= DAT_0055b574)) {
        DAT_0055b574 = uVar4;
      }
    }
    iVar5 = FUN_004c4c60(&DAT_005cd2c4,&local_108);
  }
  FUN_004c4d30(&DAT_005cd2c4,uVar1);
  return;
#undef local_108
#undef local_101
}
