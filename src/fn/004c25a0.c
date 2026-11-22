/* Rebuilt from lomse.exe FUN_004c25a0 @ 0x004c25a0 (1135 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7be4 (*(uint *)0x005a7be4)
#define DAT_005a7be8 (*(int * *)0x005a7be8)
#define DAT_005a7c4c (*(uint *)0x005a7c4c)
#define DAT_005a7c50 (*(int * *)0x005a7c50)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005aa78c (*(undefined4 *)0x005aa78c)
#define DAT_005ab920 (*(undefined4 *)0x005ab920)
#define DAT_005ab988 (*(undefined4 *)0x005ab988)
#define DAT_005ab9e4 (*(undefined4 *)0x005ab9e4)
#define DAT_005abe88 (*(undefined4 *)0x005abe88)
#define DAT_005abecc (*(undefined1 *)0x005abecc)
#define DAT_005abee8 (*(undefined1 *)0x005abee8)
#define DAT_005abef0 (*(undefined1 *)0x005abef0)
#define DAT_005abef8 (*(undefined1 *)0x005abef8)
#define FUN_00411760 ((undefined4 (__fastcall *)(int))0x00411760)
#define FUN_004117f0 ((undefined4 (__thiscall *)(void *, uint))0x004117f0)
#define FUN_00415b10 ((undefined4 (__thiscall *)(void *, undefined4 *, int))0x00415b10)
#define FUN_00416a30 ((undefined4 (__fastcall *)(int))0x00416a30)
#define FUN_004176d0 ((undefined4 (__thiscall *)(void *, int))0x004176d0)
#define FUN_00419d00 ((undefined4 (__thiscall *)(void *, undefined4 *))0x00419d00)
#define FUN_00420560 ((undefined4 (__fastcall *)(int))0x00420560)
#define FUN_004245a0 ((undefined4 (__fastcall *)(int *))0x004245a0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_00483be0 ((undefined4 (__thiscall *)(void *, int *))0x00483be0)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_0052d160 ((undefined4 (__fastcall *)(int))0x0052d160)
#define _DAT_005ab948 (*(undefined4 *)0x005ab948)
#define _DAT_005ab94c (*(undefined4 *)0x005ab94c)
#define _DAT_005ab964 (*(undefined4 *)0x005ab964)
#define _DAT_005ab968 (*(undefined4 *)0x005ab968)
#define _DAT_005ab96c (*(undefined4 *)0x005ab96c)
#define _DAT_005ab970 (*(undefined4 *)0x005ab970)
#define _DAT_005ab974 (*(undefined4 *)0x005ab974)
#define _DAT_005ab978 (*(undefined4 *)0x005ab978)
#define _DAT_005ab97c (*(undefined4 *)0x005ab97c)
#define _DAT_005ab980 (*(undefined4 *)0x005ab980)
#define _DAT_005ab984 (*(undefined4 *)0x005ab984)
#define _DAT_005ab9e0 (*(undefined4 *)0x005ab9e0)
#define _DAT_005abe58 (*(undefined4 *)0x005abe58)
#define _DAT_005abe5c (*(undefined4 *)0x005abe5c)
#define _DAT_005abe60 (*(undefined4 *)0x005abe60)
#define _DAT_005abe64 (*(undefined4 *)0x005abe64)
#define _DAT_005abe68 (*(undefined4 *)0x005abe68)
#define _DAT_005abe6c (*(undefined4 *)0x005abe6c)
#define _DAT_005abe70 (*(undefined4 *)0x005abe70)
#define _DAT_005abe74 (*(undefined4 *)0x005abe74)
#define _DAT_005abe78 (*(undefined4 *)0x005abe78)
#define _DAT_005abe7c (*(undefined4 *)0x005abe7c)
#define _DAT_005abe80 (*(undefined4 *)0x005abe80)
#define _DAT_005abe84 (*(undefined4 *)0x005abe84)
#define _DAT_005abeac (*(undefined4 *)0x005abeac)
#define _DAT_005abeb0 (*(undefined4 *)0x005abeb0)
#define _DAT_005abeb4 (*(undefined4 *)0x005abeb4)
#define _DAT_005abeb8 (*(undefined4 *)0x005abeb8)
#define _DAT_005abebc (*(undefined4 *)0x005abebc)
#define _DAT_005abec0 (*(undefined4 *)0x005abec0)
#define _DAT_005abec4 (*(undefined4 *)0x005abec4)
#define _DAT_005abec8 (*(undefined4 *)0x005abec8)
#define _DAT_005abed0 (*(undefined4 *)0x005abed0)
#define _DAT_005abed4 (*(undefined4 *)0x005abed4)
#define _DAT_005abed8 (*(undefined4 *)0x005abed8)
#define _DAT_005abedc (*(undefined4 *)0x005abedc)
#define _DAT_005abee0 (*(undefined4 *)0x005abee0)
#define _DAT_005abee4 (*(undefined4 *)0x005abee4)
#define _DAT_005abeec (*(undefined4 *)0x005abeec)
#define _DAT_005abef4 (*(undefined4 *)0x005abef4)

#define LOM_SELF_004c25a0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall rb_004c25a0(void *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  void *pvVar3;
  int *this_00;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  int *piVar12;
  
  this_00 = (int *)FUN_00482ac0(this,param_1[1],0);
  if (this_00 == (int *)0x0) {
    return 0;
  }
  this_00[0x12] = this_00[0x16e];
  iVar4 = FUN_00416a30((int)this_00);
  iVar1 = this_00[0x12];
  puVar5 = FUN_00485080(this,*param_1,0x2f);
  if (puVar5 != (undefined4 *)0x0) {
    FUN_00415b10(this_00,puVar5,0);
  }
  if (((iVar4 != 0) && (-1 < iVar1)) && (iVar1 < 8)) {
    FUN_004117f0((void *)((int)this + 0x660),0);
    FUN_004117f0((void *)((int)this + 0xc3c),0);
    FUN_004117f0((void *)((int)this + 0x1dd0),0);
    FUN_004117f0((void *)((int)this + 0x23ac),0);
    FUN_004117f0((void *)((int)this + 0x2988),0);
    FUN_004117f0((void *)((int)this + 0x2f64),0);
    FUN_00411760((int)this + 0x1218);
    FUN_00411760((int)this + 0x17f4);
    *(undefined4 *)((int)this + 0x1240) = 0xfffffffa;
    *(undefined4 *)((int)this + 0x688) = 0xffffffff;
    *(undefined4 *)((int)this + 0x1df8) = 0xffffffff;
    *(undefined4 *)((int)this + 0x29b0) = 0xffffffff;
    *(undefined4 *)((int)this + 0xc64) = 0xffffffff;
    *(undefined4 *)((int)this + 0x23d4) = 0xffffffff;
    *(undefined4 *)((int)this + 0x2f8c) = 0xffffffff;
    *(undefined4 *)((int)this + 0x181c) = 0xfffffff9;
    piVar10 = this_00;
    piVar12 = &DAT_005ab920;
    for (iVar7 = 0x11; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar12 = *piVar10;
      piVar10 = piVar10 + 1;
      piVar12 = piVar12 + 1;
    }
    _DAT_005ab94c = 0;
    _DAT_005ab964 = this_00[0x11];
    _DAT_005ab968 = this_00[0x12];
    _DAT_005ab96c = this_00[0x13];
    _DAT_005ab970 = this_00[0x14];
    _DAT_005ab974 = this_00[0x15];
    _DAT_005ab978 = this_00[0x16];
    _DAT_005ab97c = this_00[0x17];
    _DAT_005ab980 = this_00[0x18];
    _DAT_005ab984 = this_00[0x19];
    piVar10 = this_00 + 0x1a;
    piVar12 = &DAT_005ab988;
    for (iVar7 = 0x16; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar12 = *piVar10;
      piVar10 = piVar10 + 1;
      piVar12 = piVar12 + 1;
    }
    _DAT_005ab9e0 = this_00[0x30];
    iVar7 = 0xf;
    puVar6 = &DAT_005ab9e4;
    do {
      iVar7 = iVar7 + -1;
      puVar9 = (undefined4 *)((int)(this_00 + -0x16ae48) + (int)puVar6);
      puVar11 = puVar6;
      for (iVar8 = 0x13; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      puVar6 = puVar6 + 0x13;
    } while (iVar7 != 0);
    _DAT_005abe58 = this_00[0x14e];
    _DAT_005abe5c = this_00[0x14f];
    _DAT_005abe60 = this_00[0x150];
    _DAT_005abe64 = this_00[0x151];
    _DAT_005abe68 = this_00[0x152];
    _DAT_005abe6c = this_00[0x153];
    _DAT_005abe70 = this_00[0x154];
    _DAT_005abe74 = this_00[0x155];
    _DAT_005abe78 = this_00[0x156];
    _DAT_005abe7c = this_00[0x157];
    _DAT_005abe80 = this_00[0x158];
    _DAT_005abe84 = this_00[0x159];
    piVar10 = this_00 + 0x15a;
    piVar12 = &DAT_005abe88;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar12 = *piVar10;
      piVar10 = piVar10 + 1;
      piVar12 = piVar12 + 1;
    }
    _DAT_005abeac = this_00[0x163];
    _DAT_005abeb0 = this_00[0x164];
    _DAT_005abeb4 = this_00[0x165];
    _DAT_005abeb8 = this_00[0x166];
    _DAT_005abebc = this_00[0x167];
    _DAT_005abec0 = this_00[0x168];
    _DAT_005abec4 = this_00[0x169];
    _DAT_005abec8 = this_00[0x16a];
    DAT_005abecc = (undefined1)this_00[0x16b];
    _DAT_005abed0 = this_00[0x16c];
    _DAT_005abed4 = this_00[0x16d];
    _DAT_005abed8 = this_00[0x16e];
    _DAT_005abedc = this_00[0x16f];
    _DAT_005abee0 = this_00[0x170];
    _DAT_005abee4 = this_00[0x171];
    DAT_005abee8 = (undefined1)this_00[0x172];
    _DAT_005abeec = this_00[0x173];
    DAT_005abef0 = (undefined1)this_00[0x174];
    _DAT_005abef4 = this_00[0x175];
    DAT_005abef8 = (undefined1)this_00[0x176];
    _DAT_005ab948 = 0xfffffff9;
  }
  bVar2 = false;
  iVar7 = FUN_00420560((int)this_00);
  if (((iVar7 != 0) && ((*(byte *)(this_00 + 0xc) & 0x20) != 0)) &&
     (this_00[0x12] == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400))) {
    iVar7 = FUN_0052d160((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
    if (this_00[10] == iVar7) {
      bVar2 = true;
    }
  }
  FUN_004117f0(this_00,0);
  if ((this_00[0xc] & 0x1c00000U) != 0) {
    FUN_004245a0(this_00);
  }
  FUN_004176d0(this_00,0);
  FUN_00483be0(&DAT_005aa12c,this_00);
  if (bVar2) {
    FUN_004d09a0(DAT_005a7b78,DAT_005a7be4,DAT_005a7be8,0);
  }
  if (puVar5 != (undefined4 *)0x0) {
    puVar5[0x16d] = 0xffffffff;
    FUN_00419d00(&DAT_005aa78c,puVar5);
  }
  pvVar3 = DAT_005a7b78;
  if (((iVar4 != 0) && (-1 < iVar1)) && (iVar1 < 8)) {
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    }
    else {
      iVar4 = *(int *)((int)DAT_005a7b78 + 0x50);
      iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
      *(undefined4 *)(iVar4 + iVar7 * 8) = 1;
      *(int *)(iVar4 + 4 + iVar7 * 8) = iVar1;
    }
    FUN_004d05e0(DAT_005a7b78,DAT_005a7c4c,DAT_005a7c50);
  }
  return 1;
}
