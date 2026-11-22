/* Rebuilt from lomse.exe FUN_004935c0 @ 0x004935c0 (573 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00430730 ((undefined4 (__thiscall *)(void *, void *, int, int))0x00430730)
#define FUN_0046bad0 ((undefined4 (__thiscall *)(void *, void *, int, int))0x0046bad0)
#define FUN_00493840 ((undefined4 (__thiscall *)(void *, int *, int, int, undefined4, undefined4))0x00493840)
#define FUN_00493ea0 ((undefined4 (__thiscall *)(void *, undefined4, undefined4, undefined4, undefined4, undefined4))0x00493ea0)
#define FUN_00495640 ((undefined4 (__thiscall *)(void *, int *, int, int, undefined2, undefined4, undefined4, int))0x00495640)
#define FUN_00495c00 ((undefined4 (__thiscall *)(void *, void *, int, int))0x00495c00)
#define FUN_00496340 ((undefined4 (__thiscall *)(void *, int *, int, int, byte))0x00496340)
#define FUN_00496880 ((undefined4 (__thiscall *)(void *, int *, uint, int, byte, byte))0x00496880)
#define FUN_00497770 ((undefined4 (__thiscall *)(void *, void *, int, int))0x00497770)
#define FUN_0049cc80 ((undefined4 (__thiscall *)(void *, int *))0x0049cc80)
#define FUN_0049d510 ((undefined4 (__thiscall *)(void *, void *, uint, int, int, int))0x0049d510)
#define FUN_004e9db0 ((undefined4 (__thiscall *)(void *, void *, int, int))0x004e9db0)
#define FUN_004eba40 ((undefined4 (__thiscall *)(void *, void *, int, int))0x004eba40)

#define LOM_SELF_004935c0 1
undefined4 __thiscall
rb_004935c0(void *this,int *param_1,uint param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_8[2];
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
  
  switch(*(undefined4 *)this) {
  case 3:
    FUN_00495c00(*(void **)((int)this + 4),param_1,param_2,param_3);
    return 1;
  case 4:
    piVar2 = *(int **)((int)this + 4);
    if (*piVar2 != 0) {
      iVar1 = (-(uint)((*(uint *)(*piVar2 + 0x14) & 0x10) != 0) & 2) - 1;
      if (iVar1 < 0) {
        FUN_00496340(param_1,piVar2,param_2,param_3,0);
      }
      else {
        FUN_00496880(param_1,piVar2,param_2,param_3,0,(byte)iVar1);
      }
      if (-1 < param_4) {
        FUN_00495640(param_1,piVar2,param_2,param_3,(short)param_4,0,iVar1,param_5);
        return 1;
      }
    }
    break;
  default:
    return 0;
  case 7:
    FUN_00497770(*(void **)((int)this + 4),param_1,param_2,param_3);
    return 1;
  case 9:
    FUN_004eba40(*(void **)((int)this + 4),param_1,param_2,param_3);
    return 1;
  case 10:
    FUN_00430730(*(void **)((int)this + 4),param_1,param_2,param_3);
    return 1;
  case 0xb:
    FUN_0046bad0(*(void **)((int)this + 4),param_1,param_2,param_3);
    return 1;
  case 0xc:
    FUN_004e9db0(*(void **)((int)this + 4),param_1,param_2,param_3);
    return 1;
  case 0xe:
    piVar2 = (int *)FUN_0049cc80(*(void **)((int)this + 4),local_8);
    FUN_0049d510(*(void **)((int)this + 4),param_1,*piVar2 + param_2,piVar2[1] + param_3,param_4,
                 param_5);
    return 1;
  case 0xf:
    FUN_00493840(*(void **)((int)this + 4),param_1,param_2,param_3,param_4,param_5);
    return 1;
  case 0x10:
    FUN_00493ea0(*(void **)((int)this + 4),param_1,param_2,param_3,param_4,param_5);
  }
  return 1;
#undef local_8
}
