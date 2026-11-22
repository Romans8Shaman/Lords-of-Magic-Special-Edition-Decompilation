/* Rebuilt from lomse.exe op_repoman @ 0x004c05a0 (466 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match.
 * HAND FIX: dropped Ghidra alloca/return-address leftover in iStack_c (0x4c05af).
 * FUN_00522350 writes five dwords at auStack_14; vanilla uses [0], [2], [3] for the
 * three resource deltas (Ghidra used the leftover and the vm pointer instead). */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_0041e170 ((undefined4 (__thiscall *)(void *, uint))0x0041e170)
#define FUN_004bdce0 ((undefined4 (__cdecl *)(void *, undefined4 *))0x004bdce0)
#define FUN_004bde30 ((undefined4 (__fastcall *)(int))0x004bde30)
#define FUN_004c1cf0 ((undefined4 (__fastcall *)(int))0x004c1cf0)
#define FUN_004fbed0 ((undefined4 * (__thiscall *)(void *, int))0x004fbed0)
#define FUN_00522350 ((undefined4 (__stdcall *)(uint, undefined4, uint *))0x00522350)
#define FUN_00525f10 ((uint (__fastcall *)(int))0x00525f10)

#define LOM_SELF_004c05a0 1
void __cdecl rb_004c05a0(void *vm)

{
  bool bVar1;
  void *pvVar2;
  int iVar3;
  int *this;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uchar _fr[0x30] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_24;
  typedef int * _t_piStack_1c;
  typedef uint _t_auStack_14[5];
#define uStack_24 (*(_t_uStack_24 *)(_fr + 0x4))
#define piStack_1c (*(_t_piStack_1c *)(_fr + 0xc))
#define auStack_14 (*(_t_auStack_14 *)(_fr + 0x14))
  iVar3 = FUN_004bdce0(vm,&vm);
  pvVar2 = vm;
  if (iVar3 == 0) {
    return;
  }
  bVar1 = false;
  FUN_004bde30((int)vm);
  if (((-1 < *(int *)((int)pvVar2 + 0xd10)) && (-1 < *(int *)((int)pvVar2 + 0xd18))) &&
     (-1 < *(int *)((int)pvVar2 + 0xd1c))) {
    bVar1 = true;
  }
  if (!bVar1) {
    this = FUN_004fbed0(&DAT_005ae974,0);
    bVar1 = false;
    do {
      if (this == (int *)0x0) {
        return;
      }
      iVar6 = 0;
      piVar4 = FUN_004fbed0(&DAT_005ae974,(int)this);
      iVar3 = ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*this + 0x3c)))(this);
      if ((iVar3 == *(int *)((int)pvVar2 + 0x15a8)) && (iVar3 = FUN_004c1cf0((int)this), iVar3 == 0)
         ) {
        uStack_24 = 0;
        if (0 < this[0x13]) {
          piStack_1c = this + 0x31;
          do {
            uVar5 = FUN_00525f10((int)piStack_1c);
            if (uVar5 == 0) {
              iVar3 = FUN_00522350(this[10],iVar6,auStack_14);
              if ((iVar3 != 0) &&
                 (((((int)auStack_14[0] < 0 && (*(int *)((int)pvVar2 + 0xd10) < 0)) ||
                   (((int)auStack_14[2] < 0 && (*(int *)((int)pvVar2 + 0xd18) < 0)))) ||
                  (((int)auStack_14[3] < 0 && (*(int *)((int)pvVar2 + 0xd1c) < 0)))))) {
                uStack_24 = uStack_24 | 1 << ((byte)iVar6 & 0x1f);
                *(uint *)((int)pvVar2 + 0xd10) = *(int *)((int)pvVar2 + 0xd10) + auStack_14[0];
                *(int *)((int)pvVar2 + 0xd18) = *(int *)((int)pvVar2 + 0xd18) + (int)auStack_14[2];
                iVar3 = *(int *)((int)pvVar2 + 0xd1c) + (int)auStack_14[3];
                *(int *)((int)pvVar2 + 0xd1c) = iVar3;
                if ((-1 < *(int *)((int)pvVar2 + 0xd10)) &&
                   ((-1 < *(int *)((int)pvVar2 + 0xd18) && (-1 < iVar3)))) {
                  bVar1 = true;
                }
              }
              if (bVar1) break;
            }
            iVar6 = iVar6 + 1;
            piStack_1c = piStack_1c + 0x13;
          } while (iVar6 < this[0x13]);
        }
        if (uStack_24 != 0) {
          FUN_0041e170(this,uStack_24);
        }
      }
      this = piVar4;
    } while (!bVar1);
  }
  return;
#undef uStack_24
#undef piStack_1c
#undef auStack_14
}
