/* Rebuilt from lomse.exe FUN_0048a0e0 @ 0x0048a0e0 (205 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005835e0 (*(int *)0x005835e0)
#define DAT_005851a0 (*(int *)0x005851a0)
#define DAT_005d1e84 (*(void * *)0x005d1e84)
#define FUN_00480060 ((undefined4 (__stdcall *)(undefined4))0x00480060)
#define FUN_004b7890 ((int (__thiscall *)(void *, int))0x004b7890)
#define FUN_0051ba70 ((undefined4 (__fastcall *)(int))0x0051ba70)

#define LOM_SELF_0048a0e0 1
void __fastcall rb_0048a0e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x228a8);
  if ((iVar1 < 0) || (0xf < iVar1)) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_1 + 0x5068 + iVar1 * 0x1d84;
  }
  if (DAT_005851a0 != 0) {
    if (iVar2 == 0) {
      DAT_005835e0 = 0;
      return;
    }
    if ((*(byte *)(iVar2 + 0x15d8) & 2) == 0) {
      if (DAT_005d1e84 == (void *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_004b7890(DAT_005d1e84,iVar1 + 1);
      }
      if (iVar1 == 0) {
        *(uint *)(iVar2 + 0x15d8) = *(uint *)(iVar2 + 0x15d8) | 2;
      }
    }
  }
  if (((iVar2 == 0) || ((*(uint *)(iVar2 + 0x15d8) & 0x10000) == 0)) ||
     (iVar1 = FUN_0051ba70(param_1), iVar1 == 0)) {
    DAT_005835e0 = 0;
    return;
  }
  DAT_005835e0 = DAT_005835e0 + 1;
  if (DAT_005835e0 < 4) {
    return;
  }
  *(uint *)(iVar2 + 0x15d8) = *(uint *)(iVar2 + 0x15d8) & 0xfffeffff;
  FUN_00480060(*(undefined4 *)(param_1 + 0x228a8));
  return;
}
