/* Rebuilt from lomse.exe FUN_0053ce30 @ 0x0053ce30 (187 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d59f4 (*(int *)0x005d59f4)
#define DAT_005d6a00 (*(int *)0x005d6a00)
#define FUN_0053cbb0 ((undefined4 (__cdecl *)(int))0x0053cbb0)
#define FUN_0053cc30 ((undefined4 (__cdecl *)(int))0x0053cc30)
#define FUN_0053cc90 ((undefined4 (__cdecl *)(int, int))0x0053cc90)
#define FUN_0053cd00 ((undefined4 (__cdecl *)(int, int))0x0053cd00)
#define FUN_0053cd70 ((int (__cdecl *)(int *))0x0053cd70)

#define LOM_SELF_0053ce30 1
int __cdecl rb_0053ce30(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_4;
#define iStack_4 (*(_t_iStack_4 *)(_fr + 0x4))
  
  iVar4 = 0;
  iStack_4 = 0;
  iVar3 = 0;
  FUN_0053cbb0(2);
  if (0 < DAT_005d6a00) {
    do {
      iVar2 = *(int *)(DAT_005d59f4 + iVar4 * 4);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
        FUN_0053cc90(iVar4,iVar2);
        piVar1 = *(int **)(DAT_005d59f4 + iVar4 * 4);
        if ((piVar1[3] & 0x83U) != 0) {
          if (param_1 == 1) {
            iVar2 = FUN_0053cd70(piVar1);
            if (iVar2 != -1) {
              iStack_4 = iStack_4 + 1;
            }
          }
          else if (((param_1 == 0) && ((piVar1[3] & 2U) != 0)) &&
                  (iVar2 = FUN_0053cd70(piVar1), iVar2 == -1)) {
            iVar3 = -1;
          }
        }
        FUN_0053cd00(iVar4,*(int *)(DAT_005d59f4 + iVar4 * 4));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_005d6a00);
  }
  FUN_0053cc30(2);
  if (param_1 != 1) {
    iStack_4 = iVar3;
  }
  return iStack_4;
#undef iStack_4
}
