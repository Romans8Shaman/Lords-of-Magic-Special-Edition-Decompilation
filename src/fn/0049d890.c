/* Rebuilt from lomse.exe FUN_0049d890 @ 0x0049d890 (96 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0049acf0 ((int (__thiscall *)(void *, uint, uint, undefined4 *))0x0049acf0)
#define FUN_0049adb0 ((int (__thiscall *)(void *, uint))0x0049adb0)

#define LOM_SELF_0049d890 1
uint __thiscall rb_0049d890(void *this, uint volatile param_1, uint volatile param_2)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  
  uVar1 = param_1;
  if (*(int *)this != 0) {
    pbVar2 = (byte *)FUN_0049adb0(this,param_1);
    iVar3 = FUN_0049acf0(this,uVar1,param_2,&param_1);
    if ((iVar3 != 0) && (pbVar2 != (byte *)0x0)) {
      if ((*pbVar2 & 7) == 4) {
        return (uint)*(ushort *)(iVar3 + 2) * 2 - 1;
      }
      return (uint)*(ushort *)(iVar3 + 2);
    }
  }
  return 0;
}
