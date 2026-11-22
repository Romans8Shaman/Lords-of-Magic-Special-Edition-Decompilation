/* Rebuilt from lomse.exe FUN_0052fcf0 @ 0x0052fcf0 (104 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00428c10 ((int (__fastcall *)(int))0x00428c10)
#define FUN_0042c300 ((undefined4 (__thiscall *)(void *, int, int))0x0042c300)
#define FUN_0042c500 ((undefined4 (__thiscall *)(void *, int, int, int))0x0042c500)
#define FUN_0052c8a0 ((int (__fastcall *)(int))0x0052c8a0)
#define FUN_0052d240 ((undefined4 * (__fastcall *)(int))0x0052d240)

#define LOM_SELF_0052fcf0 1
void __fastcall rb_0052fcf0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *this;
  int iVar3;
  
  puVar1 = FUN_0052d240((int)param_1);
  if ((puVar1 != (undefined4 *)0x0) && (puVar1[0x12] == *param_1)) {
    iVar2 = FUN_0052c8a0((int)param_1);
    if (iVar2 < 0) {
      if (puVar1[0x13] != 1) {
        return;
      }
      iVar2 = 0;
    }
    this = (void *)FUN_00428c10((int)(puVar1 + iVar2 * 0x13 + 0x31));
    if ((this != (void *)0x0) && (iVar3 = FUN_0042c500(this,puVar1[10],iVar2,1), iVar3 != 0)) {
      FUN_0042c300(this,puVar1[10],iVar2);
    }
  }
  return;
}
