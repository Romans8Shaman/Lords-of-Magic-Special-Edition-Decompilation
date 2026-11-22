/* Rebuilt from lomse.exe op_startordermode @ 0x00405a50 (1220 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00503040 ((undefined4 (__thiscall *)(void *, undefined4))0x00503040)
#define FUN_0052e9e0 ((undefined4 (__fastcall *)(int *))0x0052e9e0)
#define FUN_0052ea30 ((undefined4 (__fastcall *)(int *))0x0052ea30)
#define FUN_0052ea80 ((undefined4 (__fastcall *)(int *))0x0052ea80)
#define FUN_0052eaf0 ((undefined4 (__fastcall *)(int *))0x0052eaf0)
#define FUN_0052eb40 ((undefined4 (__fastcall *)(int *))0x0052eb40)
#define FUN_0052ed80 ((undefined4 (__stdcall *)(void))0x0052ed80)
#define FUN_0052ee90 ((undefined4 (__stdcall *)(void))0x0052ee90)
#define FUN_0052efa0 ((undefined4 (__stdcall *)(void))0x0052efa0)
#define FUN_0052f240 ((undefined4 (__stdcall *)(void))0x0052f240)
#define FUN_0052f4e0 ((undefined4 (__stdcall *)(void))0x0052f4e0)
#define FUN_0052fcf0 ((undefined4 (__fastcall *)(int *))0x0052fcf0)
#define FUN_0052fd60 ((undefined4 (__fastcall *)(int *))0x0052fd60)
#define FUN_0052fdc0 ((undefined4 (__fastcall *)(int *))0x0052fdc0)
#define FUN_0052fe20 ((undefined4 (__fastcall *)(int *))0x0052fe20)
#define FUN_0052fe80 ((undefined4 (__fastcall *)(int *))0x0052fe80)
#define FUN_0052fee0 ((undefined4 (__fastcall *)(int *))0x0052fee0)
#define FUN_00530390 ((undefined4 (__fastcall *)(void *))0x00530390)
#define FUN_00530420 ((undefined4 (__fastcall *)(int))0x00530420)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_00405a50 1
void __cdecl rb_00405a50(void *vm)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_4;
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0x4))
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar2 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar2 = 0;
  }
  uVar2 = uVar2 & 0xff;
  if (uVar2 != 1) {
    if (uVar2 == 2) {
      fStack_4 = __BC(float, (__BC(int, fStack_4) >> 8));
    }
    else {
      if (uVar2 != 4) {
        *(undefined4 *)((int)vm + 0x90) = 0xe;
        FUN_004d4550(vm);
        *(undefined4 *)((int)vm + 0x90) = 0;
        *(undefined4 *)((int)vm + 0xa4) = 0;
        return;
      }
      lVar3 = __ftol((float10)fStack_4);
      fStack_4 = __BC(float, lVar3);
    }
  }
  switch(__BC(int, fStack_4)) {
  case 1: /* float bits */
    FUN_00503040(&DAT_00584ae8,9);
    return;
  case 2: /* float bits */
    FUN_00503040(&DAT_00584ae8,0xb);
    return;
  case 6: /* float bits */
    FUN_00503040(&DAT_00584ae8,0x11);
    return;
  case 7: /* float bits */
    FUN_00503040(&DAT_00584ae8,7);
    return;
  case 8: /* float bits */
    FUN_00503040(&DAT_00584ae8,1);
    FUN_00530420((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
    FUN_00503040(&DAT_00584ae8,0);
    return;
  case 10: /* float bits */
    FUN_00503040(&DAT_00584ae8,8);
    return;
  case 18: /* float bits */
    FUN_00503040(&DAT_00584ae8,0x12);
    return;
  case 20: /* float bits */
    FUN_00503040(&DAT_00584ae8,1);
    FUN_0052eaf0((int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
    FUN_00503040(&DAT_00584ae8,0);
    return;
  case 21: /* float bits */
    FUN_00503040(&DAT_00584ae8,0xd);
    return;
  case 23: /* float bits */
    FUN_00503040(&DAT_00584ae8,1);
    FUN_0052eb40((int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
    FUN_00503040(&DAT_00584ae8,0);
    return;
  case 24: /* float bits */
    FUN_00503040(&DAT_00584ae8,0xf);
    return;
  case 25: /* float bits */
    FUN_00503040(&DAT_00584ae8,0x10);
    return;
  case 26: /* float bits */
    FUN_00503040(&DAT_00584ae8,1);
    FUN_0052ea30((int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
    FUN_00503040(&DAT_00584ae8,0);
    return;
  case 27: /* float bits */
    FUN_00503040(&DAT_00584ae8,1);
    FUN_0052ea80((int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
    FUN_00503040(&DAT_00584ae8,0);
    return;
  case 28: /* float bits */
    FUN_0052fcf0((int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
    return;
  case 29: /* float bits */
    FUN_0052fd60((int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
    return;
  case 30: /* float bits */
    FUN_00503040(&DAT_00584ae8,0x15);
    return;
  case 31: /* float bits */
    FUN_00503040(&DAT_00584ae8,0x16);
    return;
  case 32: /* float bits */
    FUN_00503040(&DAT_00584ae8,0x17);
    return;
  case 33: /* float bits */
    FUN_00503040(&DAT_00584ae8,0x18);
    return;
  case 34: /* float bits */
    FUN_00503040(&DAT_00584ae8,1);
    FUN_0052e9e0((int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
    FUN_00503040(&DAT_00584ae8,0);
    return;
  case 35: /* float bits */
    FUN_00503040(&DAT_00584ae8,0x1a);
    return;
  case 36: /* float bits */
    FUN_00503040(&DAT_00584ae8,0x1b);
    return;
  case 37: /* float bits */
    FUN_00503040(&DAT_00584ae8,1);
    FUN_0052ed80();
    FUN_00503040(&DAT_00584ae8,0);
    return;
  case 38: /* float bits */
    FUN_00503040(&DAT_00584ae8,1);
    FUN_0052ee90();
    FUN_00503040(&DAT_00584ae8,0);
    return;
  case 39: /* float bits */
    FUN_00503040(&DAT_00584ae8,1);
    FUN_0052efa0();
    FUN_00503040(&DAT_00584ae8,0);
    return;
  case 40: /* float bits */
    FUN_00503040(&DAT_00584ae8,1);
    FUN_0052f240();
    FUN_00503040(&DAT_00584ae8,0);
    return;
  case 41: /* float bits */
    FUN_00503040(&DAT_00584ae8,1);
    FUN_0052f4e0();
    FUN_00503040(&DAT_00584ae8,0);
    return;
  case 42: /* float bits */
    FUN_0052fdc0((int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
    return;
  case 43: /* float bits */
    FUN_0052fe20((int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
    return;
  case 44: /* float bits */
    FUN_0052fe80((int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
    return;
  case 45: /* float bits */
    FUN_0052fee0((int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
    return;
  case 46: /* float bits */
    FUN_00503040(&DAT_00584ae8,1);
    FUN_00530390(&DAT_005a7d90 + DAT_005a7d8c * 0x400);
    FUN_00503040(&DAT_00584ae8,0);
    return;
  case 47: /* float bits */
    FUN_00503040(&DAT_00584ae8,0x1c);
    return;
  case 49: /* float bits */
    FUN_00503040(&DAT_00584ae8,0x1d);
  }
  return;
#undef fStack_4
}
