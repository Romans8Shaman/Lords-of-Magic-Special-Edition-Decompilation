/* Rebuilt from lomse.exe FUN_00435010 @ 0x00435010 (691 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_00432a90 ((int (__thiscall *)(void *, int, int, int))0x00432a90)
#define FUN_00434680 ((undefined4 (__thiscall *)(void *, undefined4, undefined4))0x00434680)
#define FUN_004348c0 ((int (__thiscall *)(void *, undefined4, int))0x004348c0)

#define LOM_SELF_00435010 1
undefined4 __thiscall rb_00435010(void *this,int param_1,int param_2)

{
  char cVar1;
  short sVar2;
  short *this_00;
  int iVar3;
  int iVar4;
  int iVar5;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined * _t_local_20;
  typedef int _t_local_1c;
  typedef int _t_local_18;
  typedef int _t_local_14;
  typedef int _t_local_10;
  typedef int _t_local_c;
  typedef int _t_local_8;
#define local_20 (*(_t_local_20 *)(_fr + 0x0))
#define local_1c (*(_t_local_1c *)(_fr + 0x4))
#define local_18 (*(_t_local_18 *)(_fr + 0x8))
#define local_14 (*(_t_local_14 *)(_fr + 0xc))
#define local_10 (*(_t_local_10 *)(_fr + 0x10))
#define local_c (*(_t_local_c *)(_fr + 0x14))
#define local_8 (*(_t_local_8 *)(_fr + 0x18))
  
  iVar3 = *(int *)((int)this + 8);
  if (param_1 == iVar3) {
    iVar3 = *(int *)((int)this + 0xc);
    if ((-1 < iVar3) && (iVar3 < 0x10)) {
      local_20 = &DAT_005af194 + iVar3 * 0x1d84;
      goto LAB_00435090;
    }
  }
  else {
    if (param_1 != *(int *)((int)this + 0xc)) {
      return 0;
    }
    if ((-1 < iVar3) && (iVar3 < 0x10)) {
      local_20 = &DAT_005af194 + iVar3 * 0x1d84;
      goto LAB_00435090;
    }
  }
  local_20 = (undefined *)0x0;
LAB_00435090:
  local_8 = FUN_004348c0(this,param_1,0);
  local_c = local_8 << 8;
  local_18 = FUN_004348c0(this,param_1,1);
  local_18 = local_18 << 8;
  if (local_18 < 1) {
    return 0;
  }
  local_8 = local_8 << 0x10;
  if (param_2 <= local_8 / local_18) {
    return 1;
  }
  local_10 = 0;
  do {
    local_14 = 0;
    do {
      this_00 = (short *)FUN_00432a90(this,param_1,local_14,local_10);
      cVar1 = (char)this_00[2];
      if (cVar1 == '\x01') {
        iVar3 = (int)*this_00;
        local_1c = *(int *)(local_20 + 0xcfc);
      }
      else if (cVar1 == '\x02') {
        iVar3 = (int)*this_00;
        local_1c = *(int *)(local_20 + 0xd04);
      }
      else if (cVar1 == '\x03') {
        iVar3 = (int)*this_00;
        local_1c = *(int *)(local_20 + 0xd08);
      }
      else {
        iVar3 = 0;
      }
      if (iVar3 != 0) {
        if (local_14 == 1) {
          sVar2 = *this_00;
          while (2 < sVar2) {
            iVar3 = (int)sVar2 / 3;
            if (iVar3 < 2) {
              iVar3 = 1;
            }
            iVar4 = FUN_00434680(this_00,this,param_1);
            *this_00 = *this_00 - (short)iVar3;
            iVar3 = FUN_00434680(this_00,this,param_1);
            local_18 = local_18 + iVar3 * 0x100 + iVar4 * -0x100;
            if ((local_18 < 1) || (param_2 <= local_8 / local_18)) {
              return 1;
            }
            sVar2 = *this_00;
          }
        }
        else {
          iVar4 = local_1c >> 8;
          if (iVar3 < iVar4) {
            sVar2 = *this_00;
            while (iVar3 = (int)sVar2, iVar3 < iVar4) {
              iVar5 = iVar3 / 3;
              if (iVar5 < 2) {
                iVar5 = 1;
              }
              if (iVar4 < iVar5 + iVar3) {
                iVar5 = local_1c + iVar3 * -0x100 >> 8;
              }
              iVar3 = FUN_00434680(this_00,this,param_1);
              *this_00 = *this_00 + (short)iVar5;
              iVar5 = FUN_00434680(this_00,this,param_1);
              local_c = local_c + iVar5 * 0x100 + iVar3 * -0x100;
              local_8 = local_c * 0x100;
              if (param_2 <= local_8 / local_18) {
                return 1;
              }
              sVar2 = *this_00;
            }
          }
        }
      }
      local_14 = local_14 + 1;
    } while (local_14 < 2);
    local_10 = local_10 + 1;
    if (6 < local_10) {
      return 0;
    }
  } while( true );
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_10
#undef local_c
#undef local_8
}
