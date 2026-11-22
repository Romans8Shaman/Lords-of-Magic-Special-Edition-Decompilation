/* Rebuilt from lomse.exe FUN_00416a90 @ 0x00416a90 (3135 bytes, __thiscall(this, x, y), ret 0xc: third stack arg unused). HAND (2026-11-13 g203):
 * per-unit/army map-object draw (cursor/flags/state overlays). Ghidra body with the MSVC EH frame (fs:0, state 0..2 for the
 * local draw-context object at aiStack_2c, handler 00549478) stripped, as gen.py does.
 * Callee conventions (see build/leafspec/00416a90_conv.md): ALL callees are plain __thiscall/__fastcall(ecx=this) with stack
 * args callee-cleaned; the "hidden edx" Ghidra saw is only compiler scratch (edx loaded then pushed/added), NOT an arg.
 * 00416a70/004bc410/004bc430/00420580/00420490/004c1cf0/004c1d30/004219a0 results are tested/used as the FULL eax, so they
 * are declared int-returning (Ghidra's bool + extraout_var split is what made gen.py REJECT this function). */
#include "lom.h"
#define DAT_005aa12c (*(char *)0x005aa12c)
#define DAT_00555870 (*(uint *)0x00555870)
#define DAT_005af194 (*(char *)0x005af194)
#define DAT_005af134 (*(int *)0x005af134)
#define DAT_005a8078 (*(int *)0x005a8078)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(char *)0x005a7d90)
#define DAT_005787d8 ((int *)(*(int *)0x005787d8))
#define DAT_005787e0 (*(int *)0x005787e0)
#define DAT_005787e4 (*(int *)0x005787e4)
#define DAT_005787e8 ((int *)(*(int *)0x005787e8))
#define DAT_005787f0 (*(int *)0x005787f0)
#define DAT_005787f4 (*(int *)0x005787f4)
#define DAT_005787f8 ((int *)(*(int *)0x005787f8))
#define DAT_005787fc ((int *)(*(int *)0x005787fc))
#define DAT_005aa7d4 (*(int *)0x005aa7d4)
#define DAT_005aadb0 (*(int *)0x005aadb0)
#define DAT_00585170 (*(int *)0x00585170)
#define DAT_005844d0 (*(int *)0x005844d0)
#define DAT_005844d4 (*(int *)0x005844d4)
#define DAT_0055d6f0 (*(char *)0x0055d6f0)
#define DAT_00583648 (*(int *)0x00583648)
#define DAT_00584ae8 (*(char *)0x00584ae8)
#define DAT_005a7b50 (*(char *)0x005a7b50)
#define FUN_00420490 ((int (__fastcall *)(int))0x00420490)
#define FUN_004166d0 ((void (__thiscall *)(void *, uint, uint))0x004166d0)
#define FUN_004c1cf0 ((int (__fastcall *)(int))0x004c1cf0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004c1d30 ((int (__fastcall *)(uint))0x004c1d30)
#define FUN_004b09d0 ((void (__thiscall *)(void *, int *, int *))0x004b09d0)
#define FUN_00416a70 ((int (__fastcall *)(int))0x00416a70)
#define FUN_00420580 ((int (__fastcall *)(int))0x00420580)
#define FUN_0042d800 ((void (__thiscall *)(void *, int))0x0042d800)
#define FUN_0042d9f0 ((void (__thiscall *)(void *, void *, uint, uint, int))0x0042d9f0)
#define FUN_0049cd80 ((int (__thiscall *)(void *, uint, uint, int, int, int))0x0049cd80)
#define FUN_004b0560 ((void (__thiscall *)(void *, uint, uint, int, int))0x004b0560)
#define FUN_004b05b0 ((void (__thiscall *)(void *, uint, uint, int, int))0x004b05b0)
#define FUN_0042d910 ((void (__thiscall *)(void *, void *, uint, uint, int))0x0042d910)
#define FUN_004f68b0 ((int (__thiscall *)(void *, uint, uint, int, void *))0x004f68b0)
#define FUN_004bc410 ((int (__fastcall *)(int))0x004bc410)
#define FUN_004bc430 ((int (__fastcall *)(int))0x004bc430)
#define FUN_005260a0 ((void (__thiscall *)(void *, int *))0x005260a0)
#define FUN_005260e0 ((void (__thiscall *)(void *, int *))0x005260e0)
#define FUN_004950c0 ((void * (__thiscall *)(void *, int))0x004950c0)
#define FUN_004219a0 ((int (__fastcall *)(int))0x004219a0)
#define FUN_00430730 ((void (__thiscall *)(void *, void *, int, int))0x00430730)
#define FUN_00430500 ((void (__thiscall *)(void *, int, int, int))0x00430500)
#define FUN_00491c20 ((int (__thiscall *)(void *, int))0x00491c20)
#define FUN_00491910 ((int (__thiscall *)(void *, int *, uint, int))0x00491910)
#define FUN_004935c0 ((int (__thiscall *)(void *, void *, uint, int, int, int))0x004935c0)
#define FUN_00500650 ((void (__thiscall *)(void *, int, int, int, int))0x00500650)
#define FUN_00496880 ((void (__thiscall *)(void *, void *, uint, int, int, int))0x00496880)
#define FUN_00496340 ((void (__thiscall *)(void *, void *, uint, int, int))0x00496340)
#define FUN_00495590 ((void (__fastcall *)(void *))0x00495590)

