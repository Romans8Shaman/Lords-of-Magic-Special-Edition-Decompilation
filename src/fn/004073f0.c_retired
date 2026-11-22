/* Rebuilt from lomse.exe FUN_004073f0 @ 0x004073f0 (137 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa7d4 (*(int *)0x005aa7d4)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_00405fe0 ((undefined4 (__thiscall *)(void *, int))0x00405fe0)
#define FUN_004a8a50 ((int (__thiscall *)(void *, int, int))0x004a8a50)

#define LOM_SELF_004073f0 1
int __thiscall rb_004073f0(void *this,void *param_1,int param_2)

{
  void *this_00;
  int iVar1;
  int iVar2;
  void *pvVar3;
  bool bVar4;
  
  this_00 = param_1;
  bVar4 = *(int *)((int)param_1 + 0x48) != DAT_005aa7d4;
  pvVar3 = (void *)0x0;
  iVar2 = 999999;
  param_1 = (void *)0xffffffff;
  if (0 < *(int *)((int)this + 0x68)) {
    do {
      if (((((*(uint *)(*(int *)((int)this + 100) + 4 + (int)pvVar3 * 8) &
             (-(uint)bVar4 & 0x400) + 0x400) != 0) &&
           (iVar1 = FUN_00405fe0(this_00,(int)pvVar3), iVar1 != 0)) &&
          (iVar1 = FUN_004a8a50(&DAT_005ae958,(int)pvVar3,*(int *)((int)this_00 + 0x1c)),
          iVar1 < iVar2)) && (pvVar3 != (void *)param_2)) {
        iVar2 = iVar1;
        param_1 = pvVar3;
      }
      pvVar3 = (void *)((int)pvVar3 + 1);
    } while ((int)pvVar3 < *(int *)((int)this + 0x68));
  }
  return (int)param_1;
}
