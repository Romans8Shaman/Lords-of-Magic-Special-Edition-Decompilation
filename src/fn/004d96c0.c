/* Rebuilt from lomse.exe op_drawbox @ 0x004d96c0 (694 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_0047efd0 ((int (__thiscall *)(void *, int, int, int))0x0047efd0)
#define FUN_00491ec0 ((int (__thiscall *)(void *, int))0x00491ec0)
#define FUN_00497270 ((undefined4 (__thiscall *)(void *, int, int, uint, int, undefined2))0x00497270)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define s_no_page_0057260c (*(char (*)[])0x0057260c)

#define LOM_SELF_004d96c0 1
void __cdecl rb_004d96c0(void *vm)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  void *this;
  uchar _fr[0x38] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef void * _t_pvStack_2c;
  typedef uint _t_uStack_28;
  typedef uint _t_uStack_24;
  typedef uint _t_uStack_20;
  typedef uint _t_uStack_1c;
  typedef uint _t_uStack_18;
  typedef uint _t_uStack_14;
  typedef undefined4 _t_fStack_10;
  typedef undefined4 _t_fStack_c;
  typedef uint _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define pvStack_2c (*(_t_pvStack_2c *)(_fr + 0x4))
#define uStack_28 (*(_t_uStack_28 *)(_fr + 0x8))
#define uStack_24 (*(_t_uStack_24 *)(_fr + 0xc))
#define uStack_20 (*(_t_uStack_20 *)(_fr + 0x10))
#define uStack_1c (*(_t_uStack_1c *)(_fr + 0x14))
#define uStack_18 (*(_t_uStack_18 *)(_fr + 0x18))
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0x1c))
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x20))
#define fStack_c (*(_t_fStack_c *)(_fr + 0x24))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x28))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x2c))
  
  pvVar1 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar3 = FUN_004026a0(&uStack_8,&uStack_1c,(uint *)&fStack_c,&fStack_10);
  if (iVar3 == 0) {
    FUN_00404ab0(pvVar1,0xe);
    return;
  }
  if (*(int *)((int)pvVar1 + 0x54) < *(int *)((int)pvVar1 + 0x58)) {
    iVar3 = *(int *)((int)pvVar1 + 0x54) + 1;
    *(int *)((int)pvVar1 + 0x54) = iVar3;
    uStack_8 = *(uint *)(*(int *)((int)pvVar1 + 0x50) + -8 + iVar3 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)pvVar1 + 0x50) + -4 + iVar3 * 8);
  }
  else {
    FUN_00404ab0(pvVar1,6);
    uStack_8 = 0;
  }
  iVar3 = FUN_004026a0(&uStack_8,&uStack_18,(uint *)&fStack_10,&fStack_c);
  if (iVar3 == 0) {
    FUN_00404ab0(pvVar1,0xe);
    return;
  }
  FUN_0040adb0(pvVar1,&uStack_8);
  iVar3 = FUN_004026a0(&uStack_8,&uStack_14,(uint *)&fStack_10,&fStack_c);
  if (iVar3 != 0) {
    FUN_0040adb0(pvVar1,&uStack_8);
    iVar3 = FUN_004026a0(&uStack_8,&uStack_24,(uint *)&fStack_10,&fStack_c);
    if (iVar3 != 0) {
      FUN_0040adb0(pvVar1,&uStack_8);
      iVar3 = FUN_004026a0(&uStack_8,(uint *)&pvStack_2c,(uint *)&fStack_10,&fStack_c);
      if (iVar3 != 0) {
        FUN_0040adb0(pvVar1,&uStack_8);
        iVar3 = FUN_004026a0(&uStack_8,&uStack_28,(uint *)&fStack_10,&fStack_c);
        if (iVar3 != 0) {
          FUN_0040adb0(pvVar1,&uStack_8);
          iVar3 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_10,&fStack_c);
          if (iVar3 != 0) {
            FUN_0040adb0(pvVar1,&uStack_8);
            iVar3 = FUN_004026a0(&uStack_8,&uStack_20,(uint *)&fStack_10,&fStack_c);
            if (iVar3 == 0) {
              FUN_00404ab0(pvVar1,0xe);
              return;
            }
            this = (void *)FUN_00491ec0(&DAT_005a7b50,uStack_20);
            if (this == (void *)0x0) {
              FUN_004d41c0(pvVar1,s_no_page_0057260c);
              return;
            }
            iVar3 = FUN_0047efd0(this,uStack_14,uStack_18,uStack_1c);
            uVar2 = uStack_28;
            pvVar1 = vm;
            if ((int)pvStack_2c < (int)vm) {
              vm = pvStack_2c;
              pvStack_2c = pvVar1;
            }
            if ((int)uStack_24 < (int)uStack_28) {
              uStack_28 = uStack_24;
              uStack_24 = uVar2;
            }
            FUN_00497270(this,(int)vm,uStack_28,(int)pvStack_2c + (1 - (int)vm),
                         (uStack_24 - uStack_28) + 1,(short)iVar3);
            return;
          }
        }
      }
    }
  }
  *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
  FUN_004d4550(pvVar1);
  *(undefined4 *)((int)pvVar1 + 0x90) = 0;
  *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  return;
#undef pvStack_2c
#undef uStack_28
#undef uStack_24
#undef uStack_20
#undef uStack_1c
#undef uStack_18
#undef uStack_14
#undef fStack_10
#undef fStack_c
#undef uStack_8
#undef uStack_4
}
