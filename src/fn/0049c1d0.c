/* Rebuilt from lomse.exe op_enumimphotspots @ 0x0049c1d0 (808 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_0041d1d0 ((undefined4 (__thiscall *)(void *, undefined4, undefined4))0x0041d1d0)
#define FUN_00492850 ((int (__thiscall *)(void *, int))0x00492850)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define s_no_imp_0055c898 (*(char (*)[])0x0055c898)

#define LOM_SELF_0049c1d0 1
void __cdecl rb_0049c1d0(void *vm)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  void *this;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uchar _fr[0x50] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_48;
  typedef uint _t_uStack_44;
  typedef uint _t_uStack_40;
  typedef uint _t_uStack_3c;
  typedef int _t_iStack_38;
  typedef uint _t_uStack_34;
  typedef ushort * _t_puStack_30;
  typedef undefined4 _t_uStack_2c;
  typedef uint _t_uStack_28;
  typedef uint _t_uStack_24;
  typedef int * _t_piStack_20;
  typedef int _t_iStack_1c;
  typedef uint _t_auStack_18[2];
  typedef uint _t_auStack_10[2];
  typedef uint _t_uStack_8;
  typedef int * _t_piStack_4;
#define uStack_48 (*(_t_uStack_48 *)(_fr + 0x0))
#define uStack_44 (*(_t_uStack_44 *)(_fr + 0x4))
#define uStack_40 (*(_t_uStack_40 *)(_fr + 0x8))
#define uStack_3c (*(_t_uStack_3c *)(_fr + 0xc))
#define iStack_38 (*(_t_iStack_38 *)(_fr + 0x10))
#define uStack_34 (*(_t_uStack_34 *)(_fr + 0x14))
#define puStack_30 (*(_t_puStack_30 *)(_fr + 0x18))
#define uStack_2c (*(_t_uStack_2c *)(_fr + 0x1c))
#define uStack_28 (*(_t_uStack_28 *)(_fr + 0x20))
#define uStack_24 (*(_t_uStack_24 *)(_fr + 0x24))
#define piStack_20 (*(_t_piStack_20 *)(_fr + 0x28))
#define iStack_1c (*(_t_iStack_1c *)(_fr + 0x2c))
#define auStack_18 (*(_t_auStack_18 *)(_fr + 0x30))
#define auStack_10 (*(_t_auStack_10 *)(_fr + 0x38))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x40))
#define piStack_4 (*(_t_piStack_4 *)(_fr + 0x44))
  
  this = vm;
  puVar4 = (uint *)FUN_0040adb0(vm,auStack_10);
  uStack_8 = *puVar4;
  piStack_4 = (int *)puVar4[1];
  if ((char)uStack_8 != '\0') {
    FUN_0040adb0(this,auStack_18);
    iVar5 = FUN_004026a0(auStack_18,&uStack_34,auStack_10,(undefined4 *)&vm);
    if (iVar5 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      return;
    }
    piVar6 = (int *)FUN_00492850(&DAT_005a7b50,uStack_34);
    piStack_20 = piVar6;
    if (piVar6 == (int *)0x0) {
      FUN_004d41c0(this,s_no_imp_0055c898);
      return;
    }
    if (*piVar6 != 0) {
      iVar5 = *(int *)(*piVar6 + 8);
      if (iVar5 == 0) {
        uStack_3c = 0;
      }
      else {
        uStack_3c = (uint)*(ushort *)(iVar5 + 0x1a);
      }
      uStack_40 = 0;
      if (uStack_3c != 0) {
        do {
          vm = (void *)0x0;
          uStack_48 = (uStack_40 & 0xffff) * 0x10;
          auStack_10[0] = (uint)*(byte *)(*(int *)(*(int *)(*piVar6 + 8) + 0x1c) + uStack_48 + 0xb);
          if (auStack_10[0] != 0) {
            uVar9 = uStack_48;
            auStack_18[0] = uStack_48;
            do {
              uStack_44 = 0;
              iVar5 = ((uint)vm & 0xffff) * 8;
              uVar8 = (uint)*(ushort *)
                             (*(int *)(*(int *)(*(int *)(*piVar6 + 8) + 0x1c) + 0xc + uStack_48) + 2
                             + iVar5);
              uVar10 = uVar9;
              if (uVar8 != 0) {
                uStack_24 = uVar8;
                iStack_1c = iVar5;
                do {
                  puStack_30 = (ushort *)
                               (*(int *)(*(int *)(*(int *)(*(int *)(*piVar6 + 8) + 0x1c) + 0xc +
                                                 uVar9) + 4 + iVar5) + (uStack_44 & 0xffff) * 0x10);
                  if (puStack_30 != (ushort *)0x0) {
                    iStack_38 = 1;
                    uStack_28 = (uint)(*puStack_30 >> 8);
                    if (1 < *puStack_30 >> 8) {
                      iVar5 = 6;
                      do {
                        uVar1 = *(ushort *)(iVar5 + *(int *)(puStack_30 + 4));
                        uVar2 = *(undefined4 *)(iVar5 + 2 + *(int *)(puStack_30 + 4));
                        uStack_2c = uVar2;
                        if (*(int *)((int)this + 0x54) == 0) {
                          FUN_00404ab0(this,3);
                        }
                        else {
                          iVar3 = *(int *)((int)this + 0x50);
                          iVar7 = *(int *)((int)this + 0x54) + -1;
                          *(int *)((int)this + 0x54) = iVar7;
                          *(undefined4 *)(iVar3 + iVar7 * 8) = 1;
                          *(uint *)(iVar3 + 4 + iVar7 * 8) = uStack_40;
                        }
                        if (*(int *)((int)this + 0x54) == 0) {
                          FUN_00404ab0(this,3);
                        }
                        else {
                          iVar3 = *(int *)((int)this + 0x50);
                          iVar7 = *(int *)((int)this + 0x54) + -1;
                          *(int *)((int)this + 0x54) = iVar7;
                          *(undefined4 *)(iVar3 + iVar7 * 8) = 1;
                          *(void **)(iVar3 + 4 + iVar7 * 8) = vm;
                        }
                        if (*(int *)((int)this + 0x54) == 0) {
                          FUN_00404ab0(this,3);
                        }
                        else {
                          iVar3 = *(int *)((int)this + 0x50);
                          iVar7 = *(int *)((int)this + 0x54) + -1;
                          *(int *)((int)this + 0x54) = iVar7;
                          *(undefined4 *)(iVar3 + iVar7 * 8) = 1;
                          *(uint *)(iVar3 + 4 + iVar7 * 8) = uStack_44;
                        }
                        if (*(int *)((int)this + 0x54) == 0) {
                          FUN_00404ab0(this,3);
                        }
                        else {
                          iVar3 = *(int *)((int)this + 0x50);
                          iVar7 = *(int *)((int)this + 0x54) + -1;
                          *(int *)((int)this + 0x54) = iVar7;
                          *(undefined4 *)(iVar3 + iVar7 * 8) = 1;
                          *(uint *)(iVar3 + 4 + iVar7 * 8) = (uint)uVar1;
                        }
                        if (*(int *)((int)this + 0x54) == 0) {
                          FUN_00404ab0(this,3);
                        }
                        else {
                          iVar3 = *(int *)((int)this + 0x50);
                          iVar7 = *(int *)((int)this + 0x54) + -1;
                          *(int *)((int)this + 0x54) = iVar7;
                          *(undefined4 *)(iVar3 + iVar7 * 8) = 1;
                          *(int *)(iVar3 + 4 + iVar7 * 8) = (int)(short)uVar2;
                        }
                        FUN_0041d1d0(this,1,(int)(*(short *)((uchar *)&uStack_2c + 2)));
                        FUN_004d05e0(this,uStack_8,piStack_4);
                        iVar3 = *(int *)((int)this + 0x6c);
                        *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)((int)this + 0x70);
                        if (iVar3 != 0) {
                          return;
                        }
                        iStack_38 = iStack_38 + 1;
                        iVar5 = iVar5 + 6;
                      } while (iStack_38 < (int)uStack_28);
                      iVar5 = iStack_1c;
                      uVar8 = uStack_24;
                      piVar6 = piStack_20;
                    }
                  }
                  uStack_44 = uStack_44 + 1;
                } while ((int)uStack_44 < (int)uVar8);
                uVar10 = auStack_18[0];
                uStack_48 = uVar9;
              }
              vm = (void *)((int)vm + 1);
              uVar9 = uVar10;
            } while ((int)vm < (int)auStack_10[0]);
          }
          uStack_40 = uStack_40 + 1;
        } while ((int)uStack_40 < (int)uStack_3c);
      }
    }
  }
  return;
#undef uStack_48
#undef uStack_44
#undef uStack_40
#undef uStack_3c
#undef iStack_38
#undef uStack_34
#undef puStack_30
#undef uStack_2c
#undef uStack_28
#undef uStack_24
#undef piStack_20
#undef iStack_1c
#undef auStack_18
#undef auStack_10
#undef uStack_8
#undef piStack_4
}
