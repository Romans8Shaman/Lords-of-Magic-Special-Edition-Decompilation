/* HAND-WRITTEN: save: FUN_004f6a80(this, f); write(int 0x44); write(this+0x4c, 0x44); write(this+0x90, 4); write(has = this->+0x48 != 0);
 * if (this->+0x48) obj->vt[0x20](obj, f); write(this+0x44, 4); return 1.  (FUN_00539660 = fwrite(buf, size, count, f)) */
#include "lom.h"
#define FUN_004f6a80 ((uint (__thiscall *)(void *, int))0x004f6a80)
#define FUN_00539660 ((uint (__cdecl *)(void *, uint, uint, int))0x00539660)
#define LOM_SELF_0043d000 1
int __thiscall rb_0043d000(void *this, int param_1)
{
  int v, has;
  void *o;
  FUN_004f6a80(this, param_1);
  v = 0x44;
  FUN_00539660(&v, 4, 1, param_1);
  FUN_00539660((void *)((int)this + 0x4c), 0x44, 1, param_1);
  FUN_00539660((void *)((int)this + 0x90), 4, 1, param_1);
  has = *(int *)((int)this + 0x48) != 0;
  FUN_00539660(&has, 4, 1, param_1);
  o = *(void **)((int)this + 0x48);
  if (o != 0) (*(void (__thiscall **)(void *, int))(*(int *)o + 0x20))(o, param_1);
  FUN_00539660((void *)((int)this + 0x44), 4, 1, param_1);
  return 1;
}
