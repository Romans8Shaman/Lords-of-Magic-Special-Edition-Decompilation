/* Rebuilt from lomse.exe FUN_004f7960 @ 0x004f7960 (746 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa7d4 (*(int *)0x005aa7d4)
#define DAT_005aa7d8 (*(int *)0x005aa7d8)
#define DAT_005aadb0 (*(int *)0x005aadb0)
#define DAT_005aadb4 (*(int *)0x005aadb4)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005ae98c (*(int *)0x005ae98c)
#define DAT_005ae998 (*(int *)0x005ae998)
#define FUN_00415470 ((undefined4 (__fastcall *)(int *))0x00415470)
#define FUN_004154a0 ((int (__fastcall *)(int))0x004154a0)
#define FUN_004e72b0 ((undefined4 (__stdcall *)(int))0x004e72b0)
#define FUN_004e7300 ((undefined4 (__fastcall *)(int))0x004e7300)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)

#define LOM_SELF_004f7960 1
void __stdcall rb_004f7960(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uchar _fr[0x48] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_40;
  typedef undefined4 _t_local_3c;
  typedef undefined4 _t_local_38;
  typedef undefined2 _t_local_34;
  typedef undefined1 _t_local_32;
  typedef undefined4 _t_local_30;
  typedef undefined4 _t_local_2c;
  typedef undefined4 _t_local_28;
  typedef undefined2 _t_local_24;
  typedef undefined1 _t_local_22;
  typedef char _t_acStack_20[16];
  typedef char _t_acStack_10[16];
#define local_40 (*(_t_local_40 *)(_fr + 0x0))
#define local_3c (*(_t_local_3c *)(_fr + 0x4))
#define local_38 (*(_t_local_38 *)(_fr + 0x8))
#define local_34 (*(_t_local_34 *)(_fr + 0xc))
#define local_32 (*(_t_local_32 *)(_fr + 0xe))
#define local_30 (*(_t_local_30 *)(_fr + 0x10))
#define local_2c (*(_t_local_2c *)(_fr + 0x14))
#define local_28 (*(_t_local_28 *)(_fr + 0x18))
#define local_24 (*(_t_local_24 *)(_fr + 0x1c))
#define local_22 (*(_t_local_22 *)(_fr + 0x1e))
#define acStack_20 (*(_t_acStack_20 *)(_fr + 0x20))
#define acStack_10 (*(_t_acStack_10 *)(_fr + 0x30))
  
  iVar7 = DAT_005ae998;
  iVar2 = DAT_005ae98c;
  iVar3 = FUN_004154a0(0x5aa78c);
  iVar4 = FUN_004154a0(0x5aad68);
  if ((0 < iVar3) || (0 < iVar4)) {
    FUN_004e7300(0x5aa78c);
    iVar3 = 0;
    if (0 < DAT_005aa7d8) {
      do {
        uVar5 = FUN_004e72b0(iVar3);
        acStack_20[iVar3] = (char)uVar5;
        iVar3 = iVar3 + 1;
      } while (iVar3 < DAT_005aa7d8);
    }
    FUN_004e7300(0x5aad68);
    iVar3 = 0;
    if (0 < DAT_005aadb4) {
      do {
        uVar5 = FUN_004e72b0(iVar3);
        acStack_10[iVar3] = (char)uVar5;
        iVar3 = iVar3 + 1;
      } while (iVar3 < DAT_005aadb4);
    }
    local_30 = 0x1010101;
    local_2c = 0x1010101;
    local_28 = 0x1010101;
    local_24 = 0x101;
    local_22 = 1;
    local_40 = 0x1010101;
    local_3c = 0x1010101;
    local_38 = 0x1010101;
    local_34 = 0x101;
    local_32 = 1;
    iVar3 = iVar7;
    if (iVar7 <= iVar2) {
      do {
        iVar4 = FUN_004f6000(&DAT_005ae974,iVar3);
        if (((iVar4 != 0) && (*(int *)(iVar4 + 4) == 0)) &&
           (iVar6 = FUN_00415470((int *)(iVar4 + 0xc4)), iVar6 != 0)) {
          if (*(int *)(iVar4 + 0x48) == DAT_005aa7d4) {
            if ((*(uint *)(iVar4 + 0x30) & 0x100) != 0) {
              acStack_20[*(char *)(iVar4 + 0x5ac) + -0x20] = '\0';
            }
          }
          else if ((*(int *)(iVar4 + 0x48) == DAT_005aadb0) &&
                  ((*(uint *)(iVar4 + 0x30) & 0x100) != 0)) {
            acStack_20[*(char *)(iVar4 + 0x5ac) + -0x10] = '\0';
          }
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar7;
      } while (iVar3 <= iVar2);
      for (; iVar4 <= iVar2; iVar4 = iVar4 + 1) {
        iVar3 = FUN_004f6000(&DAT_005ae974,iVar4);
        if (((iVar3 != 0) && (*(int *)(iVar3 + 4) == 0)) &&
           ((*(uint *)(iVar3 + 0x30) & 0x10000000) != 0)) {
          if (*(int *)(iVar3 + 0x48) == DAT_005aa7d4) {
            if (0 < acStack_20[*(char *)(iVar3 + 0x5ac)]) {
              cVar1 = acStack_20[acStack_20[*(char *)(iVar3 + 0x5ac)] + -0x20];
joined_r0x004f7b0d:
              if (cVar1 == '\0') {
                *(uint *)(iVar3 + 0x30) = *(uint *)(iVar3 + 0x30) | 0x100;
              }
            }
          }
          else if ((*(int *)(iVar3 + 0x48) == DAT_005aadb0) &&
                  (0 < acStack_10[*(char *)(iVar3 + 0x5ac)])) {
            cVar1 = acStack_20[acStack_10[*(char *)(iVar3 + 0x5ac)] + -0x10];
            goto joined_r0x004f7b0d;
          }
        }
      }
    }
    local_30 = 0x1010101;
    local_2c = 0x1010101;
    local_28 = 0x1010101;
    local_24 = 0x101;
    local_22 = 1;
    local_40 = 0x1010101;
    local_3c = 0x1010101;
    local_38 = 0x1010101;
    local_34 = 0x101;
    local_32 = 1;
    iVar3 = iVar7;
    if (iVar7 <= iVar2) {
      do {
        iVar4 = FUN_004f6000(&DAT_005ae974,iVar3);
        if (((iVar4 != 0) && (*(int *)(iVar4 + 4) == 0)) &&
           (iVar6 = FUN_00415470((int *)(iVar4 + 0xc4)), iVar6 != 0)) {
          if (*(int *)(iVar4 + 0x48) == DAT_005aa7d4) {
            if ((*(uint *)(iVar4 + 0x30) & 0x400) != 0) {
              acStack_20[*(char *)(iVar4 + 0x5ac) + -0x20] = '\0';
            }
          }
          else if ((*(int *)(iVar4 + 0x48) == DAT_005aadb0) &&
                  ((*(uint *)(iVar4 + 0x30) & 0x400) != 0)) {
            acStack_20[*(char *)(iVar4 + 0x5ac) + -0x10] = '\0';
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 <= iVar2);
      for (; iVar7 <= iVar2; iVar7 = iVar7 + 1) {
        iVar3 = FUN_004f6000(&DAT_005ae974,iVar7);
        if (((iVar3 != 0) && (*(int *)(iVar3 + 4) == 0)) &&
           ((*(uint *)(iVar3 + 0x30) & 0x10000000) != 0)) {
          if (*(int *)(iVar3 + 0x48) == DAT_005aa7d4) {
            if (0 < acStack_20[*(char *)(iVar3 + 0x5ac)]) {
              cVar1 = acStack_20[acStack_20[*(char *)(iVar3 + 0x5ac)] + -0x20];
joined_r0x004f7c32:
              if (cVar1 == '\0') {
                *(uint *)(iVar3 + 0x30) = *(uint *)(iVar3 + 0x30) | 0x400;
              }
            }
          }
          else if ((*(int *)(iVar3 + 0x48) == DAT_005aadb0) &&
                  (0 < acStack_10[*(char *)(iVar3 + 0x5ac)])) {
            cVar1 = acStack_20[acStack_10[*(char *)(iVar3 + 0x5ac)] + -0x10];
            goto joined_r0x004f7c32;
          }
        }
      }
    }
  }
  return;
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_32
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_22
#undef acStack_20
#undef acStack_10
}
