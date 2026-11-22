/* Rebuilt from lomse.exe FUN_00495370 @ 0x00495370 (535 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583648 (*(int *)0x00583648)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FUN_004952c0 ((undefined4 (__thiscall *)(void *, uint, int, int))0x004952c0)
#define FUN_00495590 ((undefined4 (__fastcall *)(int *))0x00495590)
#define FUN_0049b2a0 ((short * (__thiscall *)(void *, undefined4, undefined4))0x0049b2a0)
#define FUN_004a2810 ((undefined4 (__cdecl *)(undefined4 *, int, int *, int *))0x004a2810)
#define FUN_004a28f0 ((undefined4 (__cdecl *)(int, uint, undefined4 *, uint))0x004a28f0)
#define FUN_004a2ae0 ((undefined4 (__cdecl *)(int, byte *, int))0x004a2ae0)
#define FUN_004fe720 ((int * (__thiscall *)(void *, LPCSTR, uint, int, int, int))0x004fe720)
#define FUN_004fe9c0 ((undefined4 (__fastcall *)(int *))0x004fe9c0)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define __alloca_probe ((undefined4 (__cdecl *)(undefined1))0x00539630)
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_00495370 1
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

undefined4 __thiscall rb_00495370(void *this,byte *param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  short *psVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  char *pcVar11;
  uchar _fr[0x4330] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_4328;
  typedef uint _t_uStack_4324;
  typedef undefined4 * _t_apuStack_4320[2];
  typedef byte * _t_pbStack_4318;
  typedef char _t_acStack_430c[768];
  typedef undefined1 _t_auStack_400c[16380];
  typedef undefined4 _t_uStack_10;
#define iStack_4328 (*(_t_iStack_4328 *)(_fr + 0x0))
#define uStack_4324 (*(_t_uStack_4324 *)(_fr + 0x4))
#define apuStack_4320 (*(_t_apuStack_4320 *)(_fr + 0x8))
#define pbStack_4318 (*(_t_pbStack_4318 *)(_fr + 0x10))
#define acStack_430c (*(_t_acStack_430c *)(_fr + 0x1c))
#define auStack_400c (*(_t_auStack_400c *)(_fr + 0x31c))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x4318))

  /* alloca_probe return-address write dropped (probe replaced by _fr). */
  FUN_004fe720(apuStack_4320,(LPCSTR)param_1,0,(int)auStack_400c,0x4000,1);
  if (apuStack_4320[0] == (undefined4 *)0x0) {
    FUN_004fe9c0((int *)apuStack_4320);
    uVar3 = 0;
  }
  else {
    iVar4 = FUN_004a2810(apuStack_4320[0],(int)pbStack_4318,(int *)&uStack_4324,&iStack_4328);
    if (iVar4 == 0) {
      FUN_004fe9c0((int *)apuStack_4320);
      uVar3 = 0;
    }
    else {
      iVar4 = FUN_004952c0(this,uStack_4324,iStack_4328,0);
      if (iVar4 == 0) {
        FUN_004fe9c0((int *)apuStack_4320);
        uVar3 = 0;
      }
      else {
        iVar4 = FUN_004a28f0((int)apuStack_4320[0],(uint)pbStack_4318,*(undefined4 **)this,
                             *(int *)((int)this + 8) * *(int *)((int)this + 0xc));
        if (iVar4 == 0) {
          FUN_00495590(this);
          FUN_004fe9c0((int *)apuStack_4320);
          uVar3 = 0;
        }
        else {
          FUN_004a2ae0((int)apuStack_4320[0],pbStack_4318,(int)acStack_430c);
          iVar4 = 0;
          do {
            acStack_430c[iVar4] = acStack_430c[iVar4] << 2;
            iVar4 = iVar4 + 1;
          } while (iVar4 < 0x300);
          psVar5 = FUN_0049b2a0(&DAT_00584ae8,acStack_430c,param_1);
          *(short **)((int)this + 0x10) = psVar5;
          uVar7 = 0xffffffff;
          pbVar6 = param_1;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            bVar1 = *pbVar6;
            pbVar6 = pbVar6 + 1;
          } while (bVar1 != 0);
          if (*(char **)((int)this + 0x1c) != (char *)0x0) {
            uVar8 = 0xffffffff;
            pcVar11 = *(char **)((int)this + 0x1c);
            do {
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              cVar2 = *pcVar11;
              pcVar11 = pcVar11 + 1;
            } while (cVar2 != '\0');
            DAT_00583648 = DAT_00583648 - (~uVar8 - 1);
            if (*(int *)((int)this + 0x1c) != 0) {
              Ordinal_403(*(int *)((int)this + 0x1c),s_C__lomse_source_storm_h_00555130,0x3f6,0);
            }
          }
          pbVar6 = (byte *)Ordinal_401(~uVar7,s_C__lomse_source_storm_h_00555130,0x3fa,0);
          *(byte **)((int)this + 0x1c) = pbVar6;
          if (pbVar6 != (byte *)0x0) {
            uVar8 = 0xffffffff;
            do {
              pbVar10 = param_1;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pbVar10 = param_1 + 1;
              bVar1 = *param_1;
              param_1 = pbVar10;
            } while (bVar1 != 0);
            uVar8 = ~uVar8;
            pbVar10 = pbVar10 + -uVar8;
            for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pbVar6 = *(undefined4 *)pbVar10;
              pbVar10 = pbVar10 + 4;
              pbVar6 = pbVar6 + 4;
            }
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pbVar6 = *pbVar10;
              pbVar10 = pbVar10 + 1;
              pbVar6 = pbVar6 + 1;
            }
          }
          DAT_00583648 = DAT_00583648 + ~uVar7;
          FUN_004fe9c0((int *)apuStack_4320);
          uVar3 = 1;
        }
      }
    }
  }
  return uVar3;
#undef iStack_4328
#undef uStack_4324
#undef apuStack_4320
#undef pbStack_4318
#undef acStack_430c
#undef auStack_400c
#undef uStack_10
}
