/* Rebuilt from lomse.exe FUN_00470110 @ 0x00470110 (173 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00556b24 (*(undefined *)0x00556b24)
#define FUN_004b7c80 ((bool (__thiscall *)(void *, char *))0x004b7c80)
#define FUN_00505f10 ((undefined * (__stdcall *)(void))0x00505f10)
#define FUN_0053a090 ((int (__cdecl *)(undefined1 *, ...))0x0053a090)

#define LOM_SELF_00470110 1
void __thiscall rb_00470110(void *this,char *param_1,undefined4 param_2,byte *param_3)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  uchar _fr[0x40] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef char _t_local_34[52];
#define local_34 (*(_t_local_34 *)(_fr + 0x4))
  
  *(undefined4 *)((int)this + *(int *)((int)this + 0x36c) * 4 + 0x3b4) = param_2;
  pbVar3 = FUN_00505f10();
  do {
    bVar2 = *pbVar3;
    bVar9 = bVar2 < *param_3;
    if (bVar2 != *param_3) {
LAB_00470160:
      iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_00470165;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar3[1];
    bVar9 = bVar2 < param_3[1];
    if (bVar2 != param_3[1]) goto LAB_00470160;
    pbVar3 = pbVar3 + 2;
    param_3 = param_3 + 2;
  } while (bVar2 != 0);
  iVar4 = 0;
LAB_00470165:
  if (iVar4 == 0) {
    uVar5 = 0xffffffff;
    do {
      pcVar7 = param_1;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar7 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar7;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar7 = pcVar7 + -uVar5;
    pcVar8 = local_34;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
  }
  else {
    FUN_0053a090(local_34,&DAT_00556b24,(uint)param_1);
  }
  FUN_004b7c80(this,local_34);
  return;
#undef local_34
}
