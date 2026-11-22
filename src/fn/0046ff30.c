/* HAND-WRITTEN: DAT_00583258 = -1; DAT_0058325c = 0; Ordinal_103(LAB_0046fd80) (storm callback enum);
 * if (DAT_00583258 >= 0 && FUN_0046fe60(this, DAT_00583258)) return this->vt[8](this, param_1); return 0. */
#include "lom.h"
#define DAT_00583258 (*(int *)0x00583258)
#define DAT_0058325c (*(int *)0x0058325c)
#define Ordinal_103 ((undefined4 (__stdcall *)(undefined4))0x00533882) /* thunk -> STORM.DLL!Ordinal_103 */
#define FUN_0046fe60 ((int (__thiscall *)(void *, int))0x0046fe60)
#define LOM_SELF_0046ff30 1
int __thiscall rb_0046ff30(void *this, int param_1)
{
  int r = 0;
  DAT_00583258 = -1;
  DAT_0058325c = 0;
  Ordinal_103(0x46fd80);
  if (DAT_00583258 >= 0 && FUN_0046fe60(this, DAT_00583258) != 0)
    r = (*(int (__thiscall **)(void *, int))(*(int *)this + 8))(this, param_1);
  return r;
}
