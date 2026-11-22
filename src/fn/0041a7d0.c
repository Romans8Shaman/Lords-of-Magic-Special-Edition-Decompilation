/* Hand C for lomse.exe FUN_0041a7d0 @ 0x0041a7d0 (1632 bytes, __thiscall, ret 4).
 * Written from the original instruction stream (src/asmfn/0041a7d0.c + capstone).
 * Callees that Ghidra labelled unused_reg_1 (edx) + unused_stack_0 do not read edx
 * (difftest v27 skips unused_reg_*); the stack dword is the caller's param_1 (ret 4).
 * x87 is only fld/fcomp/fsub/fcom/fstp of this+0x5a8 vs this+0x59c and DAT_0054d430 (0.2);
 * no _ftol. Indirect call at 0041a897 is vtable[0x1c] thiscall with no stack args. */

#include "lom.h"

#define DAT_0054d430 (*(float *)0x0054d430)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a8078 (*(int *)0x005a8078)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005aeef4 (*(undefined4 *)0x005aeef4)
#define DAT_005af134 (*(int *)0x005af134)

#define FUN_00401100 ((void (__fastcall *)(int *))0x00401100)
#define FUN_00401120 ((void (__fastcall *)(void *))0x00401120)
#define FUN_00401fd0 ((void (__thiscall *)(void *, void *))0x00401fd0)
#define FUN_00411b50 ((void (__thiscall *)(void *, uint))0x00411b50)
#define FUN_00419440 ((uint (__fastcall *)(int))0x00419440)
#define FUN_00419490 ((void (__fastcall *)(void *, undefined4, undefined4))0x00419490)
#define FUN_00419af0 ((undefined4 (__thiscall *)(void *, undefined4, int))0x00419af0)
#define FUN_00419f30 ((undefined4 (__fastcall *)(int *, undefined4, undefined4))0x00419f30)
#define FUN_0041dc10 ((void (__thiscall *)(void *, int))0x0041dc10)
#define FUN_0041dc40 ((void (__fastcall *)(int))0x0041dc40)
#define FUN_0041ebb0 ((undefined4 (__thiscall *)(void *, uint))0x0041ebb0)
#define FUN_0041efa0 ((void (__thiscall *)(void *, uint))0x0041efa0)
#define FUN_00420560 ((undefined4 (__fastcall *)(int))0x00420560)
#define FUN_00420580 ((undefined4 (__fastcall *)(int))0x00420580)
#define FUN_004209e0 ((int (__thiscall *)(void *, int))0x004209e0)
#define FUN_0042dbb0 ((undefined4 (__fastcall *)(int, undefined4, undefined4))0x0042dbb0)
#define FUN_0047d680 ((undefined4 (__stdcall *)(int))0x0047d680)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_0049cb20 ((undefined4 (__thiscall *)(void *, int *, int *, int, uint))0x0049cb20)
#define FUN_0049d8f0 ((uint (__fastcall *)(int))0x0049d8f0)
#define FUN_0049d9a0 ((undefined4 (__fastcall *)(void *))0x0049d9a0)
#define thunk_FUN_0049d9a0 ((undefined4 (__fastcall *)(void *))0x0049d880)
#define FUN_004b02a0 ((undefined4 (__fastcall *)(int *))0x004b02a0)
#define FUN_004b02c0 ((void (__thiscall *)(void *, uint))0x004b02c0)
#define FUN_004b0960 ((undefined4 (__fastcall *)(undefined4 *, undefined4, undefined4))0x004b0960)
#define FUN_004c1c50 ((undefined4 (__fastcall *)(int))0x004c1c50)
#define FUN_004f2470 ((undefined4 (__fastcall *)(int *))0x004f2470)
#define FUN_004f6830 ((undefined4 (__fastcall *)(void *, undefined4, undefined4))0x004f6830)
#define FUN_00506190 ((undefined4 (__thiscall *)(void *))0x00506190)

