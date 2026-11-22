/* Hand C for lomse.exe FUN_0045b550 @ 0x0045b550 (3856 bytes, __thiscall, ret 4).
 * Written from the original instruction stream (src/asmfn/0045b550.c + capstone).
 * SEH (fs:[0] / ExceptionList / state at esp+0x70c) omitted, same as gen.py strip_seh.
 * Callees do not take a live incoming edx (incoming edx is unused or overwritten).
 * x87: 004a6460 returns ST0 then fstp this+0xac; later fild/fst/fstp of this+0x476c/0x4770
 * into DAT_00586750/54/58 and a bit-copy into DAT_0058675c. No _ftol.
 * Dummy-unit fields written into the local 0x5dc-byte object (not separate locals):
 *   +0x1c, +0x28, +0x30 |= 0x1000000, +0x48 = src+0x5c.
 * Unit snapshot copy is exact (rep movsd + byte stores at +0x5ac/0x5c8/0x5d0/0x5d8). */

#include "lom.h"

#define LOM_SELF_0045b550 1

#define DAT_00573428 (*(undefined4 *)0x00573428)
#define DAT_005830e8 (*(int *)0x005830e8)
#define DAT_005830ec (*(int *)0x005830ec)
#define DAT_00583100 (*(undefined4 *)0x00583100)
#define DAT_00583580 (*(undefined4 *)0x00583580)
#define DAT_00583584 (*(undefined4 *)0x00583584)
#define DAT_00584ae8 (*(undefined4 *)0x00584ae8)
#define DAT_00584ca8 (*(int *)0x00584ca8)
#define DAT_00586750 (*(float *)0x00586750)
#define DAT_00586754 (*(float *)0x00586754)
#define DAT_00586758 (*(float *)0x00586758)
#define DAT_0058675c (*(undefined4 *)0x0058675c)
#define DAT_005876d0 (*(undefined4 *)0x005876d0)
#define DAT_00587874 (*(undefined4 *)0x00587874)
#define DAT_00587878 (*(undefined4 *)0x00587878)
#define DAT_005878f4 (*(undefined4 *)0x005878f4)
#define DAT_005878f8 (*(undefined4 *)0x005878f8)
#define DAT_005a7990 (*(int *)0x005a7990)
#define DAT_005a7994 (*(int *)0x005a7994)
#define DAT_005a7b78 (*(void **)0x005a7b78)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (0x005a7d90)
#define DAT_005a8078 (0x005a8078)
#define DAT_005aa1c4_b (*(byte *)0x005aa1c4)
#define DAT_005aa1c4_u (*(uint *)0x005aa1c4)
#define DAT_005aa1c8 (*(int *)0x005aa1c8)
#define DAT_005aa78c (0x005aa78c)
#define DAT_005aad68 (0x005aad68)
#define DAT_005ae958 (0x005ae958)
#define DAT_005ae9c4 (*(int *)0x005ae9c4)
#define DAT_005d1e84 (*(int *)0x005d1e84)

