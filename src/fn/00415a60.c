/* Rebuilt from lomse.exe FUN_00415a60 @ 0x00415a60 (165 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00427b80 ((undefined4 (__cdecl *)(int))0x00427b80)
#define FUN_00429150 ((undefined4 (__thiscall *)(void *, int, int, int, int, int))0x00429150)
#define FUN_00525fc0 ((undefined4 (__fastcall *)(int *))0x00525fc0)

#define LOM_SELF_00415a60 1
void __fastcall rb_00415a60(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  iVar4 = 0;
  local_4 = -1;
  if (0 < *(int *)(param_1 + 0x4c)) {
    piVar2 = (int *)(param_1 + 0xc4);
    do {
      iVar1 = FUN_00525fc0(piVar2);
      if (-1 < iVar1) {
        local_4 = iVar4;
        break;
      }
      iVar4 = iVar4 + 1;
      piVar2 = piVar2 + 0x13;
    } while (iVar4 < *(int *)(param_1 + 0x4c));
  }
  if ((local_4 != -1) && (iVar4 = 0, 0 < *(int *)(param_1 + 0x4c))) {
    puVar3 = (undefined4 *)(param_1 + 0xe0);
    do {
      iVar1 = FUN_00525fc0(puVar3 + -7);
      if (iVar1 < 0) {
        piVar2 = (int *)*puVar3;
        while ((piVar2 != (int *)0x0 &&
               (iVar1 = FUN_00427b80(*piVar2), (*(byte *)(iVar1 + 0x18) & 0x10) == 0))) {
          FUN_00429150(&DAT_005aa12c,*(int *)(param_1 + 0x28),iVar4,*(int *)(param_1 + 0x28),local_4
                       ,piVar2[3]);
          piVar2 = (int *)*puVar3;
        }
      }
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 0x13;
    } while (iVar4 < *(int *)(param_1 + 0x4c));
  }
  return;
#undef local_4
}
