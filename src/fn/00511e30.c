/* Rebuilt from lomse.exe op_toptriangle @ 0x00511e30 (1026 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583648 (*(int *)0x00583648)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_0043da90 ((undefined8 (__thiscall *)(void *, int *))0x0043da90)
#define FUN_004753d0 ((undefined4 (__fastcall *)(int))0x004753d0)
#define FUN_004754c0 ((undefined * (__fastcall *)(int))0x004754c0)
#define FUN_004755a0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x004755a0)
#define FUN_00492760 ((int (__thiscall *)(void *, int))0x00492760)
#define FUN_00495260 ((undefined4 * (__thiscall *)(void *, uint, int))0x00495260)
#define FUN_00495590 ((undefined4 (__fastcall *)(int *))0x00495590)
#define FUN_00495db0 ((undefined4 (__thiscall *)(void *, int *, int, int))0x00495db0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define GetTickCount (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d0e8) /* KERNEL32.DLL!GetTickCount via IAT */
#define s_no_doodad_00573b54 (*(char (*)[])0x00573b54)

#define LOM_SELF_00511e30 1
void __cdecl rb_00511e30(void *param_1)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 *puVar4;
  DWORD DVar5;
  uint *puVar6;
  int iVar7;
  undefined8 uVar8;
  uchar _fr[0xc8] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_bc;
  typedef undefined4 _t_local_b8;
  typedef undefined4 * _t_local_b4;
  typedef DWORD _t_local_b0;
  typedef uint _t_local_ac;
  typedef int _t_local_a8[8];
  typedef uint _t_local_88[17];
  typedef undefined4 _t_local_44[14];
