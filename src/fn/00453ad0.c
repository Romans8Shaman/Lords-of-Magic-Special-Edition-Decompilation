/* Rebuilt from lomse.exe FUN_00453ad0 @ 0x00453ad0 (895 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00573428 (*(int *)0x00573428)
#define DAT_00579458 (*(undefined *)0x00579458)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005ae9c4 (*(undefined4 *)0x005ae9c4)
#define DAT_005ae9c8 (*(undefined4 *)0x005ae9c8)
#define FUN_00418f10 ((undefined4 (__thiscall *)(void *, undefined4 *))0x00418f10)
#define FUN_00419d00 ((undefined4 (__thiscall *)(void *, undefined4 *))0x00419d00)
#define FUN_00420310 ((undefined4 (__fastcall *)(int))0x00420310)
#define FUN_00453ab0 ((undefined4 (__stdcall *)(void))0x00453ab0)
#define FUN_0045a0e0 ((undefined4 (__thiscall *)(void *, undefined4, undefined4))0x0045a0e0)
#define FUN_0045c9e0 ((undefined4 (__fastcall *)(void *))0x0045c9e0)
#define FUN_00460440 ((undefined4 (__thiscall *)(void *))0x00460440)
#define FUN_00481610 ((undefined4 (__thiscall *)(void *, int))0x00481610)
#define FUN_00482af0 ((undefined4 (__thiscall *)(void *, LPCSTR))0x00482af0)
#define FUN_004a8540 ((undefined4 (__fastcall *)(int))0x004a8540)
#define FUN_004a8580 ((undefined4 (__thiscall *)(void *, int))0x004a8580)
#define FUN_004a93f0 ((undefined4 (__thiscall *)(void *, int, int, int, int))0x004a93f0)
#define FUN_004a9470 ((undefined4 (__fastcall *)(void *))0x004a9470)
#define FUN_004bb160 ((undefined4 (__thiscall *)(void *, undefined4))0x004bb160)
#define FUN_005000f0 ((undefined4 (__thiscall *)(void *, int))0x005000f0)
#define FUN_0051a860 ((undefined4 (__thiscall *)(void *, int, int))0x0051a860)
#define FUN_0053a760 ((undefined4 (__cdecl *)(LPCSTR))0x0053a760)
#define PTR_s_MESSAGE_DAT_0055b890 (*(undefined * *)0x0055b890)
#define _DAT_00579358 (*(undefined4 *)0x00579358)
#define _DAT_0057935c (*(undefined4 *)0x0057935c)

#define LOM_SELF_00453ad0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall rb_00453ad0(void *this,undefined4 *in_stack_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  LPCSTR pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  puVar1 = in_stack_4;
  iVar4 = in_stack_4[7];
  FUN_00418f10((void *)((int)this + 0x660),in_stack_4);
  *(undefined4 *)((int)this + 0x6a4) = in_stack_4[0x11];
  *(undefined4 *)((int)this + 0x6a8) = in_stack_4[0x12];
  *(undefined4 *)((int)this + 0x6ac) = in_stack_4[0x13];
  *(undefined4 *)((int)this + 0x6b0) = in_stack_4[0x14];
  *(undefined4 *)((int)this + 0x6b4) = in_stack_4[0x15];
  *(undefined4 *)((int)this + 0x6b8) = in_stack_4[0x16];
  *(undefined4 *)((int)this + 0x6bc) = in_stack_4[0x17];
  *(undefined4 *)((int)this + 0x6c0) = in_stack_4[0x18];
  *(undefined4 *)((int)this + 0x6c4) = in_stack_4[0x19];
  puVar2 = in_stack_4 + 0x1a;
  puVar8 = (undefined4 *)((int)this + 0x6c8);
  for (iVar5 = 0x16; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined4 *)((int)this + 0x720) = in_stack_4[0x30];
  iVar5 = (int)in_stack_4 - ((int)this + 0x660);
  in_stack_4 = (undefined4 *)0xf;
  puVar2 = (undefined4 *)((int)this + 0x724);
  do {
    puVar8 = (undefined4 *)(iVar5 + (int)puVar2);
    puVar9 = puVar2;
    for (iVar6 = 0x13; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    in_stack_4 = (undefined4 *)((int)in_stack_4 + -1);
    puVar2 = puVar2 + 0x13;
  } while (in_stack_4 != (undefined4 *)0x0);
  *(undefined4 *)((int)this + 0xb98) = puVar1[0x14e];
  *(undefined4 *)((int)this + 0xb9c) = puVar1[0x14f];
  *(undefined4 *)((int)this + 0xba0) = puVar1[0x150];
  *(undefined4 *)((int)this + 0xba4) = puVar1[0x151];
  *(undefined4 *)((int)this + 0xba8) = puVar1[0x152];
  *(undefined4 *)((int)this + 0xbac) = puVar1[0x153];
  *(undefined4 *)((int)this + 0xbb0) = puVar1[0x154];
  *(undefined4 *)((int)this + 0xbb4) = puVar1[0x155];
  *(undefined4 *)((int)this + 3000) = puVar1[0x156];
  *(undefined4 *)((int)this + 0xbbc) = puVar1[0x157];
  *(undefined4 *)((int)this + 0xbc0) = puVar1[0x158];
  *(undefined4 *)((int)this + 0xbc4) = puVar1[0x159];
  puVar2 = puVar1 + 0x15a;
  puVar8 = (undefined4 *)((int)this + 0xbc8);
  for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined4 *)((int)this + 0xbec) = puVar1[0x163];
  *(undefined4 *)((int)this + 0xbf0) = puVar1[0x164];
  *(undefined4 *)((int)this + 0xbf4) = puVar1[0x165];
  *(undefined4 *)((int)this + 0xbf8) = puVar1[0x166];
  *(undefined4 *)((int)this + 0xbfc) = puVar1[0x167];
  *(undefined4 *)((int)this + 0xc00) = puVar1[0x168];
  *(undefined4 *)((int)this + 0xc04) = puVar1[0x169];
  *(undefined4 *)((int)this + 0xc08) = puVar1[0x16a];
  *(undefined1 *)((int)this + 0xc0c) = *(undefined1 *)(puVar1 + 0x16b);
  *(undefined4 *)((int)this + 0xc10) = puVar1[0x16c];
  *(undefined4 *)((int)this + 0xc14) = puVar1[0x16d];
  *(undefined4 *)((int)this + 0xc18) = puVar1[0x16e];
  *(undefined4 *)((int)this + 0xc1c) = puVar1[0x16f];
  *(undefined4 *)((int)this + 0xc20) = puVar1[0x170];
  *(undefined4 *)((int)this + 0xc24) = puVar1[0x171];
  *(undefined1 *)((int)this + 0xc28) = *(undefined1 *)(puVar1 + 0x172);
  *(undefined4 *)((int)this + 0xc2c) = puVar1[0x173];
  *(undefined1 *)((int)this + 0xc30) = *(undefined1 *)(puVar1 + 0x174);
  *(undefined4 *)((int)this + 0xc34) = puVar1[0x175];
  *(undefined1 *)((int)this + 0xc38) = *(undefined1 *)(puVar1 + 0x176);
  FUN_00419d00((void *)((int)this + 0xc3c),puVar1);
  iVar6 = iVar4 % *(int *)((int)this + 0x4898);
  iVar5 = iVar4 / *(int *)((int)this + 0x4898);
  pvVar7 = (void *)((int)this + 0x482c);
  DAT_00573428 = iVar4;
  FUN_004a93f0(pvVar7,iVar6 + -1,iVar5 + -1,iVar6 + 1,iVar5 + 1);
  _DAT_0057935c = iVar4 % *(int *)((int)this + 0x4898);
  _DAT_00579358 = iVar4 / *(int *)((int)this + 0x4898);
  FUN_004a8540((int)pvVar7);
  pCVar3 = (LPCSTR)FUN_00453ab0();
  iVar4 = FUN_00482af0(this,pCVar3);
  if (iVar4 == 0) {
    return 0;
  }
  FUN_0053a760(PTR_s_MESSAGE_DAT_0055b890);
  iVar4 = FUN_004a9470(pvVar7);
  if (iVar4 == 0) {
    FUN_0045c9e0(this);
    return 0;
  }
  FUN_00481610(this,4);
  FUN_004a8580(pvVar7,0);
  FUN_00460440((void *)((int)this + 0x4848));
  FUN_0051a860(&DAT_00584ae8,*(int *)((int)this + 0x500c),*(int *)((int)this + 0x5010));
  FUN_0045a0e0(&DAT_00579458,DAT_005ae9c4,DAT_005ae9c8);
  FUN_00420310((int)this + 0x4848);
  iVar4 = puVar1[0x12];
  if ((iVar4 < 0) || (0xf < iVar4)) {
    pvVar7 = (void *)0x0;
  }
  else {
    pvVar7 = (void *)((int)this + iVar4 * 0x1d84 + 0x5068);
  }
  if (pvVar7 != (void *)0x0) {
    FUN_004bb160(pvVar7,1);
  }
  FUN_005000f0(&DAT_00584ae8,4);
  return 1;
}
