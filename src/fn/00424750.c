/* Rebuilt from lomse.exe FUN_00424750 @ 0x00424750 (177 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00414e50 ((undefined4 (__thiscall *)(void *, uint, int *))0x00414e50)
#define FUN_004237d0 ((undefined4 (__thiscall *)(void *, int))0x004237d0)
#define FUN_0044c0c0 ((undefined4 * (__stdcall *)(int, int *))0x0044c0c0)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)

#define LOM_SELF_00424750 1
undefined4 __thiscall rb_00424750(void *this, uint volatile param_1, int volatile param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_2;
  if (param_2 == *(int *)((int)this + 0x1c)) {
    return 0xffffffff;
  }
  iVar2 = *(int *)((int)this + 0x4c);
  iVar5 = 0;
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      if ((param_1 & 1 << ((byte)iVar4 & 0x1f)) != 0) {
        iVar5 = iVar5 + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  if (iVar5 < iVar2) {
    iVar2 = FUN_00414e50(this,~param_1,&param_2);
    if (iVar2 == 0) {
      return 0xffffffff;
    }
    this = FUN_00485080(&DAT_005aa12c,param_2,0x2f);
    if (this == (undefined4 *)0x0) {
      return 0xffffffff;
    }
  }
  iVar2 = *(int *)((int)this + 0xe4);
  FUN_004237d0(this,iVar1);
  puVar3 = FUN_0044c0c0(iVar2,(int *)&param_1);
  if (puVar3 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  return puVar3[10];
}
