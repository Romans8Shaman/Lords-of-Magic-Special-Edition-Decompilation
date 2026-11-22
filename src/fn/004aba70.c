/* Rebuilt from lomse.exe FUN_004aba70 @ 0x004aba70 (824 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aef04 (*(undefined4 *)0x005aef04)
#define DAT_005aef10 (*(int *)0x005aef10)
#define DAT_005af0bc (*(int *)0x005af0bc)
#define FUN_004a51c0 ((int (__thiscall *)(void *, int, int))0x004a51c0)
#define FUN_004aba20 ((undefined4 (__thiscall *)(void *, int, int))0x004aba20)
#define FUN_004c6660 ((undefined4 (__fastcall *)(int *))0x004c6660)

#define LOM_SELF_004aba70 1
int __thiscall rb_004aba70(void *this,int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_1c;
  typedef undefined4 _t_local_18;
  typedef int _t_local_14;
  typedef int _t_local_10;
  typedef int _t_local_8;
#define local_1c (*(_t_local_1c *)(_fr + 0x4))
#define local_18 (*(_t_local_18 *)(_fr + 0x8))
#define local_14 (*(_t_local_14 *)(_fr + 0xc))
#define local_10 (*(_t_local_10 *)(_fr + 0x10))
#define local_8 (*(_t_local_8 *)(_fr + 0x18))
  
  local_14 = FUN_004aba20(this,param_1,param_2);
  local_8 = *(int *)((int)this + 0x6c);
  local_1c = local_14 % local_8;
  iVar2 = 0;
  local_10 = 1;
  local_18 = 0;
  local_14 = local_14 / local_8;
  local_8 = *(int *)((int)this + 0x70) * local_8;
  if (local_8 < 1) {
    return -1;
  }
  do {
    iVar1 = FUN_004a51c0(this,local_1c,local_14);
    if ((param_3 & 0x100000) == 0) {
      if (((param_3 & 0x40000) == 0) || ((param_3 & 0x80000) == 0)) {
        if ((param_3 & 0x40000) == 0) {
          if ((param_3 & 0x80000) == 0) {
            bVar3 = false;
          }
          else {
            if (DAT_005af0bc == 0) {
              FUN_004c6660(&DAT_005aef04);
            }
            if ((((param_1 < 0) || (iVar1 < 0)) || (DAT_005aef10 <= param_1)) ||
               (DAT_005aef10 <= iVar1)) goto LAB_004abbc4;
            bVar3 = *(short *)(DAT_005aef04 + 4 + param_1 * 6) ==
                    *(short *)(DAT_005aef04 + 4 + iVar1 * 6);
          }
        }
        else {
          if (DAT_005af0bc == 0) {
            FUN_004c6660(&DAT_005aef04);
          }
          if (((param_1 < 0) || (iVar1 < 0)) ||
             ((DAT_005aef10 <= param_1 || (DAT_005aef10 <= iVar1)))) {
LAB_004abbc4:
            bVar3 = false;
          }
          else {
            bVar3 = *(short *)(DAT_005aef04 + 2 + param_1 * 6) ==
                    *(short *)(DAT_005aef04 + 2 + iVar1 * 6);
          }
        }
      }
      else {
        bVar3 = true;
      }
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      if ((param_4 & 0x100000) == 0) {
        if (((param_4 & 0x40000) == 0) || ((param_4 & 0x80000) == 0)) {
          if ((param_4 & 0x40000) == 0) {
            if ((param_4 & 0x80000) != 0) {
              if (DAT_005af0bc == 0) {
                FUN_004c6660(&DAT_005aef04);
              }
              if ((((-1 < param_2) && (-1 < iVar1)) && (param_2 < DAT_005aef10)) &&
                 (iVar1 < DAT_005aef10)) {
                bVar3 = *(short *)(DAT_005aef04 + 4 + param_2 * 6) ==
                        *(short *)(DAT_005aef04 + 4 + iVar1 * 6);
                goto LAB_004abcbc;
              }
            }
          }
          else {
            if (DAT_005af0bc == 0) {
              FUN_004c6660(&DAT_005aef04);
            }
            if (((-1 < param_2) && (-1 < iVar1)) &&
               ((param_2 < DAT_005aef10 && (iVar1 < DAT_005aef10)))) {
              bVar3 = *(short *)(DAT_005aef04 + 2 + param_2 * 6) ==
                      *(short *)(DAT_005aef04 + 2 + iVar1 * 6);
              goto LAB_004abcbc;
            }
          }
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
      else {
        bVar3 = true;
      }
LAB_004abcbc:
      if ((bVar3) && (*(int *)(*(int *)((int)this + 100) + iVar1 * 8) == 0)) {
        return iVar1;
      }
    }
    switch(local_18) {
    case 0:
      local_1c = local_1c + 1;
      local_18 = 1;
      iVar2 = local_10;
      local_10 = local_10 + 2;
      break;
    case 1:
      local_14 = local_14 + 1;
      iVar2 = iVar2 + -1;
      if (iVar2 == 0) {
        local_18 = 2;
        iVar2 = local_10 + -1;
      }
      break;
    case 2:
      local_1c = local_1c + -1;
      iVar2 = iVar2 + -1;
      if (iVar2 == 0) {
        local_18 = 3;
        iVar2 = local_10 + -1;
      }
      break;
    case 3:
      local_14 = local_14 + -1;
      iVar2 = iVar2 + -1;
      if (iVar2 == 0) {
        local_18 = 4;
        iVar2 = local_10 + -1;
      }
      break;
    case 4:
      local_1c = local_1c + 1;
      iVar2 = iVar2 + -1;
      if (iVar2 == 0) {
        local_18 = 0;
      }
    }
    local_8 = local_8 + -1;
    if (local_8 < 1) {
      return -1;
    }
  } while( true );
#undef local_1c
#undef local_18
#undef local_14
#undef local_10
#undef local_8
}