#define LOM_SELF_0041a7d0 1
undefined4 __thiscall rb_0041a7d0(void *this, undefined4 param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  uint uVar10;
  int iStack_8;
  int iStack_4;

  *(undefined4 *)((int)this + 0x558) = 0xffffffff;
  *(byte *)((int)this + 0x34) = *(byte *)((int)this + 0x34) | 2;
  if ((*(uint *)((int)this + 0x30) & 0x40000) != 0) {
    return 0;
  }
  iVar4 = FUN_00420580((int)this);
  if (iVar4 == 0) {
    *(undefined4 *)((int)this + 0x5d4) = 0;
  }
  else if (0 < *(int *)((int)this + 0x5d4)) {
    iVar4 = FUN_00506190(this);
    if (iVar4 < *(int *)((int)this + 0x5d4)) {
      *(undefined4 *)((int)this + 0x5d4) = 1;
    }
    *(int *)((int)this + 0x5d4) = *(int *)((int)this + 0x5d4) + -1;
  }
  uVar5 = FUN_00419440((int)this);
  if (uVar5 != 0) {
    fVar1 = *(float *)((int)this + 0x5a8);
    fVar2 = *(float *)((int)this + 0x59c);
    /* fcomp; test ah,0x41; jne — continue only when 5a8 > 59c (ordered) */
    if (fVar1 > fVar2) {
      fVar1 = fVar1 - DAT_0054d430;
      *(float *)((int)this + 0x5a8) = fVar1;
      /* fcom; test ah,1; je — clamp when unordered or fVar1 < 59c */
      if (!(fVar1 >= fVar2)) {
        *(undefined4 *)((int)this + 0x5a8) = *(undefined4 *)((int)this + 0x59c);
      }
      (/*IC:0041a897*/(void (__thiscall *)(void *))(**(code **)(*(int *)this + 0x1c)))(this);
    }
    FUN_0042dbb0((int)this + 0x568, 0, param_1);
    return 1;
  }
  if ((~*(uint *)((int)this + 0x30) & 0x100) == 0) {
    FUN_00419490(this, 0, param_1);
    return 0;
  }
  iVar4 = FUN_00420580((int)this);
  if ((((iVar4 != 0) && (*(int *)((int)this + 0xc8) < 1)) && (*(int *)((int)this + 0x544) != 8)) &&
     (*(int *)((int)this + 0x544) != 9)) {
    FUN_0041efa0(this, 8);
    return 1;
  }
  iVar4 = FUN_004209e0(this, *(int *)((int)this + 0x1c));
  if ((DAT_005af134 + *(int *)((int)this + 0x28)) % (iVar4 + 1) != 0) {
    if (((((*(uint *)((int)this + 0x30) & 0x10) == 0) ||
         (((*(uint *)((int)this + 0x30) & 0x1000) != 0 &&
          (iVar4 = FUN_00420560((int)this), iVar4 != 0)))) && (*(int *)((int)this + 0x58) < 1)) &&
       (((*(int *)((int)this + 0x60) < 1 && (*(int *)((int)this + 0x64) < 1)) &&
        (*(int *)((int)this + 0x20) < 1)))) {
      return 0;
    }
    DAT_005aeef4 = 1;
    return 0;
  }
  if (0 < *(int *)((int)this + 0x58)) {
    DAT_005aeef4 = 1;
    if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 3) {
      iVar4 = *(int *)((int)this + 0x58) + -1;
      *(int *)((int)this + 0x58) = iVar4;
      if (iVar4 < 2) {
        if (0 < *(int *)((int)this + 0x5c)) {
          *(undefined4 *)((int)this + 0x58) = 1;
          FUN_00401fd0((void *)((int)this + 0x68), this);
          *(int *)((int)this + 0x5c) = *(int *)((int)this + 0x5c) + -1;
          iVar4 = FUN_004b02a0((int *)((int)this + 0x55c));
          if (iVar4 != 0) {
            FUN_004b0960((int *)((int)this + 0x55c), 0, param_1);
            if (*(void **)((int)this + 0x58c) != (void *)0x0) {
              thunk_FUN_0049d9a0(*(void **)((int)this + 0x58c));
            }
          }
          FUN_0042dbb0((int)this + 0x568, 0, param_1);
          return 1;
        }
        *(undefined4 *)((int)this + 0x58) = 0;
        FUN_00401120(this);
      }
      FUN_004b0960((undefined4 *)((int)this + 0x55c), 0, param_1);
      if (*(void **)((int)this + 0x58c) != (void *)0x0) {
        thunk_FUN_0049d9a0(*(void **)((int)this + 0x58c));
      }
      FUN_0042dbb0((int)this + 0x568, 0, param_1);
      FUN_004f6830(this, 0, param_1);
      return 1;
    }
    *(undefined4 *)((int)this + 0x58) = 0;
  }
  if (0 < *(int *)((int)this + 0x64)) {
    DAT_005aeef4 = 1;
    *(int *)((int)this + 0x64) = *(int *)((int)this + 0x64) + -1;
    FUN_004b0960((undefined4 *)((int)this + 0x55c), 0, param_1);
    pvVar9 = *(void **)((int)this + 0x58c);
    goto LAB_common_tail;
  }
  if (((*(uint *)((int)this + 0x30) & 0x1000) != 0) &&
     (iVar4 = FUN_00420560((int)this), iVar4 != 0)) {
    FUN_004b0960((undefined4 *)((int)this + 0x55c), 0, param_1);
    if (*(void **)((int)this + 0x58c) != (void *)0x0) {
      thunk_FUN_0049d9a0(*(void **)((int)this + 0x58c));
    }
    FUN_0042dbb0((int)this + 0x568, 0, param_1);
    FUN_004f6830(this, 0, param_1);
    return 0;
  }
  if (0 < *(int *)((int)this + 0x60)) {
    DAT_005aeef4 = 1;
    iVar4 = *(int *)((int)this + 0x60) + -1;
    *(int *)((int)this + 0x60) = iVar4;
    if (iVar4 == 0) {
      uVar3 = FUN_004f6830(this, 0, param_1);
      FUN_0041dc10(this, 1);
      *(undefined4 *)((int)this + 0x544) = 2;
      FUN_0041ebb0(this, 2);
      FUN_004f2470((int *)((int)this + 0x84));
      return uVar3;
    }
  }
  if ((0 < *(int *)((int)this + 0x20)) || (0 < *(int *)((int)this + 0x60))) {
    FUN_004b0960((undefined4 *)((int)this + 0x55c), 0, param_1);
    if (*(void **)((int)this + 0x58c) != (void *)0x0) {
      thunk_FUN_0049d9a0(*(void **)((int)this + 0x58c));
    }
    FUN_0042dbb0((int)this + 0x568, 0, param_1);
    if ((*(int *)((int)this + 0x2c) == 0) || (*(int *)((int)this + 0x60) < 1)) {
      uVar3 = FUN_004f6830(this, 0, param_1);
      return uVar3;
    }
    uVar5 = FUN_0049d8f0(*(int *)((int)this + 0x2c));
    iVar4 = *(int *)(*(int *)((int)this + 0x2c) + 0xc);
    iVar7 = FUN_0049cb20(*(void **)((int)this + 0x2c), &iStack_4, &iStack_8, 2, 0xffffffff);
    iVar6 = FUN_0049cb20(*(void **)((int)this + 0x2c), &iStack_4, &iStack_8, 4, 0xffffffff);
    if (iVar4 < (int)(uVar5 - 1)) {
      uVar3 = FUN_004f6830(this, 0, param_1);
    }
    else {
      uVar3 = 0;
    }
    if (1 < *(int *)((int)this + 0x60)) {
      iVar8 = FUN_0049cb20(*(void **)((int)this + 0x2c), &iStack_4, &iStack_8, 2, 0xffffffff);
      iVar4 = FUN_0049cb20(*(void **)((int)this + 0x2c), &iStack_4, &iStack_8, 4, 0xffffffff);
      /* 0041addc if first pair both 0, or second pair not both 0 */
      if ((iVar7 == 0 && iVar6 == 0) || (iVar8 != 0 || iVar4 != 0)) {
        pvVar9 = *(void **)((int)this + 0x2c);
        if (*(int *)((int)pvVar9 + 0xc) == (int)(uVar5 - 1)) {
          uVar10 = ((int)(uVar5 - 2) < 1) - 1U & uVar5 - 2;
          *(uint *)((int)pvVar9 + 0xc) = uVar10 - 1;
          FUN_0049d9a0(pvVar9);
          *(uint *)((int)this + 0x20) = uVar5 - uVar10;
          if (iVar8 == 0 && iVar4 == 0) {
            *(undefined4 *)((int)this + 0x56c) = 0;
          }
        }
      }
      else {
        uVar10 = 0;
        if (0 < (int)uVar5) {
          while ((iVar4 = FUN_0049cb20(*(void **)((int)this + 0x2c), &iStack_4, &iStack_8, 2, uVar10),
                 iVar4 == 0 &&
                 (iVar4 = FUN_0049cb20(*(void **)((int)this + 0x2c), &iStack_4, &iStack_8, 4, uVar10),
                 iVar4 == 0))) {
            uVar10 = uVar10 + 1;
            if ((int)uVar5 <= (int)uVar10) {
              return uVar3;
            }
          }
          pvVar9 = *(void **)((int)this + 0x2c);
          *(uint *)((int)pvVar9 + 0xc) = uVar10 - 1;
          FUN_0049d9a0(pvVar9);
          *(uint *)((int)this + 0x20) = uVar5 - uVar10;
          return uVar3;
        }
      }
    }
    return uVar3;
  }
  if ((*(byte *)((int)this + 0x588) & 2) != 0) {
    *(uint *)((int)this + 0x588) = *(uint *)((int)this + 0x588) & 0xfffffffc;
    FUN_0041dc40((int)this);
  }
  if ((*(byte *)((int)this + 0x30) & 0x10) != 0) {
    iVar4 = *(int *)((int)this + 0x1c);
    iVar7 = *(int *)((int)this + 0x28);
    iVar6 = FUN_00419f30((int *)this, 0, param_1);
    uVar5 = FUN_00482ac0(&DAT_005aa12c, iVar7, 0);
    if (uVar5 == 0) {
      return 1;
    }
    if (iVar6 == 1) {
      if (((iVar4 != *(int *)((int)this + 0x1c)) && (iVar7 = FUN_004c1c50((int)this), iVar7 == 1))
         && (pvVar9 = (void *)FUN_00482ac0(&DAT_005aa12c, *(int *)((int)this + 0x5b4), 0),
            pvVar9 != (void *)0x0)) {
        FUN_00419af0(pvVar9, param_1, iVar4);
      }
      return 1;
    }
    if (((iVar4 != *(int *)((int)this + 0x1c)) && (iVar7 = FUN_004c1c50((int)this), iVar7 == 1))
       && (pvVar9 = (void *)FUN_00482ac0(&DAT_005aa12c, *(int *)((int)this + 0x5b4), 0),
          pvVar9 != (void *)0x0)) {
      FUN_00419af0(pvVar9, param_1, iVar4);
    }
  }
  if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 3) {
    FUN_00401100((int *)this);
  }
  else {
    uVar5 = FUN_0047d680(2);
    FUN_004b02c0((void *)((int)this + 0x55c), uVar5);
    FUN_00411b50(this, 2);
    FUN_0041ebb0(this, 2);
  }
  FUN_004b0960((undefined4 *)((int)this + 0x55c), 0, param_1);
  pvVar9 = *(void **)((int)this + 0x58c);
LAB_common_tail:
  if (pvVar9 != (void *)0x0) {
    thunk_FUN_0049d9a0(pvVar9);
  }
  FUN_0042dbb0((int)this + 0x568, 0, param_1);
  uVar3 = FUN_004f6830(this, 0, param_1);
  return uVar3;
}
