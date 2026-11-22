/* Rebuilt from lomse.exe FUN_00461ec0 @ 0x00461ec0 (160 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_00415b10 ((undefined4 (__thiscall *)(void *, undefined4 *, int))0x00415b10)
#define FUN_004fbe60 ((undefined4 (__thiscall *)(void *, int, int))0x004fbe60)

#define LOM_SELF_00461ec0 1
void __fastcall rb_00461ec0(int param_1)

{
  void *this;
  undefined4 *puVar1;
  int iVar2;
  void *this_00;
  
  this = (void *)(param_1 + 0x4848);
  *(undefined4 *)(param_1 + 0x22c3c) = 0;
  puVar1 = (undefined4 *)FUN_004fbe60(this,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    do {
      iVar2 = FUN_00407d50((int)puVar1);
      if (iVar2 == 0) break;
      puVar1 = (undefined4 *)FUN_004fbe60(this,(int)puVar1,0);
    } while (puVar1 != (undefined4 *)0x0);
    if ((puVar1 != (undefined4 *)0x0) && (iVar2 = FUN_00407d50((int)puVar1), iVar2 == 0)) {
      *(undefined4 *)(param_1 + 0x22c40) = puVar1[10];
      for (this_00 = (void *)FUN_004fbe60(this,0,0); this_00 != (void *)0x0;
          this_00 = (void *)FUN_004fbe60(this,(int)this_00,0)) {
        if ((*(uint *)((int)this_00 + 0x30) & 0x900) != 0) {
          FUN_00415b10(this_00,puVar1,(uint)(puVar1[0x12] != *(int *)((int)this_00 + 0x48)));
        }
      }
    }
  }
  return;
}
