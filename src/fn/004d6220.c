/* Rebuilt from lomse.exe FUN_004d6220 @ 0x004d6220 (__thiscall).
 * HAND-WRITTEN: Ghidra's extraout_var (upper EAX bytes of the bool callee) -> return the callee's full EAX. */
#include "lom.h"

#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d63f0_EAX ((undefined4 (__stdcall *)(void *, uint, undefined4, undefined4))0x004d63f0) /* bool in AL; caller returns all of EAX */
#define s_invalid_data_id_00555b78 (*(char (*)[])0x00555b78)

#define LOM_SELF_004d6220 1
undefined4 __thiscall rb_004d6220(void *this,void *param_1,int param_2,undefined4 param_3)

{
  if ((param_2 < 0) || (*(int *)((int)this + 4) <= param_2)) {
    FUN_004d41c0(param_1,s_invalid_data_id_00555b78);
    return 0;
  }
  return FUN_004d63f0_EAX(param_1,*(uint *)(*(int *)this + param_2 * 8),
                          *(undefined4 *)(*(int *)this + 4 + param_2 * 8),param_3);
}
