/* Rebuilt from lomse.exe FUN_004c0780 @ 0x004c0780 (316 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_004c1cf0 ((undefined4 (__fastcall *)(int))0x004c1cf0)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004fbed0 ((undefined4 * (__thiscall *)(void *, int))0x004fbed0)
#define FUN_00525f20 ((uint (__fastcall *)(int))0x00525f20)

#define LOM_SELF_004c0780 1
void __thiscall rb_004c0780(void *this,int *param_1,uint param_2,int *param_3)

{
  int iVar1;
  int *this_00;
  int *this_01;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  this_00 = param_1;
  this_01 = FUN_004fbed0(&DAT_005ae974,0);
  do {
    if (this_01 == (int *)0x0) {
      return;
    }
    iVar2 = ((undefined4 (__thiscall *)(__typeof__(this_01)))(**(code **)(*this_01 + 0x3c)))(this_01);
    if (((iVar2 == *(int *)((int)this + 0x15a8)) && (iVar2 = FUN_004c1cf0((int)this_01), iVar2 == 0)
        ) && (iVar2 = 0, 0 < this_01[0x13])) {
      param_1 = this_01 + 0x31;
      do {
        uVar3 = FUN_00525f20((int)param_1);
        if (uVar3 != 0) {
          iVar1 = this_01[10];
          if (this_00[0x15] == 0) {
            this_00[0x24] = 3;
            FUN_004d4550(this_00);
            this_00[0x24] = 0;
            this_00[0x29] = 0;
          }
          else {
            iVar5 = this_00[0x14];
            iVar4 = this_00[0x15] + -1;
            this_00[0x15] = iVar4;
            *(undefined4 *)(iVar5 + iVar4 * 8) = 1;
            *(int *)(iVar5 + 4 + iVar4 * 8) = iVar1;
          }
          if (this_00[0x15] == 0) {
            this_00[0x24] = 3;
            FUN_004d4550(this_00);
            this_00[0x24] = 0;
            this_00[0x29] = 0;
          }
          else {
            iVar1 = this_00[0x14];
            iVar5 = this_00[0x15] + -1;
            this_00[0x15] = iVar5;
            *(undefined4 *)(iVar1 + iVar5 * 8) = 1;
            *(int *)(iVar1 + 4 + iVar5 * 8) = iVar2;
          }
          FUN_004d05e0(this_00,param_2,param_3);
          iVar1 = this_00[0x1b];
          this_00[0x1b] = this_00[0x1c];
          if (iVar1 != 0) {
            return;
          }
        }
        iVar2 = iVar2 + 1;
        param_1 = param_1 + 0x13;
      } while (iVar2 < this_01[0x13]);
    }
    this_01 = FUN_004fbed0(&DAT_005ae974,(int)this_01);
  } while( true );
}
