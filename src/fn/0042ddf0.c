/* Rebuilt from lomse.exe FUN_0042ddf0 @ 0x0042ddf0 (114 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa780 (*(int *)0x005aa780)
#define FUN_0042dee0 ((int (__stdcall *)(int *, int *, uint, int *, int))0x0042dee0)

#define LOM_SELF_0042ddf0 1
int __fastcall rb_0042ddf0(uint *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_005aa780;
  FUN_0042dee0((int *)(param_1 + 0xb),(int *)(param_1 + 0xd),param_1[2],(int *)param_1[3],
               DAT_005aa780);
  FUN_0042dee0((int *)(param_1 + 10),(int *)(param_1 + 0xc),*param_1,(int *)param_1[1],iVar1);
  iVar2 = FUN_0042dee0((int *)(param_1 + 0xf),(int *)(param_1 + 0x11),param_1[6],(int *)param_1[7],
                       iVar1);
  FUN_0042dee0((int *)(param_1 + 0xe),(int *)(param_1 + 0x10),param_1[4],(int *)param_1[5],iVar1);
  return iVar2;
}
