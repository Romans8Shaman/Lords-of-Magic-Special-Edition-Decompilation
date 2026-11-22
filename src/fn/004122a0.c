/* Rebuilt from lomse.exe FUN_004122a0 @ 0x004122a0 (737 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(int *)0x005aa12c)
#define DAT_005aeefc (*(undefined *)0x005aeefc)
#define FUN_00427a40 ((undefined4 (__thiscall *)(void *, int *, int *))0x00427a40)
#define FUN_004f6b00 ((undefined4 (__thiscall *)(void *, int *))0x004f6b00)
#define FUN_00524d70 ((undefined4 (__thiscall *)(void *, int *))0x00524d70)
#define FUN_005397f0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005397f0)

#define LOM_SELF_004122a0 1
undefined4 __thiscall rb_004122a0(void *this, int *volatile param_1)

{
  char *pcVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  void *this_00;
  uint uVar5;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef char _t_local_c[4];
  typedef char _t_local_8[4];
  typedef char _t_local_4[4];
#define local_c (*(_t_local_c *)(_fr + 0x4))
#define local_8 (*(_t_local_8 *)(_fr + 0x8))
#define local_4 (*(_t_local_4 *)(_fr + 0xc))
  
  piVar3 = param_1;
  FUN_004f6b00(this,param_1);
  FUN_005397f0((char *)((int)this + 0x44),4,1,piVar3);
  FUN_005397f0((char *)((int)this + 0x48),4,1,piVar3);
  FUN_005397f0((char *)((int)this + 0x4c),4,1,piVar3);
  FUN_005397f0((char *)((int)this + 0x50),4,1,piVar3);
  iVar4 = 0;
  if (0 < *(int *)((int)this + 0x4c)) {
    this_00 = (void *)((int)this + 0xc4);
    do {
      FUN_00524d70(this_00,piVar3);
      iVar4 = iVar4 + 1;
      this_00 = (void *)((int)this_00 + 0x4c);
    } while (iVar4 < *(int *)((int)this + 0x4c));
  }
  FUN_005397f0((char *)((int)this + 0x53c),4,1,piVar3);
  FUN_005397f0((char *)((int)this + 0x540),4,1,piVar3);
  FUN_005397f0((char *)((int)this + 0x544),4,1,piVar3);
  FUN_005397f0((char *)((int)this + 0x548),4,1,piVar3);
  FUN_00427a40(&DAT_005aeefc,(int *)((int)this + 0x538),piVar3);
  if (DAT_005aa12c < 0x3f) {
    FUN_005397f0((char *)&param_1,4,1,piVar3);
    FUN_005397f0(local_c,4,1,piVar3);
    FUN_005397f0(local_8,4,1,piVar3);
    FUN_005397f0(local_4,4,1,piVar3);
  }
  FUN_005397f0((char *)((int)this + 0x54),4,1,piVar3);
  FUN_005397f0((char *)((int)this + 0x58),4,1,piVar3);
  FUN_005397f0((char *)((int)this + 100),4,1,piVar3);
  FUN_005397f0((char *)((int)this + 0x68),0x58,1,piVar3);
  pcVar1 = (char *)((int)this + 0x54c);
  pcVar2 = (char *)((int)this + 0x550);
  pcVar1[0] = -1;
  pcVar1[1] = -1;
  pcVar1[2] = -1;
  pcVar1[3] = -1;
  pcVar2[0] = -1;
  pcVar2[1] = -1;
  pcVar2[2] = -1;
  pcVar2[3] = -1;
  if (0x32 < DAT_005aa12c) {
    FUN_005397f0(pcVar1,4,1,piVar3);
    if (0x37 < DAT_005aa12c) {
      FUN_005397f0(pcVar2,4,1,piVar3);
    }
    if (0x3c < DAT_005aa12c) {
      FUN_005397f0((char *)((int)this + 0x5b0),4,1,piVar3);
      FUN_005397f0((char *)((int)this + 0x5b4),4,1,piVar3);
      FUN_005397f0((char *)((int)this + 0x5b8),4,1,piVar3);
      FUN_005397f0((char *)((int)this + 0x5bc),4,1,piVar3);
      FUN_005397f0((char *)((int)this + 0x5c0),4,1,piVar3);
      FUN_005397f0((char *)((int)this + 0x5c4),4,1,piVar3);
    }
    if (0x41 < DAT_005aa12c) {
      if (DAT_005aa12c < 0x5d) {
        uVar5 = 1;
      }
      else {
        uVar5 = 4;
      }
      FUN_005397f0((char *)((int)this + 0x5cc),uVar5,1,piVar3);
      FUN_005397f0((char *)((int)this + 0x5d0),1,1,piVar3);
    }
    if ((0x58 < DAT_005aa12c) && (DAT_005aa12c < 0x5c)) {
      FUN_005397f0((char *)&param_1,4,1,piVar3);
      if (param_1 == (int *)0x0) {
        uVar5 = *(uint *)((int)this + 0x30) & 0xfffffff7;
      }
      else {
        uVar5 = *(uint *)((int)this + 0x30) | 8;
      }
      *(uint *)((int)this + 0x30) = uVar5;
    }
    if (0x69 < DAT_005aa12c) {
      FUN_005397f0((char *)((int)this + 0x5c8),1,1,piVar3);
    }
  }
  return 1;
#undef local_c
#undef local_8
#undef local_4
}
