/* Rebuilt from lomse.exe FUN_0053cff0 @ 0x0053cff0 (2172 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0054ef28 (*(undefined *)0x0054ef28)
#define FUN_0053d980 ((undefined4 (__cdecl *)(uint, int *, int *))0x0053d980)
#define FUN_0053d9d0 ((undefined4 (__cdecl *)(uint, int, int *, int *))0x0053d9d0)
#define FUN_0053da10 ((undefined4 (__cdecl *)(char *, int, int *, int *))0x0053da10)
#define FUN_0053da50 ((undefined4 (__cdecl *)(int *))0x0053da50)
#define FUN_0053da70 ((undefined8 (__cdecl *)(int *))0x0053da70)
#define FUN_0053da90 ((undefined4 (__cdecl *)(undefined4 *))0x0053da90)
#define FUN_00544810 ((int (__cdecl *)(LPSTR, WCHAR))0x00544810)
#define PTR_DAT_00574a40 (*(undefined * *)0x00574a40)
#define PTR_DAT_00574a44 (*(undefined * *)0x00574a44)
#define PTR_DAT_00574e88 (*(undefined * *)0x00574e88)
#define PTR_FUN_00574968 (*(undefined * *)0x00574968)  /* _cfltcvt; vanilla call is cdecl (add esp,0x14), not stdcall */
#define PTR_FUN_0057496c (*(undefined * *)0x0057496c)
#define PTR_FUN_00574974 (*(undefined * *)0x00574974)
#define __aulldiv ((undefined8 (__stdcall *)(uint, uint, uint, uint))0x00544900)
#define __aullrem ((undefined8 (__stdcall *)(uint, uint, uint, uint))0x00544970)

#define LOM_SELF_0053cff0 1
int __cdecl rb_0053cff0(int *param_1, char *param_2, uint *volatile param_3)

