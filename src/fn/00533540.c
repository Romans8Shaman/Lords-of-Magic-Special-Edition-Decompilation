/* Rebuilt from lomse.exe op_testvisit @ 0x00533540 (757 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00556168 (*(undefined *)0x00556168)
#define DAT_0055e438 (*(undefined *)0x0055e438)
#define DAT_00574470 (*(undefined *)0x00574470)
#define DAT_00574474 (*(undefined1 *)0x00574474)
#define DAT_00574478 (*(undefined1 *)0x00574478)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae9c4 (*(int *)0x005ae9c4)
#define DAT_005ae9c8 (*(int *)0x005ae9c8)
#define DAT_005aef04 (*(undefined4 *)0x005aef04)
#define DAT_005aef10 (*(int *)0x005aef10)
#define DAT_005af0bc (*(int *)0x005af0bc)
#define DAT_005d3830 (*(undefined4 *)0x005d3830)
#define DAT_005d3834 (*(int *)0x005d3834)
#define DAT_005d3838 (*(int *)0x005d3838)
#define FID_conflict__fwprintf ((int (__cdecl *)(FILE *, wchar_t *, ...))0x00539580)
#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_004c6660 ((undefined4 (__fastcall *)(int *))0x004c6660)
#define FUN_00531b20 ((undefined4 (__thiscall *)(void *, int))0x00531b20)
#define FUN_00531c70 ((undefined4 (__thiscall *)(void *, int))0x00531c70)
#define FUN_00531fb0 ((uint (__thiscall *)(void *, uint, int))0x00531fb0)
#define FUN_005394d0 ((undefined4 (__cdecl *)(int *))0x005394d0)
#define FUN_00539610 ((undefined4 (__cdecl *)(LPCSTR, char *))0x00539610)
#define FUN_0053a090 ((int (__cdecl *)(undefined1 *, ...))0x0053a090)
#define GetTickCount (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d0e8) /* KERNEL32.DLL!GetTickCount via IAT */
#define GetTickCount_exref ((void *)*(unsigned *)0x0054d0e8) /* IAT value of GetTickCount */
#define s_Time_to_calculate___d_00574440 (*(char (*)[])0x00574440)
#define s_Time_to_set_cost___d_00574458 (*(char (*)[])0x00574458)
#define s_Time_to_write___d_0057442c (*(char (*)[])0x0057442c)
#define s_VISITEST_TXT_0057447c (*(char (*)[])0x0057447c)

#define LOM_SELF_00533540 1
void __cdecl rb_00533540(void *vm)