#define FUN_00406a80 ((int (__thiscall *)(void *, int, int))0x00406a80)
#define FUN_00411610 ((undefined4 * (__fastcall *)(void *))0x00411610)
#define FUN_004117f0 ((undefined4 (__thiscall *)(void *, uint))0x004117f0)
#define FUN_00411910 ((void (__fastcall *)(void *))0x00411910)
#define FUN_004176d0 ((void (__thiscall *)(void *, int))0x004176d0)
#define FUN_0041d1d0 ((void (__thiscall *)(void *, undefined4, undefined4))0x0041d1d0)
#define FUN_0041fda0 ((undefined4 (__fastcall *)(int))0x0041fda0)
#define FUN_00420910 ((undefined4 (__thiscall *)(void *, int, uint))0x00420910)
#define FUN_00421960 ((int (__thiscall *)(void *))0x00421960)
#define FUN_004245a0 ((undefined4 (__fastcall *)(int *))0x004245a0)
#define FUN_0042f120 ((undefined4 (__thiscall *)(void *, void *, undefined4 *, undefined4 *))0x0042f120)
#define FUN_004372e0 ((void (__fastcall *)(undefined4 *))0x004372e0)
#define FUN_0044ec80 ((int (__fastcall *)(int))0x0044ec80)
#define FUN_00455170 ((void (__fastcall *)(int))0x00455170)
#define FUN_00455820 ((void (__thiscall *)(void *, int))0x00455820)
#define FUN_0045d2e0 ((undefined4 (__thiscall *)(void *, int, int, void *, undefined4, undefined4, byte *, byte *, int, int))0x0045d2e0)
#define FUN_004605b0 ((undefined4 (__thiscall *)(void *))0x004605b0)
#define FUN_00460eb0 ((undefined4 (__thiscall *)(void *, int))0x00460eb0)
#define FUN_00460fb0 ((uint (__fastcall *)(int))0x00460fb0)
#define FUN_00462be0 ((int (__thiscall *)(void *, undefined4, undefined4))0x00462be0)
#define FUN_00479640 ((void (__fastcall *)(int))0x00479640)
#define FUN_0047a7b0 ((void (__fastcall *)(int))0x0047a7b0)
#define FUN_0047c4b0 ((void (__fastcall *)(int *))0x0047c4b0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_00485080 ((int * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_00485670 ((undefined4 (__thiscall *)(void *, int *, int))0x00485670)
#define FUN_00488640 ((undefined4 (__fastcall *)(int))0x00488640)
#define FUN_00489b70 ((undefined4 (__thiscall *)(void *, int *))0x00489b70)
#define FUN_0048c130 ((void (__stdcall *)(void))0x0048c130)
#define FUN_0048c6a0 ((void (__stdcall *)(void))0x0048c6a0)
#define FUN_0048c7c0 ((undefined4 (__stdcall *)(void))0x0048c7c0)
#define FUN_0048cc70 ((int (__thiscall *)(void *, undefined1))0x0048cc70)
#define FUN_0048cd80 ((void (__stdcall *)(void))0x0048cd80)
#define FUN_004a2e30 ((void (__fastcall *)(int *))0x004a2e30)
#define FUN_004a6460 ((float (__fastcall *)(int))0x004a6460)
#define FUN_004a6470 ((void (__fastcall *)(int))0x004a6470)
#define FUN_004a6dd0 ((uint (__thiscall *)(void *, int *, int, int))0x004a6dd0)
#define FUN_004a8700 ((void (__stdcall *)(short))0x004a8700)
#define FUN_004a8b50 ((int (__thiscall *)(void *, int, int))0x004a8b50)
#define FUN_004a9f50 ((void (__fastcall *)(void *))0x004a9f50)
#define FUN_004aac90 ((void (__fastcall *)(int))0x004aac90)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)
#define FUN_004bb160 ((void (__thiscall *)(void *, undefined4))0x004bb160)
#define FUN_004d05e0 ((void (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004ecc90 ((void (__fastcall *)(undefined4 *))0x004ecc90)
#define FUN_004ef070 ((void (__fastcall *)(int))0x004ef070)
#define FUN_004f76b0 ((void (__fastcall *)(int))0x004f76b0)
#define FUN_00504ce0 ((undefined4 (__thiscall *)(void *, int, int))0x00504ce0)
#define FUN_0050ca30 ((void (__thiscall *)(void *, int))0x0050ca30)
#define FUN_00519b30 ((undefined4 (__thiscall *)(void *, int))0x00519b30)
#define FUN_0051ab30 ((void (__thiscall *)(void *, int, int, int, int))0x0051ab30)
#define FUN_00525f10 ((uint (__fastcall *)(int))0x00525f10)
#define FUN_0052b6f0 ((undefined4 (__thiscall *)(void *, int, uint))0x0052b6f0)
#define FUN_0052d140 ((undefined4 (__fastcall *)(int))0x0052d140)

