/* Rebuilt from lomse.exe FUN_0041d220 @ 0x0041d220 (193 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae970 (*(int *)0x005ae970)
#define FUN_00420580 ((undefined4 (__fastcall *)(int))0x00420580)
#define FUN_00420910 ((undefined4 (__thiscall *)(void *, int, uint))0x00420910)
#define FUN_0049dcc0 ((undefined4 (__thiscall *)(void *, int))0x0049dcc0)
#define FUN_004a6dd0 ((uint (__thiscall *)(void *, int *, int, int))0x004a6dd0)
#define FUN_004b0310 ((undefined4 (__thiscall *)(void *, int))0x004b0310)
#define FUN_004f5b70 ((undefined4 (__thiscall *)(void *, int))0x004f5b70)

#define LOM_SELF_0041d220 1
void __thiscall rb_0041d220(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(uint *)((int)this + 0x44) != param_1) {
    if ((*(int *)((int)this + 0x53c) < *(int *)((int)this + 0x540) >> 1) &&
       ((*(byte *)((int)this + 0x30) & 0x10) != 0)) {
      iVar2 = FUN_00420580((int)this);
      if (iVar2 != 0) {
        iVar2 = *(int *)(DAT_005ae970 +
                        ((*(int *)((int)this + 0x44) - 4U & 7) + *(int *)((int)this + 0x1c) * 8) * 4
                        );
        iVar1 = *(int *)(DAT_005ae970 + (param_1 + iVar2 * 8) * 4);
        *(undefined4 *)((int)this + 0x53c) = 0;
        iVar2 = FUN_00420910(this,iVar2,param_1);
        if (iVar2 != 0) {
          FUN_004a6dd0(&DAT_005ae958,this,*(int *)((int)this + 0x1c),iVar1);
        }
      }
    }
    FUN_004f5b70(this,param_1);
    FUN_004b0310((void *)((int)this + 0x55c),param_1);
    if (*(void **)((int)this + 0x58c) != (void *)0x0) {
      FUN_0049dcc0(*(void **)((int)this + 0x58c),param_1);
    }
    if (*(void **)((int)this + 0x598) != (void *)0x0) {
      FUN_0049dcc0(*(void **)((int)this + 0x598),*(int *)((int)this + 0x44));
    }
    *(uint *)((int)this + 0x44) = param_1;
    ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*(int *)this + 0x1c)))(this);
  }
  return;
}
