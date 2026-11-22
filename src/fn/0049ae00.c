/* Rebuilt from lomse.exe FUN_0049ae00 @ 0x0049ae00 (778 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055c728 (*(undefined1 *)0x0055c728)
#define DAT_00583718 (*(int *)0x00583718)
#define FUN_0049dd80 ((int (__thiscall *)(void *, byte *))0x0049dd80)
#define FUN_004fe720 ((int * (__thiscall *)(void *, LPCSTR, uint, int, int, int))0x004fe720)
#define FUN_004fe9c0 ((undefined4 (__fastcall *)(int *))0x004fe9c0)
#define FUN_0053a090 ((int (__cdecl *)(undefined1 *, ...))0x0053a090)
#define FUN_0053ae00 ((undefined4 (__cdecl *)(char *, ...))0x0053ae00)
#define FUN_0053ae60 ((uint * (__cdecl *)(uint *, char))0x0053ae60)
#define FUN_00547c60 ((undefined4 (__cdecl *)(byte *, char *, int))0x00547c60)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define _strncpy ((char * (__cdecl *)(char *, char *, size_t))0x0053a220)
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)
#define s__define_0055c730 (*(char (*)[])0x0055c730)
#define s__s__d_0055c73c (*(char (*)[])0x0055c73c)
#define s__s__failed_to_create_sequence_ta_0055c780 (*(char (*)[])0x0055c780)
#define s__s__failed_to_load_header__s_0055c744 (*(char (*)[])0x0055c744)
#define s__s__sequence_table_size_lt_1_0055c764 (*(char (*)[])0x0055c764)

#define LOM_SELF_0049ae00 1
void __thiscall rb_0049ae00(void *this,char *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint *puVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  char *pcVar11;
  uchar _fr[0xac8] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_uStack_abc;
  typedef void * _t_local_ab8;
  typedef char * _t_apcStack_ab4[5];
  typedef uint _t_auStack_aa0[49];
  typedef undefined1 _t_uStack_9d9;
  typedef uint _t_auStack_9d8[64];
  typedef byte _t_abStack_8d5[201];
  typedef undefined1 _t_auStack_80c[2048];
#define uStack_abc (*(_t_uStack_abc *)(_fr + 0x4))
#define local_ab8 (*(_t_local_ab8 *)(_fr + 0x8))
#define apcStack_ab4 (*(_t_apcStack_ab4 *)(_fr + 0xc))
#define auStack_aa0 (*(_t_auStack_aa0 *)(_fr + 0x20))
#define uStack_9d9 (*(_t_uStack_9d9 *)(_fr + 0xe7))
#define auStack_9d8 (*(_t_auStack_9d8 *)(_fr + 0xe8))
#define abStack_8d5 (*(_t_abStack_8d5 *)(_fr + 0x1eb))
#define auStack_80c (*(_t_auStack_80c *)(_fr + 0x2b4))

  local_ab8 = this;
  if (*(int *)((int)this + 4) != 0) {
    Ordinal_403(*(int *)((int)this + 4),s_C__lomse_source_storm_h_00555130,0x3eb,0);
    *(undefined4 *)((int)this + 4) = 0;
    DAT_00583718 = DAT_00583718 + *(int *)((int)this + 8) * -4;
  }
  iVar5 = *(int *)(param_2 + 4);
  *(int *)((int)this + 8) = iVar5;
  iVar5 = Ordinal_401(iVar5 << 2,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  *(int *)((int)this + 4) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)((int)this + 8) = 0;
    pcVar11 = s__s__failed_to_create_sequence_ta_0055c780;
  }
  else {
    DAT_00583718 = DAT_00583718 + *(int *)((int)this + 8) * 4;
    if (0 < *(int *)((int)this + 8)) {
      uVar8 = *(uint *)(param_2 + 8);
      iVar5 = 0;
      if (0 < *(int *)((int)this + 8)) {
        do {
          iVar5 = iVar5 + 1;
          *(uint *)(*(int *)((int)this + 4) + -4 + iVar5 * 4) = ((uVar8 & 1) != 0) - 1;
        } while (iVar5 < *(int *)((int)this + 8));
      }
      _strncpy((char *)auStack_9d8,param_1,0x103);
      abStack_8d5[0] = 0;
      puVar6 = FUN_0053ae60(auStack_9d8,'.');
      if (puVar6 != (uint *)0x0) {
        *(undefined1 *)puVar6 = 0;
      }
      uVar8 = 0xffffffff;
      pcVar11 = &DAT_0055c728;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar2 != '\0');
      uVar9 = 0xffffffff;
      pcVar11 = &DAT_0055c728;
      do {
        pcVar7 = pcVar11;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar7 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar7;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      abStack_8d5[-(~uVar8 - 1)] = 0;
      iVar5 = -1;
      puVar6 = auStack_9d8;
      do {
        puVar10 = puVar6;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        puVar10 = (uint *)((int)puVar6 + 1);
        uVar8 = *puVar6;
        puVar6 = puVar10;
      } while ((char)uVar8 != '\0');
      pcVar11 = pcVar7 + -uVar9;
      pcVar7 = (char *)((int)puVar10 + -1);
      for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar7 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar7 = pcVar7 + 1;
      }
      FUN_004fe720(apcStack_ab4,(LPCSTR)auStack_9d8,2,(int)auStack_80c,0x800,4);
      if (apcStack_ab4[0] == (char *)0x0) {
        FUN_0053a090((undefined1 *)auStack_aa0,s__s__failed_to_load_header__s_0055c744,(uint)param_1
                     ,auStack_9d8);
        OutputDebugStringA((LPCSTR)auStack_aa0);
      }
      else {
        cVar2 = *apcStack_ab4[0];
        pcVar11 = apcStack_ab4[0];
        while (cVar2 != '\0') {
          bVar3 = false;
          bVar4 = false;
          uVar8 = 0;
          if (*pcVar11 != '\0') {
            pcVar7 = pcVar11;
            do {
              cVar2 = *pcVar7;
              if (cVar2 == '\n') {
                if (bVar3) break;
                bVar3 = true;
              }
              else if (cVar2 == '\r') {
                if (bVar4) break;
                bVar4 = true;
              }
              else if ((bVar4) || (bVar3)) break;
              if (uVar8 < 199) {
                pcVar7[(int)auStack_aa0 - (int)pcVar11] = cVar2;
              }
              pcVar1 = pcVar7 + 1;
              uVar8 = uVar8 + 1;
              pcVar7 = pcVar7 + 1;
            } while (*pcVar1 != '\0');
          }
          pcVar11 = pcVar11 + uVar8;
          if (uVar8 < 200) {
            *(undefined1 *)((int)auStack_aa0 + uVar8) = 0;
          }
          else {
            uStack_9d9 = 0;
          }
          uVar8 = 0xffffffff;
          pcVar7 = s__define_0055c730;
          do {
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            cVar2 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar2 != '\0');
          iVar5 = FUN_00547c60((byte *)s__define_0055c730,(char *)auStack_aa0,~uVar8 - 1);
          if ((((iVar5 == 0) && (puVar6 = FUN_0053ae60(auStack_aa0,'_'), puVar6 != (uint *)0x0)) &&
              (iVar5 = FUN_0053ae00((char *)((int)puVar6 + 1),(byte *)s__s__d_0055c73c,
                                    abStack_8d5 + 1,&uStack_abc), iVar5 == 2)) &&
             (iVar5 = FUN_0049dd80((void *)param_2,abStack_8d5 + 1), iVar5 != -1)) {
            *(undefined4 *)(*(int *)((int)local_ab8 + 4) + iVar5 * 4) = uStack_abc;
          }
          cVar2 = *pcVar11;
        }
      }
      FUN_004fe9c0((int *)apcStack_ab4);
      return;
    }
    pcVar11 = s__s__sequence_table_size_lt_1_0055c764;
  }
  FUN_0053a090((undefined1 *)auStack_aa0,pcVar11,(uint)param_1);
  OutputDebugStringA((LPCSTR)auStack_aa0);
  return;
#undef uStack_abc
#undef local_ab8
#undef apcStack_ab4
#undef auStack_aa0
#undef uStack_9d9
#undef auStack_9d8
#undef abStack_8d5
#undef auStack_80c
}