{
  WCHAR WVar1;
  uint uVar2;
  short *psVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  char cVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  WCHAR *pWVar10;
  char *pcVar11;
  int iVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  longlong lVar15;
  uint uVar16;
  uchar _fr[0x258] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_24c;
  typedef WCHAR * _t_local_248;
  typedef int _t_local_244;
  typedef int _t_local_240;
  typedef char _t_local_23a[2];
  typedef int _t_local_238;
  typedef int _t_local_234;
  typedef int _t_local_230;
  typedef uint _t_local_22c;
  typedef int _t_local_228;
  typedef int _t_local_224;
  typedef int _t_local_220;
  typedef uint _t_local_21c;
  typedef undefined4 _t_local_218;
  typedef CHAR _t_local_214[4];
  typedef uint _t_local_210[4];
  typedef undefined1 _t_local_200[511];
  typedef undefined1 _t_uStack_1;
#define local_24c (*(_t_local_24c *)(_fr + 0x4))
#define local_248 (*(_t_local_248 *)(_fr + 0x8))
#define local_244 (*(_t_local_244 *)(_fr + 0xc))
#define local_240 (*(_t_local_240 *)(_fr + 0x10))
#define local_23a (*(_t_local_23a *)(_fr + 0x16))
#define local_238 (*(_t_local_238 *)(_fr + 0x18))
#define local_234 (*(_t_local_234 *)(_fr + 0x1c))
#define local_230 (*(_t_local_230 *)(_fr + 0x20))
#define local_22c (*(_t_local_22c *)(_fr + 0x24))
#define local_228 (*(_t_local_228 *)(_fr + 0x28))
#define local_224 (*(_t_local_224 *)(_fr + 0x2c))
#define local_220 (*(_t_local_220 *)(_fr + 0x30))
#define local_21c (*(_t_local_21c *)(_fr + 0x34))
#define local_218 (*(_t_local_218 *)(_fr + 0x38))
#define local_214 (*(_t_local_214 *)(_fr + 0x3c))
#define local_210 (*(_t_local_210 *)(_fr + 0x40))
#define local_200 (*(_t_local_200 *)(_fr + 0x50))
#define uStack_1 (*(_t_uStack_1 *)(_fr + 0x24f))
  
  local_220 = 0;
  puVar9 = (undefined1 *)0x0;
  local_240 = 0;
  cVar7 = *param_2;
  local_21c = CONCAT31(((uint)((uchar *)&local_21c + 1)[0] | (uint)((uchar *)&local_21c + 1)[1] << 8 | (uint)((uchar *)&local_21c + 1)[2] << 16),cVar7);
  if (cVar7 != '\0') {
    pcVar11 = param_2;
    while (param_2 = pcVar11 + 1, -1 < local_240) {
      if ((cVar7 < ' ') || ('x' < cVar7)) {
        uVar2 = 0;
      }
      else {
        uVar2 = (byte)((char *)0x0054eeef)[cVar7 + 0x19] & 0xf;
      }
      local_220 = (int)(char)(&DAT_0054ef28)[uVar2 * 8 + local_220] >> 4;
      switch(local_220) {
      case 0:
switchD_0053d06d_caseD_0:
        local_230 = 0;
        if ((PTR_DAT_00574e88[(local_21c & 0xff) * 2 + 1] & 0x80) != 0) {
          FUN_0053d980((int)cVar7,param_1,&local_240);
          cVar7 = *param_2;
          param_2 = pcVar11 + 2;
        }
        FUN_0053d980((int)cVar7,param_1,&local_240);
        break;
      case 1:
        local_218 = 0;
        local_228 = 0;
        local_234 = 0;
        local_238 = 0;
        local_24c = 0;
        local_244 = -1;
        local_230 = 0;
        break;
      case 2:
        switch(cVar7) {
        case ' ':
          local_24c = local_24c | 2;
          break;
        case '#':
          local_24c = local_24c | 0x80;
          break;
        case '+':
          local_24c = local_24c | 1;
          break;
        case '-':
          local_24c = local_24c | 4;
          break;
        case '0':
          local_24c = local_24c | 8;
        }
        break;
      case 3:
        if (cVar7 == '*') {
          local_234 = FUN_0053da50((int *)&param_3);
          if (local_234 < 0) {
            local_24c = local_24c | 4;
            local_234 = -local_234;
          }
        }
        else {
          local_234 = cVar7 + -0x30 + local_234 * 10;
        }
        break;
      case 4:
        local_244 = 0;
        break;
      case 5:
        if (cVar7 == '*') {
          local_244 = FUN_0053da50((int *)&param_3);
          if (local_244 < 0) {
            local_244 = -1;
          }
        }
        else {
          local_244 = cVar7 + -0x30 + local_244 * 10;
        }
        break;
      case 6:
        switch(cVar7) {
        case 'I':
          if ((*param_2 != '6') || (pcVar11[2] != '4')) {
            local_220 = 0;
            goto switchD_0053d06d_caseD_0;
          }
          param_2 = pcVar11 + 3;
          local_24c = local_24c | 0x8000;
          break;
        case 'h':
          local_24c = local_24c | 0x20;
          break;
        case 'l':
          local_24c = local_24c | 0x10;
          break;
        case 'w':
          local_24c = local_24c | 0x800;
        }
        break;
      case 7:
        pWVar10 = local_248;
        switch(cVar7) {
        case 'C':
          if ((local_24c & 0x830) == 0) {
            local_24c = local_24c | 0x800;
          }
        case 'c':
          if ((local_24c & 0x810) == 0) {
            uVar5 = FUN_0053da50((int *)&param_3);
            local_200[0] = (char)uVar5;
            puVar9 = (undefined1 *)0x1;
          }
          else {
            uVar5 = FUN_0053da90(&param_3);
            puVar9 = (undefined1 *)FUN_00544810(local_200,(WCHAR)uVar5);
            if ((int)puVar9 < 0) {
              local_228 = 1;
              pWVar10 = (WCHAR *)local_200;
              break;
            }
          }
          pWVar10 = (WCHAR *)local_200;
          break;
        case 'E':
        case 'G':
          local_218 = 1;
          cVar7 = cVar7 + ' ';
        case 'e':
        case 'f':
        case 'g':
          local_248 = (WCHAR *)local_200;
          if (local_244 < 0) {
            local_244 = 6;
          }
          else if ((local_244 == 0) && (cVar7 == 'g')) {
            local_244 = 1;
          }
          local_210[0] = *param_3;
          local_210[1] = param_3[1];
          param_3 = param_3 + 2;
          ((undefined4 (__cdecl *)(__typeof__(local_210), __typeof__(local_200), __typeof__((int)cVar7), __typeof__(local_244), __typeof__(local_218)))(*(code *)PTR_FUN_00574968))(local_210,local_200,(int)cVar7,local_244,local_218);
          if (((local_24c & 0x80) != 0) && (local_244 == 0)) {
            ((undefined4 (__cdecl *)(__typeof__(local_200)))(*(code *)PTR_FUN_00574974))(local_200);
          }
          if ((cVar7 == 'g') && ((local_24c & 0x80) == 0)) {
            ((undefined4 (__cdecl *)(__typeof__(local_200)))(*(code *)PTR_FUN_0057496c))(local_200);
          }
          uVar2 = local_24c | 0x40;
          if (local_200[0] == '-') {
            local_248 = (WCHAR *)(local_200 + 1);
            uVar2 = local_24c | 0x140;
          }
          local_24c = uVar2;
          uVar2 = 0xffffffff;
          pWVar10 = local_248;
          do {
            if (uVar2 == 0) break;
            uVar2 = uVar2 - 1;
            WVar1 = *pWVar10;
            pWVar10 = (WCHAR *)((int)pWVar10 + 1);
          } while ((char)WVar1 != '\0');
          puVar9 = (undefined1 *)(~uVar2 - 1);
          pWVar10 = local_248;
          break;
        case 'S':
          if ((local_24c & 0x830) == 0) {
            local_24c = local_24c | 0x800;
          }
        case 's':
          iVar12 = 0x7fffffff;
          if (local_244 != -1) {
            iVar12 = local_244;
          }
          local_248 = (WCHAR *)FUN_0053da50((int *)&param_3);
          if ((local_24c & 0x810) == 0) {
            pWVar10 = local_248;
            if (local_248 == (WCHAR *)0x0) {
              local_248 = (WCHAR *)PTR_DAT_00574a40;
              pWVar10 = (WCHAR *)PTR_DAT_00574a40;
            }
            for (; (iVar12 != 0 && (iVar12 = iVar12 + -1, (char)*pWVar10 != '\0'));
                pWVar10 = (WCHAR *)((int)pWVar10 + 1)) {
            }
            puVar9 = (undefined1 *)((int)pWVar10 - (int)local_248);
            pWVar10 = local_248;
          }
          else {
            if (local_248 == (WCHAR *)0x0) {
              local_248 = (WCHAR *)PTR_DAT_00574a44;
            }
            local_230 = 1;
            for (pWVar10 = local_248; (iVar12 != 0 && (iVar12 = iVar12 + -1, *pWVar10 != L'\0'));
                pWVar10 = pWVar10 + 1) {
            }
            puVar9 = (undefined1 *)((int)pWVar10 - (int)local_248 >> 1);
            pWVar10 = local_248;
          }
          break;
        case 'X':
          goto switchD_0053d281_caseD_58;
        case 'Z':
          psVar3 = (short *)FUN_0053da50((int *)&param_3);
          if ((psVar3 == (short *)0x0) ||
             (pWVar10 = *(WCHAR **)(psVar3 + 2), pWVar10 == (WCHAR *)0x0)) {
            uVar2 = 0xffffffff;
            local_248 = (WCHAR *)PTR_DAT_00574a40;
            pcVar11 = PTR_DAT_00574a40;
            do {
              if (uVar2 == 0) break;
              uVar2 = uVar2 - 1;
              cVar7 = *pcVar11;
              pcVar11 = pcVar11 + 1;
            } while (cVar7 != '\0');
            puVar9 = (undefined1 *)(~uVar2 - 1);
            pWVar10 = local_248;
          }
          else if ((local_24c & 0x800) == 0) {
            puVar9 = (undefined1 *)(int)*psVar3;
            local_230 = 0;
          }
          else {
            local_230 = 1;
            puVar9 = (undefined1 *)((uint)(int)*psVar3 >> 1);
          }
          break;
        case 'd':
        case 'i':
          local_22c = 10;
          local_24c = local_24c | 0x40;
          goto LAB_0053d5b7;
        case 'n':
          piVar4 = (int *)FUN_0053da50((int *)&param_3);
          if ((local_24c & 0x20) == 0) {
            local_228 = 1;
            *piVar4 = local_240;
          }
          else {
            local_228 = 1;
            *(undefined2 *)piVar4 = (undefined2)local_240;
          }
          break;
        case 'o':
          local_22c = 8;
          if ((local_24c & 0x80) != 0) {
            local_24c = local_24c | 0x200;
          }
          goto LAB_0053d5b7;
        case 'p':
          local_244 = 8;
switchD_0053d281_caseD_58:
          local_224 = 7;
LAB_0053d572:
          local_22c = 0x10;
          if ((local_24c & 0x80) != 0) {
            local_23a[0] = '0';
            local_23a[1] = (char)local_224 + 'Q';
            local_238 = 2;
          }
          goto LAB_0053d5b7;
        case 'u':
          local_22c = 10;
LAB_0053d5b7:
          if ((local_24c & 0x8000) == 0) {
            if ((local_24c & 0x20) == 0) {
              if ((local_24c & 0x40) == 0) {
                uVar2 = FUN_0053da50((int *)&param_3);
                uVar13 = (ulonglong)uVar2;
              }
              else {
                iVar12 = FUN_0053da50((int *)&param_3);
                uVar13 = (ulonglong)iVar12;
              }
            }
            else if ((local_24c & 0x40) == 0) {
              uVar2 = FUN_0053da50((int *)&param_3);
              uVar13 = (ulonglong)uVar2 & 0xffffffff0000ffff;
            }
            else {
              uVar5 = FUN_0053da50((int *)&param_3);
              uVar13 = (ulonglong)(int)(short)uVar5;
            }
          }
          else {
            uVar13 = FUN_0053da70((int *)&param_3);
          }
          iVar12 = (int)(uVar13 >> 0x20);
          if ((((local_24c & 0x40) != 0) && (iVar12 == 0 || (longlong)uVar13 < 0)) &&
             ((longlong)uVar13 < 0)) {
            local_24c = local_24c | 0x100;
            uVar13 = CONCAT44(-(iVar12 + (uint)((int)uVar13 != 0)),-(int)uVar13);
          }
          iVar12 = (int)(uVar13 >> 0x20);
          if ((local_24c & 0x8000) == 0) {
            iVar12 = 0;
          }
          lVar15 = CONCAT44(iVar12,(int)uVar13);
          if (local_244 < 0) {
            local_244 = 1;
          }
          else {
            local_24c = local_24c & 0xfffffff7;
          }
          if ((int)uVar13 == 0 && iVar12 == 0) {
            local_238 = 0;
          }
          iVar12 = local_244;
          pWVar10 = ((int)(_fr + 0x250));
          while( true ) {
            uVar2 = local_22c;
            local_248 = (WCHAR *)((int)pWVar10 + -1);
            local_244 = iVar12 + -1;
            if ((iVar12 < 1) && (lVar15 == 0)) break;
            local_210[3] = (int)local_22c >> 0x1f;
            uVar16 = (uint)((ulonglong)lVar15 >> 0x20);
            uVar14 = __aullrem((uint)lVar15,uVar16,local_22c,local_210[3]);
            iVar12 = (int)uVar14 + 0x30;
            lVar15 = __aulldiv((uint)lVar15,uVar16,uVar2,local_210[3]);
            if (0x39 < iVar12) {
              iVar12 = iVar12 + local_224;
            }
            *(char *)local_248 = (char)iVar12;
            iVar12 = local_244;
            pWVar10 = local_248;
          }
          puVar9 = local_200 + -(int)local_248 + 0x1ff;
          if (((local_24c & 0x200) != 0) &&
             (((char)*pWVar10 != '0' || (puVar9 == (undefined1 *)0x0)))) {
            puVar9 = (undefined1 *)(((int)(_fr + 0x250)) + -(int)local_248);
            *(char *)local_248 = '0';
            pWVar10 = local_248;
          }
          break;
        case 'x':
          local_224 = 0x27;
          goto LAB_0053d572;
        }
        local_248 = pWVar10;
        if (local_228 == 0) {
          if ((local_24c & 0x40) != 0) {
            if ((local_24c & 0x100) == 0) {
              if ((local_24c & 1) == 0) {
                if ((local_24c & 2) == 0) goto LAB_0053d74f;
                local_23a[0] = ' ';
              }
              else {
                local_23a[0] = '+';
              }
            }
            else {
              local_23a[0] = '-';
            }
            local_238 = 1;
          }
LAB_0053d74f:
          iVar12 = (local_234 - (int)puVar9) - local_238;
          if ((local_24c & 0xc) == 0) {
            FUN_0053d9d0(0x20,iVar12,param_1,&local_240);
          }
          FUN_0053da10(local_23a,local_238,param_1,&local_240);
          if (((local_24c & 8) != 0) && ((local_24c & 4) == 0)) {
            FUN_0053d9d0(0x30,iVar12,param_1,&local_240);
          }
          if ((local_230 == 0) || ((int)puVar9 < 1)) {
            FUN_0053da10((char *)local_248,(int)puVar9,param_1,&local_240);
          }
          else {
            pWVar10 = local_248;
            puVar8 = puVar9;
            do {
              puVar8 = puVar8 + -1;
              WVar1 = *pWVar10;
              pWVar10 = pWVar10 + 1;
              iVar6 = FUN_00544810(local_214,WVar1);
              if (iVar6 < 1) break;
              FUN_0053da10(local_214,iVar6,param_1,&local_240);
            } while (puVar8 != (undefined1 *)0x0);
          }
          if ((local_24c & 4) != 0) {
            FUN_0053d9d0(0x20,iVar12,param_1,&local_240);
          }
        }
      }
      cVar7 = *param_2;
      local_21c = CONCAT31(((uint)((uchar *)&local_21c + 1)[0] | (uint)((uchar *)&local_21c + 1)[1] << 8 | (uint)((uchar *)&local_21c + 1)[2] << 16),cVar7);
      if (cVar7 == '\0') {
        return local_240;
      }
      pcVar11 = param_2;
    }
  }
  return local_240;
#undef local_24c
#undef local_248
#undef local_244
#undef local_240
#undef local_23a
#undef local_238
#undef local_234
#undef local_230
#undef local_22c
#undef local_228
#undef local_224
#undef local_220
#undef local_21c
#undef local_218
#undef local_214
#undef local_210
#undef local_200
#undef uStack_1
}
