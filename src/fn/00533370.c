/* Rebuilt from lomse.exe FUN_00533370 @ 0x00533370 (400 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00574404 (*(int * *)0x00574404)
#define DAT_00574408 (*(int * *)0x00574408)
#define DAT_0057440c (*(undefined4 *)0x0057440c)
#define DAT_00574410 (*(undefined4 *)0x00574410)
#define DAT_005ae9c4 (*(int *)0x005ae9c4)
#define DAT_005ae9c8 (*(int *)0x005ae9c8)
#define DAT_005d3858 (*(undefined4 *)0x005d3858)
#define FUN_00531b20 ((undefined4 (__thiscall *)(void *, int))0x00531b20)
#define FUN_00531c70 ((undefined4 (__thiscall *)(void *, int))0x00531c70)
#define FUN_00531ed0 ((int (__thiscall *)(void *, int))0x00531ed0)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_00533370 1
undefined4 __thiscall
rb_00533370(void *this,int param_1,int *param_2,int *param_3,undefined4 *param_4,int param_5,
            int *param_6,int param_7,undefined4 param_8)

{
  int iVar1;
  int *arg1;
  int iVar2;
  int *piVar3;
  
  iVar2 = DAT_005ae9c8 * DAT_005ae9c4;
  *(int *)((int)this + 0xc) = DAT_005ae9c4;
  if (*(int *)((int)this + 8) != iVar2) {
    FUN_00531b20(this,iVar2);
  }
  iVar1 = 0;
  if (0 < iVar2) {
    do {
      *(uint *)(*(int *)((int)this + 4) + iVar1 * 4) = (uint)*(byte *)(iVar1 + param_5);
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2);
  }
  DAT_00574404 = param_2;
  DAT_00574408 = param_3;
  DAT_005d3858 = *(undefined4 *)(param_1 + 0x54);
  DAT_0057440c = *(undefined4 *)(param_1 + 0xc4);
  DAT_00574410 = param_8;
  FUN_00531c70(this,(int)param_2);
  arg1 = (int *)Ordinal_401(param_7 * 4 + 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  *arg1 = (int)param_3;
  iVar2 = 1;
  piVar3 = arg1;
  do {
    piVar3 = piVar3 + 1;
    param_3 = (int *)FUN_00531ed0(this,(int)param_3);
    *piVar3 = (int)param_3;
    iVar1 = iVar2 + 1;
    if (param_3 == param_2) {
      *param_6 = iVar2;
      if (0 < iVar1) {
        iVar2 = iVar1 * 4;
        do {
          iVar2 = iVar2 + -4;
          iVar1 = iVar1 + -1;
          *param_4 = *(undefined4 *)((int)arg1 + iVar2);
          param_4 = param_4 + 1;
        } while (iVar1 != 0);
      }
      if (arg1 != (int *)0x0) {
        Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
      }
      DAT_00574404 = (int *)0xffffffff;
      DAT_00574408 = (int *)0xffffffff;
      DAT_0057440c = 0xffffffff;
      DAT_005d3858 = 0;
      return 1;
    }
  } while ((param_3 != (int *)0xffffffff) && (iVar2 = iVar1, iVar1 < param_7));
  if (arg1 != (int *)0x0) {
    Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
  }
  DAT_005d3858 = 0;
  DAT_00574404 = (int *)0xffffffff;
  DAT_00574408 = (int *)0xffffffff;
  DAT_0057440c = 0xffffffff;
  return 0;
}
