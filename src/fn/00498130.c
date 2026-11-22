/* Rebuilt from lomse.exe op_gettotallines @ 0x00498130 (99 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00497940 ((int (__fastcall *)(int *))0x00497940)
#define FUN_00498040 ((undefined4 (__cdecl *)(void *, int *))0x00498040)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_00498130 1
void __cdecl rb_00498130(int *volatile param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = param_1;
  iVar3 = FUN_00498040(param_1,(int *)&param_1);
  if (iVar3 != 0) {
    iVar3 = FUN_00497940(param_1);
    if (piVar2[0x15] != 0) {
      iVar4 = piVar2[0x15] + -1;
      piVar2[0x15] = iVar4;
      iVar1 = piVar2[0x14];
      *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
      *(int *)(iVar1 + 4 + iVar4 * 8) = iVar3;
      return;
    }
    piVar2[0x24] = 3;
    FUN_004d4550(piVar2);
    piVar2[0x24] = 0;
    piVar2[0x29] = 0;
  }
  return;
}
