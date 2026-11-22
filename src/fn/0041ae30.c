/* Rebuilt from lomse.exe FUN_0041ae30 @ 0x0041ae30 (91 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00521e30 ((uint (__fastcall *)(int *))0x00521e30)
#define FUN_00526000 ((float10 (__fastcall *)(int *))0x00526000)

#define LOM_SELF_0041ae30 1
float10 __fastcall rb_0041ae30(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  float10 fVar4;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  iVar3 = 0;
  local_4 = 999.9;
  if (0 < *(int *)(param_1 + 0x4c)) {
    piVar2 = (int *)(param_1 + 0xc4);
    do {
      uVar1 = FUN_00521e30(piVar2);
      if ((uVar1 != 0) &&
         (fVar4 = FUN_00526000(piVar2),
         (!__LOM_ISNAN((float10)local_4) && !__LOM_ISNAN(fVar4)) && fVar4 <= (float10)local_4)) {
        fVar4 = FUN_00526000(piVar2);
        local_4 = (float)fVar4;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 0x13;
    } while (iVar3 < *(int *)(param_1 + 0x4c));
  }
  return (float10)local_4;
#undef local_4
}
