/* Rebuilt from lomse.exe FUN_00495170 @ 0x00495170 (230 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00475360 ((undefined4 (__fastcall *)(int))0x00475360)
#define FUN_004756f0 ((undefined4 (__cdecl *)(int, ...))0x004756f0)
#define FUN_00495590 ((undefined4 (__fastcall *)(int *))0x00495590)
#define s_surf__gt_GetPixelFormat__pf__0055c638 (*(char (*)[])0x0055c638)
#define s_surf__gt_Lock_NULL__ddsd_DDLOCK_SUR_0055c654 (*(char (*)[])0x0055c654)

#define LOM_SELF_00495170 1
undefined4 __thiscall rb_00495170(void *this,int *unused_stack_4,undefined4 param_p2)

{
  int iVar1;
  char *pcVar2;
  uchar _fr[0x98] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_uStack_8c;
  typedef byte _t_bStack_88;
  typedef undefined4 _t_local_6c[2];
  typedef undefined4 _t_uStack_64;
  typedef undefined4 _t_uStack_60;
  typedef undefined4 _t_uStack_5c;
  typedef undefined4 _t_uStack_48;
#define uStack_8c (*(_t_uStack_8c *)(_fr + 0x4))
#define bStack_88 (*(_t_bStack_88 *)(_fr + 0x8))
#define local_6c (*(_t_local_6c *)(_fr + 0x24))
#define uStack_64 (*(_t_uStack_64 *)(_fr + 0x2c))
#define uStack_60 (*(_t_uStack_60 *)(_fr + 0x30))
#define uStack_5c (*(_t_uStack_5c *)(_fr + 0x34))
#define uStack_48 (*(_t_uStack_48 *)(_fr + 0x48))
  
  local_6c[0] = 0x6c;
  if (*(int *)this != 0) {
    FUN_00495590(this);
  }
  iVar1 = ((undefined4 (__stdcall *)(__typeof__(unused_stack_4), __typeof__(0), __typeof__(local_6c), __typeof__(1), __typeof__(0)))(**(code **)(*unused_stack_4 + 100)))(unused_stack_4,0,local_6c,1,0);
  if (iVar1 == -0x7789fe3e) {
    FUN_00475360(0x584ae8);
    iVar1 = ((undefined4 (__stdcall *)(__typeof__(unused_stack_4), __typeof__(0), __typeof__(local_6c), __typeof__(1), __typeof__(0)))(**(code **)(*unused_stack_4 + 100)))(unused_stack_4,0,local_6c,1,0);
  }
  if (iVar1 != 0) {
    FUN_004756f0(iVar1,s_surf__gt_Lock_NULL__ddsd_DDLOCK_SUR_0055c654);
    return 0;
  }
  *(undefined4 *)((int)this + 4) = uStack_60;
  *(undefined4 *)((int)this + 0xc) = uStack_5c;
  *(int **)((int)this + 0x18) = unused_stack_4;
  *(undefined4 *)((int)this + 8) = uStack_64;
  *(undefined4 *)this = uStack_48;
  *(undefined4 *)((int)this + 0x14) = 10;
  pcVar2 = s_surf__gt_GetPixelFormat__pf__0055c638;
  uStack_8c = 0x20;
  iVar1 = ((undefined4 (__stdcall *)(__typeof__(unused_stack_4), __typeof__(&uStack_8c)))(**(code **)(*unused_stack_4 + 0x54)))(unused_stack_4,&uStack_8c);
  iVar1 = FUN_004756f0(iVar1,pcVar2);
  if ((iVar1 != 0) && ((bStack_88 & 0x20) == 0)) {
    *(undefined4 *)((int)this + 0x14) = 0xc;
  }
  *(undefined4 *)((int)this + 0x10) = param_p2;
  return 1;
#undef uStack_8c
#undef bStack_88
#undef local_6c
#undef uStack_64
#undef uStack_60
#undef uStack_5c
#undef uStack_48
}
