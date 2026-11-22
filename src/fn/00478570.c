/* Rebuilt from lomse.exe FUN_00478570 @ 0x00478570 (912 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match.
 * v1.6: retry CreateSoundBuffer with LOCSOFTWARE|GLOBALFOCUS; if an 8-bit
 * WAV still fails, upsample to 16-bit PCM (Win11 DirectSound).
 * v1.7: always upsample 8-bit to 16-bit before CSB (Win11 can return DS_OK
 * for an 8-bit STATIC buffer but mix silence). Prefer music-like flags
 * 0xE0|LOCSOFTWARE|GLOBALFOCUS (no STATIC). Log every early-out, CSB, Lock. */
#include "lom.h"

#define DAT_0055aef0 (*(undefined *)0x0055aef0)
#define DAT_0055aef8 (*(undefined *)0x0055aef8)
#define DAT_005832ec (*(int *)0x005832ec)
#define DAT_00584af0 (*(int *)0x00584af0)
#define FUN_004fe720 ((int * (__thiscall *)(void *, LPCSTR, uint, int, int, int))0x004fe720)
#define FUN_004fe9c0 ((undefined4 (__fastcall *)(int *))0x004fe9c0)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define __alloca_probe ((undefined4 (__cdecl *)(undefined1))0x00539630)
#define _strncmp ((int (__cdecl *)(char *, char *, size_t))0x0053aa30)
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)
void v16_audio_log(char *msg);
void v16_audio_log_hr(char *msg, int hr);
void v16_audio_log_i(char *msg, int v);

#define LOM_SELF_00478570 1
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

undefined4 __thiscall rb_00478570(void *this,int param_1,undefined4 *param_2)

