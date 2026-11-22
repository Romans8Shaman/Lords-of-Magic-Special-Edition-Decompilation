/* Rebuilt from lomse.exe FUN_0048c7f0 @ 0x0048c7f0 (97 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd2c4 (*(undefined *)0x005cd2c4)
#define FUN_0048c2b0 ((int (__fastcall *)(int))0x0048c2b0)
#define FUN_004c4cb0 ((int (__thiscall *)(void *, int *))0x004c4cb0)
#define FUN_004c4d00 ((int (__fastcall *)(int *))0x004c4d00)
#define FUN_005262b0 ((undefined4 (__fastcall *)(undefined4 *))0x005262b0)

#define LOM_SELF_0048c7f0 1
int __stdcall rb_0048c7f0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  iVar4 = 0;
  local_4 = FUN_005262b0((undefined4 *)&DAT_005cd2c4);
  iVar1 = FUN_004c4d00((int *)&DAT_005cd2c4);
  while (0 < iVar1) {
    iVar2 = FUN_004c4cb0(&DAT_005cd2c4,&local_4);
    if (iVar2 != 0) {
      iVar3 = FUN_0048c2b0(iVar2);
      if (((iVar3 != 0) && (*(char *)(iVar2 + 7) == '\x02')) && (*(int *)(iVar3 + 4) != 0)) {
        iVar4 = iVar4 + 1;
      }
      iVar1 = iVar1 + -1;
    }
  }
  return iVar4;
#undef local_4
}
