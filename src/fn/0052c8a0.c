/* Rebuilt from lomse.exe FUN_0052c8a0 @ 0x0052c8a0 (136 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)

#define LOM_SELF_0052c8a0 1
int __fastcall rb_0052c8a0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_8;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
  
  iVar6 = 0;
  iVar5 = -1;
  local_8 = 0;
  puVar7 = (uint *)(param_1 + 0x1c);
  do {
    puVar2 = FUN_00485080(&DAT_005aa12c,puVar7[-1],0x2f);
    if (puVar2 != (undefined4 *)0x0) {
      if (0 < iVar6) {
        return -1;
      }
      iVar1 = puVar2[0x13];
      iVar6 = iVar6 + 1;
      if (iVar1 < 2) {
        iVar5 = 0;
      }
      else {
        iVar4 = 0;
        iVar3 = 0;
        if (0 < iVar1) {
          do {
            if ((*puVar7 & 1 << ((byte)iVar3 & 0x1f)) != 0) {
              iVar4 = iVar4 + 1;
              iVar5 = iVar3;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < iVar1);
        }
        if (iVar4 != 1) {
          return -1;
        }
      }
    }
    puVar7 = puVar7 + 3;
    local_8 = local_8 + 1;
    if (0x1d < local_8) {
      return iVar5;
    }
  } while( true );
#undef local_8
}