#define local_bc (*(_t_local_bc *)(_fr + 0x4))
#define local_b8 (*(_t_local_b8 *)(_fr + 0x8))
#define local_b4 (*(_t_local_b4 *)(_fr + 0xc))
#define local_b0 (*(_t_local_b0 *)(_fr + 0x10))
#define local_ac (*(_t_local_ac *)(_fr + 0x14))
#define local_a8 (*(_t_local_a8 *)(_fr + 0x18))
#define local_88 (*(_t_local_88 *)(_fr + 0x38))
#define local_44 (*(_t_local_44 *)(_fr + 0x7c))

  FUN_00495260(local_a8,0x20,0x20);
  FUN_0040adb0(param_1,&local_bc);
  iVar1 = FUN_004026a0(&local_bc,local_88 + 2,&local_b0,(undefined4 *)&local_b4);
  if (iVar1 != 0) {
    uVar8 = FUN_0043da90(param_1,(int *)(local_88 + 8));
    if ((int)uVar8 == 0) goto LAB_005121f9;
    uVar8 = FUN_0043da90(param_1,(int *)(local_88 + 7));
    if ((int)uVar8 == 0) goto LAB_005121f9;
    FUN_0040adb0(param_1,&local_bc);
    iVar1 = FUN_004026a0(&local_bc,local_88 + 1,&local_b0,(undefined4 *)&local_b4);
    if (iVar1 != 0) {
      uVar8 = FUN_0043da90(param_1,(int *)(local_88 + 6));
      if ((int)uVar8 == 0) goto LAB_005121f9;
      FUN_0040adb0(param_1,&local_bc);
      iVar1 = FUN_004026a0(&local_bc,local_88 + 5,&local_b0,(undefined4 *)&local_b4);
      if (iVar1 == 0) {
        FUN_00404ab0(param_1,0xe);
        goto LAB_005121f9;
      }
      FUN_0040adb0(param_1,&local_bc);
      iVar1 = FUN_004026a0(&local_bc,local_88,&local_b0,(undefined4 *)&local_b4);
      if (iVar1 != 0) {
        FUN_0040adb0(param_1,&local_bc);
        iVar1 = FUN_004026a0(&local_bc,local_88 + 4,&local_b0,(undefined4 *)&local_b4);
        if (iVar1 == 0) {
          FUN_00404ab0(param_1,0xe);
          goto LAB_005121f9;
        }
        FUN_0040adb0(param_1,&local_bc);
        iVar1 = FUN_004026a0(&local_bc,local_88 + 3,&local_b0,(undefined4 *)&local_b4);
        if (iVar1 == 0) {
          FUN_00404ab0(param_1,0xe);
          goto LAB_005121f9;
        }
        FUN_0040adb0(param_1,&local_bc);
        iVar1 = FUN_004026a0(&local_bc,&local_ac,&local_b0,(undefined4 *)&local_b4);
        if (iVar1 != 0) {
          if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
            iVar1 = *(int *)((int)param_1 + 0x54) + 1;
            *(int *)((int)param_1 + 0x54) = iVar1;
            local_bc = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
            local_b8 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
          }
          else {
            FUN_00404ab0(param_1,6);
            local_bc = 0;
          }
          iVar1 = FUN_004026a0(&local_bc,local_88 + 0xf,&local_b0,(undefined4 *)&local_b4);
          if (iVar1 == 0) {
            FUN_00404ab0(param_1,0xe);
          }
          else {
            iVar1 = *(int *)((int)param_1 + 0x90);
            *(undefined4 *)((int)param_1 + 0x90) = 0;
            *(undefined4 *)((int)param_1 + 0xa4) = 0;
            if (iVar1 == 0) {
              piVar2 = (int *)FUN_00492760(&DAT_005a7b50,local_ac);
              if (piVar2 == (int *)0x0) {
                FUN_004d41c0(param_1,s_no_doodad_00573b54);
              }
              else {
                local_b4 = (undefined4 *)FUN_004754c0(0x584ae8);
                if (local_b4 != (undefined4 *)0x0) {
                  FUN_00495db0(local_a8,piVar2,0,0);
                  local_b0 = GetTickCount();
                  local_88[9] = 0;
                  local_88[10] = 0;
                  local_88[0xb] = 0x1ff0000;
                  local_88[0xc] = 0;
                  local_88[0xd] = 0;
                  local_88[0xe] = 0x3ff0000;
                  puVar6 = local_88;
                  iVar1 = 3;
                  puVar3 = local_88 + 4;
                  do {
                    puVar3[-1] = puVar3[-1] << 0x10;
                    *puVar3 = *puVar3 << 0x10;
                    *puVar6 = *puVar6 << 0x10;
                    puVar6 = puVar6 + 1;
                    iVar1 = iVar1 + -1;
                    puVar3 = puVar3 + 2;
                  } while (iVar1 != 0);
                  puVar6 = local_88;
                  puVar4 = local_44;
                  iVar1 = 0;
                  do {
                    iVar7 = iVar1 + 8;
                    puVar4[-1] = *(undefined4 *)((int)local_88 + iVar1 + 0xc);
                    *puVar4 = *(undefined4 *)((int)local_88 + iVar1 + 0x10);
                    puVar4[1] = *(undefined4 *)((int)local_88 + iVar1 + 0x24);
                    puVar4[2] = *(undefined4 *)((int)local_88 + iVar1 + 0x28);
                    puVar4[3] = *puVar6;
                    puVar6 = puVar6 + 1;
                    puVar4 = puVar4 + 5;
                    iVar1 = iVar7;
                  } while (iVar7 < 0x18);
                  DVar5 = GetTickCount();
                  if (*(int *)((int)param_1 + 0x54) == 0) {
                    *(undefined4 *)((int)param_1 + 0x90) = 3;
                    FUN_004d4550(param_1);
                    *(undefined4 *)((int)param_1 + 0x90) = 0;
                    *(undefined4 *)((int)param_1 + 0xa4) = 0;
                  }
                  else {
                    iVar7 = *(int *)((int)param_1 + 0x54) + -1;
                    *(int *)((int)param_1 + 0x54) = iVar7;
                    iVar1 = *(int *)((int)param_1 + 0x50);
                    *(undefined4 *)(iVar1 + iVar7 * 8) = 1;
                    *(DWORD *)(iVar1 + 4 + iVar7 * 8) = DVar5 - local_b0;
                  }
                  FUN_004755a0(&DAT_00584ae8,local_b4);
                  FUN_004753d0(0x584ae8);
                }
              }
            }
          }
          goto LAB_005121f9;
        }
      }
    }
  }
  *(undefined4 *)((int)param_1 + 0x90) = 0xe;
  FUN_004d4550(param_1);
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
LAB_005121f9:
  DAT_00583648 = DAT_00583648 + -0x20;
  FUN_00495590(local_a8);
  return;
#undef local_bc
#undef local_b8
#undef local_b4
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_88
#undef local_44
}
