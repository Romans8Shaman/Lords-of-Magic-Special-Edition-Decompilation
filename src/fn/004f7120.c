/* Rebuilt from lomse.exe FUN_004f7120 @ 0x004f7120 (662 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ccd70 (*(undefined4 *)0x005ccd70)
#define DAT_005cce24 (*(undefined4 *)0x005cce24)
#define FUN_00411610 ((undefined4 * (__fastcall *)(undefined4 *))0x00411610)
#define FUN_0043b930 ((undefined4 * (__fastcall *)(undefined4 *))0x0043b930)
#define FUN_0044e850 ((undefined4 * (__fastcall *)(undefined4 *))0x0044e850)
#define FUN_0047cbd0 ((undefined4 * (__stdcall *)(void))0x0047cbd0)
#define FUN_00487730 ((undefined4 (__thiscall *)(void *, undefined4 *))0x00487730)
#define FUN_004acf00 ((undefined4 * (__fastcall *)(undefined4 *))0x004acf00)
#define FUN_004ba150 ((undefined4 * (__fastcall *)(undefined4 *))0x004ba150)
#define FUN_004ef6f0 ((undefined4 * (__fastcall *)(undefined4 *))0x004ef6f0)
#define FUN_004f5d20 ((undefined4 (__fastcall *)(void *))0x004f5d20)
#define FUN_004f62f0 ((undefined4 (__fastcall *)(int))0x004f62f0)
#define FUN_004f76b0 ((undefined4 (__fastcall *)(int))0x004f76b0)
#define FUN_005047d0 ((undefined4 (__stdcall *)(undefined4))0x005047d0)
#define FUN_0050c0b0 ((undefined4 * (__fastcall *)(undefined4 *))0x0050c0b0)
#define FUN_005397f0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005397f0)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)
#define s_Unrecognized_sprite_type_0055b550 (*(char (*)[])0x0055b550)

#define LOM_SELF_004f7120 1
undefined4 __thiscall rb_004f7120(void *this, int *volatile param_1, int volatile param_2, int volatile param_3)

{
  int *a1;
  undefined4 uVar1;
  int *this_00;
  int iVar2;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_14;
  typedef undefined4 * _t_puStack_10;
#define local_14 (*(_t_local_14 *)(_fr + 0x4))
#define puStack_10 (*(_t_puStack_10 *)(_fr + 0x8))

  a1 = param_1;
  if (param_1 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    if (param_2 == 0) {
      FUN_004f5d20(this);
    }
    *(undefined4 *)((int)this + 4) = 1;
    FUN_005397f0((char *)&param_1,4,1,a1);
    iVar2 = 0;
    if (0 < (int)param_1) {
      do {
        FUN_005397f0((char *)&local_14,4,1,a1);
        switch(local_14) {
        case 0:
          puStack_10 = (undefined4 *)Ordinal_401(0x5dc,s_C__lomse_source_storm_h_00555130,0x3ef,0);
          if (puStack_10 == (undefined4 *)0x0) {
LAB_004f7308:
            this_00 = (int *)0x0;
          }
          else {
            this_00 = FUN_00411610(puStack_10);
          }
          break;
        case 1:
          puStack_10 = (undefined4 *)Ordinal_401(0x60,s_C__lomse_source_storm_h_00555130,0x3ef,0);
          if (puStack_10 == (undefined4 *)0x0) goto LAB_004f7308;
          this_00 = FUN_0050c0b0(puStack_10);
          break;
        case 2:
          puStack_10 = (undefined4 *)Ordinal_401(0x94,s_C__lomse_source_storm_h_00555130,0x3ef,0);
          if (puStack_10 == (undefined4 *)0x0) goto LAB_004f7308;
          this_00 = FUN_0043b930(puStack_10);
          break;
        case 3:
          puStack_10 = (undefined4 *)Ordinal_401(0x34c,s_C__lomse_source_storm_h_00555130,0x3ef,0);
          if (puStack_10 == (undefined4 *)0x0) goto LAB_004f7308;
          this_00 = FUN_0044e850(puStack_10);
          break;
        case 4:
          puStack_10 = (undefined4 *)Ordinal_401(0x78,s_C__lomse_source_storm_h_00555130,0x3ef,0);
          if (puStack_10 == (undefined4 *)0x0) goto LAB_004f7308;
          this_00 = FUN_004ef6f0(puStack_10);
          break;
        default:
          FUN_005047d0(s_Unrecognized_sprite_type_0055b550);
          return 0;
        case 7:
          this_00 = FUN_0047cbd0();
          goto LAB_004f730e;
        case 8:
          puStack_10 = (undefined4 *)Ordinal_401(0x58,s_C__lomse_source_storm_h_00555130,0x3ef,0);
          if (puStack_10 == (undefined4 *)0x0) goto LAB_004f7308;
          this_00 = FUN_004ba150(puStack_10);
          break;
        case 9:
          puStack_10 = (undefined4 *)Ordinal_401(0x148,s_C__lomse_source_storm_h_00555130,0x3ef,0);
          if (puStack_10 == (undefined4 *)0x0) goto LAB_004f7308;
          this_00 = FUN_004acf00(puStack_10);
        }
LAB_004f730e:
        this_00[0x10] = (int)this;
        ((undefined4 (__thiscall *)(__typeof__(this_00), __typeof__(a1)))(**(code **)(*this_00 + 0x24)))(this_00,a1);
        if (((byte)iVar2 & 7) == 7) {
          FUN_00487730(&DAT_005aa12c,a1);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)param_1);
    }
    if (param_2 != 0) {
      FUN_004f76b0((int)this);
    }
    if (param_3 != 0) {
      FUN_005397f0((char *)&DAT_005ccd70,0xb4,1,a1);
      FUN_005397f0((char *)&DAT_005cce24,0xb4,1,a1);
    }
    *(undefined4 *)((int)this + 4) = 0;
    FUN_004f62f0((int)this);
    uVar1 = 1;
  }
  return uVar1;
#undef local_14
#undef puStack_10
}