typedef undefined4 (__thiscall *icall_vtbl28)(void *this, int, int, int, int);

static void copy_bytes(void *d, const void *s, unsigned n)
{
  builtin_memcpy(d, s, n);
}

/* Snapshot one 0x5dc-byte unit record into the game object (this+0x660 or this+0xc3c). */
static void copy_unit(void *dest, const void *src)
{
  unsigned char *d = (unsigned char *)dest;
  const unsigned char *s = (const unsigned char *)src;
  int i;
  copy_bytes(d, s, 0x11 * 4);
  *(undefined4 *)(d + 0x2c) = 0;
  copy_bytes(d + 0x44, s + 0x44, 9 * 4);
  copy_bytes(d + 0x68, s + 0x68, 0x16 * 4);
  *(undefined4 *)(d + 0xc0) = *(undefined4 *)(s + 0xc0);
  for (i = 0; i < 0xf; i = i + 1) {
    copy_bytes(d + 0xc4 + i * 0x4c, s + 0xc4 + i * 0x4c, 0x13 * 4);
  }
  copy_bytes(d + 0x538, s + 0x538, 9 * 4);
  copy_bytes(d + 0x55c, s + 0x55c, 3 * 4);
  copy_bytes(d + 0x568, s + 0x568, 9 * 4);
  *(undefined4 *)(d + 0x58c) = *(undefined4 *)(s + 0x58c);
  *(undefined4 *)(d + 0x590) = *(undefined4 *)(s + 0x590);
  *(undefined4 *)(d + 0x594) = *(undefined4 *)(s + 0x594);
  *(undefined4 *)(d + 0x598) = *(undefined4 *)(s + 0x598);
  *(undefined4 *)(d + 0x59c) = *(undefined4 *)(s + 0x59c);
  *(undefined4 *)(d + 0x5a0) = *(undefined4 *)(s + 0x5a0);
  *(undefined4 *)(d + 0x5a4) = *(undefined4 *)(s + 0x5a4);
  *(undefined4 *)(d + 0x5a8) = *(undefined4 *)(s + 0x5a8);
  d[0x5ac] = s[0x5ac];
  *(undefined4 *)(d + 0x5b0) = *(undefined4 *)(s + 0x5b0);
  *(undefined4 *)(d + 0x5b4) = *(undefined4 *)(s + 0x5b4);
  *(undefined4 *)(d + 0x5b8) = *(undefined4 *)(s + 0x5b8);
  *(undefined4 *)(d + 0x5bc) = *(undefined4 *)(s + 0x5bc);
  *(undefined4 *)(d + 0x5c0) = *(undefined4 *)(s + 0x5c0);
  *(undefined4 *)(d + 0x5c4) = *(undefined4 *)(s + 0x5c4);
  d[0x5c8] = s[0x5c8];
  *(undefined4 *)(d + 0x5cc) = *(undefined4 *)(s + 0x5cc);
  d[0x5d0] = s[0x5d0];
  *(undefined4 *)(d + 0x5d4) = *(undefined4 *)(s + 0x5d4);
  d[0x5d8] = s[0x5d8];
}

static void *player_slot(void *this, int idx)
{
  if ((idx < 0) || (0xf < idx)) {
    return (void *)0;
  }
  return (void *)((int)this + idx * 0x1d84 + 0x5068);
}

