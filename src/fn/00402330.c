/* Rebuilt from lomse.exe FUN_00402330 @ 0x00402330 (821 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055514c (*(int * *)0x0055514c)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005aef04 (*(undefined4 *)0x005aef04)
#define DAT_005aef10 (*(int *)0x005aef10)
#define DAT_005af0bc (*(int *)0x005af0bc)
#define FUN_004010d0 ((undefined4 (__thiscall *)(void *, int))0x004010d0)
#define FUN_00401730 ((undefined4 (__stdcall *)(void *))0x00401730)
#define FUN_00401760 ((undefined4 (__stdcall *)(undefined4, int, int))0x00401760)
#define FUN_00401810 ((void * (__stdcall *)(void *, undefined4, undefined4))0x00401810)
#define FUN_004019f0 ((undefined4 (__stdcall *)(void *, int, int))0x004019f0)
#define FUN_00407900 ((undefined4 (__fastcall *)(int))0x00407900)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_00407fd0 ((undefined4 (__thiscall *)(void *, int *, int, int, uint, undefined4, int))0x00407fd0)
#define FUN_00408a60 ((undefined4 (__thiscall *)(void *, void *, int))0x00408a60)
#define FUN_004094d0 ((undefined4 (__thiscall *)(void *, void *, int))0x004094d0)
#define FUN_00409bc0 ((undefined4 (__stdcall *)(int, int))0x00409bc0)
#define FUN_00409ca0 ((undefined4 (__thiscall *)(void *, void *, int))0x00409ca0)
#define FUN_004193e0 ((undefined4 (__thiscall *)(void *, int))0x004193e0)
#define FUN_0041efa0 ((undefined4 (__thiscall *)(void *, uint))0x0041efa0)
#define FUN_004205e0 ((undefined4 (__fastcall *)(int))0x004205e0)
#define FUN_00420600 ((undefined4 (__fastcall *)(int))0x00420600)
#define FUN_00420620 ((undefined4 (__fastcall *)(int))0x00420620)
#define FUN_00458170 ((undefined4 (__stdcall *)(void))0x00458170)
#define FUN_0047c9e0 ((uint (__thiscall *)(void *, int))0x0047c9e0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004a8960 ((int (__thiscall *)(void *, int, int))0x004a8960)
#define FUN_004a8b50 ((int (__thiscall *)(void *, int, int))0x004a8b50)
#define FUN_004c6660 ((undefined4 (__fastcall *)(int *))0x004c6660)
#define FUN_005071c0 ((undefined4 (__thiscall *)(void *, int))0x005071c0)

#define LOM_SELF_00402330 1
void __thiscall rb_00402330(void *this,int *param_1)

{
  int *this_00;
  int iVar1;
  void *this_01;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  bool bVar5;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int * _t_piStack_4;
#define piStack_4 (*(_t_piStack_4 *)(_fr + 0x4))
  
  this_00 = param_1;
  iVar1 = FUN_004205e0((int)param_1);
  if (iVar1 == 0) {
    piStack_4 = (int *)0x1;
    param_1 = DAT_0055514c;
  }
  else {
    piStack_4 = (int *)FUN_00420600((int)param_1);
    param_1 = piStack_4;
    if ((int)piStack_4 < (int)DAT_0055514c) {
      param_1 = DAT_0055514c;
    }
  }
  this_01 = (void *)FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 4),0);
  if (this_01 != (void *)0x0) {
    if ((((~*(uint *)((int)this_01 + 0x30) & 0x100) == 0) &&
        (uVar2 = FUN_0047c9e0(&DAT_005aa12c,this_00[0x12]), uVar2 == 0)) &&
       (iVar1 = FUN_004205e0((int)this_00), iVar1 == 0)) {
      iVar1 = FUN_00409ca0(this,this_00,(int)this_01);
      if (iVar1 != 0) {
        return;
      }
    }
    else {
      iVar1 = FUN_00407d50((int)this_01);
      if (((iVar1 == 0) && (*(int *)((int)this_01 + 0x48) != this_00[0x12])) &&
         ((iVar1 = FUN_005071c0(this_01,this_00[0x12]), iVar1 != 0 &&
          ((iVar1 = FUN_00420620((int)this_01), iVar1 == 0 || (iVar1 = FUN_00458170(), iVar1 == 0)))
          ))) {
        uVar2 = this_00[0x15];
        iVar1 = this_00[7];
        iVar4 = *(int *)((int)this_01 + 0x1c);
        if ((uVar2 & 0x100000) == 0) {
          if (((uVar2 & 0x40000) == 0) || ((uVar2 & 0x80000) == 0)) {
            if ((uVar2 & 0x40000) == 0) {
              if ((uVar2 & 0x80000) != 0) {
                if (DAT_005af0bc == 0) {
                  FUN_004c6660(&DAT_005aef04);
                }
                if ((((-1 < iVar1) && (-1 < iVar4)) && (iVar1 < DAT_005aef10)) &&
                   (iVar4 < DAT_005aef10)) {
                  bVar5 = *(short *)(DAT_005aef04 + 4 + iVar1 * 6) ==
                          *(short *)(DAT_005aef04 + 4 + iVar4 * 6);
                  goto LAB_004024f8;
                }
              }
            }
            else {
              if (DAT_005af0bc == 0) {
                FUN_004c6660(&DAT_005aef04);
              }
              if (((-1 < iVar1) && (-1 < iVar4)) &&
                 ((iVar1 < DAT_005aef10 && (iVar4 < DAT_005aef10)))) {
                bVar5 = *(short *)(DAT_005aef04 + 2 + iVar1 * 6) ==
                        *(short *)(DAT_005aef04 + 2 + iVar4 * 6);
                goto LAB_004024f8;
              }
            }
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
        }
        else {
          bVar5 = true;
        }
LAB_004024f8:
        if (((!bVar5) && (uVar2 = FUN_0047c9e0(&DAT_005aa12c,this_00[0x12]), uVar2 != 0)) &&
           ((iVar1 = FUN_004205e0((int)this_00), iVar1 == 0 &&
            (pvVar3 = FUN_00401810(this_00,*(undefined4 *)((int)this + 8),100),
            pvVar3 != (void *)0x0)))) {
          *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)pvVar3 + 0x28);
          *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)pvVar3 + 0x28);
          return;
        }
        iVar1 = FUN_004a8960(&DAT_005ae958,this_00[7],*(int *)((int)this_01 + 0x1c));
        uVar2 = FUN_004a8b50(&DAT_005ae958,this_00[7],*(int *)((int)this_01 + 0x1c));
        if (uVar2 != 8) {
          if ((int)piStack_4 < iVar1) {
            iVar1 = FUN_00407fd0(this,this_00,(int)this_01,iVar1,uVar2,piStack_4,
                                 *(int *)((int)this_01 + 0x1c));
            if (iVar1 != 0) {
              return;
            }
            iVar1 = FUN_00401760(this_00,*(int *)((int)this + 8),(int)param_1);
            if (iVar1 == 0) {
              return;
            }
            *(undefined4 *)((int)this + 4) = *(undefined4 *)(iVar1 + 0x28);
            *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(iVar1 + 0x28);
            return;
          }
          iVar4 = FUN_004205e0((int)this_00);
          if (iVar4 == 0) {
            iVar1 = FUN_004019f0(this_00,(int)this_01,uVar2);
            if (iVar1 == 0) {
              return;
            }
          }
          else {
            if (this_00[0x11] != uVar2) {
              FUN_004193e0(this_00,uVar2);
              return;
            }
            if (1 < iVar1) {
              uVar2 = FUN_0047c9e0(&DAT_005aa12c,this_00[0x12]);
              if (uVar2 != 0) {
                iVar1 = FUN_00409bc0((int)this_00,iVar1);
                if (iVar1 != 0) {
                  *(undefined4 *)this = 0x30;
                  return;
                }
                iVar1 = FUN_00408a60(this,this_00,(int)this_01);
                if (iVar1 == 0) {
                  return;
                }
                iVar1 = FUN_004094d0(this,this_00,(int)this_01);
                if (iVar1 != 0) {
                  return;
                }
              }
              FUN_0041efa0(this_00,4);
              FUN_00407900((int)this_00);
              return;
            }
          }
          FUN_0041efa0(this_00,3);
          FUN_00407900((int)this_00);
          return;
        }
        goto LAB_004023c6;
      }
    }
  }
  FUN_004010d0(this,(int)this_00);
LAB_004023c6:
  FUN_00401730(this_00);
  return;
#undef piStack_4
}
