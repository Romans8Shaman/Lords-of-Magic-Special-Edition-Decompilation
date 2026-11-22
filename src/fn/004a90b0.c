/* Rebuilt from lomse.exe FUN_004a90b0 @ 0x004a90b0 (288 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005876d0 (*(undefined4 *)0x005876d0)
#define FUN_004a9220 ((undefined4 (__thiscall *)(void *, int, int, int, int))0x004a9220)
#define FUN_004fbff0 ((undefined4 (__thiscall *)(void *, int))0x004fbff0)
#define FUN_00519b30 ((undefined4 (__thiscall *)(void *, int))0x00519b30)

#define LOM_SELF_004a90b0 1
void __thiscall rb_004a90b0(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(int *)((int)this + 0x54) != 0) {
    if (*(int *)((int)this + 4) == 0) {
      iVar3 = 0;
      if (0 < *(int *)((int)this + 0x58)) {
        do {
          if ((*(uint *)(*(int *)((int)this + 100) + 4 + iVar3 * 8) & 0x200) == 0) {
            *(undefined2 *)(*(int *)((int)this + 0x54) + 2 + iVar3 * 8) = 0;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)((int)this + 0x58));
      }
    }
    else {
      uVar2 = 1 << ((byte)param_1 & 0x1f) & 0xff;
      if (uVar2 == 0) {
        return;
      }
      iVar1 = 0;
      if (0 < *(int *)((int)this + 0x58)) {
        do {
          *(undefined2 *)(*(int *)((int)this + 0x54) + 2 + iVar1 * 8) =
               *(undefined2 *)((int)this + 0x48);
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)((int)this + 0x58));
      }
      if (0 < *(int *)((int)this + 0x68)) {
        do {
          if ((*(uint *)(*(int *)((int)this + 100) + 4 + iVar3 * 8) & uVar2) != 0) {
            FUN_004a9220(this,iVar3,0,*(int *)((int)this + 0x4c),param_1);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)((int)this + 0x68));
      }
    }
    if (*(int *)((int)this + 8) != 0) {
      iVar3 = 0;
      if (0 < *(int *)((int)this + 0x5c)) {
        iVar1 = (*(int *)((int)this + 0x60) + -1) * *(int *)((int)this + 0x5c) * 8;
        do {
          iVar3 = iVar3 + 1;
          iVar1 = iVar1 + 8;
          *(undefined2 *)(*(int *)((int)this + 0x54) + -6 + iVar3 * 8) = 0x80;
          *(undefined2 *)(*(int *)((int)this + 0x54) + -6 + iVar1) = 0x80;
        } while (iVar3 < *(int *)((int)this + 0x5c));
      }
      iVar3 = 0;
      iVar1 = 0;
      if (0 < *(int *)((int)this + 0x60)) {
        do {
          *(undefined2 *)(*(int *)((int)this + 0x54) + 2 + iVar3 * 8) = 0x80;
          *(undefined2 *)
           (*(int *)((int)this + 0x54) + -6 + (iVar3 + *(int *)((int)this + 0x5c)) * 8) = 0x80;
          iVar3 = iVar3 + *(int *)((int)this + 0x5c);
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)((int)this + 0x60));
      }
    }
    FUN_004fbff0((void *)((int)this + 0x1c),-1);
    FUN_00519b30(&DAT_005876d0,1);
  }
  return;
}