undefined4 __thiscall rb_0045b550(void *this, int *param_1)
{
  int *this_00;
  int *this_01;
  int *piVar2;
  uint uVar3;
  uint uVar6;
  void *pvVar7;
  void *pvVar10;
  int iVar4;
  int iVar8;
  int iVar9;
  int n;
  int *it;
  undefined4 *puVar5;
  uint unit_local[0x5dc / 4];
  uint msg[0x108 / 4];
  int world_id;

  if ((*param_1 == param_1[2]) || (param_1[1] == param_1[3])) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x230c0) = 0;
  *(undefined4 *)((int)this + 0x4fec) = 0;
  *(undefined4 *)((int)this + 0x4ff0) = 0;
  *(undefined4 *)((int)this + 0x4ff4) = 0;
  *(undefined4 *)((int)this + 0x4ff8) = 0xffffffff;
  *(undefined4 *)((int)this + 0x5060) = 1;
  FUN_004a2e30(&DAT_00584ca8);
  *(undefined4 *)((int)this + 0x478c) = 0;
  *(undefined4 *)((int)this + 0x4790) = 0;
  *(undefined4 *)((int)this + 0x4794) = 0;
  *(undefined4 *)((int)this + 0x4798) = 0xffffffff;
  *(undefined4 *)((int)this + 0x479c) = 0;
  FUN_0048c130();
  DAT_00573428 = param_1[6];
  *(undefined4 *)((int)this + 0x5008) = 0;
  if ((*(byte *)(param_1 + 7) & 1) == 0) {
    FUN_004372e0((undefined4 *)((int)this + 0x22db0));
    FUN_0047c4b0((int *)((int)this + 0x228bc));
  }
  *(undefined4 *)((int)this + 0x4778) = 0;
  *(undefined4 *)((int)this + 0x477c) = 0;
  *(int *)((int)this + 0x4774) = param_1[2];
  iVar9 = param_1[3];
  if (iVar9 < 0) {
    iVar9 = 0xf;
  }
  if ((*(byte *)(param_1 + 7) & 1) == 0) {
    puVar5 = (undefined4 *)((int)this + param_1[1] * 0x1d84 + 0x5068);
    puVar5[0x15d8 / 4] = puVar5[0x15d8 / 4] | 8;
    puVar5 = (undefined4 *)((int)this + iVar9 * 0x1d84 + 0x5068);
    puVar5[0x15d8 / 4] = puVar5[0x15d8 / 4] | 0x10;
  }
  DAT_005878f4 = DAT_00587874;
  DAT_005878f8 = DAT_00587878;
  pvVar10 = (void *)((int)this + 0x482c);
  *(undefined4 *)((int)this + 0xa8) = *(undefined4 *)(DAT_005a8078 + DAT_005a7d8c * 0x400);
  *(float *)((int)this + 0xac) = FUN_004a6460((int)pvVar10);
  this_00 = FUN_00485080(this, *param_1, 0x2f);
  if (this_00 == (int *)0x0) {
    return 0;
  }
  piVar2 = (int *)FUN_00482ac0(this, *(int *)((int)this + 0x4774), 1);
  if ((*(byte *)(param_1 + 7) & 1) == 0) {
    this_01 = FUN_00485080(this, *(int *)((int)this + 0x4774), 0xf);
    if (piVar2 != (int *)0x0) {
      FUN_004a8700((short)piVar2[10]);
    }
  } else {
    if (piVar2 != (int *)0x0) {
      FUN_00485670(this, piVar2, 0);
    }
    this_01 = FUN_00485080(this, *(int *)((int)this + 0x4774), 0x2f);
  }
  FUN_00411610(unit_local);
  if (this_01 == (int *)0x0) {
    this_01 = (int *)unit_local;
    FUN_004117f0(unit_local, 0);
    uVar3 = FUN_00482ac0(this, *(int *)((int)this + 0x4774), 1);
    *(undefined4 *)((int)unit_local + 0x48) = *(undefined4 *)(uVar3 + 0x5c);
    *(undefined4 *)((int)unit_local + 0x1c) = *(undefined4 *)(uVar3 + 0x1c);
    *(undefined4 *)((int)unit_local + 0x28) = *(undefined4 *)(uVar3 + 0x28);
    *(uint *)((int)unit_local + 0x30) = *(uint *)((int)unit_local + 0x30) | 0x1000000;
  }
  this_00[0xc] = this_00[0xc] & 0xfffbffff;
  *(undefined4 *)((int)this + 0x4780) = 0;
  *(undefined4 *)((int)this + 0x4784) = 0;
  n = this_00[0x13];
  if (0 < n) {
    it = this_00 + 0x31;
    iVar9 = 0;
    do {
      if (FUN_00525f10((int)it) != 0) {
        *(undefined4 *)((int)this + 0x4780) = 1;
        break;
      }
      iVar9 = iVar9 + 1;
      it = it + 0x13;
    } while (iVar9 < n);
  }
  n = this_01[0x13];
  if (0 < n) {
    it = this_01 + 0x31;
    iVar9 = 0;
    do {
      if (FUN_00525f10((int)it) != 0) {
        *(undefined4 *)((int)this + 0x4784) = 1;
        break;
      }
      iVar9 = iVar9 + 1;
      it = it + 0x13;
    } while (iVar9 < n);
  }
  copy_unit((void *)((int)this + 0x660), this_00);
  copy_unit((void *)((int)this + 0xc3c), this_01);

  iVar9 = 0;
  n = 0;
  if (0 < this_00[0x13]) {
    it = this_00 + 0x31;
    do {
      iVar4 = FUN_00462be0(it, this_00[10], iVar9);
      it = it + 0x13;
      n = n + iVar4;
      iVar9 = iVar9 + 1;
    } while (iVar9 < this_00[0x13]);
  }
  *(int *)((int)this + 0x4764) = n;
  iVar9 = 0;
  n = 0;
  if (0 < this_01[0x13]) {
    it = this_01 + 0x31;
    do {
      iVar4 = FUN_00462be0(it, this_01[10], iVar9);
      it = it + 0x13;
      n = n + iVar4;
      iVar9 = iVar9 + 1;
    } while (iVar9 < this_01[0x13]);
  }
  *(int *)((int)this + 0x4768) = n;
  iVar9 = FUN_00421960((void *)DAT_005aa78c);
  *(int *)((int)this + 0x476c) = iVar9;
  iVar9 = FUN_00421960((void *)DAT_005aad68);
  *(int *)((int)this + 0x4770) = iVar9;
  *(int *)((int)this + 0x658) = this_00[0x12];
  *(int *)((int)this + 0x65c) = this_01[0x12];
  if (DAT_005aa1c4_b != 0) {
    FUN_0041d1d0(DAT_005a7b78, 1, 0xffffffff);
    FUN_004d05e0(DAT_005a7b78, DAT_005aa1c4_u, (int *)DAT_005aa1c8);
  }
  pvVar7 = player_slot(this, this_00[0x12]);
  DAT_00583580 = *(undefined4 *)((int)pvVar7 + 0x15dc);
  pvVar7 = player_slot(this, this_01[0x12]);
  DAT_00583584 = *(undefined4 *)((int)pvVar7 + 0x15dc);

  iVar9 = FUN_0048c7c0();
  if ((iVar9 != 0) || ((*(byte *)(param_1 + 7) & 1) != 0)) {
    FUN_00488640((int)this);
    *(undefined4 *)((int)this + 0x230c4) = 1;
    puVar5 = (undefined4 *)((int)this + 0x230ac);
    iVar9 = 5;
    do {
      puVar5[-5] = 0;
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    uVar3 = FUN_00482ac0(this, *(int *)((int)this + 0x4774), 2);
    uVar6 = FUN_00482ac0(this, *(int *)((int)this + 0x4774), 3);
    pvVar7 = (void *)FUN_00482ac0(this, *(int *)((int)this + 0x4774), 1);
    FUN_004176d0(this_00, 0);
    if (uVar3 == 0) {
      if (uVar6 == 0) {
        if (pvVar7 == (void *)0x0) {
          DAT_00583100 = 1;
          FUN_004ecc90((undefined4 *)((int)this + 0x22944));
          FUN_004176d0(this_01, 0);
        } else {
          DAT_00583100 = 3;
          FUN_0050ca30(pvVar7, param_1[7] & 1);
        }
      } else {
        FUN_004ecc90((undefined4 *)((int)this + 0x22944));
        DAT_00583100 = 2;
        FUN_00455170((int)this + 0x47bc);
        iVar9 = FUN_0044ec80(uVar6);
        *(int *)((int)this + 0x47ec) = iVar9;
        FUN_00455820((void *)((int)this + 0x47bc), *(int *)(uVar6 + 0x344));
        *(undefined4 *)((int)this + 0x47e8) = *(undefined4 *)(uVar6 + 0x80);
      }
    } else {
      DAT_00583100 = 1;
      FUN_004ef070(uVar3);
    }
    if (this_00[7] != param_1[4]) {
      FUN_004a6dd0(pvVar10, this_00, this_00[7], param_1[4]);
    }
    if (this_01[7] != param_1[5]) {
      FUN_004a6dd0(pvVar10, this_01, this_01[7], param_1[5]);
    }
    if ((this_00[0xc] & 0x1c00000U) != 0) {
      iVar9 = FUN_004a8b50(pvVar10, this_00[7], this_01[7]);
      uVar3 = iVar9 - 3U & 7;
      this_00[0x11] = uVar3;
      iVar9 = FUN_00420910(this_00, this_00[7], uVar3);
      if (iVar9 == 0) {
        iVar9 = FUN_004a8b50(pvVar10, this_00[7], this_01[7]);
        this_00[0x11] = iVar9 + 3U & 7;
      }
      iVar9 = FUN_00420910(this_00, this_00[7], this_00[0x11]);
      if (iVar9 == 0) {
        iVar9 = FUN_004a8b50(pvVar10, this_00[7], this_01[7]);
        this_00[0x11] = iVar9 - 4U & 7;
      }
      FUN_004245a0(this_00);
      *param_1 = this_00[10];
      param_1[4] = this_00[7];
    }
    iVar9 = FUN_004a8b50(pvVar10, this_01[7], this_00[7]);
    this_01[0x11] = iVar9;
    this_00[0x11] = iVar9 - 4U & 7;
    world_id = *(int *)(DAT_005a7d90 + DAT_005a7d8c * 0x400);
    if (world_id == this_00[0x12]) {
      iVar9 = this_00[10];
      iVar4 = FUN_0052d140((int)(DAT_005a7d90 + world_id * 0x400));
      if (iVar4 != iVar9) {
        FUN_0052b6f0((void *)(DAT_005a7d90 + *(int *)(DAT_005a7d90 + DAT_005a7d8c * 0x400) * 0x400), iVar9, 0);
      }
    }
    world_id = *(int *)(DAT_005a7d90 + DAT_005a7d8c * 0x400);
    if (world_id == this_01[0x12]) {
      iVar9 = this_01[10];
      iVar4 = FUN_0052d140((int)(DAT_005a7d90 + world_id * 0x400));
      if (iVar4 != iVar9) {
        FUN_0052b6f0((void *)(DAT_005a7d90 + *(int *)(DAT_005a7d90 + DAT_005a7d8c * 0x400) * 0x400), iVar9, 0);
      }
    }
    world_id = *(int *)(DAT_005a7d90 + DAT_005a7d8c * 0x400);
    if (world_id == this_01[0x12]) {
      DAT_005830ec = this_01[7] % *(int *)((int)this + 0x4898);
      DAT_005830e8 = this_01[7] / *(int *)((int)this + 0x4898);
      FUN_0041fda0((int)this_01);
      FUN_00504ce0(&DAT_00584ae8, 1, 0);
    }
    world_id = *(int *)(DAT_005a7d90 + DAT_005a7d8c * 0x400);
    if (world_id == this_01[0x12]) {
      iVar4 = *(int *)((int)this + 0x4770);
      iVar9 = *(int *)((int)this + 0x476c);
    } else {
      iVar4 = *(int *)((int)this + 0x476c);
      iVar9 = *(int *)((int)this + 0x4770);
    }
    DAT_00586754 = (float)iVar4;
    DAT_00586750 = (float)iVar9;
    DAT_00586758 = DAT_00586754;
    DAT_0058675c = *(undefined4 *)&DAT_00586750;
    if ((*(byte *)(param_1 + 7) & 1) == 0) {
      FUN_0047a7b0(0x585408);
      FUN_00479640(0x585408);
      FUN_0048cd80();
      FUN_004605b0(this);
      FUN_004f76b0((int)this + 0x4848);
      *(undefined4 *)((int)this + 0x5048) = 0;
      uVar3 = FUN_00460fb0((int)this);
      *(uint *)((int)this + 0x5028) = uVar3;
      FUN_00460eb0(this, *(int *)((int)this + 0x501c));
      world_id = *(int *)(DAT_005a7d90 + DAT_005a7d8c * 0x400);
      if ((world_id != *(int *)((int)this + 0x6a8)) && (world_id != *(int *)((int)this + 0xc84))) {
        {
          icall_vtbl28 *vtbl = (icall_vtbl28 *)(unsigned)DAT_005876d0;
          vtbl[0x28 / 4](&DAT_005876d0, DAT_005a7990 / 2, DAT_005a7994 / 2, 0x140, 0xc0);
        }
      }
      if (*(int *)(DAT_005a7d90 + DAT_005a7d8c * 0x400) == *(int *)((int)this + 0x6a8)) {
        iVar9 = FUN_00406a80((void *)DAT_005ae958, *(int *)((int)this + 0x6a8), -1);
        FUN_0051ab30(&DAT_005876d0, iVar9 % DAT_005ae9c4, iVar9 / DAT_005ae9c4, 0x140, 0xc0);
      }
      if (*(int *)(DAT_005a7d90 + DAT_005a7d8c * 0x400) == *(int *)((int)this + 0xc84)) {
        iVar9 = FUN_00406a80((void *)DAT_005ae958, *(int *)((int)this + 0xc84), -1);
        FUN_0051ab30(&DAT_005876d0, iVar9 % DAT_005ae9c4, iVar9 / DAT_005ae9c4, 0x140, 0xc0);
      }
      FUN_004a9f50(pvVar10);
      FUN_004aac90((int)pvVar10);
      FUN_0048c6a0();
      iVar9 = *(int *)((int)this + 0x658);
      pvVar7 = player_slot(this, iVar9);
      if (pvVar7 != (void *)0x0) {
        iVar4 = *(int *)((int)pvVar7 + 0x15dc);
        if (DAT_005d1e84 == 0) {
          iVar8 = 1;
        } else {
          iVar8 = FUN_004b7dd0(DAT_005d1e84);
        }
        if (iVar4 != iVar8) {
          pvVar7 = (void *)0x0;
        }
        if (pvVar7 != (void *)0x0) {
          FUN_0048cc70(msg, 0x3e);
          FUN_00489b70(&DAT_00584ae8, (int *)msg);
        }
      }
      pvVar10 = player_slot(this, *(int *)((int)this + 0x6a8));
      pvVar7 = player_slot(this, *(int *)((int)this + 0xc84));
      if (pvVar10 != (void *)0x0) {
        FUN_004bb160(pvVar10, 1);
      }
      if (pvVar7 != (void *)0x0) {
        FUN_004bb160(pvVar7, 2);
      }
      FUN_00519b30(&DAT_005876d0, 1);
      FUN_004a6470(DAT_005ae958);
      FUN_00504ce0(&DAT_00584ae8, 1, 0);
      FUN_004d05e0(DAT_005a7b78, *(uint *)((int)this + 0xe8), *(int **)((int)this + 0xec));
    } else {
      FUN_0042f120((void *)((int)this + 0x3b24), DAT_005a7b78, (undefined4 *)this_00, (undefined4 *)this_01);
      *(undefined4 *)((int)this + 0x22c3c) = 0;
      FUN_0045d2e0(this, this_00[10], this_01[10], (void *)0x1, 0, 0, (byte *)0x0, (byte *)0x0, 0, 0);
    }
    FUN_00411910(unit_local);
    return 1;
  }
  FUN_00411910(unit_local);
  return 0;
}
