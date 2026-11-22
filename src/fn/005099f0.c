/* Rebuilt from lomse.exe FUN_005099f0 @ 0x005099f0 (1189 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004fe720 ((int * (__thiscall *)(void *, LPCSTR, uint, int, int, int))0x004fe720)
#define FUN_004fe9c0 ((undefined4 (__fastcall *)(int *))0x004fe9c0)
#define FUN_004fe9f0 ((int (__thiscall *)(void *, int, int))0x004fe9f0)
#define FUN_005047d0 ((undefined4 (__stdcall *)(undefined4))0x005047d0)
#define FUN_00508c70 ((undefined4 (__thiscall *)(void *, int, int, int))0x00508c70)
#define FUN_00508f30 ((undefined4 (__thiscall *)(void *, int, undefined4))0x00508f30)
#define FUN_00508ff0 ((undefined4 (__thiscall *)(void *, undefined4, int, int *))0x00508ff0)
#define FUN_005098a0 ((undefined4 (__stdcall *)(char *))0x005098a0)
#define FUN_005098d0 ((undefined4 (__stdcall *)(char *))0x005098d0)
#define FUN_00509980 ((uint (__stdcall *)(uint *))0x00509980)
#define FUN_0053a090 ((int (__cdecl *)(undefined1 *, ...))0x0053a090)
#define FUN_0053a8b0 ((undefined4 (__cdecl *)(byte *, byte *, byte *, byte *, byte *))0x0053a8b0)
#define FUN_0053ae00 ((undefined4 (__cdecl *)(char *, ...))0x0053ae00)
#define FUN_0053ae60 ((uint * (__cdecl *)(uint *, char))0x0053ae60)
#define FUN_00548ed0 ((undefined4 (__cdecl *)(byte *, byte *, int))0x00548ed0)
#define __alloca_probe ((undefined4 (__cdecl *)(undefined1))0x00539630)
#define s_LBM__s_0057390c (*(char (*)[])0x0057390c)
#define s_TERRAINTYPE__d__d__________d__d__005738bc (*(char (*)[])0x005738bc)
#define s_TILESIZE__d__d_005738f0 (*(char (*)[])0x005738f0)
#define s_TILES__d__d_00573900 (*(char (*)[])0x00573900)
#define s_TILE__d__d_______________________00573880 (*(char (*)[])0x00573880)
#define s_TileSet__Load___Init_failed_00573858 (*(char (*)[])0x00573858)
#define s__s_s_s_00573878 (*(char (*)[])0x00573878)

#define LOM_SELF_005099f0 1
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

undefined4 __thiscall rb_005099f0(void *this,byte *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  char **ppcVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  uint *puVar11;
  int *piVar12;
  uchar _fr[0xcab8] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_caac;
  typedef int _t_iStack_caa8;
  typedef int _t_iStack_caa4;
  typedef int _t_iStack_caa0;
  typedef int _t_iStack_ca9c;
  typedef int * _t_piStack_ca98;
  typedef int * _t_piStack_ca94;
  typedef byte _t_abStack_ca90[4];
  typedef int _t_iStack_ca8c;
  typedef undefined1 * _t_puStack_ca88;
  typedef undefined4 * _t_puStack_ca84;
  typedef int _t_aiStack_ca80[2];
  typedef int _t_iStack_ca78;
  typedef undefined4 _t_uStack_ca70;
  typedef char * _t_apcStack_ca6c[4];
  typedef char * _t_pcStack_ca5c;
  typedef byte _t_bStack_ca58;
  typedef undefined1 _t_auStack_ca57[99];
  typedef undefined4 _t_uStack_c9f4;
  typedef undefined1 _t_auStack_c9f0[52];
  typedef undefined1 _t_auStack_c9bc[4];
  typedef undefined1 _t_auStack_c9b8[4];
  typedef undefined1 _t_auStack_c9b4[4];
  typedef undefined1 _t_auStack_c9b0[4];
  typedef undefined1 _t_auStack_c9ac[4];
  typedef undefined1 _t_auStack_c9a8[4];
  typedef undefined1 _t_auStack_c9a4[4];
  typedef undefined1 _t_auStack_c9a0[4];
  typedef uint _t_auStack_c99c[8];
  typedef uint _t_auStack_c97c[25];
  typedef undefined1 _t_auStack_c918[100];
  typedef undefined1 _t_auStack_c8b4[100];
  typedef undefined1 _t_auStack_c850[100];
  typedef undefined1 _t_auStack_c7ec[100];
  typedef undefined1 _t_auStack_c788[100];
  typedef undefined1 _t_auStack_c724[100];
  typedef undefined1 _t_auStack_c6c0[100];
  typedef byte _t_abStack_c65c[256];
  typedef byte _t_abStack_c55c[256];
  typedef byte _t_abStack_c45c[256];
  typedef undefined1 _t_auStack_c35c[49996];
#define iStack_caac (*(_t_iStack_caac *)(_fr + 0x4))
#define iStack_caa8 (*(_t_iStack_caa8 *)(_fr + 0x8))
#define iStack_caa4 (*(_t_iStack_caa4 *)(_fr + 0xc))
#define iStack_caa0 (*(_t_iStack_caa0 *)(_fr + 0x10))
#define iStack_ca9c (*(_t_iStack_ca9c *)(_fr + 0x14))
#define piStack_ca98 (*(_t_piStack_ca98 *)(_fr + 0x18))
#define piStack_ca94 (*(_t_piStack_ca94 *)(_fr + 0x1c))
#define abStack_ca90 (*(_t_abStack_ca90 *)(_fr + 0x20))
#define iStack_ca8c (*(_t_iStack_ca8c *)(_fr + 0x24))
#define puStack_ca88 (*(_t_puStack_ca88 *)(_fr + 0x28))
#define puStack_ca84 (*(_t_puStack_ca84 *)(_fr + 0x2c))
#define aiStack_ca80 (*(_t_aiStack_ca80 *)(_fr + 0x30))
#define iStack_ca78 (*(_t_iStack_ca78 *)(_fr + 0x38))
#define uStack_ca70 (*(_t_uStack_ca70 *)(_fr + 0x40))
#define apcStack_ca6c (*(_t_apcStack_ca6c *)(_fr + 0x44))
#define pcStack_ca5c (*(_t_pcStack_ca5c *)(_fr + 0x54))
#define bStack_ca58 (*(_t_bStack_ca58 *)(_fr + 0x58))
#define auStack_ca57 (*(_t_auStack_ca57 *)(_fr + 0x59))
#define uStack_c9f4 (*(_t_uStack_c9f4 *)(_fr + 0xbc))
#define auStack_c9f0 (*(_t_auStack_c9f0 *)(_fr + 0xc0))
#define auStack_c9bc (*(_t_auStack_c9bc *)(_fr + 0xf4))
#define auStack_c9b8 (*(_t_auStack_c9b8 *)(_fr + 0xf8))
#define auStack_c9b4 (*(_t_auStack_c9b4 *)(_fr + 0xfc))
#define auStack_c9b0 (*(_t_auStack_c9b0 *)(_fr + 0x100))
#define auStack_c9ac (*(_t_auStack_c9ac *)(_fr + 0x104))
#define auStack_c9a8 (*(_t_auStack_c9a8 *)(_fr + 0x108))
#define auStack_c9a4 (*(_t_auStack_c9a4 *)(_fr + 0x10c))
#define auStack_c9a0 (*(_t_auStack_c9a0 *)(_fr + 0x110))
#define auStack_c99c (*(_t_auStack_c99c *)(_fr + 0x114))
#define auStack_c97c (*(_t_auStack_c97c *)(_fr + 0x134))
#define auStack_c918 (*(_t_auStack_c918 *)(_fr + 0x198))
#define auStack_c8b4 (*(_t_auStack_c8b4 *)(_fr + 0x1fc))
#define auStack_c850 (*(_t_auStack_c850 *)(_fr + 0x260))
#define auStack_c7ec (*(_t_auStack_c7ec *)(_fr + 0x2c4))
#define auStack_c788 (*(_t_auStack_c788 *)(_fr + 0x328))
#define auStack_c724 (*(_t_auStack_c724 *)(_fr + 0x38c))
#define auStack_c6c0 (*(_t_auStack_c6c0 *)(_fr + 0x3f0))
#define abStack_c65c (*(_t_abStack_c65c *)(_fr + 0x454))
#define abStack_c55c (*(_t_abStack_c55c *)(_fr + 0x554))
#define abStack_c45c (*(_t_abStack_c45c *)(_fr + 0x654))
#define auStack_c35c (*(_t_auStack_c35c *)(_fr + 0x754))
  /* alloca_probe return-address write dropped (probe replaced by _fr). */
  apcStack_ca6c[0] = s_LBM__s_0057390c;
  apcStack_ca6c[1] = s_TILES__d__d_00573900;
  apcStack_ca6c[2] = s_TILESIZE__d__d_005738f0;
  apcStack_ca6c[3] = s_TERRAINTYPE__d__d__________d__d__005738bc;
  pcStack_ca5c = s_TILE__d__d_______________________00573880;
  FUN_004fe720(aiStack_ca80,(LPCSTR)param_1,0,(int)auStack_c35c,50000,1);
  if (aiStack_ca80[0] == 0) {
    FUN_004fe9c0(aiStack_ca80);
    uVar1 = 0;
  }
  else {
    puStack_ca88 = (undefined1 *)((int)this + 0x40);
    *(undefined4 *)((int)this + 0x150) = 0;
    piVar12 = (int *)((int)this + 0x148);
    *puStack_ca88 = 0;
    iStack_ca8c = (int)this + 0x150;
    piVar6 = (int *)((int)this + 0x144);
    puStack_ca84 = (undefined4 *)((int)this + 0x14c);
    iStack_caa4 = 0;
    *piVar12 = 0;
    *piVar6 = 0;
    *puStack_ca84 = 0;
    iStack_caa0 = 0;
    iStack_caac = 0;
    piStack_ca98 = piVar12;
    piStack_ca94 = piVar6;
    do {
      iVar2 = FUN_004fe9f0(aiStack_ca80,(int)&bStack_ca58,100);
      if (iVar2 != 0) {
        do {
          FUN_005098a0((char *)&bStack_ca58);
          iVar2 = 0;
          ppcVar7 = apcStack_ca6c;
          do {
            puVar11 = (uint *)*ppcVar7;
            puVar3 = FUN_0053ae60(puVar11,'=');
            iVar9 = (int)puVar3 + (1 - (int)puVar11);
            iVar4 = FUN_00548ed0(&bStack_ca58,(byte *)puVar11,iVar9);
            if (iVar4 == 0) break;
            iVar2 = iVar2 + 1;
            ppcVar7 = ppcVar7 + 1;
          } while (iVar2 < 5);
          switch(iVar2) {
          case 0:
            if (iStack_caac == 0) {
              FUN_0053a8b0(param_1,abStack_ca90,abStack_c65c,abStack_c45c,abStack_c55c);
              FUN_0053a090(puStack_ca88,s__s_s_s_00573878,(uint)abStack_ca90,abStack_c65c,
                           auStack_ca57 + iVar9 + -1);
            }
            break;
          case 1:
            if (iStack_caac == 0) {
              iVar2 = FUN_0053ae00((char *)&bStack_ca58,(byte *)s_TILES__d__d_00573900,piStack_ca94,
                                   piStack_ca98);
joined_r0x00509c0f:
              if (iVar2 != 2) goto LAB_00509dcf;
            }
            break;
          case 2:
            if (iStack_caac == 0) {
              iVar2 = FUN_0053ae00((char *)&bStack_ca58,(byte *)s_TILESIZE__d__d_005738f0,
                                   puStack_ca84,iStack_ca8c);
              goto joined_r0x00509c0f;
            }
            break;
          case 3:
            iVar2 = FUN_0053ae00((char *)&bStack_ca58,
                                 (byte *)s_TERRAINTYPE__d__d__________d__d__005738bc,&iStack_caa8,
                                 &uStack_c9f4,auStack_c9f0,auStack_c9bc,auStack_c9b8,auStack_c9b4,
                                 auStack_c9b0,auStack_c9ac,auStack_c9a8,auStack_c9a4,auStack_c9a0);
            if (iVar2 == 0xb) {
              if (iStack_caac == 0) {
                if (iStack_caa4 < iStack_caa8) {
                  iStack_caa4 = iStack_caa8;
                }
              }
              else {
                puVar8 = &uStack_c9f4;
                puVar10 = (undefined4 *)(*(int *)((int)this + 0x10) + iStack_caa8 * 0x58);
                for (iVar2 = 0x16; iVar2 != 0; iVar2 = iVar2 + -1) {
                  *puVar10 = *puVar8;
                  puVar8 = puVar8 + 1;
                  puVar10 = puVar10 + 1;
                }
              }
            }
            else {
LAB_00509dcf:
              FUN_005098d0((char *)&bStack_ca58);
            }
            break;
          case 4:
            iVar2 = FUN_0053ae00((char *)&bStack_ca58,
                                 (byte *)s_TILE__d__d_______________________00573880,&iStack_ca9c,
                                 &iStack_caa8,auStack_c97c,auStack_c918,auStack_c8b4,auStack_c850,
                                 auStack_c7ec,auStack_c788,auStack_c724,auStack_c6c0);
            if (iVar2 != 10) goto LAB_00509dcf;
            if (iStack_caac == 0) {
              if (iStack_caa4 < iStack_caa8) {
                iStack_caa4 = iStack_caa8;
              }
              iStack_caa0 = iStack_caa0 + 1;
            }
            else {
              puVar11 = auStack_c99c;
              puVar3 = auStack_c97c;
              iVar2 = 8;
              do {
                uVar5 = FUN_00509980(puVar3);
                *puVar11 = uVar5;
                puVar3 = puVar3 + 0x19;
                puVar11 = puVar11 + 1;
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
              iVar2 = FUN_00508f30(this,iStack_ca9c,iStack_caa8);
              if (iVar2 == 0) {
                FUN_005098d0((char *)&bStack_ca58);
              }
              iVar2 = FUN_00508ff0(this,iStack_ca9c,iStack_caa8,(int *)auStack_c99c);
              if (iVar2 == 0) goto LAB_00509dcf;
            }
          }
          iVar2 = FUN_004fe9f0(aiStack_ca80,(int)&bStack_ca58,100);
        } while (iVar2 != 0);
        piVar6 = piStack_ca94;
        piVar12 = piStack_ca98;
      }
      if (iStack_caac == 0) {
        iVar2 = FUN_00508c70(this,iStack_caa4 + 1,*piVar6 * *piVar12,iStack_caa0);
        if (iVar2 == 0) {
          FUN_005047d0(s_TileSet__Load___Init_failed_00573858);
          FUN_004fe9c0(aiStack_ca80);
          return 0;
        }
        if (iStack_ca78 != 0) {
          uStack_ca70 = 0;
        }
      }
      iStack_caac = iStack_caac + 1;
    } while (iStack_caac < 2);
    FUN_004fe9c0(aiStack_ca80);
    uVar1 = 1;
  }
  return uVar1;
#undef iStack_caac
#undef iStack_caa8
#undef iStack_caa4
#undef iStack_caa0
#undef iStack_ca9c
#undef piStack_ca98
#undef piStack_ca94
#undef abStack_ca90
#undef iStack_ca8c
#undef puStack_ca88
#undef puStack_ca84
#undef aiStack_ca80
#undef iStack_ca78
#undef uStack_ca70
#undef apcStack_ca6c
#undef pcStack_ca5c
#undef bStack_ca58
#undef auStack_ca57
#undef uStack_c9f4
#undef auStack_c9f0
#undef auStack_c9bc
#undef auStack_c9b8
#undef auStack_c9b4
#undef auStack_c9b0
#undef auStack_c9ac
#undef auStack_c9a8
#undef auStack_c9a4
#undef auStack_c9a0
#undef auStack_c99c
#undef auStack_c97c
#undef auStack_c918
#undef auStack_c8b4
#undef auStack_c850
#undef auStack_c7ec
#undef auStack_c788
#undef auStack_c724
#undef auStack_c6c0
#undef abStack_c65c
#undef abStack_c55c
#undef abStack_c45c
#undef auStack_c35c
}
