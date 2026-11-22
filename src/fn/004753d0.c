/* Rebuilt from lomse.exe FUN_004753d0 @ 0x004753d0 (236 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d2ca0 (*(int *)0x005d2ca0)
#define FUN_00471950 ((undefined4 (__fastcall *)(int *))0x00471950)
#define FUN_00472260 ((undefined4 (__fastcall *)(int))0x00472260)
#define FUN_00474ad0 ((undefined4 (__fastcall *)(int))0x00474ad0)
#define FUN_00475360 ((undefined4 (__fastcall *)(int))0x00475360)
#define FUN_004c9810 ((undefined4 (__fastcall *)(undefined4 *))0x004c9810)

#define LOM_SELF_004753d0 1

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

void __fastcall rb_004753d0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (((*(int *)(param_1 + 0x2be4) == 0) && (*(int *)(param_1 + 0x22ff4) != 0)) &&
     (DAT_005d2ca0 == 0)) {
    iVar2 = FUN_004c9810((undefined4 *)(param_1 + 0x278));
    if (*(int *)(param_1 + 0x684) != 0) {
      piVar1 = (int *)(param_1 + 0x2531c);
      if (iVar2 == 0) {
        FUN_00471950(piVar1);
      }
      else {
        FUN_00474ad0((int)piVar1);
      }
      if (*(int *)(param_1 + 0x4d5cc) != 0) {
        ((undefined4 (__stdcall *)(__typeof__(*(int **)(param_1 + 0x680)), __typeof__(1), __typeof__(0)))(**(code **)(**(int **)(param_1 + 0x680) + 0x58)))(*(int **)(param_1 + 0x680),1,0);
      }
      iVar3 = ((undefined4 (__stdcall *)(__typeof__(*(int **)(param_1 + 0x684)), __typeof__(0), __typeof__(0), __typeof__(*(undefined4 *)(param_1 + 0x688)), __typeof__(0), __typeof__(0)))(**(code **)(**(int **)(param_1 + 0x684) + 0x1c)))
                        (*(int **)(param_1 + 0x684),0,0,*(undefined4 *)(param_1 + 0x688),0,0);
      if (iVar3 == -0x7789fe3e) {
        FUN_00475360(param_1);
        ((undefined4 (__stdcall *)(__typeof__(*(int **)(param_1 + 0x684)), __typeof__(0), __typeof__(0), __typeof__(*(undefined4 *)(param_1 + 0x688)), __typeof__(0), __typeof__(0)))(**(code **)(**(int **)(param_1 + 0x684) + 0x1c)))
                  (*(int **)(param_1 + 0x684),0,0,*(undefined4 *)(param_1 + 0x688),0,0);
      }
      if (iVar2 == 0) {
        FUN_00472260((int)piVar1);
      }
      *(undefined4 *)(param_1 + 0x22f08) = 0;
      *(undefined4 *)(param_1 + 0x22f10) = 0;
      *(undefined4 *)(param_1 + 0x22f14) = 0;
      v15_flush_primary(param_1);
    }
  }
  return;
}
