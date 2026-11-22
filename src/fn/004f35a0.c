/* Rebuilt from lomse.exe FUN_004f35a0 @ 0x004f35a0 (104 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004f32d0 ((undefined4 (__fastcall *)(void *))0x004f32d0)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_004f35a0 1
undefined4 __fastcall rb_004f35a0(void *param_1)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *(ushort *)(*(int *)((int)param_1 + 0x44) + 2);
  lVar3 = __ftol((float10)*(float *)((int)param_1 + 0x48));
  if (((uint)lVar3 & 0xffff) == uVar1 - 1) {
    *(uint *)((int)param_1 + 0x34) = *(uint *)((int)param_1 + 0x34) | 0x100;
    return 1;
  }
  iVar2 = FUN_004f32d0(param_1);
  if (iVar2 != 0) {
    *(float *)((int)param_1 + 0x48) =
         (float)(ushort)(*(short *)(*(int *)((int)param_1 + 0x44) + 2) - 1);
  }
  return (uint)(iVar2 != 0);
}
