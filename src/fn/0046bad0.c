/* Rebuilt from lomse.exe FUN_0046bad0 @ 0x0046bad0 (1249 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7ac8 (*(int *)0x005a7ac8)
#define DAT_005a7acc (*(int *)0x005a7acc)
#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_0047ef30 ((int (__thiscall *)(void *, int, int))0x0047ef30)
#define FUN_0047f0a0 ((undefined4 (__thiscall *)(void *, void *, int, int, int, int, int, int))0x0047f0a0)
#define FUN_004918d0 ((int (__fastcall *)(void *))0x004918d0)
#define FUN_004918f0 ((int (__fastcall *)(void *))0x004918f0)
#define FUN_00491910 ((undefined4 (__thiscall *)(void *, int *, int, int))0x00491910)
#define FUN_00491c20 ((int (__thiscall *)(void *, int))0x00491c20)
#define FUN_00492760 ((int (__thiscall *)(void *, int))0x00492760)
#define FUN_00492de0 ((int (__thiscall *)(void *, int))0x00492de0)
#define FUN_004935c0 ((undefined4 (__thiscall *)(void *, int *, uint, int, int, int))0x004935c0)
#define FUN_00493a00 ((undefined4 (__thiscall *)(void *, int *, int, int))0x00493a00)
#define FUN_00496340 ((undefined4 (__thiscall *)(void *, int *, int, int, byte))0x00496340)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_0046bad0 1
void __thiscall rb_0046bad0(void *this,void *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  void *pvVar2;
  int *piVar3;
  void *this_00;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  uchar _fr[0x40] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_34;
  typedef char * _t_local_30;
  typedef int _t_local_28;
  typedef int _t_local_24;
  typedef int _t_local_1c;
  typedef int _t_local_18;
  typedef char * _t_local_14;
  typedef int _t_local_10;
  typedef int _t_local_c;
  typedef int _t_local_8;
  typedef int _t_local_4;
#define local_34 (*(_t_local_34 *)(_fr + 0x4))
#define local_30 (*(_t_local_30 *)(_fr + 0x8))
#define local_28 (*(_t_local_28 *)(_fr + 0x10))
#define local_24 (*(_t_local_24 *)(_fr + 0x14))
#define local_1c (*(_t_local_1c *)(_fr + 0x1c))
#define local_18 (*(_t_local_18 *)(_fr + 0x20))
#define local_14 (*(_t_local_14 *)(_fr + 0x24))
#define local_10 (*(_t_local_10 *)(_fr + 0x28))
#define local_c (*(_t_local_c *)(_fr + 0x2c))
#define local_8 (*(_t_local_8 *)(_fr + 0x30))
#define local_4 (*(_t_local_4 *)(_fr + 0x34))
  
  *(int *)((int)this + 0x3c) = param_2 + DAT_005a7ac8;
  iVar5 = DAT_005a7acc;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(int *)((int)this + 0x40) = param_3 + iVar5;
  piVar3 = (int *)FUN_00492760(&DAT_005a7b50,*(int *)this);
  if (piVar3 != (int *)0x0) {
    FUN_00496340(param_1,piVar3,param_2,param_3,0);
  }
  this_00 = (void *)FUN_00492de0(&DAT_005a7b50,*(int *)((int)this + 8));
  if (((*(byte *)((int)this + 0x44) & 1) == 0) || (this_00 == (void *)0x0)) {
    local_1c = 0;
  }
  else {
    local_1c = *(int *)((int)this_00 + 8);
  }
  if ((*(int *)((int)this + 4) != 0) && (local_18 = 0, 0 < *(int *)((int)this + 0xc))) {
    local_34 = 0;
    do {
      if (0 < *(int *)(local_34 + 0x28 + *(int *)((int)this + 4))) {
        piVar3 = (int *)FUN_00491c20(&DAT_005a7b50,
                                     *(int *)(local_34 + *(int *)((int)this + 4) + 0x1c));
        if ((piVar3 != (int *)0x0) &&
           (piVar4 = (int *)(*(int *)((int)this + 4) + local_34),
           iVar5 = FUN_00491910(piVar3,&local_10,*piVar4,piVar4[1]), iVar5 != 0)) {
          if (*piVar3 == 0xf) {
            FUN_00493a00((void *)piVar3[1],&local_10,*(int *)(local_34 + *(int *)((int)this + 4)),
                         *(int *)(local_34 + 4 + *(int *)((int)this + 4)));
            local_28 = (local_8 - local_10) + 1;
            local_24 = (local_4 - local_c) + 1;
          }
          else {
            local_28 = FUN_004918d0(piVar3);
            local_24 = FUN_004918f0(piVar3);
          }
          piVar4 = (int *)(local_34 + *(int *)((int)this + 4));
          iVar10 = ((piVar4[2] >> 1) - (local_28 >> 1)) + *piVar4;
          iVar5 = ((piVar4[3] >> 1) - (local_24 + local_1c >> 1)) + piVar4[1];
          if ((*(byte *)(piVar4 + 5) & 8) == 0) {
            iVar7 = 1;
            iVar6 = -1;
          }
          else {
            iVar7 = *(int *)((int)this + 0x50);
            iVar6 = *(int *)((int)this + 0x4c);
          }
          FUN_004935c0(piVar3,param_1,
                       (*(int *)(local_34 + *(int *)((int)this + 4)) - local_10) + iVar10 + param_2,
                       (piVar4[1] - local_c) + iVar5 + param_3,iVar6,iVar7);
          pvVar2 = DAT_005a7b78;
          if (((this_00 != (void *)0x0) && ((char)*(uint *)((int)this + 0x20) == '\x06')) &&
             ((*(uint *)((int)this + 0x20) & 0x100) == 0)) {
            uVar1 = *(undefined4 *)(local_34 + 0x20 + *(int *)((int)this + 4));
            if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
              *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
              FUN_004d4550(pvVar2);
              *(undefined4 *)((int)pvVar2 + 0x90) = 0;
              *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
            }
            else {
              iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
              *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
              iVar7 = *(int *)((int)pvVar2 + 0x50);
              *(undefined4 *)(iVar7 + iVar6 * 8) = 1;
              *(undefined4 *)(iVar7 + 4 + iVar6 * 8) = uVar1;
            }
            pvVar2 = DAT_005a7b78;
            uVar1 = *(undefined4 *)(local_34 + 0x24 + *(int *)((int)this + 4));
            if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
              *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
              FUN_004d4550(pvVar2);
              *(undefined4 *)((int)pvVar2 + 0x90) = 0;
              *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
            }
            else {
              iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
              *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
              iVar7 = *(int *)((int)pvVar2 + 0x50);
              *(undefined4 *)(iVar7 + iVar6 * 8) = 1;
              *(undefined4 *)(iVar7 + 4 + iVar6 * 8) = uVar1;
            }
            pvVar2 = DAT_005a7b78;
            uVar1 = *(undefined4 *)(local_34 + 0x28 + *(int *)((int)this + 4));
            if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
              *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
              FUN_004d4550(pvVar2);
              *(undefined4 *)((int)pvVar2 + 0x90) = 0;
              *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
            }
            else {
              iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
              *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
              iVar7 = *(int *)((int)pvVar2 + 0x50);
              *(undefined4 *)(iVar7 + iVar6 * 8) = 1;
              *(undefined4 *)(iVar7 + 4 + iVar6 * 8) = uVar1;
            }
            FUN_004d05e0(DAT_005a7b78,*(uint *)((int)this + 0x20),*(int **)((int)this + 0x24));
            pvVar2 = DAT_005a7b78;
            if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
              piVar3 = (int *)((int)DAT_005a7b78 + 0x50);
              iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
              *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
              cVar8 = (char)*(undefined4 *)(*piVar3 + -8 + iVar7 * 8);
              local_30 = *(char **)(*piVar3 + -4 + iVar7 * 8);
            }
            else {
              *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
              FUN_004d4550(pvVar2);
              *(undefined4 *)((int)pvVar2 + 0x90) = 0;
              *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
              cVar8 = '\0';
              local_30 = local_14;
            }
            iVar7 = *(int *)((int)pvVar2 + 0x90);
            *(undefined4 *)((int)pvVar2 + 0x90) = 0;
            *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
            if (iVar7 == 0) {
              if (cVar8 != '\b') {
                *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
                FUN_004d4550(pvVar2);
                *(undefined4 *)((int)pvVar2 + 0x90) = 0;
                *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
                local_30 = (char *)0x0;
              }
            }
            else {
              local_30 = (char *)0x0;
            }
            if (local_30 != (char *)0x0) {
              uVar9 = 0xffffffff;
              pcVar11 = local_30;
              do {
                if (uVar9 == 0) break;
                uVar9 = uVar9 - 1;
                cVar8 = *pcVar11;
                pcVar11 = pcVar11 + 1;
              } while (cVar8 != '\0');
              iVar7 = FUN_0047ef30(this_00,(int)local_30,~uVar9 - 1);
              FUN_0047f0a0(this_00,param_1,(int)local_30,(local_28 - iVar7 >> 1) + iVar10 + param_2,
                           local_24 + iVar5 + param_3,~uVar9 - 1,0,-1);
            }
          }
        }
        piVar3 = (int *)FUN_00491c20(&DAT_005a7b50,
                                     *(int *)(local_34 + 0x2c + *(int *)((int)this + 4)));
        if ((piVar3 != (int *)0x0) &&
           (iVar5 = FUN_00491910(piVar3,&local_10,*(int *)(local_34 + *(int *)((int)this + 4)),
                                 *(int *)(local_34 + 4 + *(int *)((int)this + 4))), iVar5 != 0)) {
          if (*piVar3 == 0xf) {
            FUN_00493a00((void *)piVar3[1],&local_10,*(int *)(local_34 + *(int *)((int)this + 4)),
                         *(int *)(local_34 + 4 + *(int *)((int)this + 4)));
            iVar5 = (local_8 - local_10) + 1;
            iVar10 = (local_4 - local_c) + 1;
          }
          else {
            iVar5 = FUN_004918d0(piVar3);
            iVar10 = FUN_004918f0(piVar3);
          }
          piVar4 = (int *)(*(int *)((int)this + 4) + local_34);
          FUN_004935c0(piVar3,param_1,
                       (param_2 + ((piVar4[2] >> 1) - (iVar5 >> 1)) + *piVar4 * 2) - local_10,
                       (param_3 + ((piVar4[3] >> 1) - (iVar10 >> 1)) + piVar4[1] * 2) - local_c,-1,1
                      );
        }
      }
      local_18 = local_18 + 1;
      local_34 = local_34 + 0x30;
    } while (local_18 < *(int *)((int)this + 0xc));
  }
  return;
#undef local_34
#undef local_30
#undef local_28
#undef local_24
#undef local_1c
#undef local_18
#undef local_14
#undef local_10
#undef local_c
#undef local_8
#undef local_4
}
