/* Rebuilt from lomse.exe FUN_0047f520 @ 0x0047f520 (1310 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583648 (*(int *)0x00583648)
#define DAT_005d3340 (*(undefined4 *)0x005d3340)
#define DAT_005d3344 (*(undefined4 *)0x005d3344)
#define FUN_0040b3d0 ((undefined4 (__fastcall *)(undefined4 *))0x0040b3d0)
#define FUN_0040c7a0 ((undefined4 (__fastcall *)(undefined4 *))0x0040c7a0)
#define FUN_00411610 ((undefined4 * (__fastcall *)(undefined4 *))0x00411610)
#define FUN_00427760 ((undefined4 (__thiscall *)(void *, int))0x00427760)
#define FUN_00427b50 ((undefined4 (__fastcall *)(int))0x00427b50)
#define FUN_0042e4c0 ((undefined4 * (__fastcall *)(undefined4 *))0x0042e4c0)
#define FUN_004371e0 ((undefined4 * (__fastcall *)(undefined4 *))0x004371e0)
#define FUN_00454700 ((undefined4 * (__fastcall *)(undefined4 *))0x00454700)
#define FUN_00455100 ((undefined4 (__fastcall *)(int))0x00455100)
#define FUN_0047bd20 ((undefined4 * (__fastcall *)(undefined4 *))0x0047bd20)
#define FUN_00486b60 ((undefined4 (__fastcall *)(undefined4 *))0x00486b60)
#define FUN_004896c0 ((undefined4 (__fastcall *)(int))0x004896c0)
#define FUN_00494610 ((undefined4 (__fastcall *)(undefined4 *))0x00494610)
#define FUN_004a4820 ((undefined1 * (__fastcall *)(undefined1 *))0x004a4820)
#define FUN_004b1950 ((undefined4 * (__fastcall *)(undefined4 *))0x004b1950)
#define FUN_004b26b0 ((undefined4 * (__fastcall *)(undefined4 *))0x004b26b0)
#define FUN_004bba90 ((undefined4 * (__fastcall *)(undefined4 *))0x004bba90)
#define FUN_004bbe80 ((undefined4 (__fastcall *)(int))0x004bbe80)
#define FUN_004bbf80 ((undefined4 (__thiscall *)(void *, undefined4, undefined4, undefined4))0x004bbf80)
#define FUN_004c3990 ((undefined4 (__fastcall *)(undefined4 *))0x004c3990)
#define FUN_004c3bf0 ((undefined4 * (__fastcall *)(undefined4 *))0x004c3bf0)
#define FUN_004c5b40 ((undefined4 * (__fastcall *)(undefined4 *))0x004c5b40)
#define FUN_004c8f80 ((undefined4 * (__fastcall *)(undefined4 *))0x004c8f80)
#define FUN_004ecc80 ((undefined4 * (__fastcall *)(undefined4 *))0x004ecc80)
#define FUN_004ef2c0 ((undefined4 (__fastcall *)(undefined4 *))0x004ef2c0)
#define FUN_00526170 ((undefined4 (__fastcall *)(undefined4 *))0x00526170)
#define FUN_0052b240 ((undefined4 (__fastcall *)(undefined4 *))0x0052b240)
#define FUN_00539ff0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *, undefined4))0x00539ff0)
#define GetTickCount (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d0e8) /* KERNEL32.DLL!GetTickCount via IAT */
#define LAB_00489950 (*(undefined *)0x00489950) /* code label used as address */
#define s_TILES_TIL_0055b1b4 (*(char (*)[])0x0055b1b4)

#define LOM_SELF_0047f520 1
int __fastcall rb_0047f520(int param_1)

