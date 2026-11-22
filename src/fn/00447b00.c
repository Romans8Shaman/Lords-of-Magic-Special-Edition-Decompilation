/* Rebuilt from lomse.exe FUN_00447b00 @ 0x00447b00 (2623 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7d84 (*(uint *)0x005a7d84)
#define DAT_005a7d88 (*(int * *)0x005a7d88)
#define DAT_005aa188 (*(uint *)0x005aa188)
#define DAT_005aa18c (*(int * *)0x005aa18c)
#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define DAT_005cd2f4 (*(int *)0x005cd2f4)
#define DAT_005d2f48 (*(uint *)0x005d2f48)
#define DAT_005d2f4c (*(int * *)0x005d2f4c)
#define DAT_005d3340 (*(int *)0x005d3340)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, float *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_0041da00 ((undefined4 (__fastcall *)(int))0x0041da00)
#define FUN_004852e0 ((undefined4 (__stdcall *)(undefined4 *))0x004852e0)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_005228b0 ((int (__thiscall *)(void *, undefined4, undefined4))0x005228b0)
#define FUN_00525f10 ((uint (__fastcall *)(int))0x00525f10)
#define FUN_00526e40 ((undefined4 * (__fastcall *)(undefined4 *))0x00526e40)
#define FUN_00526ea0 ((undefined4 (__fastcall *)(int))0x00526ea0)
#define FUN_00527e90 ((undefined4 (__thiscall *)(void *, int, int *))0x00527e90)
#define FUN_005291a0 ((uint (__fastcall *)(int *))0x005291a0)
#define FUN_00529200 ((undefined4 (__thiscall *)(void *, int, uint))0x00529200)
#define FUN_00529e40 ((undefined4 (__thiscall *)(void *, uint, float, uint *, int *))0x00529e40)
#define FUN_0052b090 ((undefined4 (__thiscall *)(void *, int, int))0x0052b090)
#define FUN_0052b0e0 ((undefined4 (__thiscall *)(void *, int))0x0052b0e0)
#define FUN_0053a090 ((int (__cdecl *)(undefined1 *, ...))0x0053a090)
#define s_Sir__s_00556850 (*(char (*)[])0x00556850)
#define s__s__s_00556858 (*(char (*)[])0x00556858)
#define thunk_FUN_00526ea0 ((undefined4 (__fastcall *)(int))0x00526e90)

#define LOM_SELF_00447b00 1
void __fastcall rb_00447b00(int param_1)

{
  void *pvVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  char *pcVar13;
  undefined4 *puVar14;
  char *pcVar15;
  float fVar16;
  float fVar17;
  uint *puVar18;
  int *piVar19;
  uchar _fr[0x130] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_124;
  typedef int _t_local_120;
  typedef float _t_local_11c;
  typedef uint _t_local_118;
  typedef uint _t_local_114;
  typedef int _t_local_110;
  typedef uint _t_local_10c;
  typedef undefined4 _t_local_108;
  typedef uint _t_local_104;
  typedef int _t_local_100;
  typedef uint _t_local_fc;
  typedef uint _t_local_f8;
  typedef undefined4 _t_local_f4;
  typedef char _t_local_f0[4];
  typedef uint _t_local_ec;
  typedef float _t_local_e8;
  typedef uint _t_local_e4;
  typedef float _t_local_e0;
  typedef uint _t_local_dc;
  typedef uint _t_local_d8[2];
  typedef uint _t_local_d0;
  typedef uint _t_local_cc[2];
  typedef uint _t_local_c4;
  typedef uint _t_local_c0[2];
  typedef uint _t_local_b8;
  typedef uint _t_local_b4[2];
  typedef float _t_local_ac;
  typedef uint _t_local_a8;
  typedef float _t_local_a4;
  typedef float _t_local_a0;
  typedef float _t_local_9c;
  typedef char _t_local_98[32];
  typedef char _t_local_78[30];
  typedef undefined1 _t_local_5a;
  typedef undefined4 _t_local_58[5];
  typedef undefined4 _t_local_44;
  typedef undefined4 _t_local_40;
  typedef undefined4 _t_local_3c;
  typedef int _t_local_38;
#define local_124 (*(_t_local_124 *)(_fr + 0x4))
#define local_120 (*(_t_local_120 *)(_fr + 0x8))
#define local_11c (*(_t_local_11c *)(_fr + 0xc))
#define local_118 (*(_t_local_118 *)(_fr + 0x10))
#define local_114 (*(_t_local_114 *)(_fr + 0x14))
#define local_110 (*(_t_local_110 *)(_fr + 0x18))
#define local_10c (*(_t_local_10c *)(_fr + 0x1c))
#define local_108 (*(_t_local_108 *)(_fr + 0x20))
#define local_104 (*(_t_local_104 *)(_fr + 0x24))
#define local_100 (*(_t_local_100 *)(_fr + 0x28))
#define local_fc (*(_t_local_fc *)(_fr + 0x2c))
#define local_f8 (*(_t_local_f8 *)(_fr + 0x30))
#define local_f4 (*(_t_local_f4 *)(_fr + 0x34))
#define local_f0 (*(_t_local_f0 *)(_fr + 0x38))
#define local_ec (*(_t_local_ec *)(_fr + 0x3c))
#define local_e8 (*(_t_local_e8 *)(_fr + 0x40))
#define local_e4 (*(_t_local_e4 *)(_fr + 0x44))
#define local_e0 (*(_t_local_e0 *)(_fr + 0x48))
#define local_dc (*(_t_local_dc *)(_fr + 0x4c))
#define local_d8 (*(_t_local_d8 *)(_fr + 0x50))
#define local_d0 (*(_t_local_d0 *)(_fr + 0x58))
#define local_cc (*(_t_local_cc *)(_fr + 0x5c))
#define local_c4 (*(_t_local_c4 *)(_fr + 0x64))
#define local_c0 (*(_t_local_c0 *)(_fr + 0x68))
#define local_b8 (*(_t_local_b8 *)(_fr + 0x70))
#define local_b4 (*(_t_local_b4 *)(_fr + 0x74))
#define local_ac (*(_t_local_ac *)(_fr + 0x7c))
#define local_a8 (*(_t_local_a8 *)(_fr + 0x80))
#define local_a4 (*(_t_local_a4 *)(_fr + 0x84))
#define local_a0 (*(_t_local_a0 *)(_fr + 0x88))
#define local_9c (*(_t_local_9c *)(_fr + 0x8c))
#define local_98 (*(_t_local_98 *)(_fr + 0x90))
#define local_78 (*(_t_local_78 *)(_fr + 0xb0))
#define local_5a (*(_t_local_5a *)(_fr + 0xce))
#define local_58 (*(_t_local_58 *)(_fr + 0xd0))
#define local_44 (*(_t_local_44 *)(_fr + 0xe4))
#define local_40 (*(_t_local_40 *)(_fr + 0xe8))
#define local_3c (*(_t_local_3c *)(_fr + 0xec))
#define local_38 (*(_t_local_38 *)(_fr + 0xf0))

  iVar6 = *(int *)(param_1 + 0x48);
  if ((iVar6 != 0) && (local_11c = 0.0, 0 < *(int *)(iVar6 + 0x4c))) {
    do {
      fVar16 = local_11c;
      iVar11 = __BC(int, local_11c) * 0x4c;
      iVar8 = *(int *)(iVar11 + 0xc4 + iVar6);
      if ((iVar8 < 0) || ((DAT_005cd2f0 <= iVar8 || (DAT_005cd2f4 == 0)))) {
        local_110 = 0;
      }
      else {
        local_110 = DAT_005cd2f4 + iVar8 * 1000;
      }
      if ((((local_110 != 0) && (*(int *)(local_110 + 0x1c) == 2)) &&
          (iVar6 = FUN_0052b0e0((void *)(iVar11 + 0xc4 + iVar6),2), iVar6 == 0)) &&
         ((*(byte *)(iVar11 + 0xe8 + *(int *)(param_1 + 0x48)) & 1) == 0)) {
        FUN_00527e90((void *)(iVar11 + *(int *)(param_1 + 0x48) + 0xc4),0x2e,&local_100);
        iVar6 = *(int *)(param_1 + 0x48) + iVar11;
        if (local_100 <= *(int *)(iVar6 + 0xd0)) {
          uVar7 = FUN_005291a0((int *)(iVar6 + 0xc4));
          if (uVar7 != 0) {
            uVar7 = FUN_00525f10(iVar11 + 0xc4 + *(int *)(param_1 + 0x48));
            uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x28);
            pvVar1 = (void *)(iVar11 + 0xc4 + *(int *)(param_1 + 0x48));
            if (uVar7 == 0) {
              iVar6 = FUN_005228b0(pvVar1,uVar4,__BC(undefined4, fVar16));
              if (iVar6 < 10) {
                FUN_0052b090((void *)(iVar11 + 0xc4 + *(int *)(param_1 + 0x48)),2,1);
                piVar19 = &local_120;
                puVar18 = &local_104;
                fVar17 = fVar16;
                uVar7 = FUN_004852e0(*(undefined4 **)(param_1 + 0x48));
                FUN_00529e40((void *)(iVar11 + 0xc4 + *(int *)(param_1 + 0x48)),uVar7,fVar17,puVar18
                             ,piVar19);
                *(int *)(iVar11 + 0xd4 + *(int *)(param_1 + 0x48)) = (local_120 + 5) * 0x100;
                pvVar1 = DAT_005a7b78;
                if (DAT_005a7d84 != 0) {
                  uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x28);
                  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                    FUN_00404ab0(DAT_005a7b78,3);
                  }
                  else {
                    iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                    *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
                    iVar6 = *(int *)((int)pvVar1 + 0x50);
                    *(undefined4 *)(iVar6 + iVar8 * 8) = 1;
                    *(undefined4 *)(iVar6 + 4 + iVar8 * 8) = uVar4;
                  }
                  pvVar1 = DAT_005a7b78;
                  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                    FUN_00404ab0(DAT_005a7b78,3);
                  }
                  else {
                    iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                    *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
                    iVar6 = *(int *)((int)pvVar1 + 0x50);
                    *(undefined4 *)(iVar6 + iVar8 * 8) = 1;
                    *(float *)(iVar6 + 4 + iVar8 * 8) = fVar16;
                  }
                  pvVar1 = DAT_005a7b78;
                  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                    FUN_00404ab0(DAT_005a7b78,3);
                  }
                  else {
                    iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                    *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
                    iVar6 = *(int *)((int)pvVar1 + 0x50);
                    *(undefined4 *)(iVar6 + iVar8 * 8) = 1;
                    *(undefined4 *)(iVar6 + 4 + iVar8 * 8) = 3;
                  }
                  FUN_004d09a0(DAT_005a7b78,DAT_005a7d84,DAT_005a7d88,-2);
                  pvVar1 = DAT_005a7b78;
                  FUN_0040adb0(DAT_005a7b78,local_cc);
                  iVar6 = FUN_004026a0(local_cc,&local_118,&local_a8,&local_e0);
                  goto joined_r0x00447e9e;
                }
              }
            }
            else {
              iVar6 = FUN_005228b0(pvVar1,uVar4,__BC(undefined4, fVar16));
              if (iVar6 < 0xc) {
                FUN_0052b090((void *)(iVar11 + 0xc4 + *(int *)(param_1 + 0x48)),2,1);
                piVar19 = &local_120;
                puVar18 = &local_104;
                fVar17 = fVar16;
                uVar7 = FUN_004852e0(*(undefined4 **)(param_1 + 0x48));
                FUN_00529e40((void *)(iVar11 + 0xc4 + *(int *)(param_1 + 0x48)),uVar7,fVar17,puVar18
                             ,piVar19);
                *(int *)(iVar11 + 0xd4 + *(int *)(param_1 + 0x48)) = (local_120 + 5) * 0x100;
                pvVar1 = DAT_005a7b78;
                if (DAT_005a7d84 != 0) {
                  uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x28);
                  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                    FUN_00404ab0(DAT_005a7b78,3);
                  }
                  else {
                    iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                    *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
                    iVar6 = *(int *)((int)pvVar1 + 0x50);
                    *(undefined4 *)(iVar6 + iVar8 * 8) = 1;
                    *(undefined4 *)(iVar6 + 4 + iVar8 * 8) = uVar4;
                  }
                  pvVar1 = DAT_005a7b78;
                  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                    FUN_00404ab0(DAT_005a7b78,3);
                  }
                  else {
                    iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                    *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
                    iVar6 = *(int *)((int)pvVar1 + 0x50);
                    *(undefined4 *)(iVar6 + iVar8 * 8) = 1;
                    *(float *)(iVar6 + 4 + iVar8 * 8) = fVar16;
                  }
                  pvVar1 = DAT_005a7b78;
                  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                    FUN_00404ab0(DAT_005a7b78,3);
                  }
                  else {
                    iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                    *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
                    iVar6 = *(int *)((int)pvVar1 + 0x50);
                    *(undefined4 *)(iVar6 + iVar8 * 8) = 1;
                    *(undefined4 *)(iVar6 + 4 + iVar8 * 8) = 3;
                  }
                  FUN_004d09a0(DAT_005a7b78,DAT_005a7d84,DAT_005a7d88,-2);
                  pvVar1 = DAT_005a7b78;
                  FUN_0040adb0(DAT_005a7b78,local_d8);
                  iVar6 = FUN_004026a0(local_d8,&local_118,&local_e4,&local_ac);
joined_r0x00447e9e:
                  if (iVar6 == 0) {
                    *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
                    FUN_004d4550(pvVar1);
                    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
                    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
                  }
                }
              }
            }
          }
          if (((*(int *)(local_110 + 0x164) == 2) &&
              (iVar6 = FUN_005228b0((void *)(iVar11 + 0xc4 + *(int *)(param_1 + 0x48)),
                                    *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x28),__BC(undefined4, fVar16)),
              pvVar1 = DAT_005a7b78, iVar6 == 5)) && ((char)DAT_005aa188 != '\0')) {
            uVar7 = 0xffffffff;
            local_124 = 0xffffffff;
            pcVar13 = (char *)(iVar11 + 0xec + *(int *)(param_1 + 0x48));
            do {
              pcVar15 = pcVar13;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar15 = pcVar13 + 1;
              cVar2 = *pcVar13;
              pcVar13 = pcVar15;
            } while (cVar2 != '\0');
            uVar7 = ~uVar7;
            pcVar13 = pcVar15 + -uVar7;
            pcVar15 = local_98;
            for (uVar10 = uVar7 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
              pcVar13 = pcVar13 + 4;
              pcVar15 = pcVar15 + 4;
            }
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar15 = *pcVar13;
              pcVar13 = pcVar13 + 1;
              pcVar15 = pcVar15 + 1;
            }
            sVar3 = *(short *)(param_1 + 0x56);
            if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
              FUN_00404ab0(DAT_005a7b78,3);
            }
            else {
              iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
              *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
              iVar6 = *(int *)((int)pvVar1 + 0x50);
              *(undefined4 *)(iVar6 + iVar8 * 8) = 1;
              *(int *)(iVar6 + 4 + iVar8 * 8) = (int)sVar3;
            }
            pvVar1 = DAT_005a7b78;
            if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
              FUN_00404ab0(DAT_005a7b78,3);
            }
            else {
              iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
              *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
              iVar6 = *(int *)((int)pvVar1 + 0x50);
              *(undefined4 *)(iVar6 + iVar8 * 8) = 1;
              *(undefined4 *)(iVar6 + 4 + iVar8 * 8) = 0;
            }
            pvVar1 = DAT_005a7b78;
            if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
              FUN_00404ab0(DAT_005a7b78,3);
            }
            else {
              iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
              *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
              iVar6 = *(int *)((int)pvVar1 + 0x50);
              *(undefined4 *)(iVar6 + iVar8 * 8) = 1;
              *(undefined4 *)(iVar6 + 4 + iVar8 * 8) = 0;
            }
            pvVar1 = DAT_005a7b78;
            if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
              FUN_00404ab0(DAT_005a7b78,3);
            }
            else {
              iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
              *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
              iVar6 = *(int *)((int)pvVar1 + 0x50);
              *(undefined4 *)(iVar6 + iVar8 * 8) = 1;
              *(undefined4 *)(iVar6 + 4 + iVar8 * 8) = 0;
            }
            FUN_004d05e0(DAT_005a7b78,DAT_005aa188,DAT_005aa18c);
            pvVar1 = DAT_005a7b78;
            FUN_0040adb0(DAT_005a7b78,local_c0);
            iVar6 = FUN_004026a0(local_c0,&local_124,&local_dc,&local_9c);
            if (iVar6 == 0) {
              *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
              FUN_004d4550(pvVar1);
              *(undefined4 *)((int)pvVar1 + 0x90) = 0;
              *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
            }
            else {
              if ((((int)local_124 < 0) || (DAT_005cd2f0 <= (int)local_124)) || (DAT_005cd2f4 == 0))
              {
                iVar6 = 0;
              }
              else {
                iVar6 = DAT_005cd2f4 + local_124 * 1000;
              }
              if (iVar6 != 0) {
                FUN_00526e40(local_58);
                local_38 = DAT_005d3340;
                iVar8 = FUN_00529200(local_58,local_124,
                                     *(uint *)(iVar11 + 0xe8 + *(int *)(param_1 + 0x48)));
                pvVar1 = DAT_005a7b78;
                if (iVar8 != 0) {
                  DAT_005d3340 = DAT_005d3340 + 1;
                  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                    FUN_00404ab0(DAT_005a7b78,3);
                  }
                  else {
                    iVar9 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                    *(int *)((int)DAT_005a7b78 + 0x54) = iVar9;
                    iVar8 = *(int *)((int)pvVar1 + 0x50);
                    *(undefined4 *)(iVar8 + iVar9 * 8) = 1;
                    *(undefined4 *)(iVar8 + 4 + iVar9 * 8) = 6;
                  }
                  pvVar1 = DAT_005a7b78;
                  uVar4 = *(undefined4 *)(iVar6 + 0x14c);
                  uVar5 = *(undefined4 *)(iVar6 + 0x150);
                  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                    FUN_00404ab0(DAT_005a7b78,3);
                  }
                  else {
                    iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                    *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
                    iVar6 = *(int *)((int)pvVar1 + 0x50);
                    *(undefined4 *)(iVar6 + iVar8 * 8) = uVar4;
                    *(undefined4 *)(iVar6 + 4 + iVar8 * 8) = uVar5;
                  }
                  FUN_004d05e0(DAT_005a7b78,DAT_005d2f48,DAT_005d2f4c);
                  pvVar1 = DAT_005a7b78;
                  local_fc = 0;
                  local_114 = 0;
                  FUN_0040adb0(DAT_005a7b78,local_b4);
                  iVar6 = FUN_004026a0(local_b4,&local_114,&local_d0,&local_e8);
                  if (iVar6 == 0) {
                    *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
                    FUN_004d4550(pvVar1);
                    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
                    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
                  }
                  pvVar1 = DAT_005a7b78;
                  FUN_0040adb0(DAT_005a7b78,&local_f8);
                  iVar6 = FUN_004026a0(&local_f8,&local_fc,&local_c4,&local_a0);
                  if (iVar6 == 0) {
                    *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
                    FUN_004d4550(pvVar1);
                    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
                    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
                  }
                  FUN_00526ea0(iVar11 + 0xc4 + *(int *)(param_1 + 0x48));
                  puVar12 = local_58;
                  puVar14 = (undefined4 *)(iVar11 + 0xc4 + *(int *)(param_1 + 0x48));
                  for (iVar6 = 0x13; iVar6 != 0; iVar6 = iVar6 + -1) {
                    *puVar14 = *puVar12;
                    puVar12 = puVar12 + 1;
                    puVar14 = puVar14 + 1;
                  }
                  *(uint *)(iVar11 + 0xd4 + *(int *)(param_1 + 0x48)) = (local_114 + 5) * 0x100;
                  pvVar1 = DAT_005a7b78;
                  local_40 = 0;
                  local_3c = 0;
                  local_44 = 0;
                  if (DAT_005a7d84 != 0) {
                    uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x28);
                    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                      FUN_00404ab0(DAT_005a7b78,3);
                    }
                    else {
                      iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                      *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
                      iVar6 = *(int *)((int)pvVar1 + 0x50);
                      *(undefined4 *)(iVar6 + iVar8 * 8) = 1;
                      *(undefined4 *)(iVar6 + 4 + iVar8 * 8) = uVar4;
                    }
                    pvVar1 = DAT_005a7b78;
                    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                      FUN_00404ab0(DAT_005a7b78,3);
                    }
                    else {
                      iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                      *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
                      iVar6 = *(int *)((int)pvVar1 + 0x50);
                      *(undefined4 *)(iVar6 + iVar8 * 8) = 1;
                      *(float *)(iVar6 + 4 + iVar8 * 8) = local_11c;
                    }
                    pvVar1 = DAT_005a7b78;
                    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                      FUN_00404ab0(DAT_005a7b78,3);
                    }
                    else {
                      iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                      *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
                      iVar6 = *(int *)((int)pvVar1 + 0x50);
                      *(undefined4 *)(iVar6 + iVar8 * 8) = 1;
                      *(undefined4 *)(iVar6 + 4 + iVar8 * 8) = 3;
                    }
                    FUN_004d09a0(DAT_005a7b78,DAT_005a7d84,DAT_005a7d88,-2);
                    pvVar1 = DAT_005a7b78;
                    if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
                      piVar19 = (int *)((int)DAT_005a7b78 + 0x50);
                      iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
                      *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
                      local_10c = *(uint *)(*piVar19 + -8 + iVar6 * 8);
                      local_108 = *(undefined4 *)(*piVar19 + -4 + iVar6 * 8);
                    }
                    else {
                      FUN_00404ab0(DAT_005a7b78,6);
                      local_10c = 0;
                      local_108 = local_f4;
                    }
                    iVar6 = FUN_004026a0(&local_10c,&local_118,&local_b8,&local_a4);
                    if (iVar6 == 0) {
                      FUN_00404ab0(pvVar1,0xe);
                    }
                  }
                  pvVar1 = DAT_005a7b78;
                  uVar7 = 0xffffffff;
                  pcVar13 = local_98;
                  do {
                    if (uVar7 == 0) break;
                    uVar7 = uVar7 - 1;
                    cVar2 = *pcVar13;
                    pcVar13 = pcVar13 + 1;
                  } while (cVar2 != '\0');
                  if (1 < ~uVar7 - 1) {
                    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                      FUN_00404ab0(DAT_005a7b78,3);
                    }
                    else {
                      iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                      *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
                      iVar6 = *(int *)((int)pvVar1 + 0x50);
                      *(undefined4 *)(iVar6 + iVar8 * 8) = 1;
                      *(undefined4 *)(iVar6 + 4 + iVar8 * 8) = 0xffffffff;
                    }
                    pvVar1 = DAT_005a7b78;
                    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                      FUN_00404ab0(DAT_005a7b78,3);
                    }
                    else {
                      iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                      *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
                      iVar6 = *(int *)((int)pvVar1 + 0x50);
                      *(undefined4 *)(iVar6 + iVar8 * 8) = 1;
                      *(undefined4 *)(iVar6 + 4 + iVar8 * 8) = 0xffffffff;
                    }
                    pvVar1 = DAT_005a7b78;
                    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                      FUN_00404ab0(DAT_005a7b78,3);
                    }
                    else {
                      iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                      *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
                      iVar6 = *(int *)((int)pvVar1 + 0x50);
                      *(undefined4 *)(iVar6 + iVar8 * 8) = 1;
                      *(undefined4 *)(iVar6 + 4 + iVar8 * 8) = 0xe;
                    }
                    FUN_004d09a0(DAT_005a7b78,DAT_005a7d84,DAT_005a7d88,-2);
                    pvVar1 = DAT_005a7b78;
                    FUN_0040adb0(DAT_005a7b78,(undefined4 *)local_f0);
                    iVar6 = FUN_0041da00((int)pvVar1);
                    if (iVar6 == 0) {
                      if (local_f0[0] == '\b') {
                        uVar7 = local_ec;
                      }
                      else {
                        FUN_00404ab0(pvVar1,0xe);
                        uVar7 = 0;
                      }
                    }
                    else {
                      uVar7 = 0;
                    }
                    if (uVar7 == 0) {
                      FUN_0053a090(local_78,s_Sir__s_00556850,(uint)local_98);
                    }
                    else {
                      FUN_0053a090(local_78,s__s__s_00556858,uVar7,local_98);
                    }
                    uVar7 = 0xffffffff;
                    local_5a = 0;
                    pcVar13 = local_78;
                    do {
                      pcVar15 = pcVar13;
                      if (uVar7 == 0) break;
                      uVar7 = uVar7 - 1;
                      pcVar15 = pcVar13 + 1;
                      cVar2 = *pcVar13;
                      pcVar13 = pcVar15;
                    } while (cVar2 != '\0');
                    uVar7 = ~uVar7;
                    pcVar13 = pcVar15 + -uVar7;
                    pcVar15 = (char *)(iVar11 + 0xec + *(int *)(param_1 + 0x48));
                    for (uVar10 = uVar7 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                      *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
                      pcVar13 = pcVar13 + 4;
                      pcVar15 = pcVar15 + 4;
                    }
                    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                      *pcVar15 = *pcVar13;
                      pcVar13 = pcVar13 + 1;
                      pcVar15 = pcVar15 + 1;
                    }
                  }
                }
                thunk_FUN_00526ea0((int)local_58);
              }
            }
            FUN_0052b090((void *)(iVar11 + 0xc4 + *(int *)(param_1 + 0x48)),2,1);
            fVar16 = local_11c;
          }
        }
        *(undefined4 *)(iVar11 + 0xd0 + *(int *)(param_1 + 0x48)) = 0;
        ((undefined4 (__thiscall *)(__typeof__(*(int **)(param_1 + 0x48))))(**(code **)(**(int **)(param_1 + 0x48) + 0x2c)))(*(int **)(param_1 + 0x48));
      }
      iVar6 = *(int *)(param_1 + 0x48);
      local_11c = __BC(float, (__BC(int, fVar16) + 1));
    } while (__BC(int, local_11c) < *(int *)(iVar6 + 0x4c));
  }
  return;
#undef local_124
#undef local_120
#undef local_11c
#undef local_118
#undef local_114
#undef local_110
#undef local_10c
#undef local_108
#undef local_104
#undef local_100
#undef local_fc
#undef local_f8
#undef local_f4
#undef local_f0
#undef local_ec
#undef local_e8
#undef local_e4
#undef local_e0
#undef local_dc
#undef local_d8
#undef local_d0
#undef local_cc
#undef local_c4
#undef local_c0
#undef local_b8
#undef local_b4
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_98
#undef local_78
#undef local_5a
#undef local_58
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
}
