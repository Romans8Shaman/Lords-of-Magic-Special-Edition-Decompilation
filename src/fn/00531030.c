/* Rebuilt from lomse.exe FUN_00531030 @ 0x00531030 (225 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0058516c (*(int * *)0x0058516c)
#define DAT_00585170 (*(undefined4 *)0x00585170)
#define DAT_0058517c (*(int * *)0x0058517c)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00504b80 ((undefined4 (__fastcall *)(int))0x00504b80)
#define FUN_00504c30 ((undefined4 (__fastcall *)(int))0x00504c30)
#define FUN_0053bce0 ((undefined4 (__cdecl *)(undefined *))0x0053bce0)
#define Ordinal_18 (*(__typeof__(undefined4 (__stdcall *)(undefined4)) *)0x0054d364) /* SMACKW32.DLL!Ordinal_18 via IAT */

#define LOM_SELF_00531030 1

/* v1.5: if a non-16-bpp real primary was stashed at object+0x900, Blt-convert
 * the 16-bit fake primary at +0x684 onto it (DirectDraw format conversion). */
static void v15_flush_primary(int obj)
{
  int *real;
  int *fake;
  int rect[4];
  int hr;
  real = *(int **)(obj + 0x900);
  fake = *(int **)(obj + 0x684);
  if ((real == (int *)0x0) || (fake == (int *)0x0)) {
    return;
  }
  rect[0] = 0;
  rect[1] = 0;
  rect[2] = 0x280;
  rect[3] = 0x1e0;
  hr = ((int (__stdcall *)(int *, int *, int *, int, unsigned int, int))(**(code **)(*real + 0x14)))
              (real,rect,fake,0,0x1000000,0);
  if (hr == -0x7789fe3e) {
    ((int (__stdcall *)(int *))(**(code **)(*real + 0x6c)))(real);
    ((int (__stdcall *)(int *))(**(code **)(*fake + 0x6c)))(fake);
    ((int (__stdcall *)(int *, int *, int *, int, unsigned int, int))(**(code **)(*real + 0x14)))
              (real,rect,fake,0,0x1000000,0);
  }
}

void __fastcall rb_00531030(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  
  if (param_1[1] != 0) {
    Ordinal_18(*param_1);
    *param_1 = 0;
    FUN_0053bce0((undefined *)param_1[2]);
    iVar1 = param_1[0x8c];
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[0x89] = 1;
    pvVar3 = DAT_005a7b78;
    if (-1 < iVar1) {
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar3);
        *(undefined4 *)((int)pvVar3 + 0x90) = 0;
        *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
      }
      else {
        iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
        iVar2 = *(int *)((int)pvVar3 + 0x50);
        *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
        *(int *)(iVar2 + 4 + iVar4 * 8) = iVar1;
      }
      FUN_004d05e0(DAT_005a7b78,param_1[0x8a],(int *)param_1[0x8b]);
    }
    if (param_1[0x89] == 0) {
      FUN_00504b80(0x584ae8);
      FUN_00504c30(0x584ae8);
      ((undefined4 (__stdcall *)(__typeof__(DAT_0058516c), __typeof__(0), __typeof__(0), __typeof__(DAT_00585170), __typeof__(0), __typeof__(0)))(**(code **)(*DAT_0058516c + 0x1c)))(DAT_0058516c,0,0,DAT_00585170,0,0);
      v15_flush_primary(0x584ae8);
      if (DAT_0058517c != (int *)0x0) {
        ((undefined4 (__stdcall *)(__typeof__(DAT_0058517c)))(**(code **)(*DAT_0058517c + 8)))(DAT_0058517c);
        DAT_0058517c = (int *)0x0;
      }
    }
  }
  return;
}