{
  char cVar1;
  FILE *_File;
  DWORD DVar2;
  int iVar3;
  uint uVar4;
  DWORD DVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  code *pcVar12;
  bool bVar13;
  uchar _fr[0x258] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_24c;
  typedef int _t_iStack_248;
  typedef int _t_iStack_244;
  typedef int _t_iStack_240;
  FILE *pFStack_23c;
  typedef int _t_iStack_238;
  DWORD DStack_234;
  DWORD DStack_230;
  DWORD DStack_22c;
  typedef char _t_acStack_228[52];
  typedef char _t_acStack_1f4[500];
#define iStack_24c (*(_t_iStack_24c *)(_fr + 0x4))
#define iStack_248 (*(_t_iStack_248 *)(_fr + 0x8))
#define iStack_244 (*(_t_iStack_244 *)(_fr + 0xc))
#define iStack_240 (*(_t_iStack_240 *)(_fr + 0x10))
#define iStack_238 (*(_t_iStack_238 *)(_fr + 0x18))
#define acStack_228 (*(_t_acStack_228 *)(_fr + 0x28))
#define acStack_1f4 (*(_t_acStack_1f4 *)(_fr + 0x5c))
  
  iVar3 = FUN_0041be40(vm,&iStack_248);
  iStack_24c = DAT_005ae9c8;
  iVar7 = DAT_005ae9c4;
  if (iVar3 != 0) {
    iVar3 = DAT_005ae9c8 * DAT_005ae9c4;
    iStack_240 = DAT_005ae9c4;
    if (DAT_005d3838 != iVar3) {
      FUN_00531b20(&DAT_005d3830,iVar3);
    }
    DStack_22c = GetTickCount();
    pFStack_23c = (FILE *)FUN_00539610(s_VISITEST_TXT_0057447c,&DAT_00556168);
    uVar8 = 0;
    if (0 < iVar3) {
      iVar7 = 0;
      do {
        uVar4 = *(uint *)(iStack_248 + 0x54);
        iVar6 = *(int *)(iStack_248 + 0x1c);
        if ((uVar4 & 0x100000) == 0) {
          if (((uVar4 & 0x40000) == 0) || ((uVar4 & 0x80000) == 0)) {
            if ((uVar4 & 0x40000) == 0) {
              if ((uVar4 & 0x80000) != 0) {
                if (DAT_005af0bc == 0) {
                  FUN_004c6660(&DAT_005aef04);
                }
                if ((((-1 < iVar6) && (-1 < iVar7)) && (iVar6 < DAT_005aef10)) &&
                   ((int)uVar8 < DAT_005aef10)) {
                  bVar13 = *(short *)(DAT_005aef04 + 4 + iVar6 * 6) ==
                           *(short *)(DAT_005aef04 + 4 + iVar7);
                  goto LAB_00533686;
                }
              }
            }
            else {
              if (DAT_005af0bc == 0) {
                FUN_004c6660(&DAT_005aef04);
              }
              if (((-1 < iVar6) && (-1 < iVar7)) &&
                 ((iVar6 < DAT_005aef10 && ((int)uVar8 < DAT_005aef10)))) {
                bVar13 = *(short *)(DAT_005aef04 + 2 + iVar6 * 6) ==
                         *(short *)(DAT_005aef04 + 2 + iVar7);
                goto LAB_00533686;
              }
            }
            bVar13 = false;
          }
          else {
            bVar13 = true;
          }
        }
        else {
          bVar13 = true;
        }
LAB_00533686:
        if (bVar13) {
          uVar4 = FUN_00531fb0(&DAT_005ae958,uVar8,iStack_248);
          *(uint *)(DAT_005d3834 + uVar8 * 4) = uVar4;
        }
        else {
          *(undefined4 *)(DAT_005d3834 + uVar8 * 4) = 0x7fffffff;
        }
        uVar8 = uVar8 + 1;
        iVar7 = iVar7 + 6;
      } while ((int)uVar8 < iVar3);
      iVar7 = iStack_240;
    }
    pcVar12 = GetTickCount_exref;
    DVar5 = GetTickCount();
    DStack_230 = DVar5;
    FUN_00531c70(&DAT_005d3830,*(int *)(iStack_248 + 0x1c));
    DStack_234 = GetTickCount();
    if (0 < iStack_24c) {
      iStack_238 = iVar7 * 4;
      iStack_244 = 0;
      do {
        acStack_1f4[0] = '\0';
        if (0 < iVar7) {
          iVar3 = iStack_244;
          do {
            uVar8 = *(uint *)(DAT_005d3830 + iVar3);
            if (uVar8 == 0x7fffffff) {
              pcVar9 = &DAT_00574478;
            }
            else if (uVar8 == 0x7ffffffe) {
              pcVar9 = &DAT_00574474;
            }
            else {
              if (999 < (int)uVar8) {
                uVar8 = 999;
              }
              FUN_0053a090(acStack_228,&DAT_00574470,uVar8);
              pcVar9 = acStack_228;
            }
            uVar8 = 0xffffffff;
            do {
              pcVar11 = pcVar9;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pcVar11 = pcVar9 + 1;
              cVar1 = *pcVar9;
              pcVar9 = pcVar11;
            } while (cVar1 != '\0');
            uVar8 = ~uVar8;
            iVar3 = iVar3 + 4;
            iVar6 = -1;
            pcVar9 = acStack_1f4;
            do {
              pcVar10 = pcVar9;
              if (iVar6 == 0) break;
              iVar6 = iVar6 + -1;
              pcVar10 = pcVar9 + 1;
              cVar1 = *pcVar9;
              pcVar9 = pcVar10;
            } while (cVar1 != '\0');
            pcVar9 = pcVar11 + -uVar8;
            pcVar11 = pcVar10 + -1;
            for (uVar4 = uVar8 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
              pcVar9 = pcVar9 + 4;
              pcVar11 = pcVar11 + 4;
            }
            iVar7 = iVar7 + -1;
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pcVar11 = *pcVar9;
              pcVar9 = pcVar9 + 1;
              pcVar11 = pcVar11 + 1;
            }
          } while (iVar7 != 0);
          iVar7 = iStack_240;
        }
        FID_conflict__fwprintf(pFStack_23c,(wchar_t *)&DAT_0055e438,acStack_1f4);
        iStack_244 = iStack_244 + iStack_238;
        iStack_24c = iStack_24c + -1;
      } while (iStack_24c != 0);
      DVar5 = DStack_230;
      pcVar12 = GetTickCount_exref;
    }
    iVar7 = ((undefined4 (__stdcall *)(void))(*pcVar12))();
    _File = pFStack_23c;
    FID_conflict__fwprintf
              (pFStack_23c,(wchar_t *)s_Time_to_set_cost___d_00574458,DVar5 - DStack_22c);
    DVar2 = DStack_234;
    FID_conflict__fwprintf(_File,(wchar_t *)s_Time_to_calculate___d_00574440,DStack_234 - DVar5);
    FID_conflict__fwprintf(_File,(wchar_t *)s_Time_to_write___d_0057442c,iVar7 - DVar2);
    FUN_005394d0((int *)_File);
  }
  return;
#undef iStack_24c
#undef iStack_248
#undef iStack_244
#undef iStack_240
#undef iStack_238
#undef acStack_228
#undef acStack_1f4
}
