/* Rebuilt from lomse.exe op_mapvirtualunits @ 0x0044d5f0 (154 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005869e8 (*(undefined *)0x005869e8)
#define DAT_005869f4 (*(int *)0x005869f4)
#define DAT_005869f8 (*(undefined4 *)0x005869f8)
#define FUN_004e7150 ((int (__fastcall *)(int *))0x004e7150)

#define LOM_SELF_0044d5f0 1
void __cdecl rb_0044d5f0(void *vm)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_8;
  typedef int * _t_piStack_4;
#define iStack_8 (*(_t_iStack_8 *)(_fr + 0x0))
#define piStack_4 (*(_t_piStack_4 *)(_fr + 0x4))
  
  puVar5 = &DAT_005869f8;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0xffffffff;
    puVar5 = puVar5 + 1;
  }
  iVar2 = 0;
  if (0 < *(int *)(DAT_005869f4 + 0x4c)) {
    iVar3 = -4;
    iStack_8 = 0;
    piStack_4 = (int *)&DAT_005869e8;
    iVar4 = 1;
    do {
      iVar1 = FUN_004e7150((int *)(iStack_8 + 0xc4 + DAT_005869f4));
      if (iVar1 == -1) {
        iVar1 = iVar4 + 1;
        (&DAT_005869f8)[iVar4 + iVar3] = iVar2;
        if ((iVar1 == 4) || (iVar1 == 8)) {
          iVar1 = iVar4 + 2;
        }
      }
      else {
        iVar1 = 1;
        piStack_4 = piStack_4 + 4;
        iVar3 = iVar3 + 4;
        *piStack_4 = iVar2;
      }
      iVar2 = iVar2 + 1;
      iStack_8 = iStack_8 + 0x4c;
      iVar4 = iVar1;
    } while (iVar2 < *(int *)(DAT_005869f4 + 0x4c));
  }
  return;
#undef iStack_8
#undef piStack_4
}
