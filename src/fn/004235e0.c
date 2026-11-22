/* Rebuilt from lomse.exe FUN_004235e0 @ 0x004235e0 (304 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aee6c (*(undefined4 *)0x005aee6c)
#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_004287c0 ((undefined4 (__thiscall *)(void *, int))0x004287c0)
#define FUN_004beef0 ((undefined4 (__thiscall *)(void *, int))0x004beef0)
#define FUN_004efe80 ((int (__thiscall *)(void *, int))0x004efe80)
#define FUN_00521e00 ((int (__fastcall *)(int *))0x00521e00)
#define FUN_00525fc0 ((undefined4 (__fastcall *)(int *))0x00525fc0)

#define LOM_SELF_004235e0 1
int __thiscall rb_004235e0(void *this,int param_1)

{
  int *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined * _t_local_10;
  typedef int _t_local_c;
  typedef int _t_local_8;
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
#define local_c (*(_t_local_c *)(_fr + 0x4))
#define local_8 (*(_t_local_8 *)(_fr + 0x8))
  
  iVar2 = *(int *)((int)this + 0x48);
  local_8 = 0;
  if ((iVar2 < 0) || (0xf < iVar2)) {
    local_10 = (undefined *)0x0;
  }
  else {
    local_10 = &DAT_005af194 + iVar2 * 0x1d84;
  }
  if (((local_10 == (undefined *)0x0) || (param_1 < 0)) || (*(int *)((int)this + 0x4c) <= param_1))
  {
    return 0;
  }
  local_c = 0;
  if (0 < (int)DAT_005aee6c) {
    do {
      iVar2 = FUN_004efe80(&DAT_005aee6c,local_c);
      if ((iVar2 != 0) && (iVar3 = FUN_004beef0(local_10 + 0x34,*(int *)(iVar2 + 0x48)), iVar3 == 1)
         ) {
        this_00 = (int *)((int)this + param_1 * 0x4c + 0xc4);
        iVar3 = FUN_00521e00(this_00);
        bVar1 = false;
        iVar4 = FUN_00525fc0(this_00);
        if (((iVar4 == 0) && (*(int *)(iVar2 + 0x38) <= *(int *)(this_00[5] + 0xc))) &&
           (((iVar3 != 0 && (*(int *)(iVar3 + 0x1c) == *(int *)(iVar2 + 8))) ||
            (iVar2 = FUN_004287c0(this_00,local_c), iVar2 != 0)))) {
          bVar1 = true;
        }
        if (bVar1) {
          local_8 = local_8 + 1;
        }
      }
      local_c = local_c + 1;
    } while (local_c < (int)DAT_005aee6c);
  }
  return local_8;
#undef local_10
#undef local_c
#undef local_8
}
