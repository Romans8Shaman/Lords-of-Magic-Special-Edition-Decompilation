/* Rebuilt from lomse.exe FUN_00407e80 @ 0x00407e80 (327 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005787b0 (*(int *)0x005787b0)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005ae98c (*(int *)0x005ae98c)
#define DAT_005ae998 (*(int *)0x005ae998)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_00407d90 ((int (__thiscall *)(void *, undefined4 *))0x00407d90)
#define FUN_00420620 ((undefined4 (__fastcall *)(int))0x00420620)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)

#define LOM_SELF_00407e80 1
void __fastcall rb_00407e80(void *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uchar _fr[0x88] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_7c;
  typedef int _t_local_78[30];
#define iStack_7c (*(_t_iStack_7c *)(_fr + 0x4))
#define local_78 (*(_t_local_78 *)(_fr + 0x8))
  
  iVar1 = DAT_005ae98c;
  iVar2 = DAT_005ae998;
  if (((DAT_005787b0 == 0) || (*(int *)(DAT_005787b0 + 0x74) != *(int *)((int)param_1 + 0x28))) ||
     (*(char *)(DAT_005787b0 + 0x78) == '\0')) {
    for (; iVar2 <= iVar1; iVar2 = iVar2 + 1) {
      iVar4 = FUN_004f6000(&DAT_005ae974,iVar2);
      if ((((iVar4 != 0) && (*(int *)(iVar4 + 4) == 0)) &&
          ((iVar5 = FUN_00407d50(iVar4), iVar5 == 0 &&
           ((iVar5 = FUN_00420620(iVar4), iVar5 == 0 &&
            (*(int *)(iVar4 + 0x74) == *(int *)((int)param_1 + 0x28))))))) &&
         (*(char *)(iVar4 + 0x78) != '\0')) {
        iStack_7c = FUN_00407d90(param_1,local_78);
        if (iStack_7c < 1) {
          return;
        }
        piVar6 = local_78;
        do {
          uVar3 = FUN_00482ac0(&DAT_005aa12c,*piVar6,0);
          if (uVar3 != 0) {
            *(undefined4 *)(uVar3 + 0x68) = 0x15;
            *(undefined4 *)(uVar3 + 0x6c) = *(undefined4 *)(iVar4 + 0x28);
            *(undefined4 *)(uVar3 + 0x70) = 0xffffffff;
            *(byte *)(uVar3 + 0x78) = *(byte *)(uVar3 + 0x78) & 0xfc;
            *(undefined4 *)(uVar3 + 0x7c) = 0;
          }
          piVar6 = piVar6 + 1;
          iStack_7c = iStack_7c + -1;
        } while (iStack_7c != 0);
        return;
      }
    }
  }
  else {
    iVar2 = FUN_00407d90(param_1,local_78);
    if (0 < iVar2) {
      piVar6 = local_78;
      do {
        uVar3 = FUN_00482ac0(&DAT_005aa12c,*piVar6,0);
        if (uVar3 != 0) {
          *(undefined4 *)(uVar3 + 0x68) = 0x15;
          *(undefined4 *)(uVar3 + 0x6c) = *(undefined4 *)(DAT_005787b0 + 0x28);
          *(undefined4 *)(uVar3 + 0x70) = 0xffffffff;
          *(byte *)(uVar3 + 0x78) = *(byte *)(uVar3 + 0x78) & 0xfc;
          *(undefined4 *)(uVar3 + 0x7c) = 0;
        }
        piVar6 = piVar6 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      return;
    }
  }
  return;
#undef iStack_7c
#undef local_78
}
