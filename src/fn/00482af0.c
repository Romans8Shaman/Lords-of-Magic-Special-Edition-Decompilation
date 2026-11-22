/* Rebuilt from lomse.exe FUN_00482af0 @ 0x00482af0 (1307 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00556168 (*(undefined *)0x00556168)
#define DAT_0055b1b0 (*(undefined4 *)0x0055b1b0)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005aef04 (*(undefined4 *)0x005aef04)
#define DAT_005cd2ec (*(undefined *)0x005cd2ec)
#define FUN_0040b7d0 ((undefined4 (__thiscall *)(void *, int *))0x0040b7d0)
#define FUN_0040c230 ((undefined4 (__thiscall *)(void *, int *))0x0040c230)
#define FUN_0040ccf0 ((undefined4 (__thiscall *)(void *, int *))0x0040ccf0)
#define FUN_0040d9f0 ((undefined4 (__thiscall *)(void *, int *))0x0040d9f0)
#define FUN_0040e4e0 ((undefined4 (__thiscall *)(void *, int *))0x0040e4e0)
#define FUN_0040f600 ((undefined4 (__thiscall *)(void *, int *))0x0040f600)
#define FUN_004839a0 ((bool (__stdcall *)(int *, char *, char *))0x004839a0)
#define FUN_00487590 ((undefined4 * (__fastcall *)(undefined4 *))0x00487590)
#define FUN_004875f0 ((undefined4 (__fastcall *)(void *))0x004875f0)
#define FUN_00487610 ((undefined4 (__thiscall *)(void *, int))0x00487610)
#define FUN_00487650 ((undefined4 (__thiscall *)(void *, int))0x00487650)
#define FUN_004a5440 ((undefined4 (__thiscall *)(void *, int *))0x004a5440)
#define FUN_004a54e0 ((undefined4 (__thiscall *)(void *, int *))0x004a54e0)
#define FUN_004bce20 ((undefined4 (__thiscall *)(void *, int *))0x004bce20)
#define FUN_004c4010 ((undefined4 (__thiscall *)(void *, int *))0x004c4010)
#define FUN_004c7390 ((undefined4 (__thiscall *)(void *, int *))0x004c7390)
#define FUN_004c8fc0 ((bool (__thiscall *)(void *, int *))0x004c8fc0)
#define FUN_004f6bc0 ((undefined4 (__thiscall *)(void *, int *))0x004f6bc0)
#define FUN_00524340 ((int (__thiscall *)(void *, int, int))0x00524340)
#define FUN_0052b3b0 ((undefined4 (__thiscall *)(void *, int *))0x0052b3b0)
#define FUN_0052d040 ((undefined4 (__thiscall *)(void *, int *))0x0052d040)
#define FUN_005394d0 ((undefined4 (__cdecl *)(int *))0x005394d0)
#define FUN_00539610 ((undefined4 (__cdecl *)(LPCSTR, char *))0x00539610)
#define FUN_00539660 ((uint (__cdecl *)(char *, uint, uint, int *))0x00539660)
#define FUN_0053ac20 ((DWORD (__cdecl *)(undefined4 *))0x0053ac20)
#define s_LS_ALRM_0055b1a0 (*(char (*)[])0x0055b1a0)
#define s_LS_GAME_0055b180 (*(char (*)[])0x0055b180)
#define s_LS_MAP__0055b168 (*(char (*)[])0x0055b168)
#define s_LS_MULT_0055b1a8 (*(char (*)[])0x0055b1a8)
#define s_LS_PLR__0055b188 (*(char (*)[])0x0055b188)
#define s_LS_REGN_0055b198 (*(char (*)[])0x0055b198)
#define s_LS_SPR__0055b170 (*(char (*)[])0x0055b170)
#define s_LS_USER_0055b178 (*(char (*)[])0x0055b178)
#define s_LS_VER__0055b190 (*(char (*)[])0x0055b190)

#define LOM_SELF_00482af0 1
undefined4 __thiscall rb_00482af0(void *this,LPCSTR param_1)

{
  char cVar1;
  int *piVar2;
  DWORD DVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  uchar _fr[0x280] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_274;
  typedef int _t_local_270;
  typedef void * _t_local_26c;
  typedef int _t_local_268;
  typedef undefined4 _t_local_264[5];
  typedef char * _t_local_250;
  typedef char _t_local_24c[4];
  typedef char _t_local_248[572];
#define local_274 (*(_t_local_274 *)(_fr + 0x4))
#define local_270 (*(_t_local_270 *)(_fr + 0x8))
#define local_26c (*(_t_local_26c *)(_fr + 0xc))
#define local_268 (*(_t_local_268 *)(_fr + 0x10))
#define local_264 (*(_t_local_264 *)(_fr + 0x14))
#define local_250 (*(_t_local_250 *)(_fr + 0x28))
#define local_24c (*(_t_local_24c *)(_fr + 0x2c))
#define local_248 (*(_t_local_248 *)(_fr + 0x30))

  piVar2 = (int *)FUN_00539610(param_1,&DAT_00556168);
  if (piVar2 != (int *)0x0) {
    if (*(int *)((int)this + 0x8c) != 7) {
      *(undefined4 *)((int)this + 0x8c) = 6;
    }
    FUN_00487590(local_264);
    FUN_00487610(local_264,*(int *)((int)this + 0xa4));
    FUN_00539660(s_LS_VER__0055b190,8,1,piVar2);
    FUN_00539660((char *)&DAT_0055b1b0,4,1,piVar2);
    DVar3 = FUN_0053ac20(piVar2);
    FUN_00487650(local_264,DVar3);
    FUN_00539660(s_LS_MULT_0055b1a8,8,1,piVar2);
    cVar1 = *(char *)((int)this + 0x54f);
    *(undefined1 *)((int)this + 0x54d) = 1;
    if ('\x01' < cVar1) {
      cVar1 = '\x01';
    }
    *(char *)((int)this + 0x54d) = cVar1;
    if (cVar1 <= *(char *)((int)this + 0x54e)) {
      cVar1 = *(char *)((int)this + 0x54e);
    }
    local_274 = 0;
    *(char *)((int)this + 0x54d) = cVar1;
    do {
      local_26c = (void *)((int)this + local_274 * 0x1d84);
      local_268 = local_274 * 0x24;
      local_250 = local_248 + local_274 * 0x24;
      uVar5 = 0xffffffff;
      pcVar7 = (char *)((int)local_26c + 0x50ac);
      do {
        pcVar8 = pcVar7;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar7 = pcVar8 + -uVar5;
      pcVar8 = local_250;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      local_274 = local_274 + 1;
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
      *(undefined4 *)(local_24c + local_268) = *(undefined4 *)((int)local_26c + 0x6620);
    } while (local_274 < 0x10);
    FUN_004839a0(piVar2,(char *)((int)this + 0x520),local_24c);
    FUN_00539660(s_LS_MAP__0055b168,8,1,piVar2);
    FUN_004a5440((void *)((int)this + 0x482c),piVar2);
    FUN_004a54e0((void *)((int)this + 0x482c),piVar2);
    FUN_004c8fc0((void *)((int)this + 0x4b34),piVar2);
    FUN_00539660(s_LS_SPR__0055b170,8,1,piVar2);
    FUN_004f6bc0((void *)((int)this + 0x4848),piVar2);
    FUN_00539660(s_LS_USER_0055b178,8,1,piVar2);
    FUN_0052d040(&DAT_00584ae8,piVar2);
    DVar3 = FUN_0053ac20(piVar2);
    FUN_00487650(local_264,DVar3);
    FUN_00539660(s_LS_GAME_0055b180,8,1,piVar2);
    FUN_00539660((char *)((int)this + 0x5004),4,1,piVar2);
    FUN_00539660((char *)((int)this + 0x5008),4,1,piVar2);
    FUN_00539660((char *)((int)this + 0x228a8),4,1,piVar2);
    iVar4 = FUN_0052b3b0((void *)((int)this + 0x23060),piVar2);
    if ((((iVar4 != 0) &&
         (uVar5 = FUN_00539660((char *)((int)this + 0x4fb4),4,1,piVar2), uVar5 == 1)) &&
        (uVar5 = FUN_00539660((char *)((int)this + 0x4fc8),4,1,piVar2), uVar5 == 1)) &&
       (uVar5 = FUN_00539660((char *)((int)this + 0x4fcc),0x20,1,piVar2), uVar5 == 1)) {
      FUN_00539660((char *)((int)this + 0x4dc4),4,1,piVar2);
      iVar4 = FUN_004c4010((void *)((int)this + 0x4db0),piVar2);
      if (((iVar4 != 0) &&
          (uVar5 = FUN_00539660((char *)((int)this + 0x230cc),200,1,piVar2), uVar5 == 1)) &&
         (uVar5 = FUN_00539660((char *)((int)this + 0x23194),4,1,piVar2), uVar5 == 1)) {
        DVar3 = FUN_0053ac20(piVar2);
        FUN_00487650(local_264,DVar3);
        FUN_00539660(s_LS_PLR__0055b188,8,1,piVar2);
        local_274 = 0;
        do {
          DVar3 = FUN_0053ac20(piVar2);
          FUN_00487650(local_264,DVar3);
          uVar5 = *(uint *)((int)this + local_274 * 0x1d84 + 0x6640);
          if (((uVar5 & 1) != 0) || (((byte)uVar5 & 0x80) == 0x80)) {
            FUN_00539660((char *)&local_274,4,1,piVar2);
            FUN_004bce20((void *)((int)this + local_274 * 0x1d84 + 0x5068),piVar2);
          }
          local_274 = local_274 + 1;
        } while (local_274 < 0x10);
        local_274 = -1;
        FUN_00539660((char *)&local_274,4,1,piVar2);
        local_274 = 0;
        do {
          local_270 = *(int *)((int)this + local_274 * 0x1d84 + 0x6620);
          if (local_270 < 0) {
            local_270 = FUN_00524340(&DAT_005cd2ec,*(int *)((int)this + local_274 * 0x1d84 + 0x6618)
                                     ,*(int *)((int)this + local_274 * 4 + 0x4fcc));
          }
          FUN_00539660((char *)&local_270,4,1,piVar2);
          local_274 = local_274 + 1;
        } while (local_274 < 8);
        FUN_00539660(s_LS_REGN_0055b198,8,1,piVar2);
        FUN_004c7390(&DAT_005aef04,piVar2);
        DVar3 = FUN_0053ac20(piVar2);
        FUN_00487650(local_264,DVar3);
        FUN_00539660(s_LS_ALRM_0055b1a0,8,1,piVar2);
        FUN_0040b7d0((void *)((int)this + 0x4d4c),piVar2);
        FUN_0040c230((void *)((int)this + 0x4d60),piVar2);
        FUN_0040ccf0((void *)((int)this + 0x4d74),piVar2);
        FUN_0040d9f0((void *)((int)this + 0x4d84),piVar2);
        FUN_0040e4e0((void *)((int)this + 0x4d94),piVar2);
        FUN_0040f600((void *)((int)this + 0x4da4),piVar2);
        DVar3 = FUN_0053ac20(piVar2);
        FUN_00487650(local_264,DVar3);
        FUN_005394d0(piVar2);
        FUN_004875f0(local_264);
        return 1;
      }
    }
    FUN_005394d0(piVar2);
    FUN_004875f0(local_264);
  }
  return 0;
#undef local_274
#undef local_270
#undef local_26c
#undef local_268
#undef local_264
#undef local_250
#undef local_24c
#undef local_248
}
