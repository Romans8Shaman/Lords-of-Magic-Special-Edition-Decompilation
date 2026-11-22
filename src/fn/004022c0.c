/* Rebuilt from lomse.exe FUN_004022c0 @ 0x004022c0 (107 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_004019f0 ((undefined4 (__stdcall *)(void *, int, int))0x004019f0)
#define FUN_00402150 ((int (__stdcall *)(void *, int))0x00402150)
#define FUN_0041efa0 ((undefined4 (__thiscall *)(void *, uint))0x0041efa0)
#define FUN_00420620 ((undefined4 (__fastcall *)(int))0x00420620)
#define FUN_00458170 ((undefined4 (__stdcall *)(void))0x00458170)
#define FUN_004a8b50 ((int (__thiscall *)(void *, int, int))0x004a8b50)

#define LOM_SELF_004022c0 1
undefined4 __thiscall rb_004022c0(void *this,void *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00402150(param_1,*(int *)((int)this + 4));
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = FUN_00420620(iVar1);
  if ((iVar2 != 0) && (iVar2 = FUN_00458170(), iVar2 != 0)) {
    return 0;
  }
  iVar2 = FUN_004a8b50(&DAT_005ae958,*(int *)((int)param_1 + 0x1c),*(int *)(iVar1 + 0x1c));
  iVar1 = FUN_004019f0(param_1,iVar1,iVar2);
  if (iVar1 != 0) {
    FUN_0041efa0(param_1,3);
  }
  return 1;
}
