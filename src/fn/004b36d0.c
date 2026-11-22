/* Rebuilt from lomse.exe FUN_004b36d0 @ 0x004b36d0 (703 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583ae0 (*(undefined4 *)0x00583ae0)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005863c8 (*(undefined4 *)0x005863c8)
#define DAT_005863cc (*(undefined4 *)0x005863cc)
#define DAT_005863d0 (*(undefined4 *)0x005863d0)
#define DAT_005863d8 (*(undefined4 *)0x005863d8)
#define DAT_005863dc (*(undefined4 *)0x005863dc)
#define DAT_005863e0 (*(undefined4 *)0x005863e0)
#define DAT_005863e4 (*(undefined4 *)0x005863e4)
#define DAT_005863ec (*(undefined4 *)0x005863ec)
#define DAT_005863f0 (*(undefined4 *)0x005863f0)
#define DAT_00586628 (*(int *)0x00586628)
#define DAT_0058662c (*(undefined *)0x0058662c)
#define DAT_00586770 (*(undefined4 *)0x00586770)
#define DAT_00586778 (*(undefined4 *)0x00586778)
#define EnterCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0d8) /* KERNEL32.DLL!EnterCriticalSection via IAT */
#define FUN_004b32c0 ((undefined4 (__fastcall *)(int *))0x004b32c0)
#define FUN_004b3990 ((undefined4 (__fastcall *)(int))0x004b3990)
#define FUN_004b3c50 ((undefined4 (__fastcall *)(int))0x004b3c50)
#define FUN_004fe6e0 ((undefined4 (__thiscall *)(void *, LPCSTR))0x004fe6e0)
#define FUN_005397f0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005397f0)
#define FUN_0053ac20 ((DWORD (__cdecl *)(undefined4 *))0x0053ac20)
#define LeaveCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0dc) /* KERNEL32.DLL!LeaveCriticalSection via IAT */
#define s_wav_music_m_life_wav_0055ce68 (*(char (*)[])0x0055ce68)

#define LOM_SELF_004b36d0 1
void __stdcall rb_004b36d0(undefined4 unused_stack_0, undefined4 unused_stack_4, undefined4 unused_stack_8, undefined4 unused_stack_12, undefined4 unused_stack_16)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  DWORD DVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef char * _t_pcStack_14;
  typedef int _t_iStack_10;
  typedef uint _t_uStack_c;
  typedef undefined4 _t_uStack_8;
  typedef undefined1 _t_auStack_4[4];
