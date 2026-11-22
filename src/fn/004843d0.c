/* Rebuilt from lomse.exe FUN_004843d0 @ 0x004843d0 (193 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583560 (*(undefined4 *)0x00583560)
#define DAT_00584aa4 (*(undefined4 *)0x00584aa4)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005d1e84 (*(int *)0x005d1e84)
#define FUN_00484220 ((undefined4 (__fastcall *)(int))0x00484220)
#define FUN_0048cdb0 ((undefined4 (__stdcall *)(void))0x0048cdb0)
#define FUN_004b4a50 ((undefined4 (__fastcall *)(int))0x004b4a50)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_005000f0 ((undefined4 (__thiscall *)(void *, int))0x005000f0)
#define FUN_00505110 ((char * (__thiscall *)(void *, int, uint))0x00505110)
#define FUN_0053a790 ((undefined4 (__cdecl *)(LPCSTR))0x0053a790)

#define LOM_SELF_004843d0 1
void __fastcall rb_004843d0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  char *pcVar5;
  
  DAT_00583560 = 0;
  if (DAT_005d1e84 != 0) {
    *(undefined4 *)(DAT_005d1e84 + 0xd8) = 1;
  }
  FUN_004b4a50(0x5cd358);
  pvVar3 = DAT_005a7b78;
  uVar1 = *(undefined4 *)(param_1 + 0x4fb4);
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar3);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
  }
  else {
    iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
    iVar2 = *(int *)((int)pvVar3 + 0x50);
    *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
    *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = uVar1;
  }
  FUN_004d05e0(DAT_005a7b78,*(uint *)(param_1 + 0x4fb8),*(int **)(param_1 + 0x4fbc));
  FUN_005000f0(&DAT_00584ae8,2);
  FUN_00484220(param_1);
  FUN_0048cdb0();
  DAT_00584aa4 = 0;
  pcVar5 = FUN_00505110(&DAT_00584ae8,5,0xffffffff);
  FUN_0053a790(pcVar5);
  return;
}
