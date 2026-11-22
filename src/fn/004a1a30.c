/* Rebuilt from lomse.exe FUN_004a1a30 @ 0x004a1a30 (148 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FUN_00489b70 ((undefined4 (__thiscall *)(void *, int *))0x00489b70)
#define FUN_0048cc40 ((int (__fastcall *)(int))0x0048cc40)
#define FUN_004a19a0 ((undefined4 (__thiscall *)(void *, int, int))0x004a19a0)

#define LOM_SELF_004a1a30 1
undefined4 __fastcall rb_004a1a30(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uchar _fr[0x110] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_108;
  typedef undefined1 _t_local_104;
  typedef undefined1 _t_local_f3;
  typedef char _t_acStack_f2[50];
  typedef undefined1 _t_local_c0;
  typedef char _t_acStack_bf[191];
#define local_108 (*(_t_local_108 *)(_fr + 0x0))
#define local_104 (*(_t_local_104 *)(_fr + 0x4))
#define local_f3 (*(_t_local_f3 *)(_fr + 0x15))
#define acStack_f2 (*(_t_acStack_f2 *)(_fr + 0x16))
#define local_c0 (*(_t_local_c0 *)(_fr + 0x48))
#define acStack_bf (*(_t_acStack_bf *)(_fr + 0x49))
  
  FUN_0048cc40((int)&local_108);
  local_f3 = *(undefined1 *)(param_1 + 0x6a8);
  local_c0 = *(undefined1 *)(param_1 + 0xc84);
  bVar1 = false;
  iVar3 = 0;
  local_104 = 0x33;
  do {
    uVar2 = FUN_004a19a0((void *)(param_1 + 0x22ed0),0,iVar3);
    acStack_f2[iVar3] = (char)uVar2;
    uVar2 = FUN_004a19a0((void *)(param_1 + 0x22ed0),1,iVar3);
    acStack_bf[iVar3] = (char)uVar2;
    if ((acStack_f2[iVar3] != -1) || ((char)uVar2 != -1)) {
      bVar1 = true;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x32);
  if (bVar1) {
    uVar2 = FUN_00489b70(&DAT_00584ae8,&local_108);
    return uVar2;
  }
  return 0;
#undef local_108
#undef local_104
#undef local_f3
#undef acStack_f2
#undef local_c0
#undef acStack_bf
}
