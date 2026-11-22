/* Rebuilt from lomse.exe FUN_00403780 @ 0x00403780 (251 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005ae98c (*(int *)0x005ae98c)
#define DAT_005ae998 (*(int *)0x005ae998)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004a8a50 ((int (__thiscall *)(void *, int, int))0x004a8a50)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)
#define FUN_00506110 ((undefined4 (__thiscall *)(void *, int))0x00506110)

#define LOM_SELF_00403780 1
int __stdcall rb_00403780(int param_1)

{
  int iVar1;
  void *this;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_8;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
  
  local_8 = -1;
  this = (void *)FUN_00482ac0(&DAT_005aa12c,param_1,0);
  if ((this == (void *)0x0) || (iVar2 = FUN_00407d50((int)this), iVar1 = DAT_005ae98c, iVar2 != 0))
  {
    return -1;
  }
  if (DAT_005ae998 <= DAT_005ae98c) {
    iVar2 = param_1;
    iVar5 = DAT_005ae998;
    do {
      iVar3 = FUN_004f6000(&DAT_005ae974,iVar5);
      if ((((iVar3 != 0) && (*(int *)(iVar3 + 4) == 0)) &&
          (*(int *)(iVar3 + 0x48) != *(int *)((int)this + 0x48))) &&
         (((iVar4 = FUN_00407d50(iVar3), iVar4 == 0 &&
           (iVar4 = FUN_00506110(this,iVar3), iVar4 != 0)) && (*(int *)(iVar3 + 0x74) == param_1))))
      {
        if (local_8 == -1) {
          iVar3 = FUN_004a8a50(&DAT_005ae958,*(int *)(iVar3 + 0x1c),*(int *)((int)this + 0x1c));
        }
        else {
          iVar3 = FUN_004a8a50(&DAT_005ae958,*(int *)(iVar3 + 0x1c),*(int *)((int)this + 0x1c));
          if (iVar2 <= iVar3) goto LAB_00403853;
        }
        iVar2 = iVar3;
        local_8 = iVar5;
      }
LAB_00403853:
      iVar5 = iVar5 + 1;
    } while (iVar5 <= iVar1);
  }
  return local_8;
#undef local_8
}
