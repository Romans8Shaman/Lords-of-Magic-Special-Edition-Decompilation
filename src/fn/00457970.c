/* Rebuilt from lomse.exe FUN_00457970 @ 0x00457970 (398 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae8e8 (*(undefined *)0x005ae8e8)
#define DAT_005ae92c (*(int *)0x005ae92c)
#define DAT_005ae935 (*(char *)0x005ae935)
#define FUN_0041efa0 ((undefined4 (__thiscall *)(void *, uint))0x0041efa0)
#define FUN_00455850 ((undefined4 (__thiscall *)(void *, undefined4 *, undefined4 *, int *, undefined4 *, undefined4 *))0x00455850)
#define FUN_00456670 ((undefined4 (__thiscall *)(void *, int, int, int, int))0x00456670)
#define FUN_00456e70 ((undefined4 (__thiscall *)(void *, int, int, int))0x00456e70)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004a51c0 ((int (__thiscall *)(void *, int, int))0x004a51c0)
#define FUN_004a8300 ((undefined4 (__thiscall *)(void *, int, int))0x004a8300)

#define LOM_SELF_00457970 1
void __fastcall rb_00457970(void *param_1)

{
  int iVar1;
  int *this;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_14;
  typedef int _t_local_10;
  typedef int _t_local_c;
  typedef undefined4 _t_local_8;
  typedef undefined4 _t_local_4;
#define local_14 (*(_t_local_14 *)(_fr + 0x4))
#define local_10 (*(_t_local_10 *)(_fr + 0x8))
#define local_c (*(_t_local_c *)(_fr + 0xc))
#define local_8 (*(_t_local_8 *)(_fr + 0x10))
#define local_4 (*(_t_local_4 *)(_fr + 0x14))
  
  if ((DAT_005ae935 != '\b') && (DAT_005ae935 == '\x06')) {
    FUN_00455850(&DAT_005ae8e8,&local_10,&local_14,&local_c,&local_4,&local_8);
    iVar1 = FUN_004a51c0(param_1,local_10,local_14);
    iVar1 = FUN_004a8300(param_1,iVar1,0);
    if ((iVar1 == -1) || (iVar1 == DAT_005ae92c)) {
      if ((local_c == 0) || (local_c == 4)) {
        iVar1 = FUN_004a51c0(param_1,local_10 + -1,local_14);
        iVar1 = FUN_004a8300(param_1,iVar1,0);
        if ((iVar1 != -1) && (iVar1 != DAT_005ae92c)) {
          return;
        }
        iVar1 = FUN_004a51c0(param_1,local_10 + 1,local_14);
        iVar1 = FUN_004a8300(param_1,iVar1,0);
        if ((iVar1 != -1) && (iVar1 != DAT_005ae92c)) {
          return;
        }
      }
      else {
        iVar1 = FUN_004a51c0(param_1,local_10,local_14 + -1);
        iVar1 = FUN_004a8300(param_1,iVar1,0);
        if ((iVar1 != -1) && (iVar1 != DAT_005ae92c)) {
          return;
        }
        iVar1 = FUN_004a51c0(param_1,local_10 + 1,local_14 + 1);
        iVar1 = FUN_004a8300(param_1,iVar1,0);
        if ((iVar1 != -1) && (iVar1 != DAT_005ae92c)) {
          return;
        }
      }
      this = (int *)FUN_00482ac0(&DAT_005aa12c,DAT_005ae92c,0);
      if (this != (int *)0x0) {
        FUN_0041efa0(this,0xf);
        DAT_005ae935 = '\a';
        ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*this + 0x2c)))(this);
        FUN_00456e70(param_1,local_10,local_14,local_c);
        FUN_00456670(param_1,local_10,local_14,local_c,0);
      }
    }
  }
  return;
#undef local_14
#undef local_10
#undef local_c
#undef local_8
#undef local_4
}
