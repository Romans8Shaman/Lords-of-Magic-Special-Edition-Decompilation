/* Rebuilt from lomse.exe op_enummemorystatistics @ 0x004d77e0 (858 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055e14c (*(undefined *)0x0055e14c)
#define DAT_0055ea64 (*(undefined *)0x0055ea64)
#define DAT_005725c8 (*(undefined *)0x005725c8)
#define DAT_005725ec (*(undefined *)0x005725ec)
#define DAT_0058787c (*(undefined4 *)0x0058787c)
#define DAT_005a7b78 (*(int *)0x005a7b78)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_0041d1d0 ((undefined4 (__thiscall *)(void *, undefined4, undefined4))0x0041d1d0)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define PTR_DAT_0055e92c (*(void * *)0x0055e92c)
#define s_array_0055e154 (*(char (*)[])0x0055e154)
#define s_debug_0055e0fc (*(char (*)[])0x0055e0fc)
#define s_dict_stack_005725d0 (*(char (*)[])0x005725d0)
#define s_object_overhead_005725b8 (*(char (*)[])0x005725b8)
#define s_operand_stack_005725dc (*(char (*)[])0x005725dc)
#define s_string_0055e144 (*(char (*)[])0x0055e144)
#define s_trace_0055de90 (*(char (*)[])0x0055de90)

#define LOM_SELF_004d77e0 1
void __cdecl rb_004d77e0(void *vm)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  int iVar6;
  undefined **ppuVar7;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_auStack_8[2];
#define auStack_8 (*(_t_auStack_8 *)(_fr + 0x0))
  
  puVar5 = (uint *)FUN_0040adb0(vm,auStack_8);
  uVar1 = *puVar5;
  piVar2 = (int *)puVar5[1];
  if ((char)uVar1 != '\0') {
    ppuVar7 = &PTR_DAT_0055e92c;
    do {
      FUN_0041d1d0(vm,8,ppuVar7[-1]);
      FUN_0041d1d0(vm,1,*(undefined4 *)*ppuVar7);
      FUN_004d05e0(vm,uVar1,piVar2);
      iVar3 = *(int *)((int)vm + 0x6c);
      *(undefined4 *)((int)vm + 0x6c) = *(undefined4 *)((int)vm + 0x70);
      if (iVar3 != 0) {
        return;
      }
      ppuVar7 = ppuVar7 + 2;
    } while (ppuVar7 < &DAT_0055ea64);
    FUN_0041d1d0(vm,8,&DAT_005725ec);
    FUN_0041d1d0(vm,1,DAT_0058787c);
    FUN_004d05e0(vm,uVar1,piVar2);
    iVar3 = *(int *)((int)vm + 0x6c);
    *(undefined4 *)((int)vm + 0x6c) = *(undefined4 *)((int)vm + 0x70);
    if (iVar3 == 0) {
      FUN_0041d1d0(vm,8,s_string_0055e144);
      FUN_0041d1d0(vm,1,*(undefined4 *)(DAT_005a7b78 + 0xa7c));
      FUN_004d05e0(vm,uVar1,piVar2);
      iVar3 = *(int *)((int)vm + 0x6c);
      *(undefined4 *)((int)vm + 0x6c) = *(undefined4 *)((int)vm + 0x70);
      if (iVar3 == 0) {
        FUN_0041d1d0(vm,8,&DAT_0055e14c);
        FUN_0041d1d0(vm,1,*(undefined4 *)(DAT_005a7b78 + 0xa80));
        FUN_004d05e0(vm,uVar1,piVar2);
        iVar3 = *(int *)((int)vm + 0x6c);
        *(undefined4 *)((int)vm + 0x6c) = *(undefined4 *)((int)vm + 0x70);
        if (iVar3 == 0) {
          FUN_0041d1d0(vm,8,s_array_0055e154);
          FUN_0041d1d0(vm,1,*(undefined4 *)(DAT_005a7b78 + 0xa84));
          FUN_004d05e0(vm,uVar1,piVar2);
          iVar3 = *(int *)((int)vm + 0x6c);
          *(undefined4 *)((int)vm + 0x6c) = *(undefined4 *)((int)vm + 0x70);
          if (iVar3 == 0) {
            FUN_0041d1d0(vm,8,s_operand_stack_005725dc);
            FUN_0041d1d0(vm,1,*(undefined4 *)(DAT_005a7b78 + 0xa88));
            FUN_004d05e0(vm,uVar1,piVar2);
            iVar3 = *(int *)((int)vm + 0x6c);
            *(undefined4 *)((int)vm + 0x6c) = *(undefined4 *)((int)vm + 0x70);
            if (iVar3 == 0) {
              FUN_0041d1d0(vm,8,s_dict_stack_005725d0);
              FUN_0041d1d0(vm,1,*(undefined4 *)(DAT_005a7b78 + 0xa8c));
              FUN_004d05e0(vm,uVar1,piVar2);
              iVar3 = *(int *)((int)vm + 0x6c);
              *(undefined4 *)((int)vm + 0x6c) = *(undefined4 *)((int)vm + 0x70);
              if (iVar3 == 0) {
                FUN_0041d1d0(vm,8,&DAT_005725c8);
                FUN_0041d1d0(vm,1,*(undefined4 *)(DAT_005a7b78 + 0xa90));
                FUN_004d05e0(vm,uVar1,piVar2);
                iVar3 = *(int *)((int)vm + 0x6c);
                *(undefined4 *)((int)vm + 0x6c) = *(undefined4 *)((int)vm + 0x70);
                if (iVar3 == 0) {
                  FUN_0041d1d0(vm,8,s_debug_0055e0fc);
                  FUN_0041d1d0(vm,1,*(undefined4 *)(DAT_005a7b78 + 0xa94));
                  FUN_004d05e0(vm,uVar1,piVar2);
                  iVar3 = *(int *)((int)vm + 0x6c);
                  *(undefined4 *)((int)vm + 0x6c) = *(undefined4 *)((int)vm + 0x70);
                  if (iVar3 == 0) {
                    FUN_0041d1d0(vm,8,s_trace_0055de90);
                    FUN_0041d1d0(vm,1,*(undefined4 *)(DAT_005a7b78 + 0xa98));
                    FUN_004d05e0(vm,uVar1,piVar2);
                    iVar3 = *(int *)((int)vm + 0x6c);
                    *(undefined4 *)((int)vm + 0x6c) = *(undefined4 *)((int)vm + 0x70);
                    if (iVar3 == 0) {
                      if (*(int *)((int)vm + 0x54) == 0) {
                        FUN_00404ab0(vm,3);
                      }
                      else {
                        iVar3 = *(int *)((int)vm + 0x50);
                        iVar6 = *(int *)((int)vm + 0x54) + -1;
                        *(int *)((int)vm + 0x54) = iVar6;
                        *(undefined4 *)(iVar3 + iVar6 * 8) = 8;
                        *(char **)(iVar3 + 4 + iVar6 * 8) = s_object_overhead_005725b8;
                      }
                      uVar4 = *(undefined4 *)(DAT_005a7b78 + 0xa9c);
                      if (*(int *)((int)vm + 0x54) == 0) {
                        FUN_00404ab0(vm,3);
                      }
                      else {
                        iVar3 = *(int *)((int)vm + 0x50);
                        iVar6 = *(int *)((int)vm + 0x54) + -1;
                        *(int *)((int)vm + 0x54) = iVar6;
                        *(undefined4 *)(iVar3 + iVar6 * 8) = 1;
                        *(undefined4 *)(iVar3 + 4 + iVar6 * 8) = uVar4;
                      }
                      FUN_004d05e0(vm,uVar1,piVar2);
                      *(undefined4 *)((int)vm + 0x6c) = *(undefined4 *)((int)vm + 0x70);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
#undef auStack_8
}
