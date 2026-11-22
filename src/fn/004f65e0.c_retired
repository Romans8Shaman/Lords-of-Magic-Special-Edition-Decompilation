/* Rebuilt from lomse.exe FUN_004f65e0 @ 0x004f65e0 (78 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00483be0 ((undefined4 (__thiscall *)(void *, int *))0x00483be0)

#define LOM_SELF_004f65e0 1
void __thiscall rb_004f65e0(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((*(int *)((int)this + 8) != 0) &&
     (iVar2 = *(int *)((int)this + 0x24), iVar2 <= *(int *)((int)this + 0x18))) {
    do {
      piVar1 = *(int **)(*(int *)((int)this + 8) + iVar2 * 4);
      if ((piVar1 != (int *)0x0) && ((piVar1[1] == 7 && (piVar1[0x11] == param_1)))) {
        FUN_00483be0(&DAT_005aa12c,piVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= *(int *)((int)this + 0x18));
  }
  return;
}
