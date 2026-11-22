/* Rebuilt from lomse.exe FUN_004387a0 @ 0x004387a0 (419 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_00420890 ((undefined4 (__thiscall *)(void *, int))0x00420890)
#define FUN_00420b80 ((undefined4 (__thiscall *)(void *, int, undefined4, undefined4, undefined4, undefined4, undefined4))0x00420b80)
#define FUN_00438390 ((int (__thiscall *)(void *, int))0x00438390)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004a8390 ((undefined4 (__thiscall *)(void *, int))0x004a8390)
#define FUN_004a8b50 ((int (__thiscall *)(void *, int, int))0x004a8b50)
#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)

#define LOM_SELF_004387a0 1
void __thiscall rb_004387a0(void *this,uint param_1)

{
  int *piVar1;
  undefined4 *this_00;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  void *this_01;
  int iVar5;
  int iVar6;
  uint uVar7;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_c;
  typedef int _t_local_4;
#define local_c (*(_t_local_c *)(_fr + 0x4))
#define local_4 (*(_t_local_4 *)(_fr + 0xc))
  
  local_c = -1;
  uVar7 = param_1;
LAB_004387b7:
  do {
    iVar6 = -1;
    local_4 = 0;
    do {
      if (local_4 == 0) {
        this_01 = this;
      }
      else {
        this_01 = (void *)((int)this + 0x50);
      }
      iVar4 = 0;
      if (0 < *(int *)((int)this_01 + 0x48)) {
        do {
          piVar1 = (int *)FUN_00438390(this_01,iVar4);
          if ((iVar6 < 0) && (-1 < *piVar1)) {
            uVar7 = 1 << ((byte)piVar1[1] & 0x1f);
            iVar6 = *piVar1;
LAB_0043880a:
            *piVar1 = -1;
          }
          else if (iVar6 == *piVar1) {
            uVar7 = uVar7 | 1 << ((byte)piVar1[1] & 0x1f);
            goto LAB_0043880a;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)((int)this_01 + 0x48));
      }
      local_4 = local_4 + 1;
    } while (local_4 < 2);
    if (iVar6 < 0) {
      return;
    }
    this_00 = FUN_00485080(&DAT_005aa12c,iVar6,0x2f);
    if (local_c < 0) {
      iVar6 = FUN_004f6000(&DAT_005ae974,param_1);
      if (iVar6 == 0) {
        return;
      }
      iVar6 = *(int *)(iVar6 + 0x1c);
      iVar4 = this_00[7];
      puVar2 = FUN_004c6fc0();
      iVar6 = FUN_004a8b50(puVar2,iVar4,iVar6);
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      iVar4 = this_00[7];
      puVar2 = FUN_004c6fc0();
      iVar6 = *(int *)(*(int *)(puVar2 + 0x18) + (iVar6 + iVar4 * 8) * 4);
      iVar4 = FUN_00420890(this_00,iVar6);
      if (iVar4 == 0) {
LAB_004388cc:
        iVar5 = 0;
        iVar4 = iVar6 << 5;
        do {
          puVar2 = FUN_004c6fc0();
          local_c = *(int *)(*(int *)(puVar2 + 0x18) + iVar4);
          iVar3 = FUN_00420890(this_00,local_c);
          if (iVar3 != 0) {
            iVar3 = iVar6;
            puVar2 = FUN_004c6fc0();
            iVar3 = FUN_004a8390(puVar2,iVar3);
            if (iVar3 == 0) break;
          }
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar5 < 8);
        if (7 < iVar5) {
          return;
        }
      }
      else {
        iVar4 = iVar6;
        puVar2 = FUN_004c6fc0();
        iVar4 = FUN_004a8390(puVar2,iVar4);
        local_c = iVar6;
        if (iVar4 != 0) goto LAB_004388cc;
      }
      FUN_00420b80(this_00,local_c,0x300040,uVar7,param_1,0xffffffff,0);
      goto LAB_004387b7;
    }
    FUN_00420b80(this_00,local_c,0x300040,uVar7,param_1,0xffffffff,0);
  } while( true );
#undef local_c
#undef local_4
}
