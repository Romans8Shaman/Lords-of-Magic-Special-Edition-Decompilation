/* Rebuilt from lomse.exe FUN_0045c830 @ 0x0045c830 (371 bytes, __fastcall).
 * HAND (2026-11-13): gen.py REJECT overlapGlobalSizes:_DAT_005aa1c4 (byte compare and
 * dword push of the same address). EH-free frameless body; no FPU. */
#include "lom.h"

#define DAT_00584ca0 (*(undefined4 *)0x00584ca0)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7d1c (*(uint *)0x005a7d1c)
#define DAT_005a7d20 (*(int * *)0x005a7d20)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a8078 ((int *)0x005a8078)
#define DAT_005aa1c4 (*(uint *)0x005aa1c4)
#define DAT_005aa1c8 (*(undefined4 *)0x005aa1c8)
#define FUN_0042e5a0 ((undefined4 (__thiscall *)(void *, void *, int))0x0042e5a0)
#define FUN_004372e0 ((undefined4 (__thiscall *)(void *))0x004372e0)
#define FUN_0045c9b0 ((undefined4 (__thiscall *)(void *))0x0045c9b0)
#define FUN_00472720 ((undefined4 (__thiscall *)(void *))0x00472720)
#define FUN_00472740 ((undefined4 (__thiscall *)(void *, int))0x00472740)
#define FUN_0047c4b0 ((undefined4 (__thiscall *)(void *))0x0047c4b0)
#define FUN_0048c140 ((undefined4 (__cdecl *)(void))0x0048c140)
#define FUN_0048c3c0 ((undefined4 (__cdecl *)(int))0x0048c3c0)
#define FUN_0048c6a0 ((undefined4 (__cdecl *)(void))0x0048c6a0)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, undefined4))0x004d05e0)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_0045c830 1
undefined4 __fastcall rb_0045c830(void *this, undefined4 unused_edx, undefined4 unused_stack_0)
{
  void *vm;
  int n;
  int *slot;
  int idx;

  if ((char)DAT_005a7d1c != '\0') {
    vm = DAT_005a7b78;
    n = *(int *)((int)vm + 0x54);
    if (n != 0) {
      n = n + -1;
      *(int *)((int)vm + 0x54) = n;
      slot = *(int **)((int)vm + 0x50);
      slot[n * 2] = 1;
      slot[n * 2 + 1] = 0;
    }
    else {
      *(undefined4 *)((int)vm + 0x90) = 3;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
    }
    FUN_004d09a0(DAT_005a7b78, DAT_005a7d1c, DAT_005a7d20, -1);
  }
  if ((char)DAT_005aa1c4 != '\0') {
    vm = DAT_005a7b78;
    n = *(int *)((int)vm + 0x54);
    if (n != 0) {
      n = n + -1;
      *(int *)((int)vm + 0x54) = n;
      slot = *(int **)((int)vm + 0x50);
      slot[n * 2] = 1;
      slot[n * 2 + 1] = 0;
    }
    else {
      *(undefined4 *)((int)vm + 0x90) = 3;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
    }
    FUN_004d05e0(DAT_005a7b78, DAT_005aa1c4, DAT_005aa1c8);
  }
  FUN_0048c3c0(2);
  if (*(int *)((int)this + 0x4ff4) != 0) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x4ff4) = 1;
  *(undefined4 *)((int)this + 0x5000) = 1;
  DAT_00584ca0 = 0;
  FUN_00472740((void *)0x005a9e04, 0x2b);
  FUN_00472720((void *)0x005a9e04);
  FUN_0048c140();
  FUN_0048c6a0();
  idx = DAT_005a7d8c << 10;
  if (DAT_005a8078[idx / 4] == 3) {
    *(undefined4 *)((int)this + 0x5024) = 0;
    FUN_004372e0((void *)((int)this + 0x22db0));
    FUN_0047c4b0((void *)((int)this + 0x228bc));
    FUN_0042e5a0((void *)((int)this + 0x3b24), DAT_005a7b78, 0);
    FUN_0045c9b0(this);
  }
  return 1;
}
