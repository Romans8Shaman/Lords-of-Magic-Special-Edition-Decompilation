/* Rebuilt from lomse.exe op_costbuildbuilding @ 0x00445930 (540 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd31c (*(undefined *)0x005cd31c)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_0041d1d0 ((undefined4 (__thiscall *)(void *, undefined4, undefined4))0x0041d1d0)
#define FUN_0043d300 ((int * (__thiscall *)(void *, int, int, int))0x0043d300)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_0053a090 ((int (__cdecl *)(undefined1 *, ...))0x0053a090)
#define s_building_type__d_level__d_faith___005567e8 (*(char (*)[])0x005567e8)

#define LOM_SELF_00445930 1
void __cdecl rb_00445930(void *vm)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uchar _fr[0x218] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_fStack_210;
  typedef uint _t_uStack_20c;
  typedef undefined4 _t_fStack_208;
  typedef uint _t_uStack_204;
  typedef uint _t_auStack_200[2];
  typedef uint _t_uStack_1f8;
  typedef char _t_acStack_1f4[500];
#define fStack_210 (*(_t_fStack_210 *)(_fr + 0x0))
#define uStack_20c (*(_t_uStack_20c *)(_fr + 0x4))
#define fStack_208 (*(_t_fStack_208 *)(_fr + 0x8))
#define uStack_204 (*(_t_uStack_204 *)(_fr + 0xc))
#define auStack_200 (*(_t_auStack_200 *)(_fr + 0x10))
#define uStack_1f8 (*(_t_uStack_1f8 *)(_fr + 0x18))
#define acStack_1f4 (*(_t_acStack_1f4 *)(_fr + 0x1c))
  
  FUN_0040adb0(vm,auStack_200);
  iVar1 = FUN_004026a0(auStack_200,&uStack_1f8,(uint *)&fStack_208,&fStack_210);
  if (iVar1 != 0) {
    FUN_0040adb0(vm,auStack_200);
    iVar1 = FUN_004026a0(auStack_200,&uStack_20c,(uint *)&fStack_210,&fStack_208);
    if (iVar1 != 0) {
      FUN_0040adb0(vm,auStack_200);
      iVar1 = FUN_004026a0(auStack_200,&uStack_204,(uint *)&fStack_210,&fStack_208);
      if (iVar1 != 0) {
        piVar2 = FUN_0043d300(&DAT_005cd31c,uStack_204,uStack_20c,uStack_1f8);
        if (piVar2 == (int *)0x0) {
          FUN_0053a090(acStack_1f4,s_building_type__d_level__d_faith___005567e8,uStack_204,
                       uStack_1f8,uStack_20c);
          FUN_004d41c0(vm,acStack_1f4);
          if (*(int *)((int)vm + 0x54) == 0) {
            FUN_00404ab0(vm,3);
          }
          else {
            iVar1 = *(int *)((int)vm + 0x50);
            iVar3 = *(int *)((int)vm + 0x54) + -1;
            *(int *)((int)vm + 0x54) = iVar3;
            *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
            *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = 0;
          }
          FUN_0041d1d0(vm,1,0);
          if (*(int *)((int)vm + 0x54) == 0) {
            FUN_00404ab0(vm,3);
          }
          else {
            iVar1 = *(int *)((int)vm + 0x50);
            iVar3 = *(int *)((int)vm + 0x54) + -1;
            *(int *)((int)vm + 0x54) = iVar3;
            *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
            *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = 0;
          }
          FUN_0041d1d0(vm,1,0);
          return;
        }
        FUN_0041d1d0(vm,1,piVar2[4] >> 8);
        FUN_0041d1d0(vm,1,piVar2[5] >> 8);
        iVar1 = piVar2[6];
        if (*(int *)((int)vm + 0x54) == 0) {
          FUN_00404ab0(vm,3);
        }
        else {
          iVar3 = *(int *)((int)vm + 0x50);
          iVar4 = *(int *)((int)vm + 0x54) + -1;
          *(int *)((int)vm + 0x54) = iVar4;
          *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
          *(int *)(iVar3 + 4 + iVar4 * 8) = iVar1 >> 8;
        }
        iVar1 = piVar2[3];
        if (*(int *)((int)vm + 0x54) == 0) {
          FUN_00404ab0(vm,3);
          return;
        }
        iVar3 = *(int *)((int)vm + 0x50);
        iVar4 = *(int *)((int)vm + 0x54) + -1;
        *(int *)((int)vm + 0x54) = iVar4;
        *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
        *(int *)(iVar3 + 4 + iVar4 * 8) = iVar1 >> 8;
        return;
      }
    }
  }
  *(undefined4 *)((int)vm + 0x90) = 0xe;
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
#undef fStack_210
#undef uStack_20c
#undef fStack_208
#undef uStack_204
#undef auStack_200
#undef uStack_1f8
#undef acStack_1f4
}