#define pcStack_14 (*(_t_pcStack_14 *)(_fr + 0x4))
#define iStack_10 (*(_t_iStack_10 *)(_fr + 0x8))
#define uStack_c (*(_t_uStack_c *)(_fr + 0xc))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x10))
#define auStack_4 (*(_t_auStack_4 *)(_fr + 0x14))
  
  pcStack_14 = (char *)0x0;
  if (DAT_00586628 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0058662c);
    DAT_00586628 = 1;
    iStack_10 = 0;
    do {
      iVar3 = iStack_10;
      piVar1 = &DAT_005863c8 + iStack_10 * 0x4b;
      if (((&DAT_005863cc)[iStack_10 * 0x4b] != 0) &&
         (piVar2 = (int *)*piVar1, piVar2 != (int *)0x0)) {
        ((undefined4 (__stdcall *)(__typeof__(piVar2), __typeof__(&uStack_c), __typeof__(auStack_4)))(**(code **)(*piVar2 + 0x10)))(piVar2,&uStack_c,auStack_4);
        iVar4 = (&DAT_005863d0)[iVar3 * 0x4b];
        if (iVar4 == 0) {
          uVar8 = (&DAT_005863dc)[iVar3 * 0x4b];
          uVar9 = 0;
LAB_004b378b:
          uVar7 = uVar8 - uVar9;
          iVar4 = ((undefined4 (__stdcall *)(__typeof__((int *)*piVar1), __typeof__(uVar9), __typeof__(uVar7), __typeof__(&pcStack_14), __typeof__(&uStack_8), __typeof__(0), __typeof__(0), __typeof__(0)))(**(code **)(*(int *)*piVar1 + 0x2c)))
                            ((int *)*piVar1,uVar9,uVar7,&pcStack_14,&uStack_8,0,0,0);
          if (iVar4 == 0) {
            DVar5 = FUN_0053ac20((undefined4 *)(&DAT_005863cc)[iVar3 * 0x4b]);
            if ((int)((DVar5 + uVar8) - uVar9) < (int)(&DAT_005863d8)[iVar3 * 0x4b]) {
              uVar9 = FUN_005397f0(pcStack_14,uVar7,1,(int *)(&DAT_005863cc)[iVar3 * 0x4b]);
              if ((int)uVar9 < 1) {
                ((undefined4 (__stdcall *)(__typeof__((int *)*piVar1), __typeof__(pcStack_14), __typeof__(uStack_8), __typeof__(0), __typeof__(0)))(**(code **)(*(int *)*piVar1 + 0x4c)))((int *)*piVar1,pcStack_14,uStack_8,0,0);
                goto LAB_004b38b6;
              }
            }
            else {
              pcVar10 = pcStack_14;
              for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                pcVar10[0] = '\0';
                pcVar10[1] = '\0';
                pcVar10[2] = '\0';
                pcVar10[3] = '\0';
                pcVar10 = pcVar10 + 4;
              }
              for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                *pcVar10 = '\0';
                pcVar10 = pcVar10 + 1;
              }
              uVar9 = (&DAT_005863d8)[iVar3 * 0x4b] - DVar5;
              FUN_005397f0(pcStack_14,uVar9,1,(int *)(&DAT_005863cc)[iVar3 * 0x4b]);
              iVar4 = (&DAT_005863e4)[iVar3 * 0x4b];
              (&DAT_00583ae0)[iStack_10] = (&DAT_005863d0)[iVar3 * 0x4b];
              if (iVar4 == 0) {
                if ((&DAT_005863f0)[iVar3 * 0x4b] == 1) {
                  (&DAT_005863d0)[iVar3 * 0x4b] = 1;
                }
                else {
                  FUN_004b3c50((int)piVar1);
LAB_004b391b:
                  FUN_005397f0(pcStack_14 + uVar9,(&DAT_005863e0)[iVar3 * 0x4b] - uVar9,1,
                               (int *)(&DAT_005863cc)[iVar3 * 0x4b]);
                }
              }
              else if (iVar4 == 3) {
                if ((&DAT_005863f0)[iVar3 * 0x4b] != 1) {
                  uVar6 = FUN_004fe6e0(&DAT_00584ae8,s_wav_music_m_life_wav_0055ce68);
                  (&DAT_005863cc)[iVar3 * 0x4b] = uVar6;
                  FUN_004b3990((int)piVar1);
                  goto LAB_004b391b;
                }
                (&DAT_005863d0)[iVar3 * 0x4b] = 1;
              }
              else if (iVar4 == 2) {
                (&DAT_005863d0)[iVar3 * 0x4b] = 1;
              }
              else if (iVar4 == 1) {
                (&DAT_005863d0)[iVar3 * 0x4b] = 1;
              }
            }
            ((undefined4 (__stdcall *)(__typeof__((int *)*piVar1), __typeof__(pcStack_14), __typeof__(uStack_8), __typeof__(0), __typeof__(0)))(**(code **)(*(int *)*piVar1 + 0x4c)))((int *)*piVar1,pcStack_14,uStack_8,0,0);
            if ((&DAT_005863d0)[iVar3 * 0x4b] == 0) {
              uVar6 = DAT_00586770;
              if (iStack_10 != 0) {
                uVar6 = DAT_00586778;
              }
              ((undefined4 (__stdcall *)(__typeof__((int *)*piVar1), __typeof__(uVar6)))(**(code **)(*(int *)*piVar1 + 0x3c)))((int *)*piVar1,uVar6);
              ((undefined4 (__stdcall *)(__typeof__((int *)*piVar1), __typeof__(0), __typeof__(0), __typeof__(1)))(**(code **)(*(int *)*piVar1 + 0x30)))((int *)*piVar1,0,0,1);
              (&DAT_005863d0)[iVar3 * 0x4b] = 2;
              (&DAT_005863ec)[iVar3 * 0x4b] = 0;
            }
          }
        }
        else if (iVar4 == 2) {
          uVar8 = (&DAT_005863e0)[iVar3 * 0x4b];
          if (uVar8 <= uStack_c) {
            uVar9 = 0;
            (&DAT_005863d0)[iVar3 * 0x4b] = 3;
            goto LAB_004b378b;
          }
        }
        else if (iVar4 == 3) {
          uVar9 = (&DAT_005863e0)[iVar3 * 0x4b];
          if (uStack_c < uVar9) {
            uVar8 = (&DAT_005863dc)[iVar3 * 0x4b];
            (&DAT_005863d0)[iVar3 * 0x4b] = 2;
            goto LAB_004b378b;
          }
        }
        else if (iVar4 == 1) {
          if ((((&DAT_00583ae0)[iVar3] == 2) && ((uint)(&DAT_005863e0)[iVar3 * 0x4b] <= uStack_c))
             || (((&DAT_00583ae0)[iVar3] == 3 && (uStack_c < (uint)(&DAT_005863e0)[iVar3 * 0x4b]))))
          {
            FUN_004b32c0(piVar1);
            (&DAT_005863ec)[iVar3 * 0x4b] = 1;
            (&DAT_005863f0)[iVar3 * 0x4b] = 0;
          }
        }
      }
LAB_004b38b6:
      iStack_10 = iStack_10 + 1;
    } while (iStack_10 < 2);
    DAT_00586628 = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0058662c);
  }
  return;
#undef pcStack_14
#undef iStack_10
#undef uStack_c
#undef uStack_8
#undef auStack_4
}
