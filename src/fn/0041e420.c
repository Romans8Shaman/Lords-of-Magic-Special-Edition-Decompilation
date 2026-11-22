/* Rebuilt from lomse.exe FUN_0041e420 @ 0x0041e420 (433 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7be4 (*(uint *)0x005a7be4)
#define DAT_005a7be8 (*(int * *)0x005a7be8)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_004164e0 ((undefined4 (__thiscall *)(void *, int, int))0x004164e0)
#define FUN_0041e310 ((undefined4 (__thiscall *)(void *, undefined4, int, undefined4 *, int *))0x0041e310)
#define FUN_0041e380 ((undefined4 (__thiscall *)(void *, undefined4, undefined4 *, int *))0x0041e380)
#define FUN_00420560 ((undefined4 (__fastcall *)(int))0x00420560)
#define FUN_00420630 ((undefined4 (__fastcall *)(int))0x00420630)
#define FUN_00429150 ((undefined4 (__thiscall *)(void *, int, int, int, int, int))0x00429150)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004c1c50 ((undefined4 (__fastcall *)(int))0x004c1c50)
#define FUN_004c2450 ((undefined4 (__fastcall *)(int))0x004c2450)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_0052d160 ((undefined4 (__fastcall *)(int))0x0052d160)

#define LOM_SELF_0041e420 1
undefined4 __thiscall rb_0041e420(void *this, int volatile param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef void * _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  iVar3 = param_1;
  if ((param_1 < 0) || (*(int *)((int)this + 0x4c) <= param_1)) {
    return 0;
  }
  if ((*(byte *)((int)this + param_1 * 0x4c + 0xe8) & 1) == 0) {
    iVar5 = *(int *)((int)this + 0x48);
    if ((iVar5 < 0) || (0xf < iVar5)) {
      puVar1 = (undefined *)0x0;
    }
    else {
      puVar1 = &DAT_005af194 + iVar5 * 0x1d84;
    }
    if (puVar1 != (undefined *)0x0) {
      *(int *)(puVar1 + 0xd0c) = *(int *)(puVar1 + 0xd0c) + 0x100;
      *(uint *)(puVar1 + 0x15d8) = *(uint *)(puVar1 + 0x15d8) | 0x40;
    }
  }
  iVar5 = *(int *)((int)this + param_1 * 0x4c + 0xe0);
  local_4 = this;
  do {
    if (iVar5 == 0) {
      iVar5 = -1;
      iVar2 = FUN_004c1c50((int)this);
      if (iVar2 != 0) {
        iVar5 = *(int *)((int)this + 0x5b4);
      }
      iVar3 = FUN_004164e0(this,iVar3,1);
      if ((iVar3 != 0) && (iVar5 != -1)) {
        puVar4 = FUN_00485080(&DAT_005aa12c,iVar5,0x2f);
        FUN_004c2450((int)puVar4);
        *(undefined4 *)((int)this + 0x5b4) = 0xffffffff;
        FUN_00420630((int)puVar4);
        return 1;
      }
      iVar3 = FUN_00420560((int)this);
      if ((((iVar3 != 0) && ((*(byte *)((int)this + 0x30) & 0x20) != 0)) &&
          (*(int *)((int)this + 0x48) == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400))) &&
         (iVar3 = FUN_0052d160((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)),
         *(int *)((int)this + 0x28) == iVar3)) {
        FUN_004d09a0(DAT_005a7b78,DAT_005a7be4,DAT_005a7be8,0);
      }
      return 1;
    }
    iVar2 = FUN_0041e310(this,*(undefined4 *)(iVar5 + 0xc),iVar3,&local_4,&param_1);
    if (iVar2 == 0) {
      iVar2 = FUN_0041e380(this,*(undefined4 *)(iVar5 + 0xc),&local_4,&param_1);
      if (iVar2 != 0) {
        iVar2 = *(int *)(iVar5 + 0xc);
        iVar6 = *(int *)((int)this + 0x48);
        goto LAB_0041e501;
      }
    }
    else {
      iVar2 = *(int *)(iVar5 + 0xc);
      iVar6 = *(int *)((int)this + 0x48);
LAB_0041e501:
      FUN_00429150(&DAT_005aa12c,iVar6,iVar3,(int)local_4,param_1,iVar2);
    }
    iVar5 = *(int *)(iVar5 + 0x14);
  } while( true );
#undef local_4
}
