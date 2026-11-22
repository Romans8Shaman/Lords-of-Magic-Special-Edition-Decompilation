/* Rebuilt from lomse.exe FUN_0042e5a0 @ 0x0042e5a0 (2939 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa78c (*(undefined4 *)0x005aa78c)
#define DAT_005aa7d0 (*(undefined4 *)0x005aa7d0)
#define DAT_005aa7d4 (*(int *)0x005aa7d4)
#define DAT_005aa7d8 (*(undefined4 *)0x005aa7d8)
#define DAT_005aa7dc (*(undefined4 *)0x005aa7dc)
#define DAT_005aa7e0 (*(undefined4 *)0x005aa7e0)
#define DAT_005aa7e4 (*(undefined4 *)0x005aa7e4)
#define DAT_005aa7e8 (*(undefined4 *)0x005aa7e8)
#define DAT_005aa7ec (*(undefined4 *)0x005aa7ec)
#define DAT_005aa7f0 (*(undefined4 *)0x005aa7f0)
#define DAT_005aa7f4 (*(undefined4 *)0x005aa7f4)
#define DAT_005aa84c (*(undefined4 *)0x005aa84c)
#define DAT_005aa850 (*(undefined4 *)0x005aa850)
#define DAT_005aacc4 (*(undefined4 *)0x005aacc4)
#define DAT_005aacc8 (*(undefined4 *)0x005aacc8)
#define DAT_005aaccc (*(undefined4 *)0x005aaccc)
#define DAT_005aacd0 (*(undefined4 *)0x005aacd0)
#define DAT_005aacd4 (*(undefined4 *)0x005aacd4)
#define DAT_005aacd8 (*(undefined4 *)0x005aacd8)
#define DAT_005aacdc (*(undefined4 *)0x005aacdc)
#define DAT_005aace0 (*(undefined4 *)0x005aace0)
#define DAT_005aace4 (*(undefined4 *)0x005aace4)
#define DAT_005aace8 (*(undefined4 *)0x005aace8)
#define DAT_005aacec (*(undefined4 *)0x005aacec)
#define DAT_005aacf0 (*(undefined4 *)0x005aacf0)
#define DAT_005aacf4 (*(undefined4 *)0x005aacf4)
#define DAT_005aad18 (*(undefined4 *)0x005aad18)
#define DAT_005aad1c (*(undefined4 *)0x005aad1c)
#define DAT_005aad20 (*(undefined4 *)0x005aad20)
#define DAT_005aad24 (*(undefined4 *)0x005aad24)
#define DAT_005aad28 (*(undefined4 *)0x005aad28)
#define DAT_005aad2c (*(undefined4 *)0x005aad2c)
#define DAT_005aad30 (*(undefined4 *)0x005aad30)
#define DAT_005aad34 (*(undefined4 *)0x005aad34)
#define DAT_005aad38 (*(undefined1 *)0x005aad38)
#define DAT_005aad3c (*(undefined4 *)0x005aad3c)
#define DAT_005aad40 (*(undefined4 *)0x005aad40)
#define DAT_005aad44 (*(undefined4 *)0x005aad44)
#define DAT_005aad48 (*(undefined4 *)0x005aad48)
#define DAT_005aad4c (*(undefined4 *)0x005aad4c)
#define DAT_005aad50 (*(undefined4 *)0x005aad50)
#define DAT_005aad54 (*(undefined1 *)0x005aad54)
#define DAT_005aad58 (*(undefined4 *)0x005aad58)
#define DAT_005aad5c (*(undefined1 *)0x005aad5c)
#define DAT_005aad60 (*(undefined4 *)0x005aad60)
#define DAT_005aad64 (*(undefined1 *)0x005aad64)
#define DAT_005aad68 (*(undefined4 *)0x005aad68)
#define DAT_005aadac (*(undefined4 *)0x005aadac)
#define DAT_005aadb0 (*(int *)0x005aadb0)
#define DAT_005aadb4 (*(undefined4 *)0x005aadb4)
#define DAT_005aadb8 (*(undefined4 *)0x005aadb8)
#define DAT_005aadbc (*(undefined4 *)0x005aadbc)
#define DAT_005aadc0 (*(undefined4 *)0x005aadc0)
#define DAT_005aadc4 (*(undefined4 *)0x005aadc4)
#define DAT_005aadc8 (*(undefined4 *)0x005aadc8)
#define DAT_005aadcc (*(undefined4 *)0x005aadcc)
#define DAT_005aadd0 (*(undefined4 *)0x005aadd0)
#define DAT_005aae28 (*(undefined4 *)0x005aae28)
#define DAT_005aae2c (*(undefined4 *)0x005aae2c)
#define DAT_005ab2a0 (*(undefined4 *)0x005ab2a0)
#define DAT_005ab2a4 (*(undefined4 *)0x005ab2a4)
#define DAT_005ab2a8 (*(undefined4 *)0x005ab2a8)
#define DAT_005ab2ac (*(undefined4 *)0x005ab2ac)
#define DAT_005ab2b0 (*(undefined4 *)0x005ab2b0)
#define DAT_005ab2b4 (*(undefined4 *)0x005ab2b4)
#define DAT_005ab2b8 (*(undefined4 *)0x005ab2b8)
#define DAT_005ab2bc (*(undefined4 *)0x005ab2bc)
#define DAT_005ab2c0 (*(undefined4 *)0x005ab2c0)
#define DAT_005ab2c4 (*(undefined4 *)0x005ab2c4)
#define DAT_005ab2c8 (*(undefined4 *)0x005ab2c8)
#define DAT_005ab2cc (*(undefined4 *)0x005ab2cc)
#define DAT_005ab2d0 (*(undefined4 *)0x005ab2d0)
#define DAT_005ab2f4 (*(undefined4 *)0x005ab2f4)
#define DAT_005ab2f8 (*(undefined4 *)0x005ab2f8)
#define DAT_005ab2fc (*(undefined4 *)0x005ab2fc)
#define DAT_005ab300 (*(undefined4 *)0x005ab300)
#define DAT_005ab304 (*(undefined4 *)0x005ab304)
#define DAT_005ab308 (*(undefined4 *)0x005ab308)
#define DAT_005ab30c (*(undefined4 *)0x005ab30c)
#define DAT_005ab310 (*(undefined4 *)0x005ab310)
#define DAT_005ab314 (*(undefined1 *)0x005ab314)
#define DAT_005ab318 (*(undefined4 *)0x005ab318)
#define DAT_005ab31c (*(undefined4 *)0x005ab31c)
#define DAT_005ab320 (*(undefined4 *)0x005ab320)
#define DAT_005ab324 (*(undefined4 *)0x005ab324)
#define DAT_005ab328 (*(undefined4 *)0x005ab328)
#define DAT_005ab32c (*(undefined4 *)0x005ab32c)
#define DAT_005ab330 (*(undefined1 *)0x005ab330)
#define DAT_005ab334 (*(undefined4 *)0x005ab334)
#define DAT_005ab338 (*(undefined1 *)0x005ab338)
#define DAT_005ab33c (*(undefined4 *)0x005ab33c)
#define DAT_005ab340 (*(undefined1 *)0x005ab340)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_004117f0 ((undefined4 (__thiscall *)(void *, uint))0x004117f0)
#define FUN_0041efa0 ((undefined4 (__thiscall *)(void *, uint))0x0041efa0)
#define FUN_00420620 ((undefined4 (__fastcall *)(int))0x00420620)
#define FUN_0044b4f0 ((undefined4 (__cdecl *)(undefined4))0x0044b4f0)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_004f7960 ((undefined4 (__stdcall *)(void))0x004f7960)
#define FUN_004fbe60 ((undefined4 (__thiscall *)(void *, int, int))0x004fbe60)
#define FUN_00521e00 ((int (__fastcall *)(int *))0x00521e00)
#define FUN_005291e0 ((uint (__fastcall *)(int))0x005291e0)

#define LOM_SELF_0042e5a0 1
undefined4 __thiscall rb_0042e5a0(void *this,undefined4 *param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int *piVar5;
  int ******ppppppiVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *****pppppiVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined4 *puVar14;
  int iVar15;
  int *piVar16;
  int *piVar17;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_18;
  typedef int _t_iStack_10;
  typedef int ****** _t_local_c;
  typedef int ***** _t_local_8;
#define local_18 (*(_t_local_18 *)(_fr + 0x0))
#define iStack_10 (*(_t_iStack_10 *)(_fr + 0x8))
#define local_c (*(_t_local_c *)(_fr + 0xc))
#define local_8 (*(_t_local_8 *)(_fr + 0x10))
  int ******ppppppiStack_4;
  
  if (*(char *)((int)this + 0xc30) == '\0') {
    return 0;
  }
  puVar2 = &DAT_005aa78c;
  puVar12 = this;
  for (iVar8 = 0x11; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar12 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar12 = puVar12 + 1;
  }
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x44) = DAT_005aa7d0;
  *(int *)((int)this + 0x48) = DAT_005aa7d4;
  *(undefined4 *)((int)this + 0x4c) = DAT_005aa7d8;
  *(undefined4 *)((int)this + 0x50) = DAT_005aa7dc;
  *(undefined4 *)((int)this + 0x54) = DAT_005aa7e0;
  *(undefined4 *)((int)this + 0x58) = DAT_005aa7e4;
  *(undefined4 *)((int)this + 0x5c) = DAT_005aa7e8;
  *(undefined4 *)((int)this + 0x60) = DAT_005aa7ec;
  *(undefined4 *)((int)this + 100) = DAT_005aa7f0;
  puVar2 = &DAT_005aa7f4;
  puVar12 = (undefined4 *)((int)this + 0x68);
  for (iVar8 = 0x16; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar12 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar12 = puVar12 + 1;
  }
  *(undefined4 *)((int)this + 0xc0) = DAT_005aa84c;
  puVar2 = &DAT_005aa850;
  puVar12 = (undefined4 *)((int)this + 0xc4);
  do {
    puVar14 = puVar2 + 0x13;
    puVar11 = puVar12;
    for (iVar8 = 0x13; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar11 = puVar11 + 1;
    }
    puVar2 = puVar14;
    puVar12 = puVar12 + 0x13;
  } while (puVar14 < &DAT_005aacc4);
  *(undefined4 *)((int)this + 0x538) = DAT_005aacc4;
  *(undefined4 *)((int)this + 0x53c) = DAT_005aacc8;
  *(undefined4 *)((int)this + 0x540) = DAT_005aaccc;
  *(undefined4 *)((int)this + 0x544) = DAT_005aacd0;
  *(undefined4 *)((int)this + 0x548) = DAT_005aacd4;
  *(undefined4 *)((int)this + 0x54c) = DAT_005aacd8;
  *(undefined4 *)((int)this + 0x550) = DAT_005aacdc;
  *(undefined4 *)((int)this + 0x554) = DAT_005aace0;
  *(undefined4 *)((int)this + 0x558) = DAT_005aace4;
  puVar2 = (undefined4 *)((int)this + 0x5dc);
  *(undefined4 *)((int)this + 0x55c) = DAT_005aace8;
  *(undefined4 *)((int)this + 0x560) = DAT_005aacec;
  *(undefined4 *)((int)this + 0x564) = DAT_005aacf0;
  puVar12 = &DAT_005aacf4;
  puVar11 = (undefined4 *)((int)this + 0x568);
  for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar11 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar11 = puVar11 + 1;
  }
  *(undefined4 *)((int)this + 0x58c) = DAT_005aad18;
  *(undefined4 *)((int)this + 0x590) = DAT_005aad1c;
  *(undefined4 *)((int)this + 0x594) = DAT_005aad20;
  *(undefined4 *)((int)this + 0x598) = DAT_005aad24;
  *(undefined4 *)((int)this + 0x59c) = DAT_005aad28;
  *(undefined4 *)((int)this + 0x5a0) = DAT_005aad2c;
  *(undefined4 *)((int)this + 0x5a4) = DAT_005aad30;
  *(undefined4 *)((int)this + 0x5a8) = DAT_005aad34;
  *(undefined1 *)((int)this + 0x5ac) = DAT_005aad38;
  *(undefined4 *)((int)this + 0x5b0) = DAT_005aad3c;
  *(undefined4 *)((int)this + 0x5b4) = DAT_005aad40;
  *(undefined4 *)((int)this + 0x5b8) = DAT_005aad44;
  *(undefined4 *)((int)this + 0x5bc) = DAT_005aad48;
  *(undefined4 *)((int)this + 0x5c0) = DAT_005aad4c;
  *(undefined4 *)((int)this + 0x5c4) = DAT_005aad50;
  *(undefined1 *)((int)this + 0x5c8) = DAT_005aad54;
  *(undefined4 *)((int)this + 0x5cc) = DAT_005aad58;
  *(undefined1 *)((int)this + 0x5d0) = DAT_005aad5c;
  *(undefined4 *)((int)this + 0x5d4) = DAT_005aad60;
  *(undefined1 *)((int)this + 0x5d8) = DAT_005aad64;
  puVar12 = &DAT_005aad68;
  puVar11 = puVar2;
  for (iVar8 = 0x11; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar11 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar11 = puVar11 + 1;
  }
  *(undefined4 *)((int)this + 0x608) = 0;
  *(undefined4 *)((int)this + 0x620) = DAT_005aadac;
  *(int *)((int)this + 0x624) = DAT_005aadb0;
  *(undefined4 *)((int)this + 0x628) = DAT_005aadb4;
  *(undefined4 *)((int)this + 0x62c) = DAT_005aadb8;
  *(undefined4 *)((int)this + 0x630) = DAT_005aadbc;
  *(undefined4 *)((int)this + 0x634) = DAT_005aadc0;
  *(undefined4 *)((int)this + 0x638) = DAT_005aadc4;
  *(undefined4 *)((int)this + 0x63c) = DAT_005aadc8;
  *(undefined4 *)((int)this + 0x640) = DAT_005aadcc;
  puVar12 = &DAT_005aadd0;
  puVar11 = (undefined4 *)((int)this + 0x644);
  for (iVar8 = 0x16; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar11 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar11 = puVar11 + 1;
  }
  *(undefined4 *)((int)this + 0x69c) = DAT_005aae28;
  puVar12 = &DAT_005aae2c;
  puVar11 = (undefined4 *)((int)this + 0x6a0);
  do {
    puVar3 = puVar12 + 0x13;
    puVar14 = puVar11;
    for (iVar8 = 0x13; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar14 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar14 = puVar14 + 1;
    }
    puVar12 = puVar3;
    puVar11 = puVar11 + 0x13;
  } while (puVar3 < &DAT_005ab2a0);
  *(undefined4 *)((int)this + 0xb14) = DAT_005ab2a0;
  *(undefined4 *)((int)this + 0xb18) = DAT_005ab2a4;
  *(undefined4 *)((int)this + 0xb1c) = DAT_005ab2a8;
  *(undefined4 *)((int)this + 0xb20) = DAT_005ab2ac;
  *(undefined4 *)((int)this + 0xb24) = DAT_005ab2b0;
  *(undefined4 *)((int)this + 0xb28) = DAT_005ab2b4;
  *(undefined4 *)((int)this + 0xb2c) = DAT_005ab2b8;
  *(undefined4 *)((int)this + 0xb30) = DAT_005ab2bc;
  *(undefined4 *)((int)this + 0xb34) = DAT_005ab2c0;
  *(undefined4 *)((int)this + 0xb38) = DAT_005ab2c4;
  *(undefined4 *)((int)this + 0xb3c) = DAT_005ab2c8;
  *(undefined4 *)((int)this + 0xb40) = DAT_005ab2cc;
  puVar12 = &DAT_005ab2d0;
  puVar11 = (undefined4 *)((int)this + 0xb44);
  for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar11 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar11 = puVar11 + 1;
  }
  *(undefined4 *)((int)this + 0xb68) = DAT_005ab2f4;
  *(undefined4 *)((int)this + 0xb6c) = DAT_005ab2f8;
  *(undefined4 *)((int)this + 0xb70) = DAT_005ab2fc;
  *(undefined4 *)((int)this + 0xb74) = DAT_005ab300;
  *(undefined4 *)((int)this + 0xb78) = DAT_005ab304;
  *(undefined4 *)((int)this + 0xb7c) = DAT_005ab308;
  *(undefined4 *)((int)this + 0xb80) = DAT_005ab30c;
  *(undefined4 *)((int)this + 0xb84) = DAT_005ab310;
  *(undefined1 *)((int)this + 0xb88) = DAT_005ab314;
  *(undefined4 *)((int)this + 0xb8c) = DAT_005ab318;
  *(undefined4 *)((int)this + 0xb90) = DAT_005ab31c;
  *(undefined4 *)((int)this + 0xb94) = DAT_005ab320;
  *(undefined4 *)((int)this + 0xb98) = DAT_005ab324;
  *(undefined4 *)((int)this + 0xb9c) = DAT_005ab328;
  *(undefined4 *)((int)this + 0xba0) = DAT_005ab32c;
  *(undefined1 *)((int)this + 0xba4) = DAT_005ab330;
  *(undefined4 *)((int)this + 0xba8) = DAT_005ab334;
  *(undefined1 *)((int)this + 0xbac) = DAT_005ab338;
  *(undefined4 *)((int)this + 0xbb0) = DAT_005ab33c;
  *(undefined1 *)((int)this + 0xbb4) = DAT_005ab340;
  FUN_004117f0(this,0);
  FUN_004117f0(puVar2,0);
  FUN_004f7960();
  local_8 = (int *****)0x0;
  local_c = (int ******)0x0;
  puVar12 = (undefined4 *)((int)this + 0x6a0);
  iVar8 = 0xf;
  do {
    puVar12[-0x177] = 0xffffffff;
    *puVar12 = 0xffffffff;
    puVar12 = puVar12 + 0x13;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  local_18 = 0;
  for (pvVar4 = (void *)FUN_004fbe60(&DAT_005ae974,0,0); pvVar4 != (void *)0x0;
      pvVar4 = (void *)FUN_004fbe60(&DAT_005ae974,(int)pvVar4,0)) {
    iVar15 = (int)*(char *)((int)pvVar4 + 0x5ac);
    iVar8 = FUN_00420620((int)pvVar4);
    if (iVar8 == 0) {
      if (*(int *)((int)pvVar4 + 0x48) == DAT_005aa7d4) {
        ppppppiStack_4 = &local_8;
        puVar12 = this;
      }
      else {
        if (*(int *)((int)pvVar4 + 0x48) != DAT_005aadb0) {
          if (param_2 != 0) {
            FUN_0041efa0(pvVar4,8);
          }
          *(uint *)((int)pvVar4 + 0x30) = *(uint *)((int)pvVar4 + 0x30) | 0x100;
          goto LAB_0042eaca;
        }
        ppppppiStack_4 = (int ******)&local_c;
        puVar12 = puVar2;
      }
    }
    else {
LAB_0042eaca:
      puVar12 = (undefined4 *)0x0;
    }
    if (puVar12 != (undefined4 *)0x0) {
      if ((*(uint *)((int)pvVar4 + 0x30) & 0xd00) == 0) {
        *ppppppiStack_4 = (int *****)((int)*ppppppiStack_4 + 1);
      }
      if ((iVar15 < 0) || (0xe < iVar15)) {
LAB_0042ebe2:
        *(undefined1 *)((int)pvVar4 + 0x5ac) = 0xff;
        local_18 = local_18 + 1;
      }
      else {
        piVar5 = (int *)((int)pvVar4 + 0xc4);
        iVar8 = FUN_00521e00(piVar5);
        piVar16 = puVar12 + iVar15 * 0x13 + 0x31;
        if ((int)puVar12[iVar15 * 0x13 + 0x31] < 0) {
          for (iVar9 = 0x13; iVar9 != 0; iVar9 = iVar9 + -1) {
            *piVar16 = *piVar5;
            piVar5 = piVar5 + 1;
            piVar16 = piVar16 + 1;
          }
          if (1 < *(int *)(iVar8 + 0x120)) {
            iVar8 = FUN_0044b4f0(3);
            puVar12[iVar15 * 0x13 + 0x36] = iVar8;
            *(undefined4 *)(iVar8 + 0x14 + *(int *)(iVar8 + 0x44) * 4) =
                 *(undefined4 *)((int)pvVar4 + 200);
            *(undefined4 *)(iVar8 + 0x2c + *(int *)(iVar8 + 0x44) * 4) =
                 *(undefined4 *)((int)pvVar4 + 0xdc);
            puVar12[iVar15 * 0x13 + 0x37] = 0;
            if (*(int *)((int)pvVar4 + 0xe0) != 0) {
              puVar12[iVar15 * 0x13 + 0x38] = *(int *)((int)pvVar4 + 0xe0);
            }
            *(undefined4 *)((int)pvVar4 + 100) = *(undefined4 *)(iVar8 + 0x44);
            *(int *)(iVar8 + 0x44) = *(int *)(iVar8 + 0x44) + 1;
          }
        }
        else {
          uVar7 = FUN_005291e0((int)piVar16);
          if ((*piVar16 != *piVar5) || (uVar7 == 0)) goto LAB_0042ebe2;
          if ((~*(uint *)((int)pvVar4 + 0x30) & 0x100) != 0) {
            *(undefined4 *)(uVar7 + 0x14 + *(int *)(uVar7 + 0x44) * 4) =
                 *(undefined4 *)((int)pvVar4 + 200);
            *(undefined4 *)(uVar7 + 0x2c + *(int *)(uVar7 + 0x44) * 4) =
                 *(undefined4 *)((int)pvVar4 + 0xdc);
            if (*(int *)((int)pvVar4 + 0xe0) != 0) {
              puVar12[iVar15 * 0x13 + 0x38] = *(int *)((int)pvVar4 + 0xe0);
            }
            *(undefined4 *)((int)pvVar4 + 100) = *(undefined4 *)(uVar7 + 0x44);
            *(int *)(uVar7 + 0x44) = *(int *)(uVar7 + 0x44) + 1;
            puVar12[iVar15 * 0x13 + 0x32] =
                 puVar12[iVar15 * 0x13 + 0x32] + *(int *)((int)pvVar4 + 200);
          }
        }
      }
    }
  }
  if ((local_8 == (int *****)0x0) || (local_c == (int ******)0x0)) {
    FUN_004117f0(this,1);
    FUN_004117f0(puVar2,1);
    return 1;
  }
  if (0 < local_18) {
    for (pvVar4 = (void *)FUN_004fbe60(&DAT_005ae974,0,0); pvVar4 != (void *)0x0;
        pvVar4 = (void *)FUN_004fbe60(&DAT_005ae974,(int)pvVar4,0)) {
      cVar1 = *(char *)((int)pvVar4 + 0x5ac);
      iVar8 = FUN_00420620((int)pvVar4);
      if (iVar8 == 0) {
        if (*(int *)((int)pvVar4 + 0x48) == DAT_005aa7d4) {
          puVar12 = this;
        }
        else {
          if (*(int *)((int)pvVar4 + 0x48) != DAT_005aadb0) {
            if (param_2 != 0) {
              FUN_0041efa0(pvVar4,8);
            }
            *(uint *)((int)pvVar4 + 0x30) = *(uint *)((int)pvVar4 + 0x30) | 0x100;
            goto LAB_0042ec96;
          }
          puVar12 = puVar2;
        }
      }
      else {
LAB_0042ec96:
        puVar12 = (undefined4 *)0x0;
      }
      if ((puVar12 != (undefined4 *)0x0) && (cVar1 < '\0')) {
        iVar8 = 0;
        piVar5 = puVar12 + 0x31;
        do {
          if (*piVar5 < 0) break;
          iVar8 = iVar8 + 1;
          piVar5 = piVar5 + 0x13;
        } while (iVar8 < 0xf);
        if (iVar8 < 0xf) {
          *(char *)((int)pvVar4 + 0x5ac) = (char)iVar8;
          iVar15 = FUN_00521e00((int *)((int)pvVar4 + 0xc4));
          piVar5 = (int *)((int)pvVar4 + 0xc4);
          piVar16 = puVar12 + iVar8 * 0x13 + 0x31;
          for (iVar9 = 0x13; iVar9 != 0; iVar9 = iVar9 + -1) {
            *piVar16 = *piVar5;
            piVar5 = piVar5 + 1;
            piVar16 = piVar16 + 1;
          }
          if (1 < *(int *)(iVar15 + 0x120)) {
            iVar15 = FUN_0044b4f0(3);
            puVar12[iVar8 * 0x13 + 0x36] = iVar15;
            *(undefined4 *)(iVar15 + 0x14 + *(int *)(iVar15 + 0x44) * 4) =
                 *(undefined4 *)((int)pvVar4 + 200);
            *(undefined4 *)(iVar15 + 0x2c + *(int *)(iVar15 + 0x44) * 4) =
                 *(undefined4 *)((int)pvVar4 + 0xdc);
            puVar12[iVar8 * 0x13 + 0x37] = 0;
            if (*(int *)((int)pvVar4 + 0xe0) != 0) {
              puVar12[iVar8 * 0x13 + 0x38] = *(int *)((int)pvVar4 + 0xe0);
            }
            *(undefined4 *)((int)pvVar4 + 100) = *(undefined4 *)(iVar15 + 0x44);
            *(int *)(iVar15 + 0x44) = *(int *)(iVar15 + 0x44) + 1;
          }
        }
      }
    }
  }
  iStack_10 = 0;
  do {
    puVar12 = puVar2;
    if (iStack_10 == 0) {
      puVar12 = this;
    }
    iVar8 = 0;
    piVar5 = puVar12 + 0x31;
    do {
      if (*piVar5 < 0) {
        iVar9 = -1;
        piVar16 = piVar5;
        iVar15 = iVar8;
        while (iVar15 = iVar15 + 1, iVar15 < 0xf) {
          piVar16 = piVar16 + 0x13;
          if (-1 < *piVar16) {
            iVar9 = iVar15;
          }
        }
        if (iVar9 < 0) {
          puVar12[0x13] = iVar8;
          break;
        }
        for (iVar15 = FUN_004fbe60(&DAT_005ae974,0,0); iVar15 != 0;
            iVar15 = FUN_004fbe60(&DAT_005ae974,iVar15,0)) {
          if ((*(int *)(iVar15 + 0x48) == puVar12[0x12]) && (*(char *)(iVar15 + 0x5ac) == iVar9)) {
            *(char *)(iVar15 + 0x5ac) = (char)iVar8;
          }
        }
        piVar16 = puVar12 + iVar9 * 0x13 + 0x31;
        piVar13 = piVar16;
        piVar17 = piVar5;
        for (iVar15 = 0x13; iVar15 != 0; iVar15 = iVar15 + -1) {
          *piVar17 = *piVar13;
          piVar13 = piVar13 + 1;
          piVar17 = piVar17 + 1;
        }
        piVar16[6] = 0;
        piVar16[7] = 0;
        piVar16[5] = 0;
        *piVar16 = -1;
      }
      iVar8 = iVar8 + 1;
      piVar5 = piVar5 + 0x13;
    } while (iVar8 < 0xf);
    iStack_10 = iStack_10 + 1;
    if (1 < iStack_10) {
      iVar8 = 0xf;
      iVar15 = 0;
      local_c = (int ******)((int)this + 0xbf4);
      ppppppiVar6 = local_c;
      do {
        ppppppiVar6[-0xf] = (int *****)0x0;
        *ppppppiVar6 = (int *****)0x0;
        ppppppiVar6 = ppppppiVar6 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      do {
        if (iVar15 == 0) {
          ppppppiVar6 = (int ******)((int)this + 3000);
          puVar12 = this;
        }
        else {
          ppppppiVar6 = local_c;
          puVar12 = puVar2;
        }
        iVar8 = 0;
        if (0 < (int)puVar12[0x13]) {
          do {
            for (iVar9 = FUN_004fbe60(&DAT_005ae974,0,0); iVar9 != 0;
                iVar9 = FUN_004fbe60(&DAT_005ae974,iVar9,0)) {
              if ((*(int *)(iVar9 + 0x48) == puVar12[0x12]) && (*(char *)(iVar9 + 0x5ac) == iVar8))
              {
                uVar7 = *(uint *)(iVar9 + 0x30);
                if ((~uVar7 & 0x100) == 0) {
                  pppppiVar10 = (int *****)0x1;
                }
                else if ((uVar7 & 0x400) == 0) {
                  pppppiVar10 = (int *****)(4 - (uint)((uVar7 & 0x800) != 0));
                }
                else {
                  pppppiVar10 = (int *****)0x2;
                }
                if ((*ppppppiVar6 == (int *****)0x0) || (*ppppppiVar6 != (int *****)0x2)) {
                  *ppppppiVar6 = pppppiVar10;
                }
              }
            }
            iVar8 = iVar8 + 1;
            ppppppiVar6 = ppppppiVar6 + 1;
          } while (iVar8 < (int)puVar12[0x13]);
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < 2);
      iVar8 = 0xf;
      ppppppiVar6 = local_c;
      do {
        if (ppppppiVar6[-0xf] == (int *****)0x4) {
          ppppppiVar6[-0xf] = (int *****)0x0;
        }
        if (*ppppppiVar6 == (int *****)0x4) {
          *ppppppiVar6 = (int *****)0x0;
        }
        ppppppiVar6 = ppppppiVar6 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      *(undefined4 *)((int)this + 0x28) = 0xfffffff3;
      *(undefined4 *)((int)this + 0x604) = 0xfffffff2;
      FUN_004d09a0(param_1,*(uint *)((int)this + 0xc30),*(int **)((int)this + 0xc34),0);
      iStack_10 = 0;
      do {
        if (iStack_10 == 0) {
          ppppppiVar6 = (int ******)((int)this + 3000);
          puVar12 = this;
        }
        else {
          ppppppiVar6 = local_c;
          puVar12 = puVar2;
        }
        local_8 = (int *****)0x0;
        if (0 < (int)puVar12[0x13]) {
          param_1 = puVar12 + 0x31;
          ppppppiStack_4 = ppppppiVar6;
          do {
            for (pvVar4 = (void *)FUN_004fbe60(&DAT_005ae974,0,0); pvVar4 != (void *)0x0;
                pvVar4 = (void *)FUN_004fbe60(&DAT_005ae974,(int)pvVar4,0)) {
              if ((((*(int *)((int)pvVar4 + 0x48) == puVar12[0x12]) &&
                   ((int *****)(int)*(char *)((int)pvVar4 + 0x5ac) == local_8)) &&
                  ((~*(uint *)((int)pvVar4 + 0x30) & 0x100) != 0)) &&
                 ((*(uint *)((int)pvVar4 + 0x30) & 0xc00) == 0)) {
                iVar8 = param_1[1];
                iVar15 = FUN_00521e00((int *)((int)pvVar4 + 0xc4));
                pppppiVar10 = *ppppppiStack_4;
                if ((iVar15 != 0) && (1 < *(int *)(iVar15 + 0x120))) {
                  uVar7 = FUN_005291e0((int)param_1);
                  if (uVar7 == 0) {
                    iVar8 = (iVar8 + -1 + *(int *)(iVar15 + 0x120)) / *(int *)(iVar15 + 0x120);
                  }
                  else {
                    iVar8 = *(int *)(uVar7 + 0x14 + *(int *)((int)pvVar4 + 100) * 4);
                  }
                  if (iVar8 < 1) {
                    pppppiVar10 = (int *****)0x1;
                  }
                }
                *(int *)((int)pvVar4 + 200) = iVar8;
                if (pppppiVar10 == (int *****)0x1) {
                  if (param_2 != 0) {
                    FUN_0041efa0(pvVar4,8);
                  }
                  uVar7 = *(uint *)((int)pvVar4 + 0x30) | 0x100;
                }
                else if (pppppiVar10 == (int *****)0x2) {
                  uVar7 = *(uint *)((int)pvVar4 + 0x30) | 0x400;
                }
                else {
                  if (pppppiVar10 != (int *****)0x3) goto LAB_0042f07c;
                  uVar7 = *(uint *)((int)pvVar4 + 0x30) | 0x800;
                }
                *(uint *)((int)pvVar4 + 0x30) = uVar7;
              }
LAB_0042f07c:
            }
            local_8 = (int *****)((int)local_8 + 1);
            ppppppiStack_4 = ppppppiStack_4 + 1;
            param_1 = param_1 + 0x13;
          } while ((int)local_8 < (int)puVar12[0x13]);
        }
        iStack_10 = iStack_10 + 1;
        if (1 < iStack_10) {
          FUN_004117f0(this,1);
          FUN_004117f0(puVar2,1);
          return 1;
        }
      } while( true );
    }
  } while( true );
#undef local_18
#undef iStack_10
#undef local_c
#undef local_8
}
