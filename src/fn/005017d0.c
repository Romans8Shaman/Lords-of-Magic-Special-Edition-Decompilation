/* Rebuilt from lomse.exe FUN_005017d0 @ 0x005017d0 (4976 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00573418 (*(int *)0x00573418)
#define DAT_0057341c (*(int *)0x0057341c)
#define DAT_005a79e4 (*(char *)0x005a79e4)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define DAT_005a8078 (*(undefined4 *)0x005a8078)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_00411610 ((undefined4 * (__fastcall *)(undefined4 *))0x00411610)
#define FUN_004117f0 ((undefined4 (__thiscall *)(void *, uint))0x004117f0)
#define FUN_00411910 ((undefined4 (__fastcall *)(undefined4 *))0x00411910)
#define FUN_00415170 ((undefined4 (__thiscall *)(void *, undefined4 *, uint))0x00415170)
#define FUN_004154a0 ((int (__fastcall *)(int))0x004154a0)
#define FUN_00415610 ((undefined4 (__thiscall *)(void *, int))0x00415610)
#define FUN_004205e0 ((undefined4 (__fastcall *)(int))0x004205e0)
#define FUN_00420890 ((undefined4 (__thiscall *)(void *, int))0x00420890)
#define FUN_0045c460 ((undefined4 (__thiscall *)(void *, int, int))0x0045c460)
#define FUN_00472740 ((undefined4 (__thiscall *)(void *, uint))0x00472740)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004a6180 ((int (__thiscall *)(void *, int, int))0x004a6180)
#define FUN_004a6e60 ((undefined4 (__thiscall *)(void *, int, int))0x004a6e60)
#define FUN_004c6660 ((undefined4 (__fastcall *)(int *))0x004c6660)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)
#define FUN_00500bf0 ((undefined4 (__thiscall *)(void *, int, int))0x00500bf0)
#define FUN_00500f40 ((undefined4 (__thiscall *)(void *, undefined4, int, int))0x00500f40)
#define FUN_00501200 ((undefined4 (__thiscall *)(void *, undefined4, int, int))0x00501200)
#define FUN_00501520 ((int (__thiscall *)(void *, void *, int))0x00501520)
#define FUN_00502eb0 ((undefined4 (__thiscall *)(void *, int, int, int, undefined4))0x00502eb0)
#define FUN_00503040 ((undefined4 (__thiscall *)(void *, undefined4))0x00503040)
#define FUN_005041a0 ((undefined4 (__thiscall *)(void *, int, int))0x005041a0)
#define FUN_0052c0c0 ((undefined4 (__thiscall *)(void *, int, int, int, int, int))0x0052c0c0)
#define FUN_0052d140 ((undefined4 (__fastcall *)(int))0x0052d140)
#define FUN_0052d190 ((undefined4 (__fastcall *)(int))0x0052d190)
#define FUN_0052d400 ((undefined4 (__thiscall *)(void *, int))0x0052d400)
#define FUN_0052e320 ((undefined4 (__thiscall *)(void *, int))0x0052e320)
#define FUN_0052e390 ((undefined4 (__thiscall *)(void *, int))0x0052e390)
#define FUN_0052e400 ((undefined4 (__thiscall *)(void *, int))0x0052e400)
#define FUN_0052e480 ((undefined4 (__thiscall *)(void *, int))0x0052e480)
#define FUN_0052e500 ((undefined4 (__thiscall *)(void *, int))0x0052e500)
#define FUN_0052e610 ((undefined4 (__thiscall *)(void *, int))0x0052e610)
#define FUN_0052e6d0 ((undefined4 (__thiscall *)(void *, uint))0x0052e6d0)
#define FUN_0052e830 ((undefined4 (__thiscall *)(void *, int, int, int))0x0052e830)
#define FUN_0052e8f0 ((undefined4 (__thiscall *)(void *, int, int, int))0x0052e8f0)
#define FUN_0052eb90 ((undefined4 (__thiscall *)(void *, int))0x0052eb90)
#define FUN_0052ec00 ((undefined4 (__thiscall *)(void *, int))0x0052ec00)
#define FUN_0052ec70 ((undefined4 (__thiscall *)(void *, uint))0x0052ec70)
#define FUN_0052ece0 ((undefined4 (__thiscall *)(void *, undefined2))0x0052ece0)
#define FUN_0052ed30 ((undefined4 (__thiscall *)(void *, undefined2))0x0052ed30)

#define LOM_SELF_005017d0 1
undefined4 __thiscall rb_005017d0(void *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *this_00;
  uint uVar9;
  undefined4 uVar10;
  undefined4 *this_01;
  bool bVar11;
  byte bVar12;
  uchar _fr[0x5f0] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_5e8[375];
#define local_5e8 (*(_t_local_5e8 *)(_fr + 0x0))

  FUN_00411610(local_5e8);
  bVar5 = false;
  if (*(int *)((int)this + 0x2a698) != 0) goto LAB_0050242d;
  iVar7 = *(int *)((int)this + 0x1b8);
  if ((iVar7 == 0) && (param_1 == 0x200)) {
    iVar7 = *(int *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x23590 + (int)this);
    if (iVar7 != 2) {
      if ((iVar7 != 3) || ((param_2 == DAT_00573418 && (param_3 == DAT_0057341c))))
      goto switchD_005023c7_caseD_6;
      DAT_00573418 = param_2;
      DAT_0057341c = param_3;
      iVar7 = FUN_004a6e60((void *)((int)this + 0x29e70),param_2,param_3);
      pvVar2 = (void *)((int)this + 0x25644);
      uVar9 = FUN_00482ac0(pvVar2,iVar7,0);
      if (uVar9 == 0) {
        iVar7 = FUN_0052d140(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this);
        uVar9 = FUN_00482ac0(pvVar2,iVar7,0);
        if (uVar9 != 0) {
          uVar4 = *(uint *)(uVar9 + 0x54);
          iVar8 = FUN_004a6180((void *)((int)this + 0x29e70),param_2,param_3);
          iVar7 = *(int *)(uVar9 + 0x1c);
          if ((uVar4 & 0x100000) == 0) {
            if (((uVar4 & 0x40000) == 0) || ((uVar4 & 0x80000) == 0)) {
              if ((uVar4 & 0x40000) == 0) {
                if ((uVar4 & 0x80000) != 0) {
                  if (*(int *)((int)this + 0x2a5d4) == 0) {
                    FUN_004c6660((int *)((int)this + 0x2a41c));
                  }
                  if ((((-1 < iVar7) && (-1 < iVar8)) && (iVar7 < *(int *)((int)this + 0x2a428))) &&
                     (iVar8 < *(int *)((int)this + 0x2a428))) {
                    uVar9 = (uint)(*(short *)(*(int *)((int)this + 0x2a41c) + 4 + iVar7 * 6) ==
                                  *(short *)(*(int *)((int)this + 0x2a41c) + 4 + iVar8 * 6));
                    goto LAB_00502327;
                  }
                }
              }
              else {
                if (*(int *)((int)this + 0x2a5d4) == 0) {
                  FUN_004c6660((int *)((int)this + 0x2a41c));
                }
                if (((-1 < iVar7) && (-1 < iVar8)) &&
                   ((iVar7 < *(int *)((int)this + 0x2a428) &&
                    (iVar8 < *(int *)((int)this + 0x2a428))))) {
                  uVar9 = (uint)(*(short *)(*(int *)((int)this + 0x2a41c) + 2 + iVar7 * 6) ==
                                *(short *)(*(int *)((int)this + 0x2a41c) + 2 + iVar8 * 6));
                  goto LAB_00502327;
                }
              }
              uVar9 = 0;
            }
            else {
              uVar9 = 1;
            }
          }
          else {
            uVar9 = 1;
          }
LAB_00502327:
          if (uVar9 == 0) {
            FUN_00472740((void *)((int)this + 0x2531c),0x34);
          }
          else {
            FUN_00472740((void *)((int)this + 0x2531c),0x33);
          }
          goto switchD_005023c7_caseD_6;
        }
      }
      else if (*(int *)(uVar9 + 0x48) !=
               *(int *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this)) {
        iVar7 = FUN_00407d50(uVar9);
        if (iVar7 == 0) {
          iVar7 = FUN_0052d140(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this);
          uVar9 = FUN_00482ac0(pvVar2,iVar7,0);
          if ((uVar9 == 0) || (iVar7 = FUN_004205e0(uVar9), iVar7 == 0)) {
            FUN_00472740((void *)((int)this + 0x2531c),1);
          }
          else {
            FUN_00472740((void *)((int)this + 0x2531c),8);
          }
          goto switchD_005023c7_caseD_6;
        }
        iVar7 = FUN_0052d140(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this);
        uVar9 = FUN_00482ac0(pvVar2,iVar7,0);
        goto LAB_00502327;
      }
      FUN_00472740((void *)((int)this + 0x2531c),0x2b);
      goto switchD_005023c7_caseD_6;
    }
    if ((param_2 == DAT_00573418) && (param_3 == DAT_0057341c)) {
      FUN_00411910(local_5e8);
      return 0;
    }
    DAT_00573418 = param_2;
    DAT_0057341c = param_3;
    iVar7 = FUN_004a6e60((void *)((int)this + 0x29e70),param_2,param_3);
    iVar7 = FUN_004f6000(&DAT_005ae974,iVar7);
    bVar12 = 0x2f;
    iVar8 = FUN_0052d140(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this);
    this_00 = FUN_00485080((void *)((int)this + 0x25644),iVar8,bVar12);
    this_01 = (undefined4 *)0x0;
    if (this_00 != (undefined4 *)0x0) {
      uVar9 = FUN_0052d190(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this);
      if (uVar9 == 0) {
        uVar9 = 0xffffffff;
      }
      FUN_00415170(this_00,local_5e8,uVar9);
      this_01 = local_5e8;
      bVar5 = true;
    }
    if (iVar7 == 0) {
      if (this_01 == (undefined4 *)0x0) goto LAB_0050212e;
      iVar7 = FUN_004a6180((void *)((int)this + 0x29e70),param_2,param_3);
      iVar8 = FUN_004154a0((int)this_01);
      if (iVar8 == 0) {
        uVar9 = this_01[0x15];
        if ((uVar9 & 0x100000) == 0x100000) {
          iVar7 = FUN_00420890(this_01,iVar7);
          if (iVar7 == 0) {
            uVar9 = 0x4d;
          }
          else {
            uVar9 = 0x4c;
          }
        }
        else if ((uVar9 & 0x80000) == 0x80000) {
          iVar7 = FUN_00420890(this_01,iVar7);
          if (iVar7 == 0) {
            uVar9 = 0x49;
          }
          else {
            uVar9 = 0x48;
          }
        }
        else {
          iVar8 = this_01[7];
          piVar1 = (int *)((int)this + 0x2a41c);
          if ((uVar9 & 0x100000) == 0) {
            if (((uVar9 & 0x40000) == 0) || ((uVar9 & 0x80000) == 0)) {
              if ((uVar9 & 0x40000) == 0) {
                if ((uVar9 & 0x80000) != 0) {
                  if (*(int *)((int)this + 0x2a5d4) == 0) {
                    FUN_004c6660(piVar1);
                  }
                  if ((((-1 < iVar8) && (-1 < iVar7)) && (iVar8 < *(int *)((int)this + 0x2a428))) &&
                     (iVar7 < *(int *)((int)this + 0x2a428))) {
                    bVar11 = *(short *)(*piVar1 + 4 + iVar8 * 6) ==
                             *(short *)(*piVar1 + 4 + iVar7 * 6);
                    goto LAB_00502122;
                  }
                }
              }
              else {
                if (*(int *)((int)this + 0x2a5d4) == 0) {
                  FUN_004c6660(piVar1);
                }
                if (((-1 < iVar8) && (-1 < iVar7)) &&
                   ((iVar8 < *(int *)((int)this + 0x2a428) &&
                    (iVar7 < *(int *)((int)this + 0x2a428))))) {
                  bVar11 = *(short *)(*piVar1 + 2 + iVar8 * 6) ==
                           *(short *)(*piVar1 + 2 + iVar7 * 6);
                  goto LAB_00502122;
                }
              }
              bVar11 = false;
            }
            else {
              bVar11 = true;
            }
          }
          else {
            bVar11 = true;
          }
LAB_00502122:
          if (bVar11) {
            uVar9 = 0x33;
          }
          else {
            uVar9 = 0x34;
          }
        }
      }
      else {
        uVar9 = FUN_00501520(this,this_01,iVar7);
        if ((int)uVar9 < 0) goto switchD_00501927_caseD_4;
      }
      goto LAB_00502130;
    }
    switch(*(undefined4 *)(iVar7 + 4)) {
    case 0:
      if (this_01 == (undefined4 *)0x0) {
        bVar11 = false;
      }
      else {
        uVar9 = this_01[0x15];
        iVar8 = this_01[7];
        iVar3 = *(int *)(iVar7 + 0x1c);
        if ((uVar9 & 0x100000) == 0) {
          if (((uVar9 & 0x40000) == 0) || ((uVar9 & 0x80000) == 0)) {
            if ((uVar9 & 0x40000) == 0) {
              if ((uVar9 & 0x80000) == 0) {
                bVar11 = false;
              }
              else {
                if (*(int *)((int)this + 0x2a5d4) == 0) {
                  FUN_004c6660((int *)((int)this + 0x2a41c));
                }
                if ((((iVar8 < 0) || (iVar3 < 0)) || (*(int *)((int)this + 0x2a428) <= iVar8)) ||
                   (*(int *)((int)this + 0x2a428) <= iVar3)) goto LAB_00501bf8;
                bVar11 = *(short *)(*(int *)((int)this + 0x2a41c) + 4 + iVar8 * 6) ==
                         *(short *)(*(int *)((int)this + 0x2a41c) + 4 + iVar3 * 6);
              }
            }
            else {
              if (*(int *)((int)this + 0x2a5d4) == 0) {
                FUN_004c6660((int *)((int)this + 0x2a41c));
              }
              if (((iVar8 < 0) || (iVar3 < 0)) ||
                 ((*(int *)((int)this + 0x2a428) <= iVar8 ||
                  (*(int *)((int)this + 0x2a428) <= iVar3)))) {
LAB_00501bf8:
                bVar11 = false;
              }
              else {
                bVar11 = *(short *)(*(int *)((int)this + 0x2a41c) + 2 + iVar8 * 6) ==
                         *(short *)(*(int *)((int)this + 0x2a41c) + 2 + iVar3 * 6);
              }
            }
          }
          else {
            bVar11 = true;
          }
        }
        else {
          bVar11 = true;
        }
      }
      if (this_01 == (undefined4 *)0x0) {
LAB_00501c6c:
        if (*(int *)(iVar7 + 0x48) ==
            *(int *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this)) {
          uVar9 = 0x42;
        }
        else {
          if (this_01 != (undefined4 *)0x0) goto LAB_00501cb0;
          if (*(int *)(iVar7 + 0x48) ==
              *(int *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this))
          goto LAB_0050212e;
          uVar9 = 0x43;
        }
      }
      else {
        if ((*(int *)(iVar7 + 0x48) == this_01[0x12]) && (*(int *)(iVar7 + 0x28) != this_01[10])) {
          iVar8 = FUN_004154a0(iVar7);
          if (iVar8 == 0) {
            iVar7 = FUN_00415610(this_01,iVar7);
            if ((iVar7 == 0) || (!bVar11)) {
              uVar9 = 0x2c;
            }
            else {
              uVar9 = 0x36;
            }
          }
          else {
            iVar7 = FUN_00415610(this_01,iVar7);
            if ((iVar7 == 0) || (!bVar11)) {
              uVar9 = 0x45;
            }
            else {
              uVar9 = 0x44;
            }
          }
          break;
        }
        if (this_01 == (undefined4 *)0x0) goto LAB_00501c6c;
LAB_00501cb0:
        if (*(int *)(iVar7 + 0x48) !=
            *(int *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this))
        goto LAB_00501cc9;
LAB_0050212e:
        uVar9 = 0x2b;
      }
      break;
    case 1:
      if (this_01 != (undefined4 *)0x0) {
        uVar9 = this_01[0x15];
        iVar8 = this_01[7];
        piVar1 = (int *)((int)this + 0x2a41c);
        iVar3 = *(int *)(iVar7 + 0x1c);
        if ((uVar9 & 0x100000) == 0) {
          if (((uVar9 & 0x40000) == 0) || ((uVar9 & 0x80000) == 0)) {
            if ((uVar9 & 0x40000) == 0) {
              if ((uVar9 & 0x80000) != 0) {
                if (*(int *)((int)this + 0x2a5d4) == 0) {
                  FUN_004c6660(piVar1);
                }
                if ((((-1 < iVar8) && (-1 < iVar3)) && (iVar8 < *(int *)((int)this + 0x2a428))) &&
                   (iVar3 < *(int *)((int)this + 0x2a428))) {
                  bVar11 = *(short *)(*piVar1 + 4 + iVar8 * 6) ==
                           *(short *)(*piVar1 + 4 + iVar3 * 6);
                  goto LAB_00501fb6;
                }
              }
            }
            else {
              if (*(int *)((int)this + 0x2a5d4) == 0) {
                FUN_004c6660(piVar1);
              }
              if (((-1 < iVar8) && (-1 < iVar3)) &&
                 ((iVar8 < *(int *)((int)this + 0x2a428) && (iVar3 < *(int *)((int)this + 0x2a428)))
                 )) {
                bVar11 = *(short *)(*piVar1 + 2 + iVar8 * 6) == *(short *)(*piVar1 + 2 + iVar3 * 6);
                goto LAB_00501fb6;
              }
            }
            bVar11 = false;
          }
          else {
            bVar11 = true;
          }
        }
        else {
          bVar11 = true;
        }
LAB_00501fb6:
        if ((-1 < *(int *)(iVar7 + 0x54)) && (bVar11)) {
          uVar9 = 0x40;
          break;
        }
      }
      uVar9 = 0x41;
      break;
    case 2:
      if (this_01 == (undefined4 *)0x0) goto LAB_00501dbd;
      uVar9 = this_01[0x15];
      iVar8 = this_01[7];
      iVar3 = *(int *)(iVar7 + 0x1c);
      if ((uVar9 & 0x100000) == 0) {
        if (((uVar9 & 0x40000) == 0) || ((uVar9 & 0x80000) == 0)) {
          if ((uVar9 & 0x40000) == 0) {
            if ((uVar9 & 0x80000) != 0) {
              if (*(int *)((int)this + 0x2a5d4) == 0) {
                FUN_004c6660((int *)((int)this + 0x2a41c));
              }
              if ((((-1 < iVar8) && (-1 < iVar3)) && (iVar8 < *(int *)((int)this + 0x2a428))) &&
                 (iVar3 < *(int *)((int)this + 0x2a428))) {
                bVar11 = *(short *)(*(int *)((int)this + 0x2a41c) + 4 + iVar8 * 6) ==
                         *(short *)(*(int *)((int)this + 0x2a41c) + 4 + iVar3 * 6);
                goto LAB_00501dbf;
              }
            }
          }
          else {
            if (*(int *)((int)this + 0x2a5d4) == 0) {
              FUN_004c6660((int *)((int)this + 0x2a41c));
            }
            if (((-1 < iVar8) && (-1 < iVar3)) &&
               ((iVar8 < *(int *)((int)this + 0x2a428) && (iVar3 < *(int *)((int)this + 0x2a428)))))
            {
              bVar11 = *(short *)(*(int *)((int)this + 0x2a41c) + 2 + iVar8 * 6) ==
                       *(short *)(*(int *)((int)this + 0x2a41c) + 2 + iVar3 * 6);
              goto LAB_00501dbf;
            }
          }
LAB_00501dbd:
          bVar11 = false;
        }
        else {
          bVar11 = true;
        }
      }
      else {
        bVar11 = true;
      }
LAB_00501dbf:
      if (this_01 != (undefined4 *)0x0) {
        iVar7 = *(int *)(iVar7 + 0x48);
LAB_00501ec2:
        if (((iVar7 == 0) || (iVar7 = FUN_00415610(this_01,iVar7), iVar7 != 0)) && (bVar11)) {
          uVar9 = 0x38;
          break;
        }
      }
      goto LAB_00501edd;
    case 3:
      if (this_01 == (undefined4 *)0x0) goto LAB_00501eb5;
      uVar9 = this_01[0x15];
      iVar8 = this_01[7];
      iVar3 = *(int *)(iVar7 + 0x1c);
      if ((uVar9 & 0x100000) == 0) {
        if (((uVar9 & 0x40000) == 0) || ((uVar9 & 0x80000) == 0)) {
          if ((uVar9 & 0x40000) == 0) {
            if ((uVar9 & 0x80000) != 0) {
              if (*(int *)((int)this + 0x2a5d4) == 0) {
                FUN_004c6660((int *)((int)this + 0x2a41c));
              }
              if ((((-1 < iVar8) && (-1 < iVar3)) && (iVar8 < *(int *)((int)this + 0x2a428))) &&
                 (iVar3 < *(int *)((int)this + 0x2a428))) {
                bVar11 = *(short *)(*(int *)((int)this + 0x2a41c) + 4 + iVar8 * 6) ==
                         *(short *)(*(int *)((int)this + 0x2a41c) + 4 + iVar3 * 6);
                goto LAB_00501eb7;
              }
            }
          }
          else {
            if (*(int *)((int)this + 0x2a5d4) == 0) {
              FUN_004c6660((int *)((int)this + 0x2a41c));
            }
            if (((-1 < iVar8) && (-1 < iVar3)) &&
               ((iVar8 < *(int *)((int)this + 0x2a428) && (iVar3 < *(int *)((int)this + 0x2a428)))))
            {
              bVar11 = *(short *)(*(int *)((int)this + 0x2a41c) + 2 + iVar8 * 6) ==
                       *(short *)(*(int *)((int)this + 0x2a41c) + 2 + iVar3 * 6);
              goto LAB_00501eb7;
            }
          }
LAB_00501eb5:
          bVar11 = false;
        }
        else {
          bVar11 = true;
        }
      }
      else {
        bVar11 = true;
      }
LAB_00501eb7:
      if (this_01 != (undefined4 *)0x0) {
        iVar7 = *(int *)(iVar7 + 0x44);
        goto LAB_00501ec2;
      }
LAB_00501edd:
      uVar9 = 0x39;
      break;
    default:
      goto switchD_00501927_caseD_4;
    case 7:
      uVar9 = FUN_00482ac0(&DAT_005aa12c,*(int *)(iVar7 + 0x44),0);
      if ((this_01 == (undefined4 *)0x0) || (uVar9 == 0)) {
LAB_00501a3e:
        bVar11 = false;
      }
      else {
        uVar4 = this_01[0x15];
        iVar7 = this_01[7];
        iVar8 = *(int *)(uVar9 + 0x1c);
        if ((uVar4 & 0x100000) == 0) {
          if (((uVar4 & 0x40000) == 0) || ((uVar4 & 0x80000) == 0)) {
            if ((uVar4 & 0x40000) == 0) {
              if ((uVar4 & 0x80000) == 0) goto LAB_00501a3e;
              if (*(int *)((int)this + 0x2a5d4) == 0) {
                FUN_004c6660((int *)((int)this + 0x2a41c));
              }
              if ((((iVar7 < 0) || (iVar8 < 0)) || (*(int *)((int)this + 0x2a428) <= iVar7)) ||
                 (*(int *)((int)this + 0x2a428) <= iVar8)) goto LAB_00501a38;
              bVar11 = *(short *)(*(int *)((int)this + 0x2a41c) + 4 + iVar7 * 6) ==
                       *(short *)(*(int *)((int)this + 0x2a41c) + 4 + iVar8 * 6);
            }
            else {
              if (*(int *)((int)this + 0x2a5d4) == 0) {
                FUN_004c6660((int *)((int)this + 0x2a41c));
              }
              if (((iVar7 < 0) || (iVar8 < 0)) ||
                 ((*(int *)((int)this + 0x2a428) <= iVar7 ||
                  (*(int *)((int)this + 0x2a428) <= iVar8)))) {
LAB_00501a38:
                bVar11 = false;
              }
              else {
                bVar11 = *(short *)(*(int *)((int)this + 0x2a41c) + 2 + iVar7 * 6) ==
                         *(short *)(*(int *)((int)this + 0x2a41c) + 2 + iVar8 * 6);
              }
            }
          }
          else {
            bVar11 = true;
          }
        }
        else {
          bVar11 = true;
        }
      }
      if (this_01 == (undefined4 *)0x0) {
LAB_00501aac:
        if (this_01 != (undefined4 *)0x0) goto LAB_0050212e;
        if ((uVar9 == 0) ||
           (*(int *)(uVar9 + 0x48) ==
            *(int *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this))) {
          if ((uVar9 == 0) ||
             (*(int *)(uVar9 + 0x48) !=
              *(int *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this)))
          goto LAB_0050212e;
          uVar9 = 0x42;
        }
        else {
          uVar9 = 0x43;
        }
      }
      else {
        if (((uVar9 != 0) && (*(int *)(uVar9 + 0x48) == this_01[0x12])) &&
           ((*(int *)(uVar9 + 0x28) != this_01[10] &&
            (iVar7 = FUN_00415610(this_01,uVar9), iVar7 != 0)))) {
          if (bVar11) {
            uVar9 = 0x36;
          }
          else {
            uVar9 = 0x37;
          }
          break;
        }
        if (((this_01 == (undefined4 *)0x0) || (uVar9 == 0)) ||
           (*(int *)(uVar9 + 0x48) ==
            *(int *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this)))
        goto LAB_00501aac;
LAB_00501cc9:
        if (bVar11) {
          uVar9 = 0x3e;
        }
        else {
          uVar9 = 0x3f;
        }
      }
    }
LAB_00502130:
    FUN_00472740((void *)((int)this + 0x2531c),uVar9);
switchD_00501927_caseD_4:
    if (bVar5) {
      FUN_004117f0(local_5e8,0);
    }
    goto switchD_005023c7_caseD_6;
  }
  if (param_1 != 0x202) {
    if (param_1 == 0x200) {
      if (iVar7 != 6) {
        FUN_00500bf0(this,param_2,param_3);
        FUN_005041a0(this,param_2,param_3);
      }
      if (DAT_005a79e4 == -1) {
        iVar7 = *(int *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x23590 + (int)this);
        if (iVar7 == 3) {
          FUN_00500f40(this,0x200,param_2,param_3);
        }
        else if (iVar7 == 2) {
          FUN_00501200(this,0x200,param_2,param_3);
        }
        goto switchD_005023c7_caseD_6;
      }
    }
    goto LAB_00502a68;
  }
  switch(iVar7) {
  case 2:
  case 4:
    iVar7 = FUN_004a6180((void *)((int)this + 0x29e70),param_2,param_3);
    goto LAB_005023e3;
  case 3:
    iVar7 = 0;
LAB_005023e3:
    iVar8 = FUN_004a6e60((void *)((int)this + 0x29e70),param_2,param_3);
    uVar10 = 0;
    uVar9 = FUN_00482ac0((void *)((int)this + 0x25644),iVar8,7);
    if ((uVar9 != 0) && (iVar8 = *(int *)(uVar9 + 0x44), (&DAT_005a8078)[DAT_005a7d8c * 0x100] != 3)
       ) {
      uVar10 = *(undefined4 *)(uVar9 + 0x48);
    }
    FUN_00502eb0(this,0x202,iVar7,iVar8,uVar10);
    goto LAB_0050242d;
  case 5:
    iVar7 = FUN_004a6e60((void *)((int)this + 0x29e70),param_2,param_3);
    if (iVar7 != -1) {
      FUN_0052d400((void *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this),iVar7);
      FUN_00503040(this,0);
      goto LAB_0050242d;
    }
    break;
  default:
    goto switchD_005023c7_caseD_6;
  case 7:
    pvVar2 = (void *)((int)this + 0x29e70);
    iVar7 = FUN_004a6e60(pvVar2,param_2,param_3);
    if (iVar7 == -1) {
      iVar7 = FUN_004a6180(pvVar2,param_2,param_3);
    }
    else {
      uVar9 = FUN_00482ac0((void *)((int)this + 0x25644),iVar7,0);
      if (uVar9 != 0) {
        if (*(int *)(uVar9 + 0x48) == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) {
          FUN_0052ec70(&DAT_005a7d90 + DAT_005a7d8c * 0x400,uVar9);
          FUN_00503040(this,0);
          goto LAB_0050242d;
        }
        goto LAB_005028ce;
      }
      iVar7 = FUN_004a6180(pvVar2,param_2,param_3);
    }
    goto joined_r0x005028b7;
  case 8:
    iVar7 = FUN_004a6e60((void *)((int)this + 0x29e70),param_2,param_3);
    if (iVar7 == -1) {
      iVar7 = FUN_004a6180((void *)((int)this + 0x29e70),param_2,param_3);
      FUN_0052ece0(&DAT_005a7d90 + DAT_005a7d8c * 0x400,(short)iVar7);
      FUN_00503040(this,0);
      goto LAB_0050242d;
    }
    goto LAB_005028ce;
  case 9:
    iVar7 = FUN_004a6e60((void *)((int)this + 0x29e70),param_2,param_3);
    if (iVar7 != -1) goto LAB_005028ce;
    iVar7 = FUN_004a6180((void *)((int)this + 0x29e70),param_2,param_3);
    uVar6 = (undefined2)iVar7;
    goto LAB_005028b9;
  case 10:
    iVar7 = *(int *)((int)this + *(int *)((int)this + 0x232a4) * 0x400 + 0x23590);
    if ((iVar7 == 3) || (iVar7 == 4)) {
      iVar7 = 0;
    }
    else {
      iVar7 = 1;
    }
    FUN_0052c0c0((void *)((int)this + *(int *)((int)this + 0x232a4) * 0x400 + 0x232a8),param_2,
                 param_3,iVar7,0,0);
    FUN_00503040(this,0);
    goto LAB_0050242d;
  case 0xb:
    iVar7 = FUN_004a6e60((void *)((int)this + 0x29e70),param_2,param_3);
    uVar9 = FUN_00482ac0((void *)((int)this + 0x25644),iVar7,0);
    goto joined_r0x00502906;
  case 0xd:
    iVar7 = FUN_004a6e60((void *)((int)this + 0x29e70),param_2,param_3);
    uVar9 = FUN_00482ac0((void *)((int)this + 0x25644),iVar7,0);
    if (uVar9 != 0) {
      FUN_0052e480((void *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this),uVar9);
      FUN_00503040(this,0);
      goto LAB_0050242d;
    }
    break;
  case 0xf:
    iVar7 = FUN_004a6e60((void *)((int)this + 0x29e70),param_2,param_3);
    if ((iVar7 != -1) && (uVar9 = FUN_00482ac0((void *)((int)this + 0x25644),iVar7,0), uVar9 != 0))
    {
      FUN_0052eb90(&DAT_005a7d90 + DAT_005a7d8c * 0x400,uVar9);
      FUN_00503040(this,0);
    }
    goto LAB_0050242d;
  case 0x10:
    iVar7 = FUN_004a6e60((void *)((int)this + 0x29e70),param_2,param_3);
    if ((iVar7 != -1) && (uVar9 = FUN_00482ac0((void *)((int)this + 0x25644),iVar7,0), uVar9 != 0))
    {
      FUN_0052ec00(&DAT_005a7d90 + DAT_005a7d8c * 0x400,uVar9);
      FUN_00503040(this,0);
    }
    goto LAB_0050242d;
  case 0x11:
    iVar7 = FUN_004a6e60((void *)((int)this + 0x29e70),param_2,param_3);
    uVar9 = FUN_00482ac0((void *)((int)this + 0x25644),iVar7,0);
    if (uVar9 != 0) {
      FUN_0052e390((void *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this),uVar9);
      FUN_00503040(this,0);
      goto LAB_0050242d;
    }
    break;
  case 0x12:
    iVar7 = FUN_004a6e60((void *)((int)this + 0x29e70),param_2,param_3);
    uVar9 = FUN_00482ac0((void *)((int)this + 0x25644),iVar7,0);
    if (uVar9 != 0) {
      FUN_0052e400((void *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this),uVar9);
      FUN_00503040(this,0);
      goto LAB_0050242d;
    }
    break;
  case 0x15:
    iVar7 = FUN_004a6e60((void *)((int)this + 0x29e70),param_2,param_3);
    uVar9 = FUN_00482ac0((void *)((int)this + 0x25644),iVar7,0);
    if (uVar9 != 0) {
      FUN_0052e610((void *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this),uVar9);
      FUN_00503040(this,0);
      goto LAB_0050242d;
    }
    break;
  case 0x16:
    FUN_00503040(this,0);
    iVar7 = FUN_004a6e60((void *)((int)this + 0x29e70),param_2,param_3);
    if ((iVar7 != -1) && (uVar9 = FUN_00482ac0((void *)((int)this + 0x25644),iVar7,0), uVar9 != 0))
    {
      if (*(int *)(uVar9 + 0x48) == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) {
        FUN_0052ec70(&DAT_005a7d90 + DAT_005a7d8c * 0x400,uVar9);
      }
      goto LAB_0050242d;
    }
    iVar7 = FUN_004a6180((void *)((int)this + 0x29e70),param_2,param_3);
joined_r0x005028b7:
    uVar6 = (undefined2)iVar7;
    if (iVar7 != -1) {
LAB_005028b9:
      FUN_0052ed30(&DAT_005a7d90 + DAT_005a7d8c * 0x400,uVar6);
    }
LAB_005028ce:
    FUN_00503040(this,0);
    goto LAB_0050242d;
  case 0x17:
    iVar7 = FUN_004a6e60((void *)((int)this + 0x29e70),param_2,param_3);
    uVar9 = FUN_00482ac0((void *)((int)this + 0x25644),iVar7,0);
joined_r0x00502906:
    if (uVar9 != 0) {
      FUN_0052e320((void *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this),uVar9);
      FUN_00503040(this,0);
      goto LAB_0050242d;
    }
    break;
  case 0x18:
    iVar7 = FUN_004a6e60((void *)((int)this + 0x29e70),param_2,param_3);
    uVar9 = FUN_00482ac0((void *)((int)this + 0x25644),iVar7,0);
    if (uVar9 != 0) {
      FUN_0052e500((void *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this),uVar9);
      FUN_00503040(this,0);
      goto LAB_0050242d;
    }
    break;
  case 0x1a:
    iVar7 = FUN_004a6e60((void *)((int)this + 0x29e70),param_2,param_3);
    uVar9 = FUN_00482ac0((void *)((int)this + 0x25644),iVar7,0);
    if (uVar9 != 0) {
      FUN_0052e6d0((void *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this),uVar9);
    }
    break;
  case 0x1b:
    iVar7 = FUN_004a6180((void *)((int)this + 0x29e70),param_2,param_3);
    iVar8 = FUN_004a6e60((void *)((int)this + 0x29e70),param_2,param_3);
    if (((iVar7 != -1) && (iVar8 == -1)) &&
       (*(int *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x23590 + (int)this) == 2)) {
      FUN_00503040(this,0);
      FUN_0045c460(&DAT_005aa12c,*(int *)((int)this + 0x232a4),iVar7);
      goto LAB_0050242d;
    }
    goto LAB_00502a68;
  case 0x1c:
    FUN_0052e830((void *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this),param_2,
                 param_3,1);
    FUN_00503040(this,0);
    goto LAB_00502a68;
  case 0x1d:
    FUN_0052e8f0((void *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this),param_2,
                 param_3,1);
    FUN_00503040(this,0);
LAB_00502a68:
    if (*(int *)((int)this + 0x1b8) == 0) {
switchD_005023c7_caseD_6:
      FUN_00411910(local_5e8);
      return 0;
    }
    goto LAB_0050242d;
  }
  FUN_00503040(this,0);
LAB_0050242d:
  FUN_00411910(local_5e8);
  return 1;
#undef local_5e8
}
