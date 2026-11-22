/* HAND-WRITTEN: save: FUN_004f6a80(this, f); write(0x2fc as int); write(this+0x48, 0x2fc bytes); write(has = this->+0x44 != 0);
 * if (has) this->+0x44->vt[0x20](obj, f); FUN_00452f30(this, f); return 1.  (FUN_00539660 = fwrite(buf, size, count, f)) */
#include "lom.h"
#define FUN_004f6a80 ((uint (__thiscall *)(void *, int))0x004f6a80)
#define FUN_00539660 ((uint (__cdecl *)(void *, uint, uint, int))0x00539660)
#define FUN_00452f30 ((uint (__cdecl *)(void *, int))0x00452f30)
#define LOM_SELF_00451610 1
int __thiscall rb_00451610(void *this, int param_1)
{
  int v, has;
  FUN_004f6a80(this, param_1);
  v = 0x2fc;
  FUN_00539660(&v, 4, 1, param_1);
  FUN_00539660((void *)((int)this + 0x48), 0x2fc, 1, param_1);
  has = *(int *)((int)this + 0x44) != 0;
  FUN_00539660(&has, 4, 1, param_1);
  if (has != 0) {
    void *o = *(void **)((int)this + 0x44);
    (*(void (__thiscall **)(void *, int))(*(int *)o + 0x20))(o, param_1);
  }
  FUN_00452f30(this, param_1);
  return 1;
}
