/* Rebuilt from lomse.exe FUN_004317f0 @ 0x004317f0 (538 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_00429150 ((undefined4 (__thiscall *)(void *, int, int, int, int, int))0x00429150)
#define FUN_004298a0 ((undefined4 (__thiscall *)(void *, int, int *, int *))0x004298a0)
#define FUN_0042c680 ((int (__fastcall *)(int))0x0042c680)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004a8960 ((int (__thiscall *)(void *, int, int))0x004a8960)
#define FUN_004fbed0 ((undefined4 * (__thiscall *)(void *, int))0x004fbed0)
#define FUN_00525e80 ((undefined4 (__fastcall *)(int))0x00525e80)

#define LOM_SELF_004317f0 1
undefined4 __thiscall rb_004317f0(void *this,undefined4 param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  uchar _fr[0x38] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 * _t_puStack_2c;
  typedef int _t_iStack_28;
  typedef int _t_iStack_20;
  typedef int _t_iStack_1c;
  typedef int _t_iStack_18;
  typedef int _t_iStack_14;
  typedef int _t_local_10;
  typedef int * _t_local_c;
  typedef int * _t_local_8;
  typedef int _t_local_4;
#define puStack_2c (*(_t_puStack_2c *)(_fr + 0x4))
#define iStack_28 (*(_t_iStack_28 *)(_fr + 0x8))
#define iStack_20 (*(_t_iStack_20 *)(_fr + 0x10))
#define iStack_1c (*(_t_iStack_1c *)(_fr + 0x14))
#define iStack_18 (*(_t_iStack_18 *)(_fr + 0x18))
#define iStack_14 (*(_t_iStack_14 *)(_fr + 0x1c))
#define local_10 (*(_t_local_10 *)(_fr + 0x20))
#define local_c (*(_t_local_c *)(_fr + 0x24))
#define local_8 (*(_t_local_8 *)(_fr + 0x28))
#define local_4 (*(_t_local_4 *)(_fr + 0x2c))
  
  local_c = this;
  iVar3 = FUN_004298a0(&DAT_005aa12c,param_3,&local_10,&local_4);
  if (iVar3 == 0) {
    return 0;
  }
  local_8 = FUN_00485080(&DAT_005aa12c,local_10,0x2f);
  iVar3 = *(int *)(param_2 + 0x15a8);
  iVar4 = ((undefined4 (__thiscall *)(__typeof__(local_8)))(**(code **)(*local_8 + 0x3c)))(local_8);
  if (iVar4 == iVar3) {
    return 1;
  }
  puStack_2c = (undefined4 *)0x0;
  bVar2 = false;
  bVar1 = false;
  iStack_14 = 9999;
  iStack_20 = 9999;
  iStack_1c = 9999;
  puVar5 = FUN_004fbed0(&DAT_005ae974,0);
  puVar7 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    do {
      if (puVar5[0x12] == *(int *)(param_2 + 0x15a8)) {
        if ((puVar5[10] == *(int *)this) || (puVar5[10] == *(int *)((int)this + 4))) {
          iVar3 = 0;
        }
        else {
          iVar3 = FUN_004a8960(&DAT_005ae958,local_8[7],puVar5[7]);
        }
        if (iVar3 < iStack_14) {
          iVar4 = 0;
          iStack_18 = -1;
          if (0 < (int)puVar5[0x13]) {
            puVar7 = puVar5 + 0x31;
            do {
              iVar6 = FUN_00525e80((int)puVar7);
              if (iVar6 != 0) {
                iVar6 = FUN_0042c680((int)puVar7);
                if (iVar6 < 3) break;
                iStack_18 = iVar4;
              }
              iVar4 = iVar4 + 1;
              puVar7 = puVar7 + 0x13;
            } while (iVar4 < (int)puVar5[0x13]);
          }
          if (iVar4 < (int)puVar5[0x13]) {
            bVar2 = false;
            bVar1 = false;
            puStack_2c = puVar5;
            iStack_28 = iVar4;
            iStack_14 = iVar3;
          }
          else if (puStack_2c == (undefined4 *)0x0) {
            if (-1 < iStack_18) {
              iStack_28 = iStack_18;
            }
            else {
              iStack_28 = 0;
            }
            bVar1 = -1 >= iStack_18;
            bVar2 = true;
            if (!bVar1) {
              iStack_20 = iVar3;
            }
LAB_004319ac:
            puStack_2c = puVar5;
            iStack_1c = iVar3;
          }
          else if (bVar2) {
            if (iStack_18 < 0) {
              if (iVar3 < iStack_1c) {
                iStack_28 = 0;
                bVar1 = true;
                goto LAB_004319ac;
              }
            }
            else if ((iVar3 < iStack_20) || (bVar1)) {
              bVar1 = false;
              puStack_2c = puVar5;
              iStack_28 = iStack_18;
              iStack_20 = iVar3;
            }
          }
        }
      }
      puVar5 = FUN_004fbed0(&DAT_005ae974,(int)puVar5);
      if (puVar5 == (undefined4 *)0x0) goto code_r0x004319c5;
      this = local_c;
    } while( true );
  }
LAB_004319c9:
  if (puVar7 == (undefined4 *)0x0) {
    return 0;
  }
  FUN_00429150(&DAT_005aa12c,local_10,local_4,puVar7[10],iStack_28,param_3);
  return 1;
code_r0x004319c5:
  puVar7 = puStack_2c;
  goto LAB_004319c9;
#undef puStack_2c
#undef iStack_28
#undef iStack_20
#undef iStack_1c
#undef iStack_18
#undef iStack_14
#undef local_10
#undef local_c
#undef local_8
#undef local_4
}
