/* Rebuilt from lomse.exe FUN_004b3a40 @ 0x004b3a40 (127 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00586644 (*(int *)0x00586644)
#define FUN_0053a090 ((int (__cdecl *)(undefined1 *, ...))0x0053a090)
#define s__s_lose5_wav_0055ce80 (*(char (*)[])0x0055ce80)
#define s__s_neut1a_wav_0055ce9c (*(char (*)[])0x0055ce9c)
#define s__s_win5_wav_0055ce90 (*(char (*)[])0x0055ce90)

#define LOM_SELF_004b3a40 1
int __fastcall rb_004b3a40(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x1240) != 5) {
    iVar3 = FUN_0053a090((undefined1 *)(param_1 + 0x1244),s__s_neut1a_wav_0055ce9c,
                         *(uint *)(param_1 + 0x1394));
    return iVar3;
  }
  cVar1 = *(char *)(param_1 + 0x1345);
  uVar2 = (uint)DAT_00586644 >> 8;
  if (DAT_00586644 == 0) {
    if (cVar1 == '\0') {
      iVar3 = FUN_0053a090((undefined1 *)(param_1 + 0x1244),s__s_lose5_wav_0055ce80,
                           *(uint *)(param_1 + 0x1394));
      return iVar3;
    }
  }
  else if (cVar1 == '\0') {
    iVar3 = FUN_0053a090((undefined1 *)(param_1 + 0x1244),s__s_win5_wav_0055ce90,
                         *(uint *)(param_1 + 0x1394));
    return iVar3;
  }
  *(undefined4 *)(param_1 + 0xfc8) = 1;
  return CONCAT31((uint)uVar2,cVar1);
}
