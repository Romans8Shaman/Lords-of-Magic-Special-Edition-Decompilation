/* Rebuilt from lomse.exe FUN_00420190 @ 0x00420190 (380 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005aa78c (*(undefined4 *)0x005aa78c)
#define DAT_005aa7d4 (*(int *)0x005aa7d4)
#define DAT_005aad68 (*(undefined4 *)0x005aad68)
#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define DAT_005cd2f4 (*(int *)0x005cd2f4)
#define FUN_004010d0 ((undefined4 (__thiscall *)(void *, int))0x004010d0)
#define FUN_004176d0 ((undefined4 (__thiscall *)(void *, int))0x004176d0)
#define FUN_00428680 ((undefined4 (__thiscall *)(void *, undefined4, undefined4))0x00428680)
#define FUN_0047c9e0 ((uint (__thiscall *)(void *, int))0x0047c9e0)
#define FUN_004e7400 ((undefined4 (__thiscall *)(void *, int, int *, int *, int))0x004e7400)

#define LOM_SELF_00420190 1
void __fastcall rb_00420190(void *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *this;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef char _t_local_8[4];
  typedef int _t_local_4;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  iVar3 = 0;
  *(undefined4 *)((int)param_1 + 0x5cc) = 0;
  *(uint *)((int)param_1 + 0x30) = *(uint *)((int)param_1 + 0x30) & 0x99ffffd7;
  *(undefined1 *)((int)param_1 + 0x5d0) = 0;
  *(undefined4 *)((int)param_1 + 0x5d4) = 0;
  *(undefined1 *)((int)param_1 + 0x5d8) = 0xff;
  FUN_004176d0(param_1,0);
  *(undefined4 *)((int)param_1 + 0x68) = 1;
  *(undefined4 *)((int)param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x74) = 0xffffffff;
  *(undefined1 *)((int)param_1 + 0x78) = 0;
  *(undefined1 *)((int)param_1 + 0xc0) = 0;
  FUN_004010d0((undefined4 *)((int)param_1 + 0x68),(int)param_1);
  if (0 < *(int *)((int)param_1 + 0x4c)) {
    this = (int *)((int)param_1 + 0xc4);
    do {
      FUN_00428680(this,*(undefined4 *)((int)param_1 + 0x28),iVar3);
      iVar1 = *this;
      if (((iVar1 < 0) || (DAT_005cd2f0 <= iVar1)) || (DAT_005cd2f4 == 0)) {
        iVar1 = 0;
      }
      else {
        iVar1 = DAT_005cd2f4 + iVar1 * 1000;
      }
      if ((*(uint *)(iVar1 + 0x14) & 0x400) == 0) {
        *(uint *)((int)param_1 + 0xe8) = *(uint *)((int)param_1 + 0xe8) & 0xffdfffff;
      }
      if ((*(uint *)(iVar1 + 0x14) & 0x400000) == 0) {
        *(uint *)((int)param_1 + 0xe8) = *(uint *)((int)param_1 + 0xe8) & 0xffbfffff;
      }
      if ((*(uint *)(iVar1 + 0x14) & 0x800000) == 0) {
        *(uint *)((int)param_1 + 0xe8) = *(uint *)((int)param_1 + 0xe8) & 0xff7fffff;
      }
      iVar3 = iVar3 + 1;
      this = this + 0x13;
    } while (iVar3 < *(int *)((int)param_1 + 0x4c));
  }
  uVar2 = FUN_0047c9e0(&DAT_005aa12c,*(int *)((int)param_1 + 0x48));
  if ((uVar2 == 0) &&
     (*(int *)((int)param_1 + 0x48) == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400))) {
    if (*(int *)((int)param_1 + 0x48) == DAT_005aa7d4) {
      iVar3 = FUN_004e7400(&DAT_005aa78c,(int)*(char *)((int)param_1 + 0x5ac),(int *)local_8,
                           &local_4,1);
      if (iVar3 != 0) {
        *(char *)((int)param_1 + 0x5d8) = local_8[0] + '\x01';
        return;
      }
    }
    else {
      iVar3 = FUN_004e7400(&DAT_005aad68,(int)*(char *)((int)param_1 + 0x5ac),(int *)local_8,
                           &local_4,1);
      if (iVar3 != 0) {
        *(char *)((int)param_1 + 0x5d8) = local_8[0] + '\x01';
      }
    }
  }
  return;
#undef local_8
#undef local_4
}
