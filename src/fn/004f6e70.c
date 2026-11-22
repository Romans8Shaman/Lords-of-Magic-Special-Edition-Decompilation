/* Rebuilt from lomse.exe FUN_004f6e70 @ 0x004f6e70 (646 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00411610 ((undefined4 * (__fastcall *)(undefined4 *))0x00411610)
#define FUN_0043b930 ((undefined4 * (__fastcall *)(undefined4 *))0x0043b930)
#define FUN_0044e850 ((undefined4 * (__fastcall *)(undefined4 *))0x0044e850)
#define FUN_0047cbd0 ((undefined4 * (__stdcall *)(void))0x0047cbd0)
#define FUN_00483be0 ((undefined4 (__thiscall *)(void *, int *))0x00483be0)
#define FUN_004acf00 ((undefined4 * (__fastcall *)(undefined4 *))0x004acf00)
#define FUN_004ba150 ((undefined4 * (__fastcall *)(undefined4 *))0x004ba150)
#define FUN_004ef6f0 ((undefined4 * (__fastcall *)(undefined4 *))0x004ef6f0)
#define FUN_005047d0 ((undefined4 (__stdcall *)(undefined4))0x005047d0)
#define FUN_0050c0b0 ((undefined4 * (__fastcall *)(undefined4 *))0x0050c0b0)
#define FUN_005397f0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005397f0)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)
#define s_Unrecognized_sprite_type_0055b550 (*(char (*)[])0x0055b550)

#define LOM_SELF_004f6e70 1
int * __thiscall rb_004f6e70(void *this,int *param_1)

{
  int *this_00;
  int *piVar1;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int * _t_local_20;
  typedef int _t_local_1c;
  typedef int _t_local_18;
  typedef undefined4 _t_local_14;
  typedef undefined4 * _t_puStack_10;
#define local_20 (*(_t_local_20 *)(_fr + 0x0))
#define local_1c (*(_t_local_1c *)(_fr + 0x4))
#define local_18 (*(_t_local_18 *)(_fr + 0x8))
#define local_14 (*(_t_local_14 *)(_fr + 0xc))
#define puStack_10 (*(_t_puStack_10 *)(_fr + 0x10))

  local_20 = (int *)0x0;
  if (param_1 == (int *)0x0) {
    local_20 = (int *)0x0;
  }
  else {
    *(undefined4 *)((int)this + 4) = 1;
    FUN_005397f0((char *)&local_18,4,1,param_1);
    local_1c = 0;
    if (0 < local_18) {
      do {
        piVar1 = (int *)0x0;
        FUN_005397f0((char *)&local_14,4,1,param_1);
        switch(local_14) {
        case 0:
          puStack_10 = (undefined4 *)Ordinal_401(0x5dc,s_C__lomse_source_storm_h_00555130,0x3ef,0);
          if (puStack_10 == (undefined4 *)0x0) {
LAB_004f706c:
            this_00 = (int *)0x0;
          }
          else {
            this_00 = FUN_00411610(puStack_10);
          }
          break;
        case 1:
          puStack_10 = (undefined4 *)Ordinal_401(0x60,s_C__lomse_source_storm_h_00555130,0x3ef,0);
          if (puStack_10 == (undefined4 *)0x0) {
            this_00 = (int *)0x0;
            piVar1 = (int *)0x0;
          }
          else {
            piVar1 = FUN_0050c0b0(puStack_10);
            this_00 = piVar1;
          }
          goto LAB_004f7074;
        case 2:
          puStack_10 = (undefined4 *)Ordinal_401(0x94,s_C__lomse_source_storm_h_00555130,0x3ef,0);
          if (puStack_10 == (undefined4 *)0x0) goto LAB_004f706c;
          this_00 = FUN_0043b930(puStack_10);
          break;
        case 3:
          puStack_10 = (undefined4 *)Ordinal_401(0x34c,s_C__lomse_source_storm_h_00555130,0x3ef,0);
          if (puStack_10 == (undefined4 *)0x0) goto LAB_004f706c;
          this_00 = FUN_0044e850(puStack_10);
          break;
        case 4:
          puStack_10 = (undefined4 *)Ordinal_401(0x78,s_C__lomse_source_storm_h_00555130,0x3ef,0);
          if (puStack_10 == (undefined4 *)0x0) goto LAB_004f706c;
          this_00 = FUN_004ef6f0(puStack_10);
          break;
        default:
          FUN_005047d0(s_Unrecognized_sprite_type_0055b550);
          *(undefined4 *)((int)this + 4) = 0;
          return (int *)0x0;
        case 7:
          this_00 = FUN_0047cbd0();
          goto LAB_004f7072;
        case 8:
          puStack_10 = (undefined4 *)Ordinal_401(0x58,s_C__lomse_source_storm_h_00555130,0x3ef,0);
          if (puStack_10 == (undefined4 *)0x0) goto LAB_004f706c;
          this_00 = FUN_004ba150(puStack_10);
          break;
        case 9:
          puStack_10 = (undefined4 *)Ordinal_401(0x148,s_C__lomse_source_storm_h_00555130,0x3ef,0);
          if (puStack_10 == (undefined4 *)0x0) goto LAB_004f706c;
          this_00 = FUN_004acf00(puStack_10);
        }
LAB_004f7072:
LAB_004f7074:
        this_00[0x10] = (int)this;
        ((undefined4 (__thiscall *)(__typeof__(this_00), __typeof__(param_1)))(**(code **)(*this_00 + 0x24)))(this_00,param_1);
        if (((piVar1 == (int *)0x0) || (local_20 != (int *)0x0)) || (piVar1[0x15] < 0)) {
          FUN_00483be0(&DAT_005aa12c,this_00);
        }
        else {
          local_20 = piVar1;
        }
        local_1c = local_1c + 1;
      } while (local_1c < local_18);
    }
    *(undefined4 *)((int)this + 4) = 0;
  }
  return local_20;
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef puStack_10
}
