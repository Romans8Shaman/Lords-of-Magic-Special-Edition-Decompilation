/* Rebuilt from lomse.exe FUN_004ef340 @ 0x004ef340 (417 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584c1c (*(undefined4 *)0x00584c1c)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005cd2c4 (*(undefined *)0x005cd2c4)
#define FUN_00419440 ((uint (__fastcall *)(int))0x00419440)
#define FUN_0044c0c0 ((undefined4 * (__stdcall *)(int, int *))0x0044c0c0)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004c4d00 ((int (__fastcall *)(int *))0x004c4d00)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004ef340 1
undefined4 __fastcall rb_004ef340(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int arg1;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *arg1_00;
  int iVar8;
  undefined4 *puVar9;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  iVar4 = FUN_004c4d00((int *)&DAT_005cd2c4);
  if ((iVar4 != 0) && (param_1[1] != 0)) {
    return 1;
  }
  iVar8 = 0;
  iVar4 = 0;
  arg1 = param_1[1];
joined_r0x004ef378:
  do {
    if (arg1 == 0) {
      if (iVar8 != 0) {
        return 1;
      }
      puVar5 = (undefined4 *)*param_1;
      puVar6 = (undefined4 *)0x0;
      if ((undefined4 *)*param_1 == (undefined4 *)0x0) {
        return 0;
      }
      do {
        arg1_00 = puVar5;
        puVar5 = (undefined4 *)arg1_00[0x11];
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = arg1_00;
          puVar9 = &DAT_00584c1c;
          for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar9 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar9 = puVar9 + 1;
          }
          uVar7 = arg1_00[0xf];
          piVar3 = (int *)arg1_00[0x10];
          if (puVar6 == (undefined4 *)0x0) {
            *param_1 = 0;
          }
          else {
            puVar6[0x11] = 0;
          }
          if (arg1_00 != (undefined4 *)0x0) {
            Ordinal_403(arg1_00,s_C__lomse_source_storm_h_00555130,0x3eb,0);
          }
          FUN_004d05e0(DAT_005a7b78,uVar7,piVar3);
          return 1;
        }
        puVar6 = arg1_00;
      } while (puVar5 != (undefined4 *)0x0);
      return 0;
    }
    puVar5 = FUN_00485080(&DAT_005aa12c,*(int *)(arg1 + 0x24),0x2f);
    iVar1 = *(int *)(arg1 + 0x34);
    if (iVar1 < 0) {
LAB_004ef3e1:
      if (puVar5 != (undefined4 *)0x0) goto LAB_004ef3e5;
    }
    else {
      if (puVar5 == (undefined4 *)0x0) {
LAB_004ef3be:
        puVar6 = FUN_0044c0c0(iVar1,&local_4);
        if (puVar6 != (undefined4 *)0x0) {
          uVar2 = puVar6[10];
          *(int *)(arg1 + 0x28) = local_4;
          *(undefined4 *)(arg1 + 0x24) = uVar2;
          puVar5 = puVar6;
        }
        goto LAB_004ef3e1;
      }
      if (((*(int *)(arg1 + 0x28) < 0) || ((int)puVar5[0x13] <= *(int *)(arg1 + 0x28))) ||
         (puVar5[(*(int *)(arg1 + 0x14) + 3) * 0x13] != iVar1)) {
        puVar5 = (undefined4 *)0x0;
      }
      if (puVar5 == (undefined4 *)0x0) goto LAB_004ef3be;
LAB_004ef3e5:
      if (((0 < (int)puVar5[0x18]) && ((~puVar5[0xc] & 0x100) != 0)) &&
         (uVar7 = FUN_00419440((int)puVar5), uVar7 == 0)) {
        iVar8 = iVar8 + 1;
        iVar4 = arg1;
        arg1 = *(int *)(arg1 + 0x3c);
        goto joined_r0x004ef378;
      }
    }
    if (iVar4 == 0) {
      param_1[1] = *(undefined4 *)(arg1 + 0x3c);
    }
    else {
      *(undefined4 *)(iVar4 + 0x3c) = *(undefined4 *)(arg1 + 0x3c);
    }
    if (arg1 != 0) {
      Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
    }
    arg1 = iVar4;
    if (iVar4 == 0) {
      arg1 = param_1[1];
    }
  } while( true );
#undef local_4
}