{
  char cVar1;
  DWORD DVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  void *this;
  char *pcVar7;
  undefined4 *puVar8;

  FUN_00454700((undefined4 *)(param_1 + 0xb0));
  FUN_00486b60((undefined4 *)(param_1 + 0xc4));
  FUN_004b1950((undefined4 *)(param_1 + 0x130));
  DAT_00583648 = DAT_00583648 + 0x20;
  FUN_00494610((undefined4 *)(param_1 + 0x5e8));
  DAT_00583648 = DAT_00583648 + 0x20;
  FUN_00494610((undefined4 *)(param_1 + 0x608));
  DAT_00583648 = DAT_00583648 + 0x20;
  FUN_00494610((undefined4 *)(param_1 + 0x630));
  FUN_00411610((undefined4 *)(param_1 + 0x660));
  FUN_00411610((undefined4 *)(param_1 + 0xc3c));
  FUN_00411610((undefined4 *)(param_1 + 0x1218));
  FUN_00411610((undefined4 *)(param_1 + 0x17f4));
  FUN_00411610((undefined4 *)(param_1 + 0x1dd0));
  FUN_00411610((undefined4 *)(param_1 + 0x23ac));
  FUN_00411610((undefined4 *)(param_1 + 0x2988));
  FUN_00411610((undefined4 *)(param_1 + 0x2f64));
  FUN_00411610((undefined4 *)(param_1 + 0x3540));
  FUN_0042e4c0((undefined4 *)(param_1 + 0x3b24));
  FUN_00455100(param_1 + 0x47bc);
  FUN_004a4820((undefined1 *)(param_1 + 0x482c));
  FUN_004c8f80((undefined4 *)(param_1 + 0x4b34));
  FUN_00526170((undefined4 *)(param_1 + 0x4d40));
  FUN_0040b3d0((undefined4 *)(param_1 + 0x4d4c));
  FUN_0040b3d0((undefined4 *)(param_1 + 0x4d60));
  FUN_0040c7a0((undefined4 *)(param_1 + 0x4d74));
  FUN_0040c7a0((undefined4 *)(param_1 + 0x4d84));
  FUN_0040c7a0((undefined4 *)(param_1 + 0x4d94));
  FUN_004c3990((undefined4 *)(param_1 + 0x4da4));
  FUN_004c3bf0((undefined4 *)(param_1 + 0x4db0));
  FUN_004ef2c0((undefined4 *)(param_1 + 0x4dd0));
  FUN_004c5b40((undefined4 *)(param_1 + 0x4dd8));
  this = (void *)(param_1 + 0x5068);
  FUN_00539ff0(this,0x1d84,0x10,FUN_004bba90,FUN_004bbe80);
  FUN_0047bd20((undefined4 *)(param_1 + 0x228bc));
  FUN_004ecc80((undefined4 *)(param_1 + 0x22944));
  FUN_004b26b0((undefined4 *)(param_1 + 0x22994));
  FUN_00539ff0(param_1 + 0x22a5c,0x18,0x14,FUN_00427b50,&LAB_00489950);
  FUN_004371e0((undefined4 *)(param_1 + 0x22db0));
  FUN_004ef2c0((undefined4 *)(param_1 + 0x22ec8));
  FUN_0052b240((undefined4 *)(param_1 + 0x23060));
  FUN_00427760((undefined4 *)(param_1 + 0x4dd0),200000);
  *(undefined4 *)(param_1 + 0x228ac) = 100;
  DVar2 = GetTickCount();
  *(DWORD *)(param_1 + 0x228b0) = DVar2;
  *(undefined4 *)(param_1 + 0x4820) = 0;
  *(undefined4 *)(param_1 + 0x4824) = 0;
  *(undefined4 *)(param_1 + 0x5004) = 0;
  *(undefined4 *)(param_1 + 0x500c) = 0x500;
  *(undefined4 *)(param_1 + 0x5010) = 0x300;
  *(undefined4 *)(param_1 + 0x5014) = 0xc;
  *(undefined4 *)(param_1 + 0x5018) = 0x12;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x654) = 2;
  iVar5 = 0;
  do {
    FUN_004bbf80(this,iVar5,0xffffffff,0xffffffff);
    iVar5 = iVar5 + 1;
    this = (void *)((int)this + 0x1d84);
  } while (iVar5 < 0x10);
  uVar3 = 0xffffffff;
  pcVar6 = s_TILES_TIL_0055b1b4;
  do {
    pcVar7 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar6 = pcVar7 + -uVar3;
  pcVar7 = (char *)(param_1 + 0x4b38);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar3 = 0xffffffff;
  pcVar6 = s_TILES_TIL_0055b1b4;
  do {
    pcVar7 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar6 = pcVar7 + -uVar3;
  pcVar7 = (char *)(param_1 + 0x4c3c);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  *(undefined4 *)(param_1 + 0x228b8) = 0;
  *(undefined4 *)(param_1 + 0x228b4) = 0;
  *(undefined4 *)(param_1 + 0x5064) = 0;
  *(undefined4 *)(param_1 + 0x22990) = 0;
  *(undefined4 *)(param_1 + 0x4fb4) = 1;
  *(undefined4 *)(param_1 + 0x4fb8) = 0;
  *(undefined4 *)(param_1 + 0x4fc0) = 0;
  *(undefined4 *)(param_1 + 0x4fc8) = 1;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x37;
  *(undefined4 *)(param_1 + 0x1c) = 0x5a;
  *(undefined4 *)(param_1 + 0x20) = 0x5a;
  *(undefined4 *)(param_1 + 0x24) = 0x37;
  *(undefined4 *)(param_1 + 0x501c) = 0xfa;
  *(undefined4 *)(param_1 + 0x5024) = 0;
  *(undefined4 *)(param_1 + 0x5028) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x502c) = 0;
  *(undefined4 *)(param_1 + 0x22c3c) = 0;
  *(undefined4 *)(param_1 + 0x22c40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x22dac) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6ac) = 0;
  *(undefined4 *)(param_1 + 0xc88) = 0;
  *(undefined4 *)(param_1 + 0x5040) = 0;
  *(undefined4 *)(param_1 + 0x5048) = 0;
  *(undefined4 *)(param_1 + 0x504c) = 0;
  *(undefined4 *)(param_1 + 0x23064) = 0;
  DAT_005d3344 = 0;
  DAT_005d3340 = 0;
  *(undefined4 *)(param_1 + 0x5e4) = 0;
  *(undefined4 *)(param_1 + 0x5054) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 1;
  *(undefined4 *)(param_1 + 0x3b1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3b20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa4) = 600000;
  puVar8 = (undefined4 *)(param_1 + 0x4fcc);
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined4 *)(param_1 + 0x47b8) = 0;
  *(undefined4 *)(param_1 + 0x4fec) = 0;
  *(undefined4 *)(param_1 + 0x4ff0) = 0;
  *(undefined4 *)(param_1 + 0x4ff4) = 0;
  *(undefined4 *)(param_1 + 0x5000) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 2;
  *(undefined4 *)(param_1 + 0xac) = 0x42340000;
  *(undefined4 *)(param_1 + 0x4dc4) = 0;
  *(undefined4 *)(param_1 + 0x478c) = 0;
  *(undefined4 *)(param_1 + 0x4790) = 0;
  *(undefined4 *)(param_1 + 0x4794) = 0;
  *(undefined4 *)(param_1 + 0x4798) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x479c) = 0;
  *(undefined4 *)(param_1 + 0x47a8) = 0;
  *(undefined2 *)(param_1 + 0x23094) = 0xffff;
  *(undefined4 *)(param_1 + 0x230c8) = 0xffffffff;
  FUN_004896c0(param_1);
  *(undefined4 *)(param_1 + 0x23194) = 1;
  return param_1;
}
