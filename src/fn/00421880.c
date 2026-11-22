/* Rebuilt from lomse.exe FUN_00421880 @ 0x00421880 (191 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00521e00 ((int (__fastcall *)(int *))0x00521e00)
#define FUN_00522080 ((undefined4 (__thiscall *)(void *, int, undefined4, undefined4))0x00522080)

#define LOM_SELF_00421880 1
int __thiscall rb_00421880(void *this,uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_10;
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
  
  iVar3 = 0;
  local_10 = 0;
  if (0 < *(int *)((int)this + 0x4c)) {
    piVar4 = (int *)((int)this + 0xcc);
    do {
      if ((param_1 & 1 << ((byte)iVar3 & 0x1f)) != 0) {
        uVar1 = *(undefined4 *)((int)this + 0x28);
        if ((piVar4[7] & 8U) == 0) {
          iVar2 = *piVar4;
        }
        else {
          piVar4[7] = piVar4[7] & 0xfffffff7;
          iVar2 = FUN_00521e00(piVar4 + -2);
          if (iVar2 == 0) {
            *piVar4 = 1;
            iVar2 = 1;
          }
          else if (((char)*(uint *)(iVar2 + 0x104) == '\x06') &&
                  ((*(uint *)(iVar2 + 0x104) & 0x100) == 0)) {
            iVar2 = FUN_00522080(piVar4 + -2,iVar2,uVar1,iVar3);
          }
          else {
            *piVar4 = 1;
            iVar2 = 1;
          }
        }
        local_10 = local_10 + iVar2;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 0x13;
    } while (iVar3 < *(int *)((int)this + 0x4c));
  }
  return local_10;
#undef local_10
}
