/* Rebuilt from lomse.exe FUN_00428080 @ 0x00428080 (131 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00578818 (*(undefined4 *)0x00578818)
#define DAT_005788c0 (*(int *)0x005788c0)
#define FUN_00427b80 ((undefined4 (__cdecl *)(int))0x00427b80)
#define FUN_00428170 ((undefined4 (__thiscall *)(void *, int))0x00428170)
#define FUN_0042d440 ((int (__fastcall *)(int *))0x0042d440)

#define LOM_SELF_00428080 1
int * __thiscall rb_00428080(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  *(undefined4 *)((int)this + 0x48) = 0xffffffff;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 8;
  iVar1 = FUN_00427b80(param_1);
  if (iVar1 == 0) {
    return (int *)0x0;
  }
  piVar2 = (int *)FUN_0042d440(&DAT_00578818);
  if (piVar2 == (int *)0x0) {
    return (int *)0x0;
  }
  *piVar2 = param_1;
  piVar2[1] = *(int *)(iVar1 + 0xc);
  piVar2[2] = *(int *)(iVar1 + 0x10);
  piVar2[4] = 0;
  piVar2[3] = DAT_005788c0;
  DAT_005788c0 = DAT_005788c0 + 1;
  FUN_00428170(this,(int)piVar2);
  return piVar2;
}
