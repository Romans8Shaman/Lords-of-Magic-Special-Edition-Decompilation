/* Rebuilt from lomse.exe op_setleveldungeonconquer @ 0x00510db0 (490 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_0050cd20 ((undefined4 (__cdecl *)(void *, uint *))0x0050cd20)
#define FUN_00539eb0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *))0x00539eb0)
#define LAB_00462c80 (*(undefined *)0x00462c80) /* code label used as address */
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_00510db0 1
void __cdecl rb_00510db0(void *vm)

{
  short sVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  longlong lVar7;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_4;
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0x4))
  
  pvVar3 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar4 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar4;
    uVar5 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar4 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar4 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    uVar5 = 0;
  }
  uVar5 = uVar5 & 0xff;
  if (uVar5 != 1) {
    if (uVar5 == 2) {
      fStack_4 = __BC(float, (__BC(int, fStack_4) >> 8));
    }
    else {
      if (uVar5 != 4) {
        *(undefined4 *)((int)pvVar3 + 0x90) = 0xe;
        FUN_004d4550(pvVar3);
        *(undefined4 *)((int)pvVar3 + 0x90) = 0;
        *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
        return;
      }
      lVar7 = __ftol((float10)fStack_4);
      fStack_4 = __BC(float, lVar7);
    }
  }
  iVar4 = FUN_0050cd20(pvVar3,(uint *)&vm);
  if ((((iVar4 != 0) && (vm != (void *)0x0)) && (-1 < __BC(int, fStack_4))) && (__BC(int, fStack_4) < 10)) {
    if (fStack_4 == 0.0) {
      puVar2 = *(undefined4 **)((int)vm + 0x58);
      if (puVar2 != (undefined4 *)0x0) {
        ((undefined4 (__thiscall *)(__typeof__(puVar2), __typeof__(1)))(**(code **)*puVar2))(puVar2,1);
      }
      *(undefined4 *)((int)vm + 0x58) = 0;
      *(uint *)((int)vm + 0x30) = *(uint *)((int)vm + 0x30) | 0x100;
      if ((*(int *)((int)vm + 0x50) == 0) || (*(short *)((int)vm + 0x4e) == 0)) {
        *(uint *)((int)vm + 0x30) = *(uint *)((int)vm + 0x30) | 4;
        return;
      }
    }
    else if ((*(int *)((int)vm + 0x50) != 0) && (__BC(int, fStack_4) < (int)*(short *)((int)vm + 0x4e))) {
      iVar4 = __BC(int, fStack_4) * 0xc;
      puVar2 = *(undefined4 **)(iVar4 + -4 + *(int *)((int)vm + 0x50));
      if (puVar2 != (undefined4 *)0x0) {
        ((undefined4 (__thiscall *)(__typeof__(puVar2), __typeof__(1)))(**(code **)*puVar2))(puVar2,1);
      }
      *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar4) = 0;
      *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar4) =
           *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar4) | 1;
      if ((*(int *)((int)vm + 0x50) != 0) && (sVar1 = *(short *)((int)vm + 0x4e), 0 < sVar1)) {
        iVar4 = 0;
        if (0 < sVar1) {
          piVar6 = (int *)(*(int *)((int)vm + 0x50) + 8);
          do {
            if (*piVar6 != 0) {
              return;
            }
            iVar4 = iVar4 + 1;
            piVar6 = piVar6 + 3;
          } while (iVar4 < sVar1);
        }
      }
      *(uint *)((int)vm + 0x30) = *(uint *)((int)vm + 0x30) | 4;
      iVar4 = *(int *)((int)vm + 0x50);
      if (iVar4 != 0) {
        FUN_00539eb0(iVar4,0xc,*(int *)(iVar4 + -4),&LAB_00462c80);
        if (iVar4 + -4 != 0) {
          Ordinal_403(iVar4 + -4,s_C__lomse_source_storm_h_00555130,0x3f6,0);
        }
      }
      *(undefined4 *)((int)vm + 0x50) = 0;
      *(undefined2 *)((int)vm + 0x4e) = 0;
    }
  }
  return;
#undef fStack_4
}