#define LOM_SELF_00416a90 1

undefined4 __thiscall rb_00416a90(void *this,uint param_1,uint param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined *puStack_44;
  int rect_[4];
#define iStack_3c rect_[0]
#define iStack_38 rect_[1]
#define iStack_34 rect_[2]
#define iStack_30 rect_[3]
  int aiStack_2c [8];
#define uStack_24 aiStack_2c[2]
  
  if ((*(uint *)((int)this + 0x30) & 0x14000400) != 0) {
    *(undefined4 *)((int)this + 0x14) = 1000;
    return 0;
  }
  iVar4 = FUN_00420490((int)this);
  if (iVar4 == 0) {
    *(undefined4 *)((int)this + 0x14) = 1000;
    if ((*(uint *)((int)this + 0x30) & 0x200) == 0) {
      return 0;
    }
    FUN_004166d0(this,param_1,param_2);
    return 0;
  }
  iVar5 = FUN_004c1cf0((int)this);
  if (((iVar5 != 0) &&
      (uVar6 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0x5b0),0), uVar6 != 0)) &&
     (iVar5 = FUN_004c1d30(uVar6), iVar5 != 0)) {
    return 0;
  }
  pvVar7 = (void *)((int)this + 0x55c);
  uVar6 = *(int *)((int)this + 0x590) + param_2;
  FUN_004b09d0(pvVar7,(int *)&param_1,(int *)&param_2);
  *(uint *)((int)this + 0x18) = param_2;
  iVar5 = *(int *)((int)this + 0x48);
  *(uint *)((int)this + 0x14) = param_1;
  *(uint *)((int)this + 0x594) = uVar6;
  if ((iVar5 < 0) || (0xf < iVar5)) {
    puStack_44 = (undefined *)0x0;
  }
  else {
    puStack_44 = &DAT_005af194 + iVar5 * 0x1d84;
  }
  if (((DAT_00555870 & 0xf000) != 0) &&
     ((((DAT_00555870 & 0xf000) == 0xf000 ||
       ((((((DAT_00555870 & 0x1000) == 0 || ((*(byte *)((int)this + 0x30) & 0x20) != 0)) &&
          (((DAT_00555870 & 0x2000) == 0 || ((*(byte *)((int)this + 0x30) & 0x20) == 0)))) &&
         (((DAT_00555870 & 0x4000) == 0 ||
          (bVar3 = FUN_00416a70((int)this), bVar3 != 0)))) &&
        (((DAT_00555870 & 0x8000) == 0 ||
         (bVar3 = FUN_00416a70((int)this), bVar3 == 0)))))) &&
      ((puStack_44 != (undefined *)0x0 && (iVar5 = FUN_00420580((int)this), iVar5 != 0)))))) {
    FUN_0042d800(puStack_44,*(int *)((int)this + 0x28) + DAT_005af134);
  }
  uVar2 = *(undefined4 *)((int)this + 0x38);
  iVar5 = FUN_00420580((int)this);
  if ((((iVar5 != 0) && ((DAT_00555870 & 0xf0000) != 0)) &&
      (((DAT_00555870 & 0xf0000) == 0xf0000 ||
       (((((DAT_00555870 & 0x10000) == 0 || ((*(byte *)((int)this + 0x30) & 0x20) != 0)) &&
         (((DAT_00555870 & 0x20000) == 0 || ((*(byte *)((int)this + 0x30) & 0x20) == 0)))) &&
        ((((DAT_00555870 & 0x40000) == 0 ||
          (bVar3 = FUN_00416a70((int)this), bVar3 != 0)) &&
         (((DAT_00555870 & 0x80000) == 0 ||
          (bVar3 = FUN_00416a70((int)this), bVar3 == 0)))))))))) &&
     (*(int *)((int)this + 0x38) < 0)) {
    *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(puStack_44 + 0x24);
  }
  if ((~*(uint *)((int)this + 0x30) & 0x100) != 0) {
    FUN_0042d9f0((void *)((int)this + 0x568),*(void **)((int)this + 0x2c),param_1,param_2,iVar4);
    if (*(void **)((int)this + 0x58c) != (void *)0x0) {
      FUN_0049cd80(*(void **)((int)this + 0x58c),param_1,uVar6,-1,1,iVar4);
    }
    FUN_004b0560(pvVar7,param_1,param_2,*(int *)((int)this + 0x38),iVar4);
    if ((((DAT_00555870 & 0xf000) != 0) &&
        (((DAT_00555870 & 0xf000) == 0xf000 ||
         ((((((DAT_00555870 & 0x1000) == 0 || ((*(byte *)((int)this + 0x30) & 0x20) != 0)) &&
            (((DAT_00555870 & 0x2000) == 0 || ((*(byte *)((int)this + 0x30) & 0x20) == 0)))) &&
           (((DAT_00555870 & 0x4000) == 0 ||
            (bVar3 = FUN_00416a70((int)this), bVar3 != 0)))) &&
          (((DAT_00555870 & 0x8000) == 0 ||
           (bVar3 = FUN_00416a70((int)this), bVar3 == 0)))))))) &&
       ((puStack_44 != (undefined *)0x0 && (iVar5 = FUN_00420580((int)this), iVar5 != 0)))) {
      FUN_0042d9f0(puStack_44,*(void **)((int)this + 0x2c),param_1,param_2,iVar4);
    }
  }
  if (((&DAT_005a8078)[DAT_005a7d8c * 0x100] != 6) || ((*(byte *)((int)this + 0x30) & 0x20) != 0)) {
    FUN_004166d0(this,param_1,param_2);
  }
  FUN_004f68b0(this,param_1,param_2,iVar4,*(void **)((int)this + 0x598));
  if ((~*(uint *)((int)this + 0x30) & 0x100) != 0) {
    FUN_004b05b0(pvVar7,param_1,param_2,*(int *)((int)this + 0x38),iVar4);
    FUN_0042d910((void *)((int)this + 0x568),*(void **)((int)this + 0x2c),param_1,param_2,iVar4);
    if (((DAT_00555870 & 0xf000) != 0) &&
       ((((DAT_00555870 & 0xf000) == 0xf000 ||
         ((((((DAT_00555870 & 0x1000) == 0 || ((*(byte *)((int)this + 0x30) & 0x20) != 0)) &&
            (((DAT_00555870 & 0x2000) == 0 || ((*(byte *)((int)this + 0x30) & 0x20) == 0)))) &&
           (((DAT_00555870 & 0x4000) == 0 ||
            (bVar3 = FUN_00416a70((int)this), bVar3 != 0)))) &&
          (((DAT_00555870 & 0x8000) == 0 ||
           (bVar3 = FUN_00416a70((int)this), bVar3 == 0)))))) &&
        ((puStack_44 != (undefined *)0x0 && (iVar5 = FUN_00420580((int)this), iVar5 != 0)))))) {
      FUN_0042d910(puStack_44,*(void **)((int)this + 0x2c),param_1,param_2,iVar4);
    }
  }
  *(undefined4 *)((int)this + 0x38) = uVar2;
  if ((~*(uint *)((int)this + 0x30) & 0x100) == 0) {
    return 1;
  }
  iVar4 = *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400);
  iVar5 = FUN_00420580((int)this);
  if (iVar5 != 0) {
    if (((DAT_00555870 & 0xf) == 0) ||
       (((DAT_00555870 & 0xf) != 0xf &&
        (((((DAT_00555870 & 1) != 0 && ((*(byte *)((int)this + 0x30) & 0x20) == 0)) ||
          (((DAT_00555870 & 2) != 0 && ((*(byte *)((int)this + 0x30) & 0x20) != 0)))) ||
         ((((DAT_00555870 & 4) != 0 &&
           (bVar3 = FUN_00416a70((int)this), bVar3 == 0)) ||
          (((DAT_00555870 & 8) != 0 &&
           (bVar3 = FUN_00416a70((int)this), bVar3 != 0)))))))))) {
      if (((DAT_00555870 & 0xf0) == 0) ||
         (((DAT_00555870 & 0xf0) != 0xf0 &&
          (((((DAT_00555870 & 0x10) != 0 && ((*(byte *)((int)this + 0x30) & 0x20) == 0)) ||
            (((DAT_00555870 & 0x20) != 0 && ((*(byte *)((int)this + 0x30) & 0x20) != 0)))) ||
           ((((DAT_00555870 & 0x40) != 0 &&
             (bVar3 = FUN_00416a70((int)this), bVar3 == 0)) ||
            (((DAT_00555870 & 0x80) != 0 &&
             (bVar3 = FUN_00416a70((int)this), bVar3 != 0)))))))))) {
        pvVar7 = (void *)0x0;
      }
      else {
        pvVar7 = (void *)FUN_004bc430((int)puStack_44);
        FUN_005260e0((void *)((int)this + *(int *)((int)this + 0x50) * 0x4c + 0xc4),&iStack_3c);
      }
    }
    else {
      pvVar7 = (void *)FUN_004bc410((int)puStack_44);
      FUN_005260a0((void *)((int)this + *(int *)((int)this + 0x50) * 0x4c + 0xc4),&iStack_3c);
    }
    iVar10 = iStack_38;
    iVar5 = iStack_3c;
    if (((pvVar7 == (void *)0x0) &&
        ((uVar6 = *(uint *)((int)this + 0x30), (uVar6 & 2) == 0 || (DAT_005787d8 == (int *)0x0))))
       && (((uVar6 & 0x80) == 0 || (DAT_005787e8 == (int *)0x0)))) {
      if ((uVar6 & 0x20000000) == 0) {
        return 1;
      }
      if (DAT_005787f8 == (int *)0x0) {
        return 1;
      }
    }
    FUN_004950c0(aiStack_2c,DAT_00585170);
    if (aiStack_2c[0] != 0) {
      uStack_24 = 0x180;
      if (pvVar7 != (void *)0x0) {
        iVar8 = FUN_004219a0((int)this);
        *(int *)((int)pvVar7 + 0x10) = iVar8;
        FUN_00430730(pvVar7,aiStack_2c,iVar5 + param_1,iVar10 + param_2);
        FUN_00430500(pvVar7,iVar5 + param_1,iVar10 + param_2,1);
        if (((-1 < *(char *)((int)this + 0x5d8)) &&
            (*(int *)((int)this + 0x48) == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400))) &&
           (pvVar7 = (void *)FUN_00491c20(&DAT_005a7b50,*(int *)(puStack_44 + 100)),
           pvVar7 != (void *)0x0)) {
          cVar1 = *(char *)((int)this + 0x5d8);
          if ((cVar1 < '\0') || ('\t' < cVar1)) {
            DAT_0055d6f0 = ' ';
          }
          else {
            DAT_0055d6f0 = cVar1 + '0';
          }
          uVar6 = DAT_005844d0 + iVar5 + param_1;
          iVar10 = DAT_005844d4 + iVar10 + param_2;
          iVar5 = FUN_00491910(pvVar7,&iStack_3c,uVar6,iVar10);
          if (iVar5 != 0) {
            FUN_004935c0(pvVar7,aiStack_2c,uVar6,iVar10,-1,1);
            FUN_00500650(&DAT_00584ae8,iStack_3c,iStack_38,iStack_34,iStack_30);
          }
        }
      }
      if (((*(byte *)((int)this + 0x30) & 2) != 0) && (DAT_005787d8 != (int *)0x0)) {
        if (*DAT_005787d8 != 0) {
          if ((*(byte *)(*DAT_005787d8 + 0x14) & 0x10) == 0) {
            FUN_00496340(aiStack_2c,DAT_005787d8,DAT_005787e0 + param_1,DAT_005787e4 + param_2,0);
          }
          else {
            FUN_00496880(aiStack_2c,DAT_005787d8,DAT_005787e0 + param_1,DAT_005787e4 + param_2,0,1);
          }
        }
        FUN_00500650(&DAT_00584ae8,param_1 + DAT_005787e0,param_2 + DAT_005787e4,
                     DAT_005787d8[3] + -1 + param_1 + DAT_005787e0,
                     DAT_005787d8[4] + -1 + param_2 + DAT_005787e4);
      }
      if (((*(byte *)((int)this + 0x30) & 0x80) != 0) && (DAT_005787e8 != (int *)0x0)) {
        if (*DAT_005787e8 != 0) {
          if ((*(byte *)(*DAT_005787e8 + 0x14) & 0x10) == 0) {
            FUN_00496340(aiStack_2c,DAT_005787e8,DAT_005787f0 + param_1,DAT_005787f4 + param_2,0);
          }
          else {
            FUN_00496880(aiStack_2c,DAT_005787e8,DAT_005787f0 + param_1,DAT_005787f4 + param_2,0,1);
          }
        }
        FUN_00500650(&DAT_00584ae8,param_1 + DAT_005787f0,param_2 + DAT_005787f4,
                     DAT_005787e8[3] + -1 + param_1 + DAT_005787f0,
                     DAT_005787e8[4] + -1 + param_2 + DAT_005787f4);
      }
      if (((*(uint *)((int)this + 0x30) & 0x20000000) != 0) && (DAT_005787f8 != (int *)0x0)) {
        iVar5 = DAT_005aa7d4;
        if (*(int *)((int)this + 0x48) == DAT_005aa7d4) {
          iVar5 = DAT_005aadb0;
        }
        if ((*(int *)((int)this + 0x48) == iVar4) &&
           ((*(uint *)((int)this + 0x5cc) & 1 << ((byte)iVar5 & 0x1f)) == 0)) {
          iVar4 = DAT_005787f8[3];
          uVar6 = param_1 - iVar4 / 2;
          iVar5 = DAT_005787f8[4] / 2 + 0x32;
          iVar10 = param_2 - iVar5;
          if (*DAT_005787f8 != 0) {
            if ((*(byte *)(*DAT_005787f8 + 0x14) & 0x10) == 0) {
              FUN_00496340(aiStack_2c,DAT_005787f8,uVar6,iVar10,0);
            }
            else {
              FUN_00496880(aiStack_2c,DAT_005787f8,uVar6,iVar10,0,1);
            }
          }
          iVar4 = param_1 - iVar4 / 2;
          iVar5 = param_2 - iVar5;
          FUN_00500650(&DAT_00584ae8,iVar4,iVar5,DAT_005787f8[3] + -1 + iVar4,
                       DAT_005787f8[4] + -1 + iVar5);
        }
      }
      if (((*(uint *)((int)this + 0x30) & 0x40000000) != 0) && (DAT_005787fc != (int *)0x0)) {
        iVar4 = DAT_005787f8[3];
        iVar10 = DAT_005787f8[4] / 2 + 0x32;
        iVar5 = param_2 - iVar10;
        uVar6 = (param_1 - iVar4) - 8;
        if (*DAT_005787fc != 0) {
          if ((*(byte *)(*DAT_005787fc + 0x14) & 0x10) == 0) {
            FUN_00496340(aiStack_2c,DAT_005787fc,uVar6,iVar5,0);
          }
          else {
            FUN_00496880(aiStack_2c,DAT_005787fc,uVar6,iVar5,0,1);
          }
        }
        iVar10 = param_2 - iVar10;
        iVar4 = (param_1 - iVar4) + -8;
        FUN_00500650(&DAT_00584ae8,iVar4,iVar10,DAT_005787fc[3] + -1 + iVar4,
                     DAT_005787fc[4] + -1 + iVar10);
      }
    }
    goto LAB_004176b0;
  }
  if (((*(uint *)((int)this + 0x30) & 0x20000000) != 0) && (DAT_005787f8 != (int *)0x0)) {
    FUN_004950c0(aiStack_2c,DAT_00585170);
    if (aiStack_2c[0] != 0) {
      uVar9 = 1 << ((byte)iVar4 & 0x1f);
      bVar3 = false;
      uStack_24 = 0x180;
      uVar6 = uVar9 ^ 0xffff;
      if (*(int *)((int)this + 0x48) == iVar4) {
        if ((*(uint *)((int)this + 0x5cc) & uVar6) != uVar6) goto LAB_004174c5;
        if (*(int *)((int)this + 0x48) != iVar4) goto LAB_004174bd;
      }
      else {
LAB_004174bd:
        if ((*(uint *)((int)this + 0x5cc) & uVar9) == 0) {
LAB_004174c5:
          bVar3 = true;
        }
      }
      if (bVar3) {
        iVar4 = DAT_005787f8[3];
        uVar6 = param_1 - iVar4 / 2;
        iVar5 = DAT_005787f8[4] / 2 + 0x19;
        iVar10 = param_2 - iVar5;
        if (*DAT_005787f8 != 0) {
          if ((*(byte *)(*DAT_005787f8 + 0x14) & 0x10) == 0) {
            FUN_00496340(aiStack_2c,DAT_005787f8,uVar6,iVar10,0);
          }
          else {
            FUN_00496880(aiStack_2c,DAT_005787f8,uVar6,iVar10,0,1);
          }
        }
        iVar4 = param_1 - iVar4 / 2;
        iVar5 = param_2 - iVar5;
        FUN_00500650(&DAT_00584ae8,iVar4,iVar5,DAT_005787f8[3] + -1 + iVar4,
                     DAT_005787f8[4] + -1 + iVar5);
      }
    }
    DAT_00583648 = DAT_00583648 + -0x20;
    FUN_00495590(aiStack_2c);
  }
  if ((*(uint *)((int)this + 0x30) & 0x40000000) == 0) {
    return 1;
  }
  if (DAT_005787fc == (int *)0x0) {
    return 1;
  }
  FUN_004950c0(aiStack_2c,DAT_00585170);
  if (aiStack_2c[0] != 0) {
    uStack_24 = 0x180;
    iVar4 = DAT_005787f8[3];
    iVar10 = DAT_005787f8[4] / 2 + 0x19;
    iVar5 = param_2 - iVar10;
    uVar6 = (param_1 - iVar4) - 8;
    if (*DAT_005787fc != 0) {
      if ((*(byte *)(*DAT_005787fc + 0x14) & 0x10) == 0) {
        FUN_00496340(aiStack_2c,DAT_005787fc,uVar6,iVar5,0);
      }
      else {
        FUN_00496880(aiStack_2c,DAT_005787fc,uVar6,iVar5,0,1);
      }
    }
    iVar10 = param_2 - iVar10;
    iVar4 = (param_1 - iVar4) + -8;
    FUN_00500650(&DAT_00584ae8,iVar4,iVar10,DAT_005787fc[3] + -1 + iVar4,
                 DAT_005787fc[4] + -1 + iVar10);
  }
LAB_004176b0:
  DAT_00583648 = DAT_00583648 + -0x20;
  FUN_00495590(aiStack_2c);
  return 1;
}


