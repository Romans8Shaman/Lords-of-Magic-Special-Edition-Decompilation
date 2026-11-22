/* Rebuilt from lomse.exe FUN_004605b0 @ 0x004605b0 (967 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00573428 (*(int *)0x00573428)
#define DAT_00579458 (*(undefined *)0x00579458)
#define DAT_005830e8 (*(int *)0x005830e8)
#define DAT_005830ec (*(int *)0x005830ec)
#define DAT_00583100 (*(char *)0x00583100)
#define DAT_0058340c (*(undefined4 * *)0x0058340c)
#define DAT_005836f4 (*(undefined4 * *)0x005836f4)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_00585408 (*(undefined4 *)0x00585408)
#define DAT_005876d0 (*(undefined4 *)0x005876d0)
#define DAT_00587954 (*(undefined *)0x00587954)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005ae9c4 (*(undefined4 *)0x005ae9c4)
#define DAT_005ae9c8 (*(undefined4 *)0x005ae9c8)
#define DAT_005aee6c (*(undefined4 *)0x005aee6c)
#define FUN_00420310 ((undefined4 (__fastcall *)(int))0x00420310)
#define FUN_0042e1b0 ((undefined4 (__fastcall *)(int))0x0042e1b0)
#define FUN_0043c2e0 ((undefined4 (__fastcall *)(int))0x0043c2e0)
#define FUN_00453ab0 ((undefined4 (__stdcall *)(void))0x00453ab0)
#define FUN_0045a0e0 ((undefined4 (__thiscall *)(void *, undefined4, undefined4))0x0045a0e0)
#define FUN_0045c9b0 ((undefined4 (__fastcall *)(void *))0x0045c9b0)
#define FUN_00460440 ((undefined4 (__thiscall *)(void *))0x00460440)
#define FUN_004604f0 ((undefined4 (__fastcall *)(int))0x004604f0)
#define FUN_00469e80 ((undefined4 (__thiscall *)(void *, float))0x00469e80)
#define FUN_00478a20 ((undefined4 (__fastcall *)(int *))0x00478a20)
#define FUN_00478fb0 ((undefined4 (__fastcall *)(int))0x00478fb0)
#define FUN_00478ff0 ((undefined4 (__fastcall *)(uint))0x00478ff0)
#define FUN_00481610 ((undefined4 (__thiscall *)(void *, int))0x00481610)
#define FUN_00482af0 ((undefined4 (__thiscall *)(void *, LPCSTR))0x00482af0)
#define FUN_004855c0 ((undefined4 (__thiscall *)(void *, LPCSTR))0x004855c0)
#define FUN_00488610 ((undefined4 (__fastcall *)(int))0x00488610)
#define FUN_00495590 ((undefined4 (__fastcall *)(int *))0x00495590)
#define FUN_004a1930 ((undefined4 (__fastcall *)(undefined4 *))0x004a1930)
#define FUN_004a4be0 ((int (__thiscall *)(void *, undefined4))0x004a4be0)
#define FUN_004a6400 ((undefined4 (__thiscall *)(void *, float))0x004a6400)
#define FUN_004a6460 ((float10 (__fastcall *)(int))0x004a6460)
#define FUN_004a8540 ((undefined4 (__fastcall *)(int))0x004a8540)
#define FUN_004a8580 ((undefined4 (__thiscall *)(void *, int))0x004a8580)
#define FUN_004a93f0 ((undefined4 (__thiscall *)(void *, int, int, int, int))0x004a93f0)
#define FUN_004a9470 ((undefined4 (__fastcall *)(void *))0x004a9470)
#define FUN_004a9ad0 ((undefined4 (__fastcall *)(int))0x004a9ad0)
#define FUN_004aaf50 ((undefined4 (__thiscall *)(void *, undefined4, undefined4, undefined4))0x004aaf50)
#define FUN_004af530 ((undefined4 (__fastcall *)(int))0x004af530)
#define FUN_004b0f10 ((undefined4 (__fastcall *)(int))0x004b0f10)
#define FUN_004c6660 ((undefined4 (__fastcall *)(int *))0x004c6660)
#define FUN_004c8cf0 ((undefined4 (__fastcall *)(undefined4 *))0x004c8cf0)
#define FUN_004c9070 ((uint (__thiscall *)(void *, uint))0x004c9070)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004e7ea0 ((undefined4 (__fastcall *)(int))0x004e7ea0)
#define FUN_004f1890 ((undefined4 (__fastcall *)(int *))0x004f1890)
#define FUN_005000f0 ((undefined4 (__thiscall *)(void *, int))0x005000f0)
#define FUN_0050d110 ((undefined4 (__fastcall *)(int))0x0050d110)
#define FUN_00519980 ((undefined4 (__fastcall *)(int))0x00519980)
#define FUN_00519a10 ((undefined4 (__fastcall *)(int *))0x00519a10)
#define FUN_0051a860 ((undefined4 (__thiscall *)(void *, int, int))0x0051a860)
#define FUN_00524230 ((undefined4 (__fastcall *)(int))0x00524230)
#define FUN_0053a760 ((undefined4 (__cdecl *)(LPCSTR))0x0053a760)
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define PTR_s_MESSAGE_DAT_0055b890 (*(undefined * *)0x0055b890)
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004605b0 1
undefined4 __thiscall rb_004605b0(void *this)

{
  undefined4 *puVar1;
  int iVar2;
  LPCSTR pCVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  float10 fVar7;
  int *piVar8;
  
  FUN_004a1930((undefined4 *)((int)this + 0x22ed0));
  FUN_00478a20(&DAT_00585408);
  DAT_00573428 = *(int *)((int)this + 0xc58);
  if (DAT_00573428 < 1) {
    DAT_00573428 = 1;
  }
  iVar5 = *(int *)((int)this + 0xc58) % *(int *)((int)this + 0x4898);
  iVar2 = *(int *)((int)this + 0xc58) / *(int *)((int)this + 0x4898);
  FUN_004a93f0((void *)((int)this + 0x482c),iVar5 + -1,iVar2 + -1,iVar5 + 1,iVar2 + 1);
  DAT_005830ec = *(int *)((int)this + 0xc58) % *(int *)((int)this + 0x4898);
  DAT_005830e8 = *(int *)((int)this + 0xc58) / *(int *)((int)this + 0x4898);
  FUN_004a8540((int)this + 0x482c);
  *(undefined4 *)((int)this + 0x8c) = 7;
  pCVar3 = (LPCSTR)FUN_00453ab0();
  iVar2 = FUN_00482af0(this,pCVar3);
  if (iVar2 == 0) {
    return 0;
  }
  FUN_0053a760(PTR_s_MESSAGE_DAT_0055b890);
  FUN_00524230(0x5cd2ec);
  FUN_004af530(0x5cd2f8);
  FUN_004b0f10(0x5cd328);
  FUN_0042e1b0(0x5cd334);
  FUN_0043c2e0(0x5cd310);
  FUN_004f1890(&DAT_005aee6c);
  FUN_0050d110(0x5cd304);
  while (puVar1 = DAT_0058340c, puVar1 != (undefined4 *)0x0) {
    DAT_0058340c = (undefined4 *)puVar1[0xf];
    if (puVar1 != (undefined4 *)0x0) {
      ((undefined4 (__thiscall *)(__typeof__(puVar1), __typeof__(1)))(**(code **)*puVar1))(puVar1,1);
    }
  }
  DAT_0058340c = (undefined4 *)0x0;
  puVar1 = DAT_005836f4;
  while (puVar1 != (undefined4 *)0x0) {
    DAT_005836f4 = (undefined4 *)puVar1[0xf];
    if (puVar1 == (undefined4 *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = ((undefined4 (__thiscall *)(__typeof__(puVar1), __typeof__(0)))(**(code **)*puVar1))(puVar1,0);
    }
    puVar1 = DAT_005836f4;
    if (iVar2 != 0) {
      Ordinal_403(iVar2,s_C__lomse_source_storm_h_00555130,0x3eb,0);
      puVar1 = DAT_005836f4;
    }
  }
  DAT_005836f4 = (undefined4 *)0x0;
  FUN_00519980(0x5876d0);
  FUN_00495590((int *)&DAT_00587954);
  FUN_00478fb0(0x585408);
  FUN_00478ff0(0x585408);
  if (*(int *)((int)this + 0x22944) == 0) {
    iVar2 = FUN_004a9470((void *)((int)this + 0x482c));
    if (iVar2 == 0) {
      FUN_0045c9b0(this);
      return 0;
    }
  }
  else {
    if (*(int *)((int)this + 0x22948) != 0) {
      FUN_004a4be0((void *)((int)this + 0x482c),*(int *)((int)this + 0x22948));
    }
    FUN_004855c0(this,*(LPCSTR *)((int)this + 0x22944));
    uVar4 = FUN_004c9070((void *)((int)this + 0x4b34),1);
    if (uVar4 != 0) {
      uVar4 = DAT_005830ec + DAT_005830e8 * 2;
      uVar6 = (int)uVar4 >> 0x1f;
      iVar2 = ((uVar4 ^ uVar6) - uVar6 & 3 ^ uVar6) - uVar6;
      if (iVar2 != 0) {
        iVar2 = iVar2 * 0x5a + 0x2d;
        FUN_00469e80(&DAT_005876d0,(float)iVar2);
        fVar7 = FUN_004a6460((int)this + 0x482c);
        FUN_004a6400((void *)((int)this + 0x482c),(float)((float10)iVar2 - fVar7));
      }
    }
    FUN_00488610((int)this);
    FUN_004604f0((int)this);
    *(undefined4 *)((int)this + 0x4840) = 0;
    if (DAT_00583100 == '\x03') {
      FUN_004aaf50((void *)((int)this + 0x482c),1,0,0);
    }
    FUN_00519a10(&DAT_005876d0);
  }
  FUN_004a9ad0((int)this + 0x482c);
  FUN_00481610(this,3);
  if (*(int *)((int)this + 0x4f90) == 0) {
    FUN_004c6660((int *)((int)this + 0x4dd8));
  }
  FUN_004a8580((void *)((int)this + 0x482c),1);
  if (DAT_00583100 == '\x02') {
    FUN_004c8cf0((int *)((int)this + 0x4dd8));
  }
  FUN_004e7ea0((int)this + 0x660);
  FUN_004e7ea0((int)this + 0xc3c);
  if (DAT_00583100 == '\x02') {
    piVar8 = *(int **)((int)this + 0x4b00);
    uVar4 = *(uint *)((int)this + 0x4afc);
  }
  else if (DAT_00583100 == '\x01') {
    piVar8 = *(int **)((int)this + 0x4b08);
    uVar4 = *(uint *)((int)this + 0x4b04);
  }
  else {
    if (DAT_00583100 != '\x03') goto LAB_004608f9;
    uVar4 = *(uint *)((int)this + 0x2294c);
    piVar8 = *(int **)((int)this + 0x22950);
    if (((char)uVar4 != '\x06') || ((uVar4 & 0x100) != 0)) goto LAB_004608f9;
  }
  FUN_004d05e0(DAT_005a7b78,uVar4,piVar8);
LAB_004608f9:
  FUN_00460440((void *)((int)this + 0x4848));
  FUN_0051a860(&DAT_00584ae8,*(int *)((int)this + 0x500c),*(int *)((int)this + 0x5010));
  FUN_0045a0e0(&DAT_00579458,DAT_005ae9c4,DAT_005ae9c8);
  FUN_00420310((int)this + 0x4848);
  FUN_005000f0(&DAT_00584ae8,3);
  return 1;
}
