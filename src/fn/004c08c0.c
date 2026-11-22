/* Rebuilt from lomse.exe FUN_004c08c0 @ 0x004c08c0 (193 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004bbb70 ((undefined4 (__thiscall *)(void *, int *, int *))0x004bbb70)
#define FUN_00525f20 ((uint (__fastcall *)(int))0x00525f20)

#define LOM_SELF_004c08c0 1
undefined4 __thiscall rb_004c08c0(void *this, int volatile param_1, int volatile param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (((param_1 != 0) && (-1 < param_2)) && (param_2 < *(int *)(param_1 + 0x4c))) {
    iVar1 = param_1 + param_2 * 0x4c;
    uVar2 = FUN_00525f20(iVar1 + 0xc4);
    if (uVar2 != 0) {
      FUN_004bbb70(this,&param_2,&param_1);
      if (-1 < param_2) {
        puVar3 = FUN_00485080(&DAT_005aa12c,param_2,0x2f);
        *(uint *)(puVar3[param_1 * 0x13 + 0x36] + 8) =
             *(uint *)(puVar3[param_1 * 0x13 + 0x36] + 8) & 0xfffffffe;
        *(uint *)(puVar3[param_1 * 0x13 + 0x36] + 8) =
             *(uint *)(puVar3[param_1 * 0x13 + 0x36] + 8) | 2;
      }
      *(uint *)(*(int *)(iVar1 + 0xd8) + 8) = *(uint *)(*(int *)(iVar1 + 0xd8) + 8) & 0xfffffffd;
      *(uint *)(*(int *)(iVar1 + 0xd8) + 8) = *(uint *)(*(int *)(iVar1 + 0xd8) + 8) | 1;
      return 1;
    }
  }
  return 0;
}
