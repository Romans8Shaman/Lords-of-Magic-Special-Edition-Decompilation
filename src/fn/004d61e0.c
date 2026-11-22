/* Rebuilt from lomse.exe FUN_004d61e0 @ 0x004d61e0 (64 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d6260 ((undefined4 (__stdcall *)(void *, int, undefined4, int))0x004d6260)
#define s_invalid_data_id_00555b78 (*(char (*)[])0x00555b78)

#define LOM_SELF_004d61e0 1
undefined4 __thiscall rb_004d61e0(void *this,void *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((param_2 < 0) || (*(int *)((int)this + 4) <= param_2)) {
    FUN_004d41c0(param_1,s_invalid_data_id_00555b78);
    return 0;
  }
  uVar1 = FUN_004d6260(param_1,*(int *)(*(int *)this + param_2 * 8),
                       *(undefined4 *)(*(int *)this + 4 + param_2 * 8),param_3);
  return uVar1;
}
