/* Rebuilt from lomse.exe FUN_004fc2a0 @ 0x004fc2a0 (343 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00573318 (*(undefined1 *)0x00573318)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ac4d8 (*(undefined *)0x005ac4d8)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_00420630 ((undefined4 (__fastcall *)(int))0x00420630)
#define FUN_004245a0 ((undefined4 (__fastcall *)(int *))0x004245a0)
#define FUN_0045d090 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0045d090)
#define FUN_004a6dd0 ((uint (__thiscall *)(void *, int *, int, int))0x004a6dd0)
#define FUN_004a6f60 ((int (__thiscall *)(void *, int, uint))0x004a6f60)
#define FUN_004edc30 ((undefined4 (__thiscall *)(void *, int, uint))0x004edc30)
#define FUN_004fbed0 ((undefined4 * (__thiscall *)(void *, int))0x004fbed0)
#define _DAT_005ac500 (*(undefined4 *)0x005ac500)

#define LOM_SELF_004fc2a0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall rb_004fc2a0(int param_1)

{
  int iVar1;
  int *this;
  int iVar2;
  int iVar3;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  this = FUN_004fbed0(&DAT_005ae974,0);
  do {
    if (this == (int *)0x0) {
      return;
    }
    if ((this[0xc] & 0x400U) != 0) {
      local_4 = -1;
      FUN_00420630((int)this);
      iVar3 = 0;
      this[0xc] = this[0xc] & 0xfffffbff;
      do {
        iVar1 = *(int *)(*(int *)((int)*(void **)(param_1 + 0x20) + 0x18) +
                        (((uint)(byte)(&DAT_00573318)[iVar3] + this[0x11] & 7) + this[7] * 8) * 4);
        iVar2 = FUN_004edc30(*(void **)(param_1 + 0x20),iVar1,this[0x15]);
        if (iVar2 != 0) break;
        if (local_4 != -1) {
          local_4 = FUN_004a6f60(*(void **)(param_1 + 0x20),iVar1,this[0x15]);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 8);
      if (iVar3 < 8) {
        if ((this[0xc] & 0x1c00000U) == 0) {
          FUN_004a6dd0(*(void **)(param_1 + 0x20),this,this[7],iVar1);
          ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*this + 0x2c)))(this);
        }
        else {
          FUN_004245a0(this);
          FUN_004a6dd0(*(void **)(param_1 + 0x20),this,this[7],iVar1);
          _DAT_005ac500 = this[10];
          FUN_0045d090(&DAT_005aa12c,(undefined4 *)&DAT_005ac4d8);
          ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*this + 0x2c)))(this);
        }
      }
      else if (local_4 != -1) {
        if ((this[0xc] & 0x1c00000U) == 0) {
          FUN_004a6dd0(*(void **)(param_1 + 0x20),this,this[7],local_4);
        }
        else {
          FUN_004245a0(this);
          FUN_004a6dd0(*(void **)(param_1 + 0x20),this,this[7],local_4);
          _DAT_005ac500 = this[10];
          FUN_0045d090(&DAT_005aa12c,(undefined4 *)&DAT_005ac4d8);
        }
        ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*this + 0x2c)))(this);
      }
    }
    this = FUN_004fbed0(&DAT_005ae974,(int)this);
  } while( true );
#undef local_4
}
