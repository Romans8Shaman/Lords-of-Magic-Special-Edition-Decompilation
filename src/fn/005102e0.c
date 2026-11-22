/* Rebuilt from lomse.exe FUN_005102e0 @ 0x005102e0 (636 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005aa180 (*(undefined *)0x005aa180)
#define DAT_005aa184 (*(int * *)0x005aa184)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_0043b990 ((undefined4 * (__thiscall *)(void *, undefined4, short, short, int, int, undefined4, undefined4, undefined4))0x0043b990)
#define FUN_0043e680 ((undefined4 (__thiscall *)(void *, int *, undefined4))0x0043e680)
#define FUN_0043e820 ((undefined4 (__thiscall *)(void *, undefined4 *, int, int, int))0x0043e820)
#define FUN_00452a50 ((undefined4 (__stdcall *)(int))0x00452a50)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004869d0 ((undefined4 (__thiscall *)(void *, undefined4))0x004869d0)
#define FUN_004a51c0 ((int (__thiscall *)(void *, int, int))0x004a51c0)
#define FUN_004a7d50 ((int (__thiscall *)(void *, int *, int))0x004a7d50)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_0050f7b0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0050f7b0)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_005102e0 1
undefined4 __thiscall
rb_005102e0(void *this, int param_1, int param_2, int unused_stack_16, undefined4 param_p5, undefined4 unused_pad_16)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int *this_00;
  int *piVar4;
  undefined *puVar5;
  int iVar6;
  int *this_01;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_1c;
  typedef void * _t_local_18;
  typedef void * _t_apvStack_14[2];
#define local_1c (*(_t_local_1c *)(_fr + 0x4))
#define local_18 (*(_t_local_18 *)(_fr + 0x8))
#define apvStack_14 (*(_t_apvStack_14 *)(_fr + 0xc))

  local_18 = this;
  iVar2 = FUN_0050f7b0(this,&local_1c);
  if ((iVar2 != 0) &&
     (((iVar3 = ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*(int *)this + 0x3c)))(this), iVar2 = unused_stack_16,
       unused_stack_16 == iVar3 || (unused_stack_16 < 0)) &&
      (iVar3 = FUN_00452a50(local_1c), iVar3 != -1)))) {
    this_00 = (int *)FUN_00482ac0(&DAT_005aa12c,iVar3,3);
    this_01 = (int *)0x0;
    if ((this_00 != (int *)0x0) &&
       ((iVar3 = ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x3c)))(this_00), iVar3 == iVar2 || (iVar2 < 0)))) {
      unused_stack_16 = 0;
      apvStack_14[0] = (void *)Ordinal_401(0x94,s_C__lomse_source_storm_h_00555130,0x3ef,0);
      if (apvStack_14[0] != (void *)0x0) {
        iVar3 = this_00[10];
        this_01 = FUN_0043b990(apvStack_14[0],iVar2,(short)this_00[0x1d],(short)param_p5,param_1,
                               param_2,iVar3,iVar3,iVar3);
      }
      if (this_01 != (int *)0x0) {
        if ((iVar2 < 0) ||
           (iVar3 = FUN_0043e820(this_01,&unused_stack_16,param_1,param_2,iVar2), iVar3 != 0)) {
          ((undefined4 (__thiscall *)(__typeof__(this_01)))(**(code **)(*this_01 + 0x2c)))(this_01);
          this_01[7] = *(int *)((int)local_18 + 0x1c);
          piVar4 = (int *)FUN_0043e680(this_01,(int *)apvStack_14,param_1);
          iVar3 = FUN_004a51c0(&DAT_005ae958,*piVar4,piVar4[1]);
          this_01[7] = iVar3;
          iVar3 = FUN_004a7d50(&DAT_005ae958,this_01,iVar3);
          if (-1 < iVar2) {
            if ((iVar2 < 0) || (0xf < iVar2)) {
              puVar5 = (undefined *)0x0;
            }
            else {
              puVar5 = &DAT_005af194 + iVar2 * 0x1d84;
            }
            this_00[0x38] = this_00[0x38] - (*(int *)(unused_stack_16 + 0xc) >> 8);
            *(int *)(puVar5 + 0xcfc) = *(int *)(puVar5 + 0xcfc) - *(int *)(unused_stack_16 + 0x10);
            *(uint *)(puVar5 + 0x15d8) = *(uint *)(puVar5 + 0x15d8) | 0x40;
            *(int *)(puVar5 + 0xd04) = *(int *)(puVar5 + 0xd04) - *(int *)(unused_stack_16 + 0x14);
            *(uint *)(puVar5 + 0x15d8) = *(uint *)(puVar5 + 0x15d8) | 0x40;
            *(int *)(puVar5 + 0xd08) = *(int *)(puVar5 + 0xd08) - *(int *)(unused_stack_16 + 0x18);
            *(uint *)(puVar5 + 0x15d8) = *(uint *)(puVar5 + 0x15d8) | 0x40;
          }
          FUN_004869d0(&DAT_005aa12c,iVar2);
          pvVar1 = DAT_005a7b78;
          if ((char)DAT_005aa180 != '\0') {
            if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
              *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
              FUN_004d4550(pvVar1);
              *(undefined4 *)((int)pvVar1 + 0x90) = 0;
              *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
            }
            else {
              iVar2 = *(int *)((int)DAT_005a7b78 + 0x50);
              iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
              *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
              *(undefined4 *)(iVar2 + iVar6 * 8) = 1;
              *(int *)(iVar2 + 4 + iVar6 * 8) = iVar3;
            }
            FUN_004d05e0(DAT_005a7b78,(*(uint *)&DAT_005aa180),DAT_005aa184);
          }
          return 1;
        }
        ((undefined4 (__thiscall *)(__typeof__(this_01), __typeof__(1)))(**(code **)*this_01))(this_01,1);
      }
    }
  }
  return 0;
#undef local_1c
#undef local_18
#undef apvStack_14
}
