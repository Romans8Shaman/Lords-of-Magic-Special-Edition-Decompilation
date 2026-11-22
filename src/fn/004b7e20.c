/* Rebuilt from lomse.exe FUN_004b7e20 @ 0x004b7e20 (359 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583558 (*(undefined4 *)0x00583558)
#define DAT_00583598 (*(undefined *)0x00583598)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005cd2c4 (*(undefined *)0x005cd2c4)
#define DAT_005cd2dc (*(undefined *)0x005cd2dc)
#define DAT_005cd358 (*(undefined *)0x005cd358)
#define FUN_00481e40 ((undefined4 (__thiscall *)(void *, int *))0x00481e40)
#define FUN_00482800 ((undefined4 (__thiscall *)(void *, char *))0x00482800)
#define FUN_0048a400 ((undefined4 (__fastcall *)(int))0x0048a400)
#define FUN_0048cca0 ((undefined4 (__fastcall *)(int *))0x0048cca0)
#define FUN_004b4450 ((int (__fastcall *)(int))0x004b4450)
#define FUN_004b4dc0 ((undefined4 (__thiscall *)(void *, int *))0x004b4dc0)
#define FUN_004b8ba0 ((undefined4 (__thiscall *)(void *, int))0x004b8ba0)
#define FUN_004c4c10 ((undefined4 (__thiscall *)(void *, undefined4 *))0x004c4c10)
#define InterlockedExchange (*(__typeof__(LONG (__stdcall *)(LONG *, LONG)) *)0x0054d070) /* KERNEL32.DLL!InterlockedExchange via IAT */
#define _DAT_00583ff4 (*(undefined4 *)0x00583ff4)
#define op_sunlight ((undefined4 (__stdcall *)(void))0x0051bc30)

#define LOM_SELF_004b7e20 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall rb_004b7e20(void *param_1)

{
  undefined4 uVar1;
  LONG LVar2;
  uint uVar3;
  int iVar4;
  uchar _fr[0x128] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_11c;
  typedef char _t_local_118;
  typedef uint _t_local_115;
  typedef int _t_local_107;
  typedef undefined4 _t_local_103;
  typedef int _t_local_ff;
#define local_11c (*(_t_local_11c *)(_fr + 0x4))
#define local_118 (*(_t_local_118 *)(_fr + 0x8))
#define local_115 (*(_t_local_115 *)(_fr + 0xb))
#define local_107 (*(_t_local_107 *)(_fr + 0x19))
#define local_103 (*(_t_local_103 *)(_fr + 0x1d))
#define local_ff (*(_t_local_ff *)(_fr + 0x21))

  FUN_004b4450((int)&local_11c);
  LVar2 = InterlockedExchange((LONG *)&DAT_005cd2dc,1);
  if (LVar2 == 0) {
    *(undefined4 *)((int)param_1 + 0xdc) = 1;
    do {
      FUN_004b8ba0(param_1,(int)&local_11c);
      uVar1 = local_103;
      if (local_118 == '\x1f') {
        if (0 < local_ff) {
          FUN_00482800(&DAT_005aa12c,(char *)&local_107);
          goto LAB_004b7eed;
        }
      }
      else {
        if (local_118 == 'P') {
          *(undefined4 *)(&DAT_00583598 + local_107 * 4) = local_103;
          uVar3 = FUN_0048a400(0x584ae8);
          if ((local_115 & 0xff) == uVar3) {
            DAT_00583558 = uVar1;
          }
        }
        else {
          if (local_118 != '_') goto LAB_004b7ef3;
          FUN_004b4dc0(&DAT_005cd358,&local_107);
        }
LAB_004b7eed:
        local_118 = '\0';
      }
LAB_004b7ef3:
      if (local_118 != '\0') {
        if ((char)local_115 == '\x02') {
          iVar4 = FUN_00481e40(&DAT_005aa12c,&local_11c);
          if (iVar4 == 0) {
            if (local_118 == '=') {
              FUN_0048cca0(&local_11c);
            }
            local_118 = '\0';
          }
        }
        if (local_118 != '\0') {
          FUN_004c4c10(&DAT_005cd2c4,&local_11c);
        }
      }
    } while (*(int *)((int)param_1 + 0xdc) != 0);
    InterlockedExchange((LONG *)&DAT_005cd2dc,0);
  }
  else {
    _DAT_00583ff4 = 1;
  }
  op_sunlight();
  return;
#undef local_11c
#undef local_118
#undef local_115
#undef local_107
#undef local_103
#undef local_ff
}
