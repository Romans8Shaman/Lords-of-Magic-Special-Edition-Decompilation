/* Rebuilt from lomse.exe FUN_0045cf70 @ 0x0045cf70 (277 bytes, __thiscall). HAND (2026-11-13, was asmfn):
 * Existing gen C matches the disassembly (DAT_005a7d1c VM-stack prelude, this+0x5000 / 00481f40, 10-short flag walk,
 * this+0x230c4 = param_1[0xd]&1, 0045d2e0, then DAT_005d2ca0 ? 0 : this+0x4dc8 / DAT_005aeef8 = 1). */
#include "lom.h"

#define DAT_00573428 (*(undefined4 *)0x00573428)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7d1c (*(undefined *)0x005a7d1c)
#define DAT_005a7d20 (*(int * *)0x005a7d20)
#define DAT_005aeef8 (*(undefined4 *)0x005aeef8)
#define DAT_005d2ca0 (*(int *)0x005d2ca0)
#define FUN_0045d2e0 ((undefined4 (__thiscall *)(void *, int *, int, void *, undefined4, undefined4, byte *, byte *, int, int))0x0045d2e0)
#define FUN_00481f40 ((undefined4 (__fastcall *)(int))0x00481f40)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_0045cf70 1
undefined4 __thiscall rb_0045cf70(void *this,undefined4 *param_1)

{
  void *pvVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  pvVar1 = DAT_005a7b78;
  if ((char)DAT_005a7d1c != '\0') {
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar1);
      *(undefined4 *)((int)pvVar1 + 0x90) = 0;
      *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    }
    else {
      iVar2 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar2;
      iVar4 = *(int *)((int)pvVar1 + 0x50);
      *(undefined4 *)(iVar4 + iVar2 * 8) = 1;
      *(undefined4 *)(iVar4 + 4 + iVar2 * 8) = 0;
    }
    FUN_004d09a0(DAT_005a7b78,(*(uint *)&DAT_005a7d1c),DAT_005a7d20,-1);
  }
  uVar5 = 0;
  *(undefined4 *)((int)this + 0x5000) = 0;
  FUN_00481f40((int)this);
  uVar6 = 0;
  DAT_00573428 = param_1[2];
  psVar3 = (short *)(param_1 + 3);
  iVar4 = 0;
  do {
    if ((-1 < *psVar3) && ((*(byte *)(psVar3 + 10) & 1) == 0)) {
      uVar5 = 1;
    }
    if ((0 < iVar4) && (-1 < *psVar3)) {
      uVar6 = 1;
    }
    iVar4 = iVar4 + 1;
    psVar3 = psVar3 + 1;
  } while (iVar4 < 10);
  *(uint *)((int)this + 0x230c4) = param_1[0xd] & 1;
  uVar5 = FUN_0045d2e0(this,(int *)*param_1,param_1[1],(void *)0x0,uVar5,uVar6,(byte *)(param_1 + 3)
                       ,(byte *)(param_1 + 8),(int)(param_1 + 0xe),(int)(param_1 + 0x13));
  if (DAT_005d2ca0 == 0) {
    *(undefined4 *)((int)this + 0x4dc8) = 1;
    DAT_005aeef8 = 1;
    return uVar5;
  }
  return 0;
}
