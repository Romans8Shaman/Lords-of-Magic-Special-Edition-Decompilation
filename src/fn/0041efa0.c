/* Rebuilt from lomse.exe FUN_0041efa0 @ 0x0041efa0 (2079 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00585408 (*(undefined4 *)0x00585408)
#define DAT_00586774 (*(undefined4 *)0x00586774)
#define DAT_005867a4 (*(int *)0x005867a4)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7be4 (*(uint *)0x005a7be4)
#define DAT_005a7be8 (*(int * *)0x005a7be8)
#define DAT_005a7d14 (*(uint *)0x005a7d14)
#define DAT_005a7d18 (*(int * *)0x005a7d18)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define DAT_005aa7d4 (*(int *)0x005aa7d4)
#define DAT_005aadb0 (*(int *)0x005aadb0)
#define DAT_005ae935 (*(undefined1 *)0x005ae935)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005aee6c (*(undefined4 *)0x005aee6c)
#define DAT_005cd328 (*(undefined *)0x005cd328)
#define FUN_00407e80 ((undefined4 (__fastcall *)(void *))0x00407e80)
#define FUN_00411a90 ((undefined4 (__thiscall *)(void *, int))0x00411a90)
#define FUN_00411b50 ((undefined4 (__thiscall *)(void *, uint))0x00411b50)
#define FUN_00419440 ((uint (__fastcall *)(int))0x00419440)
#define FUN_0041ee00 ((int (__thiscall *)(void *, int))0x0041ee00)
#define FUN_00420480 ((undefined4 (__fastcall *)(int))0x00420480)
#define FUN_00420580 ((undefined4 (__fastcall *)(int))0x00420580)
#define FUN_00420620 ((undefined4 (__fastcall *)(int))0x00420620)
#define FUN_004219a0 ((int (__fastcall *)(int))0x004219a0)
#define FUN_0042d620 ((undefined4 (__thiscall *)(void *, uint))0x0042d620)
#define FUN_0042d720 ((undefined4 (__fastcall *)(int))0x0042d720)
#define FUN_0042d750 ((undefined4 (__thiscall *)(void *, int, undefined4, int))0x0042d750)
#define FUN_00431160 ((uint (__fastcall *)(int, undefined4, undefined4))0x00431160)
#define FUN_004321b0 ((undefined4 (__fastcall *)(int))0x004321b0)
#define FUN_00457b00 ((undefined4 (__fastcall *)(void *))0x00457b00)
#define FUN_00478990 ((undefined4 (__fastcall *)(int *))0x00478990)
#define FUN_00478c00 ((undefined4 (__thiscall *)(void *, undefined4))0x00478c00)
#define FUN_0047cbd0 ((undefined4 * (__stdcall *)(void))0x0047cbd0)
#define FUN_0047cc70 ((undefined4 (__thiscall *)(void *, int))0x0047cc70)
#define FUN_0047d680 ((undefined4 (__stdcall *)(int))0x0047d680)
#define FUN_0049cb20 ((undefined4 (__thiscall *)(void *, int *, int *, int, uint))0x0049cb20)
#define FUN_0049d8f0 ((uint (__fastcall *)(int))0x0049d8f0)
#define FUN_0049d9a0 ((undefined4 (__fastcall *)(void *))0x0049d9a0)
#define FUN_0049da80 ((undefined4 (__thiscall *)(void *, uint))0x0049da80)
#define FUN_004a6d70 ((undefined4 (__thiscall *)(void *, int, int))0x004a6d70)
#define FUN_004b02a0 ((undefined4 (__fastcall *)(int *))0x004b02a0)
#define FUN_004b02c0 ((undefined4 (__thiscall *)(void *, uint))0x004b02c0)
#define FUN_004b0400 ((undefined4 (__thiscall *)(void *, int))0x004b0400)
#define FUN_004b0d80 ((undefined4 (__fastcall *)(int))0x004b0d80)
#define FUN_004b0ee0 ((int (__thiscall *)(void *, int))0x004b0ee0)
#define FUN_004b3cb0 ((undefined4 (__thiscall *)(void *, uint))0x004b3cb0)
#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004efe80 ((int (__thiscall *)(void *, int))0x004efe80)
#define FUN_004f5a90 ((undefined4 (__thiscall *)(void *, int))0x004f5a90)
#define FUN_004fbe60 ((undefined4 (__thiscall *)(void *, int, int))0x004fbe60)
#define FUN_005047d0 ((undefined4 (__stdcall *)(undefined4))0x005047d0)
#define FUN_00506140 ((undefined4 (__fastcall *)(int))0x00506140)
#define FUN_00521e00 ((int (__fastcall *)(int *))0x00521e00)
#define FUN_00521f10 ((uint (__fastcall *)(int *))0x00521f10)
#define FUN_00522f00 ((undefined4 (__fastcall *)(void *))0x00522f00)
#define FUN_00522f20 ((int (__fastcall *)(void *))0x00522f20)
#define FUN_00523040 ((int (__fastcall *)(void *))0x00523040)
#define FUN_00523160 ((undefined4 (__fastcall *)(int))0x00523160)
#define FUN_00525f10 ((uint (__fastcall *)(int))0x00525f10)
#define _DAT_00586764 (*(undefined4 *)0x00586764)
#define _DAT_005867a0 (*(undefined4 *)0x005867a0)
#define _DAT_005867a8 (*(undefined4 *)0x005867a8)
#define _DAT_005867b0 (*(undefined4 *)0x005867b0)
#define _DAT_005867b4 (*(undefined4 *)0x005867b4)
#define _DAT_005ae8a4 (*(undefined4 *)0x005ae8a4)
#define _DAT_005ae8a8 (*(undefined4 *)0x005ae8a8)
#define _DAT_005ae8b4 (*(undefined4 *)0x005ae8b4)
#define s_Bystanding_Leader_died_during_co_00555c24 (*(char (*)[])0x00555c24)

#define LOM_SELF_0041efa0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall rb_0041efa0(void *this,uint param_1)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  void *pvVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined *puVar7;
  void *pvVar8;
  int iVar9;
  undefined4 *this_00;
  int *piVar10;
  int iVar11;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_20;
  typedef int _t_local_1c;
  typedef int _t_local_14;
  typedef int _t_local_8;
  typedef int _t_local_4;
#define iStack_20 (*(_t_iStack_20 *)(_fr + 0x0))
#define local_1c (*(_t_local_1c *)(_fr + 0x4))
#define local_14 (*(_t_local_14 *)(_fr + 0xc))
#define local_8 (*(_t_local_8 *)(_fr + 0x18))
#define local_4 (*(_t_local_4 *)(_fr + 0x1c))
  
  iVar11 = -1;
  local_1c = -1;
  bVar1 = false;
  bVar2 = true;
  if (*(int *)((int)this + 0x2c) != 0) {
    iVar11 = *(int *)(*(int *)((int)this + 0x2c) + 4);
  }
  uVar3 = FUN_00419440((int)this);
  if (uVar3 != 0) {
    return;
  }
  if ((param_1 == 6) && (uVar3 = FUN_00521f10((int *)((int)this + 0xc4)), uVar3 != 0)) {
    return;
  }
  if ((~*(uint *)((int)this + 0x30) & 0x100) == 0) {
    return;
  }
  if (*(int *)((int)this + 0x544) == 8) {
    return;
  }
  pvVar4 = (void *)FUN_00521e00((int *)((int)this + *(int *)((int)this + 0x50) * 0x4c + 0xc4));
  *(uint *)((int)this + 0x544) = param_1;
  if (pvVar4 != (void *)0x0) {
    if (((int)param_1 < 0) || (0x19 < (int)param_1)) {
      local_1c = -1;
    }
    else {
      local_1c = *(int *)((int)pvVar4 + param_1 * 4 + 0x290);
    }
  }
  iVar9 = 0;
  if (param_1 == 8) {
    uVar3 = FUN_0041ee00(&DAT_00585408,*(int *)((int)this + 0x28));
    FUN_004b3cb0(&DAT_00585408,uVar3);
    iVar9 = *(int *)((int)this + 0x48);
    if (iVar9 == DAT_005a7d8c) {
      uVar3 = FUN_00431160((int)this,iVar9,0);
      iVar9 = 0;
      if (uVar3 != 0) {
        _DAT_00586764 = 1;
      }
    }
  }
  switch(param_1) {
  case 4:
    FUN_00506140((int)this);
    FUN_0049da80(*(void **)((int)this + 0x2c),param_1);
    if (*(int *)((int)this + 0x2c) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0049d8f0(*(int *)((int)this + 0x2c));
    }
    uVar6 = 0;
    if (0 < (int)uVar3) {
      do {
        iVar11 = FUN_0049cb20(*(void **)((int)this + 0x2c),&local_4,&local_8,1,uVar6);
        if (iVar11 != 0) break;
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)uVar3);
    }
    if ((int)uVar6 < (int)uVar3) {
      uVar3 = uVar6;
      if ((int)uVar6 < 2) {
        uVar3 = 1;
      }
      *(uint *)((int)this + 0x58) = uVar3;
      if (*(int *)((int)this + 0x68) == 0x12) {
        *(int *)((int)this + 0x5c) = (int)((uVar6 + 1) * 0x16) / 10;
      }
      else {
        *(undefined4 *)((int)this + 0x5c) = 0;
      }
      break;
    }
  case 3:
  case 5:
  case 0xe:
    if (*(int *)((int)this + 0x2c) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0049d8f0(*(int *)((int)this + 0x2c));
    }
    *(undefined4 *)((int)this + 0x5c) = 0;
    *(int *)((int)this + 0x58) = ((int)uVar3 >> 1) + 1;
    if (param_1 != 5) {
      FUN_00506140((int)this);
    }
    break;
  case 6:
    iVar11 = FUN_00420620((int)this);
    if (iVar11 == 0) break;
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
    iVar11 = FUN_004219a0((int)this);
    if (iVar11 < 0x4c) {
      if (iVar11 < 0x33) {
        if (iVar11 < 0x1a) {
          if (iVar11 < 1) {
            *(undefined4 *)((int)this + 0x24) = 0x13;
            param_1 = *(uint *)((int)this + 0x24);
            *(uint *)((int)this + 0x544) = param_1;
          }
          else {
            *(undefined4 *)((int)this + 0x24) = 0x12;
            param_1 = *(uint *)((int)this + 0x24);
            *(uint *)((int)this + 0x544) = param_1;
          }
        }
        else {
          *(undefined4 *)((int)this + 0x24) = 0x11;
          param_1 = *(uint *)((int)this + 0x24);
          *(uint *)((int)this + 0x544) = param_1;
        }
      }
      else {
        *(undefined4 *)((int)this + 0x24) = 0x10;
        param_1 = *(uint *)((int)this + 0x24);
        *(uint *)((int)this + 0x544) = param_1;
      }
    }
    else {
      *(undefined4 *)((int)this + 0x24) = 0xf;
      param_1 = *(uint *)((int)this + 0x24);
      *(uint *)((int)this + 0x544) = param_1;
    }
    break;
  case 7:
    uVar5 = FUN_00420480((int)this);
    *(undefined4 *)((int)this + 100) = uVar5;
    iVar9 = FUN_00420620((int)this);
    if (iVar9 != 0) {
      iVar9 = FUN_004219a0((int)this);
      if (iVar9 < 0x4c) {
        if (iVar9 < 0x33) {
          if (iVar9 < 0x1a) {
            if (iVar9 < 1) {
              *(undefined4 *)((int)this + 0x24) = 0x13;
            }
            else {
              *(undefined4 *)((int)this + 0x24) = 0x12;
            }
          }
          else {
            *(undefined4 *)((int)this + 0x24) = 0x11;
          }
        }
        else {
          *(undefined4 *)((int)this + 0x24) = 0x10;
        }
      }
      else {
        *(undefined4 *)((int)this + 0x24) = 0xf;
      }
      param_1 = *(uint *)((int)this + 0x24);
      *(uint *)((int)this + 0x544) = param_1;
    }
    if ((iVar11 != 4) && (0 < *(int *)((int)this + 0x58))) {
      return;
    }
    *(undefined4 *)((int)this + 0x58) = 0;
    break;
  case 8:
    if ((~*(uint *)((int)this + 0x30) & 0x100) != 0) {
      uVar3 = FUN_00431160((int)this,iVar9,0);
      *(uint *)((int)this + 0x30) = *(uint *)((int)this + 0x30) & 0xffffffdf | 0x100;
      *(byte *)((int)this + 0x78) = *(byte *)((int)this + 0x78) | 4;
      FUN_0042d720((int)this + 0x568);
      if ((*(int *)((int)this + 0x48) == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) &&
         (*(int *)((int)this + 0x48) == DAT_005a7d8c)) {
        FUN_004d09a0(DAT_005a7b78,DAT_005a7be4,DAT_005a7be8,0);
      }
      iVar11 = FUN_00420620((int)this);
      if (iVar11 != 0) {
        DAT_005ae935 = 4;
        FUN_00457b00(&DAT_005ae958);
      }
      uVar6 = FUN_00525f10((int)this + *(int *)((int)this + 0x50) * 0x4c + 0xc4);
      if (uVar6 != 0) {
        iVar11 = FUN_00420580((int)this);
        if (iVar11 == 0) {
          _DAT_005ae8b4 = 1;
        }
        else if (*(int *)((int)this + 0x48) == DAT_005aa7d4) {
          _DAT_005ae8a4 = 1;
        }
        else if (*(int *)((int)this + 0x48) == DAT_005aadb0) {
          _DAT_005ae8a8 = 1;
        }
        else {
          FUN_005047d0(s_Bystanding_Leader_died_during_co_00555c24);
        }
      }
      FUN_004a6d70(&DAT_005ae958,(int)this,*(int *)((int)this + 0x1c));
      iVar11 = FUN_00420620((int)this);
      if (iVar11 == 0) {
        *(undefined4 *)((int)this + 0x24) = 9;
      }
      else {
        *(undefined4 *)((int)this + 0x24) = 0x13;
        *(undefined4 *)((int)this + 0x544) = 0x13;
      }
      if (pvVar4 != (void *)0x0) {
        iVar11 = FUN_00522f00(pvVar4);
        if (iVar11 == 0) {
          iVar11 = FUN_004b02a0((int *)((int)this + 0x55c));
          if (iVar11 != 0) {
            this_00 = FUN_0047cbd0();
            FUN_0047cc70(this_00,(int)this);
          }
        }
        else {
          iStack_20 = 0;
          local_14 = 0;
          puVar7 = FUN_004c6fc0();
          pvVar8 = (void *)FUN_004fbe60(puVar7 + 0x1c,0,0);
          while (pvVar8 != (void *)0x0) {
            if (pvVar8 == this) {
              puVar7 = FUN_004c6fc0();
              pvVar8 = (void *)FUN_004fbe60(puVar7 + 0x1c,(int)pvVar8,0);
            }
            else {
              iVar11 = 0;
              if (0 < *(int *)((int)pvVar8 + 0x4c)) {
                piVar10 = (int *)((int)pvVar8 + 0xc4);
                do {
                  if (*piVar10 == *(int *)((int)this + *(int *)((int)this + 0x50) * 0x4c + 0xc4)) {
                    if ((~*(uint *)((int)pvVar8 + 0x30) & 0x100) != 0) {
                      local_14 = local_14 + 1;
                      goto LAB_0041f61d;
                    }
                  }
                  else if ((-1 < *(int *)((int)pvVar4 + 0x4c)) &&
                          (iVar9 = FUN_00521e00(piVar10),
                          *(int *)(iVar9 + 0x4c) == *(int *)((int)pvVar4 + 0x4c))) {
LAB_0041f61d:
                    iStack_20 = iStack_20 + 1;
                  }
                  iVar11 = iVar11 + 1;
                  piVar10 = piVar10 + 0x13;
                } while (iVar11 < *(int *)((int)pvVar8 + 0x4c));
              }
              puVar7 = FUN_004c6fc0();
              pvVar8 = (void *)FUN_004fbe60(puVar7 + 0x1c,(int)pvVar8,0);
            }
          }
          FUN_004b0400((void *)((int)this + 0x55c),-1);
          if (local_14 == 0) {
            FUN_00523160((int)pvVar4);
          }
          iVar11 = FUN_004b0ee0(&DAT_005cd328,*(int *)((int)pvVar4 + 0x4c));
          if ((iStack_20 == 0) && (iVar11 != 0)) {
            FUN_004b0d80(iVar11);
          }
          iVar9 = FUN_00522f20(pvVar4);
          FUN_004f5a90(this,iVar9);
          iVar9 = FUN_00523040(pvVar4);
          FUN_00411a90(this,iVar9);
          pvVar4 = *(void **)((int)this + 0x58c);
          if (pvVar4 != (void *)0x0) {
            if (iVar11 == 0) {
              FUN_0049da80(pvVar4,param_1);
            }
            else {
              FUN_0049da80(pvVar4,3);
            }
          }
        }
      }
      pvVar4 = *(void **)((int)this + 0x2c);
      if (pvVar4 != (void *)0x0) {
        *(undefined4 *)((int)pvVar4 + 0xc) = 0xffffffff;
        FUN_0049d9a0(pvVar4);
      }
      ((undefined4 (__thiscall *)(__typeof__(this), __typeof__(param_1), __typeof__(1)))(**(code **)(*(int *)this + 0x30)))(this,param_1,1);
      uVar6 = FUN_0047d680(param_1);
      FUN_004b02c0((void *)((int)this + 0x55c),uVar6);
      bVar1 = true;
      if (uVar3 != 0) {
        FUN_00407e80(this);
      }
      iVar11 = FUN_00420580((int)this);
      pvVar4 = DAT_005a7b78;
      if (iVar11 != 0) {
        uVar5 = *(undefined4 *)((int)this + 0x48);
        if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
          *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
          FUN_004d4550(pvVar4);
          *(undefined4 *)((int)pvVar4 + 0x90) = 0;
          *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
        }
        else {
          iVar9 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
          *(int *)((int)DAT_005a7b78 + 0x54) = iVar9;
          iVar11 = *(int *)((int)pvVar4 + 0x50);
          *(undefined4 *)(iVar11 + iVar9 * 8) = 1;
          *(undefined4 *)(iVar11 + 4 + iVar9 * 8) = uVar5;
        }
        FUN_004d09a0(DAT_005a7b78,DAT_005a7d14,DAT_005a7d18,-1);
      }
    }
    break;
  default:
    *(undefined4 *)((int)this + 0x58) = 0;
    *(undefined4 *)((int)this + 0x5c) = 0;
    *(undefined4 *)((int)this + 0x60) = 0;
    bVar2 = false;
    break;
  case 10:
    iVar11 = FUN_004efe80(&DAT_005aee6c,*(int *)((int)this + 0x84));
    if ((iVar11 == 0) || (iVar9 = *(int *)(iVar11 + 0x28), iVar9 < 0)) {
      iVar9 = *(int *)((int)pvVar4 + 0x134);
    }
    FUN_0042d750((void *)((int)this + 0x568),iVar9,0,-1);
    FUN_0042d620((void *)((int)this + 0x568),0);
    if (iVar11 != 0) {
      if (-1 < *(int *)(iVar11 + 0x2c)) {
        local_1c = *(int *)(iVar11 + 0x2c);
      }
    }
    goto LAB_0041f35f;
  case 0xb:
    iVar11 = FUN_004efe80(&DAT_005aee6c,*(int *)((int)this + 0x84));
    if ((iVar11 == 0) || (iVar9 = *(int *)(iVar11 + 0x28), iVar9 < 0)) {
      iVar9 = *(int *)((int)pvVar4 + 0x134);
    }
    FUN_0042d750((void *)((int)this + 0x568),iVar9,0,-1);
    FUN_0042d620((void *)((int)this + 0x568),1);
    if (iVar11 != 0) {
      iVar11 = *(int *)(iVar11 + 0x2c);
      if (-1 < iVar11) {
        FUN_00506140((int)this);
        local_1c = iVar11;
        break;
      }
    }
LAB_0041f35f:
    FUN_00506140((int)this);
    break;
  case 0x15:
    *(undefined4 *)((int)this + 0x24) = 0x15;
    param_1 = 0x15;
    *(undefined4 *)((int)this + 0x544) = 0x15;
  }
  _DAT_005867a0 = *(undefined4 *)((int)this + 0x28);
  FUN_00478990(&DAT_00585408);
  if ((((-1 < local_1c) && (param_1 != 0)) && (param_1 != 1)) &&
     (iVar11 = FUN_004321b0(0x584cd4), iVar11 == 0)) {
    _DAT_005867b0 = 0;
    _DAT_005867a8 = DAT_00586774;
    DAT_005867a4 = local_1c;
    _DAT_005867a0 = *(undefined4 *)((int)this + 0x28);
    _DAT_005867b4 = 0;
    FUN_00478c00(&DAT_00585408,local_1c);
  }
  if (!bVar1) {
    if ((bVar2) && (pvVar4 = *(void **)((int)this + 0x2c), pvVar4 != (void *)0x0)) {
      *(undefined4 *)((int)pvVar4 + 0xc) = 0xffffffff;
      FUN_0049d9a0(pvVar4);
    }
    ((undefined4 (__thiscall *)(__typeof__(this), __typeof__(param_1), __typeof__(1)))(**(code **)(*(int *)this + 0x30)))(this,param_1,1);
    uVar3 = FUN_0047d680(param_1);
    FUN_004b02c0((void *)((int)this + 0x55c),uVar3);
    FUN_00411b50(this,param_1);
  }
  return;
#undef iStack_20
#undef local_1c
#undef local_14
#undef local_8
#undef local_4
}
