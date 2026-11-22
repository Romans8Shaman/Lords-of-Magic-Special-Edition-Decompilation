/* Rebuilt from lomse.exe FUN_0051cd20 @ 0x0051cd20 (426 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004c6fb0 ((undefined4 * (__stdcall *)(void))0x004c6fb0)
#define FUN_004c8660 ((undefined4 (__fastcall *)(int))0x004c8660)
#define FUN_0051b870 ((undefined4 (__stdcall *)(int))0x0051b870)
#define FUN_0051b8b0 ((undefined4 (__fastcall *)(int))0x0051b8b0)
#define FUN_0051c9b0 ((undefined4 (__thiscall *)(void *, int))0x0051c9b0)
#define FUN_0051cab0 ((undefined4 (__thiscall *)(void *, void *, uint, int *, int *, int *))0x0051cab0)
#define FUN_0051cb30 ((undefined4 (__thiscall *)(void *, void *, int, int *, int *, int *))0x0051cb30)

#define LOM_SELF_0051cd20 1
void __thiscall rb_0051cd20(void *this,int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uchar _fr[0x30] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_28;
  typedef int _t_local_24;
  typedef int _t_local_20;
  typedef int _t_local_1c;
  typedef int _t_local_18;
  typedef void * _t_local_14;
  typedef int _t_local_10;
  typedef int _t_local_c;
  typedef int _t_local_8;
  typedef int _t_local_4;
#define local_28 (*(_t_local_28 *)(_fr + 0x0))
#define local_24 (*(_t_local_24 *)(_fr + 0x4))
#define local_20 (*(_t_local_20 *)(_fr + 0x8))
#define local_1c (*(_t_local_1c *)(_fr + 0xc))
#define local_18 (*(_t_local_18 *)(_fr + 0x10))
#define local_14 (*(_t_local_14 *)(_fr + 0x14))
#define local_10 (*(_t_local_10 *)(_fr + 0x18))
#define local_c (*(_t_local_c *)(_fr + 0x1c))
#define local_8 (*(_t_local_8 *)(_fr + 0x20))
#define local_4 (*(_t_local_4 *)(_fr + 0x24))
  
  iVar6 = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  local_14 = (void *)FUN_0051b870(param_1);
  if (local_14 != (void *)0x0) {
    FUN_0051cab0(this,local_14,1,&local_c,&local_8,&local_4);
    iVar5 = 0;
    local_28 = 0;
    local_18 = 0;
    puVar1 = FUN_004c6fb0();
    iVar3 = puVar1[0x6c];
    local_10 = iVar3;
    if ((0 < iVar3) && (iVar3 != *(int *)((int)this + 0x74))) {
      FUN_0051b8b0((int)this);
    }
    param_1 = 0;
    if (0 < iVar3) {
      do {
        pvVar2 = (void *)FUN_0051b870(param_1);
        iVar3 = FUN_004c8660((int)pvVar2);
        uVar4 = FUN_0051c9b0(this,iVar3);
        if ((uVar4 & 0xe) == 0) {
          *(undefined4 *)(*(int *)((int)this + 0x70) + 4 + iVar6) = 0;
          *(undefined4 *)(*(int *)((int)this + 0x70) + 8 + iVar6) = 0;
          *(undefined4 *)(*(int *)((int)this + 0x70) + 0xc + iVar6) = 0;
        }
        else {
          FUN_0051cb30(this,pvVar2,(int)local_14,&local_24,&local_20,&local_1c);
          *(int *)(*(int *)((int)this + 0x70) + 4 + iVar6) = local_24;
          *(int *)(*(int *)((int)this + 0x70) + 8 + iVar6) = local_20;
          *(int *)(*(int *)((int)this + 0x70) + 0xc + iVar6) = local_1c;
          local_28 = local_28 + local_20;
          iVar5 = iVar5 + local_24;
          local_18 = local_18 + local_1c;
        }
        param_1 = param_1 + 1;
        iVar6 = iVar6 + 0x14;
      } while (param_1 < local_10);
    }
    *(int *)((int)this + 0xc0) = local_c;
    *(int *)((int)this + 0xc4) = local_8;
    *(int *)((int)this + 200) = local_4;
    if (iVar5 == 0) {
      if (local_28 != 0) {
        *(int *)((int)this + 0xcc) = local_c;
        *(undefined4 *)((int)this + 0xc0) = 0;
        return;
      }
      *(undefined4 *)((int)this + 0xc0) = 0;
      *(int *)((int)this + 200) = local_4 + local_c;
    }
  }
  return;
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_10
#undef local_c
#undef local_8
#undef local_4
}