{
  LPCSTR pCVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined4 *puVar12;
  uchar _fr[0x10070] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_10068;
  typedef uint _t_uStack_10064;
  typedef undefined4 _t_uStack_10060;
  typedef uint _t_uStack_1005c;
  typedef undefined4 _t_uStack_10058;
  typedef undefined4 * _t_puStack_10054;
  typedef undefined2 _t_uStack_10050;
  typedef undefined2 _t_uStack_1004e;
  typedef int _t_iStack_1004c;
  typedef int _t_iStack_10048;
  typedef undefined4 _t_uStack_10044;
  typedef undefined4 _t_uStack_10040;
  typedef undefined4 _t_uStack_1003c;
  typedef uint _t_uStack_10038;
  typedef undefined4 _t_uStack_10034;
  typedef undefined2 * _t_puStack_10030;
  typedef uint _t_uStack_1002c;
  typedef void * _t_pvStack_10028;
  typedef int _t_iStack_10024;
  typedef int _t_aiStack_10020[2];
  typedef uint _t_uStack_10018;
  typedef undefined1 _t_auStack_1000c[65532];
  typedef undefined4 _t_uStack_10;
#define uStack_10068 (*(_t_uStack_10068 *)(_fr + 0x0))
#define uStack_10064 (*(_t_uStack_10064 *)(_fr + 0x4))
#define uStack_10060 (*(_t_uStack_10060 *)(_fr + 0x8))
#define uStack_1005c (*(_t_uStack_1005c *)(_fr + 0xc))
#define uStack_10058 (*(_t_uStack_10058 *)(_fr + 0x10))
#define puStack_10054 (*(_t_puStack_10054 *)(_fr + 0x14))
#define uStack_10050 (*(_t_uStack_10050 *)(_fr + 0x18))
#define uStack_1004e (*(_t_uStack_1004e *)(_fr + 0x1a))
#define iStack_1004c (*(_t_iStack_1004c *)(_fr + 0x1c))
#define iStack_10048 (*(_t_iStack_10048 *)(_fr + 0x20))
#define uStack_10044 (*(_t_uStack_10044 *)(_fr + 0x24))
#define uStack_10040 (*(_t_uStack_10040 *)(_fr + 0x28))
#define uStack_1003c (*(_t_uStack_1003c *)(_fr + 0x2c))
#define uStack_10038 (*(_t_uStack_10038 *)(_fr + 0x30))
#define uStack_10034 (*(_t_uStack_10034 *)(_fr + 0x34))
#define puStack_10030 (*(_t_puStack_10030 *)(_fr + 0x38))
#define uStack_1002c (*(_t_uStack_1002c *)(_fr + 0x3c))
#define pvStack_10028 (*(_t_pvStack_10028 *)(_fr + 0x40))
#define iStack_10024 (*(_t_iStack_10024 *)(_fr + 0x44))
#define aiStack_10020 (*(_t_aiStack_10020 *)(_fr + 0x48))
#define uStack_10018 (*(_t_uStack_10018 *)(_fr + 0x50))
#define auStack_1000c (*(_t_auStack_1000c *)(_fr + 0x5c))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x10058))

  /* alloca_probe return-address write dropped (probe replaced by _fr). */
  uStack_10060 = 0;
  puStack_10054 = (undefined4 *)0x0;
  v16_audio_log("00478570 load/CSB");
  v16_audio_log_i("  id", param_1);
  v16_audio_log_i("  DAT_00584af0", DAT_00584af0);
  if (*(int *)((int)this + 0x13b4) == 0) {
    v16_audio_log("00478570 early-out: no IDirectSound");
    uVar2 = 0;
  }
  else {
    pCVar1 = *(LPCSTR *)(*(int *)((int)this + 0xfbc) + param_1 * 4);
    if (pCVar1 == (LPCSTR)0x0) {
      v16_audio_log("00478570 early-out: null name");
      uVar2 = 0;
    }
    else if (*pCVar1 == '\0') {
      v16_audio_log("00478570 early-out: empty name");
      uVar2 = 0;
    }
    else {
      v16_audio_log((char *)pCVar1);
      pvStack_10028 = this;
      FUN_004fe720(aiStack_10020,pCVar1,0,(int)auStack_1000c,0x10000,
                   (-(uint)(DAT_00584af0 != 0) & 0xfffffffd) + 3);
      if (aiStack_10020[0] == 0) {
        v16_audio_log("00478570 early-out: 004fe720 failed");
        FUN_004fe9c0(aiStack_10020);
        uVar2 = 0;
      }
      else {
        uVar6 = 0xc;
        uStack_10064 = uStack_10018;
        if (uStack_10018 < 0xd) {
          uVar3 = uStack_1005c;
        }
        else {
          uVar3 = uStack_10018 + 4;
          uStack_1005c = uVar3;
          do {
            if (uStack_1005c < uVar6) break;
            uStack_10058 = *(undefined4 *)(uVar6 + aiStack_10020[0]);
            if (uStack_1005c < uVar6 + 4) break;
            uVar5 = *(uint *)(uVar6 + 4 + aiStack_10020[0]);
            uVar7 = uVar6 + 8;
            iVar4 = _strncmp((char *)&uStack_10058,&DAT_0055aef8,3);
            if (iVar4 != 0) {
              iVar4 = _strncmp((char *)&uStack_10058,&DAT_0055aef0,4);
              if (iVar4 != 0) goto LAB_004786d3;
              if (uStack_10064 + uVar5 < uVar7) {
                FUN_004fe9c0(aiStack_10020);
                return 0;
              }
              uStack_10068 = uVar5;
              puStack_10054 =
                   (undefined4 *)Ordinal_401(uVar5,s_C__lomse_source_storm_h_00555130,0x3fa,0);
              if (puStack_10054 == (undefined4 *)0x0) {
                FUN_004fe9c0(aiStack_10020);
                return 0;
              }
              puVar8 = (undefined4 *)(uVar7 + aiStack_10020[0]);
              puVar9 = puStack_10054;
              for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                *puVar9 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar9 = puVar9 + 1;
              }
              for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
                puVar8 = (undefined4 *)((int)puVar8 + 1);
                puVar9 = (undefined4 *)((int)puVar9 + 1);
              }
              break;
            }
            if (uStack_10064 + 0x10 < uVar7) break;
            uStack_1002c = CONCAT22((*(ushort *)((uchar *)&uStack_1002c + 2)),
                                    *(undefined2 *)(uVar6 + 10 + aiStack_10020[0]));
            iStack_10024 = *(int *)(uVar6 + 0xc + aiStack_10020[0]);
            uVar3 = (uint)*(ushort *)(uVar6 + 0x16 + aiStack_10020[0]);
LAB_004786d3:
            uVar6 = uVar6 + 8 + uVar5;
          } while (uVar6 < uStack_10064);
        }
        puVar8 = puStack_10054;
        if (puStack_10054 == (undefined4 *)0x0) {
          v16_audio_log("00478570 early-out: no PCM/data chunk");
          FUN_004fe9c0(aiStack_10020);
          uVar2 = 0;
        }
        else {
          uVar6 = (int)((uVar3 & 0xffff) * (uStack_1002c & 0xffff)) >> 3;
          uStack_10044 = CONCAT22((short)uVar3,(short)uVar6);
          iStack_1004c = iStack_10024;
          iStack_10048 = iStack_10024 * (uVar6 & 0xffff);
          uStack_10038 = uStack_10068;
          uStack_10034 = 0;
          puStack_10030 = &uStack_10050;
          (*(undefined4 *)&uStack_10050) = CONCAT22((short)uStack_1002c,1);
          uStack_10040 = 0x14;
          /* v1.7: always upsample 8-bit PCM to signed 16-bit before CSB. */
          if ((uVar3 & 0xffff) == 8) {
            uint v16n;
            uint v16i;
            undefined4 *v16conv;
            uchar *v16src;
            short *v16dst;
            v16n = uStack_10068;
            v16conv = (undefined4 *)Ordinal_401(v16n * 2,s_C__lomse_source_storm_h_00555130,0x3fa,0);
            if (v16conv != (undefined4 *)0x0) {
              v16src = (uchar *)puVar8;
              v16dst = (short *)v16conv;
              for (v16i = 0; v16i < v16n; v16i = v16i + 1) {
                v16dst[v16i] = (short)(((int)v16src[v16i] - 128) << 8);
              }
              Ordinal_403(puVar8,s_C__lomse_source_storm_h_00555130,0x3f6,0);
              puVar8 = v16conv;
              puStack_10054 = v16conv;
              uVar3 = 16;
              uVar6 = (int)((uVar3 & 0xffff) * (uStack_1002c & 0xffff)) >> 3;
              uStack_10044 = CONCAT22((short)uVar3,(short)uVar6);
              iStack_10048 = iStack_10024 * (uVar6 & 0xffff);
              uStack_10038 = v16n * 2;
              uStack_10068 = v16n * 2;
              v16_audio_log("upsample 8-to-16 before CSB");
              v16_audio_log((char *)pCVar1);
            }
            else {
              v16_audio_log("upsample 8-to-16 alloc failed, keeping 8-bit");
            }
          }
          v16_audio_log_i("  rate", iStack_10024);
          v16_audio_log_i("  bits", (int)(uVar3 & 0xffff));
          v16_audio_log_i("  ch", (int)(uStack_1002c & 0xffff));
          v16_audio_log_i("  bytes", (int)uStack_10068);
          /* Prefer music-like non-STATIC 0xE0 with software+global focus. */
          uStack_1003c = 0xe0 | 0x8 | 0x8000;
          iVar4 = ((undefined4 (__stdcall *)(__typeof__(*(int **)((int)pvStack_10028 + 0x13b4)), __typeof__(&uStack_10040), __typeof__(param_2), __typeof__(0)))(**(code **)(**(int **)((int)pvStack_10028 + 0x13b4) + 0xc)))
                            (*(int **)((int)pvStack_10028 + 0x13b4),&uStack_10040,param_2,0);
          v16_audio_log_hr("CreateSoundBuffer E0|SW|GF", iVar4);
          if (iVar4 != 0) {
            uStack_1003c = 0xe0;
            iVar4 = ((undefined4 (__stdcall *)(__typeof__(*(int **)((int)pvStack_10028 + 0x13b4)), __typeof__(&uStack_10040), __typeof__(param_2), __typeof__(0)))(**(code **)(**(int **)((int)pvStack_10028 + 0x13b4) + 0xc)))
                              (*(int **)((int)pvStack_10028 + 0x13b4),&uStack_10040,param_2,0);
            v16_audio_log_hr("CreateSoundBuffer E0", iVar4);
          }
          if (iVar4 != 0) {
            uStack_1003c = 0xe2 | 0x8 | 0x8000;
            iVar4 = ((undefined4 (__stdcall *)(__typeof__(*(int **)((int)pvStack_10028 + 0x13b4)), __typeof__(&uStack_10040), __typeof__(param_2), __typeof__(0)))(**(code **)(**(int **)((int)pvStack_10028 + 0x13b4) + 0xc)))
                              (*(int **)((int)pvStack_10028 + 0x13b4),&uStack_10040,param_2,0);
            v16_audio_log_hr("CreateSoundBuffer E2|SW|GF", iVar4);
          }
          if (iVar4 != 0) {
            uStack_1003c = 0xe2;
            iVar4 = ((undefined4 (__stdcall *)(__typeof__(*(int **)((int)pvStack_10028 + 0x13b4)), __typeof__(&uStack_10040), __typeof__(param_2), __typeof__(0)))(**(code **)(**(int **)((int)pvStack_10028 + 0x13b4) + 0xc)))
                              (*(int **)((int)pvStack_10028 + 0x13b4),&uStack_10040,param_2,0);
            v16_audio_log_hr("CreateSoundBuffer E2", iVar4);
          }
          if (iVar4 != 0) {
            uStack_1003c = 0x80 | 0x8 | 0x8000;
            iVar4 = ((undefined4 (__stdcall *)(__typeof__(*(int **)((int)pvStack_10028 + 0x13b4)), __typeof__(&uStack_10040), __typeof__(param_2), __typeof__(0)))(**(code **)(**(int **)((int)pvStack_10028 + 0x13b4) + 0xc)))
                              (*(int **)((int)pvStack_10028 + 0x13b4),&uStack_10040,param_2,0);
            v16_audio_log_hr("CreateSoundBuffer VOL|SW|GF", iVar4);
          }
          if (iVar4 != 0) {
            v16_audio_log_hr("CreateSoundBuffer failed", iVar4);
            v16_audio_log((char *)pCVar1);
          }
          if (iVar4 == 0) {
            puVar12 = (undefined4 *)0x0;
            puVar11 = &uStack_10068;
            DAT_005832ec = DAT_005832ec + uStack_10038;
            iVar4 = ((undefined4 (__stdcall *)(__typeof__((int *)*param_2), __typeof__(0), __typeof__(uStack_10068), __typeof__(&uStack_10060), __typeof__(puVar11), __typeof__(0), __typeof__(0), __typeof__(0)))(**(code **)(*(int *)*param_2 + 0x2c)))
                      ((int *)*param_2,0,uStack_10068,&uStack_10060,puVar11,0,0,0);
            v16_audio_log_hr("Lock", iVar4);
            /* HAND FIX: Lock() writes ptr1 -> uStack_10060, len1 -> uStack_10068 (Ghidra lost the out-params) */
            puVar12 = (undefined4 *)uStack_10060;
            puVar11 = (uint *)uStack_10068;
            puVar9 = puVar8;
            puVar10 = puVar12;
            for (uVar6 = (uint)puVar11 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar10 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar10 = puVar10 + 1;
            }
            for (uVar6 = (uint)puVar11 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
              puVar9 = (undefined4 *)((int)puVar9 + 1);
              puVar10 = (undefined4 *)((int)puVar10 + 1);
            }
            ((undefined4 (__stdcall *)(__typeof__((int *)*param_2), __typeof__(puVar12), __typeof__(puVar11), __typeof__(0), __typeof__(0)))(**(code **)(*(int *)*param_2 + 0x4c)))((int *)*param_2,puVar12,puVar11,0,0);
            Ordinal_403(puVar8,s_C__lomse_source_storm_h_00555130,0x3f6,0);
            FUN_004fe9c0(aiStack_10020);
            uVar2 = 1;
          }
          else {
            Ordinal_403(puVar8,s_C__lomse_source_storm_h_00555130,0x3eb,0);
            FUN_004fe9c0(aiStack_10020);
            uVar2 = 0;
          }
        }
      }
    }
  }
  return uVar2;
#undef uStack_10068
#undef uStack_10064
#undef uStack_10060
#undef uStack_1005c
#undef uStack_10058
#undef puStack_10054
#undef uStack_10050
#undef uStack_1004e
#undef iStack_1004c
#undef iStack_10048
#undef uStack_10044
#undef uStack_10040
#undef uStack_1003c
#undef uStack_10038
#undef uStack_10034
#undef puStack_10030
#undef uStack_1002c
#undef pvStack_10028
#undef iStack_10024
#undef aiStack_10020
#undef uStack_10018
#undef auStack_1000c
#undef uStack_10
}
