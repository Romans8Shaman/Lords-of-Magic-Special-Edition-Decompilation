/* Rebuilt from lomse.exe FUN_004061f0 @ 0x004061f0 (193 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005ae98c (*(int *)0x005ae98c)
#define DAT_005ae998 (*(int *)0x005ae998)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_004a8a50 ((int (__thiscall *)(void *, int, int))0x004a8a50)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)
#define FUN_005071c0 ((undefined4 (__thiscall *)(void *, int))0x005071c0)

#define LOM_SELF_004061f0 1
int __stdcall rb_004061f0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  void *this;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = DAT_005ae98c;
  iVar4 = -1;
  if (DAT_005ae998 <= DAT_005ae98c) {
    iVar3 = param_4;
    iVar5 = DAT_005ae998;
    do {
      this = (void *)FUN_004f6000(&DAT_005ae974,iVar5);
      if (((((this != (void *)0x0) && (*(int *)((int)this + 4) == 0)) &&
           (*(int *)((int)this + 0x48) != param_4)) &&
          ((iVar2 = FUN_00407d50((int)this), iVar2 == 0 &&
           (iVar2 = FUN_005071c0(this,param_4), iVar2 != 0)))) &&
         ((iVar5 != param_1 && ((iVar5 != param_2 && (iVar5 != param_3)))))) {
        if (iVar4 == -1) {
          iVar2 = FUN_004a8a50(&DAT_005ae958,*(int *)((int)this + 0x1c),param_5);
        }
        else {
          iVar2 = FUN_004a8a50(&DAT_005ae958,*(int *)((int)this + 0x1c),param_5);
          if (iVar3 <= iVar2) goto LAB_0040629a;
        }
        iVar3 = iVar2;
        iVar4 = iVar5;
      }
LAB_0040629a:
      iVar5 = iVar5 + 1;
    } while (iVar5 <= iVar1);
  }
  return iVar4;
}
