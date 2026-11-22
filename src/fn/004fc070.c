/* Rebuilt from lomse.exe FUN_004fc070 @ 0x004fc070 (548 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7bcc (*(uint *)0x005a7bcc)
#define DAT_005a7bd0 (*(int * *)0x005a7bd0)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define DAT_005d209c (*(char *)0x005d209c)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_00407d80 ((uint (__fastcall *)(int))0x00407d80)
#define FUN_0041ed80 ((undefined4 (__thiscall *)(void *, undefined4))0x0041ed80)
#define FUN_004c1cf0 ((undefined4 (__fastcall *)(int))0x004c1cf0)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_0052bc40 ((undefined4 (__fastcall *)(int))0x0052bc40)
#define FUN_0052be20 ((uint (__fastcall *)(int))0x0052be20)
#define FUN_0052dda0 ((undefined4 (__thiscall *)(void *, int))0x0052dda0)
#define FUN_0052de40 ((undefined4 (__fastcall *)(int))0x0052de40)
#define FUN_0052dfa0 ((undefined4 (__thiscall *)(void *, int *, int))0x0052dfa0)

#define LOM_SELF_004fc070 1
undefined4 __thiscall rb_004fc070(void *this,void *param_1,undefined4 param_2)

{
  int *this_00;
  int iVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  uchar _fr[0xa0] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_98[8];
  typedef int _t_local_78[30];
#define local_98 (*(_t_local_98 *)(_fr + 0x0))
#define local_78 (*(_t_local_78 *)(_fr + 0x20))
  
  puVar7 = local_98;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  *(undefined2 *)puVar7 = 0;
  FUN_0052bc40((int)param_1);
  if ((DAT_005d209c == '\x02') || (DAT_005d209c == '\0')) {
    iVar4 = *(int *)((int)this + 0x24);
    if (iVar4 <= *(int *)((int)this + 0x18)) {
      do {
        piVar5 = *(int **)(*(int *)((int)this + 8) + iVar4 * 4);
        if ((((piVar5 != (int *)0x0) && (piVar5[1] == 0)) &&
            (iVar6 = FUN_00407d50((int)piVar5), iVar6 == 0)) &&
           ((iVar6 = ((undefined4 (__thiscall *)(__typeof__(piVar5), __typeof__(param_2)))(**(code **)(*piVar5 + 0xc)))(piVar5,param_2), iVar6 != 0 &&
            (iVar6 = *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400),
            iVar1 = ((undefined4 (__thiscall *)(__typeof__(piVar5)))(**(code **)(*piVar5 + 0x3c)))(piVar5), iVar1 == iVar6)))) {
          iVar6 = FUN_0052dda0(param_1,(int)piVar5);
          if (iVar6 == 0) {
            return 0;
          }
          if (((piVar5[0x12] == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) &&
              (pvVar2 = (void *)FUN_0052be20((int)param_1), pvVar2 != (void *)0x0)) &&
             ((uVar3 = FUN_00407d80((int)pvVar2), uVar3 == 0 &&
              (iVar6 = FUN_004c1cf0((int)pvVar2), iVar6 == 0)))) {
            FUN_0041ed80(pvVar2,0x17);
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 <= *(int *)((int)this + 0x18));
    }
    if (DAT_005d209c == '\0') {
      FUN_0052de40((int)param_1);
    }
  }
  else if (DAT_005d209c == '\x01') {
    iVar4 = *(int *)((int)this + 0x24);
    iVar6 = 0;
    if (iVar4 <= *(int *)((int)this + 0x18)) {
      piVar5 = local_78;
      do {
        this_00 = *(int **)(*(int *)((int)this + 8) + iVar4 * 4);
        if ((((this_00 != (int *)0x0) && (this_00[1] == 0)) &&
            (iVar1 = FUN_00407d50((int)this_00), iVar1 == 0)) &&
           (iVar1 = ((undefined4 (__thiscall *)(__typeof__(this_00), __typeof__(param_2)))(**(code **)(*this_00 + 0xc)))(this_00,param_2), iVar1 != 0)) {
          *piVar5 = iVar4;
          iVar6 = iVar6 + 1;
          piVar5 = piVar5 + 1;
          if (((this_00[0x12] == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) &&
              (pvVar2 = (void *)FUN_0052be20((int)param_1), pvVar2 != (void *)0x0)) &&
             ((uVar3 = FUN_00407d80((int)pvVar2), uVar3 == 0 &&
              (iVar1 = FUN_004c1cf0((int)pvVar2), iVar1 == 0)))) {
            FUN_0041ed80(pvVar2,0x17);
          }
          if (0x1d < iVar6) break;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 <= *(int *)((int)this + 0x18));
    }
    if (0 < iVar6) {
      FUN_0052dfa0(param_1,local_78,iVar6);
    }
  }
  FUN_004d05e0(DAT_005a7b78,DAT_005a7bcc,DAT_005a7bd0);
  return 1;
#undef local_98
#undef local_78
}
