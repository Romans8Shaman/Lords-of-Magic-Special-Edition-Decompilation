/* Rebuilt from lomse.exe FUN_00483d30 @ 0x00483d30 (316 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005cd18c (*(undefined *)0x005cd18c)
#define DAT_005d1e84 (*(void * *)0x005d1e84)
#define FUN_00489b70 ((undefined4 (__thiscall *)(void *, int *))0x00489b70)
#define FUN_0048c420 ((int (__cdecl *)(uint))0x0048c420)
#define FUN_0048cc70 ((int (__thiscall *)(void *, undefined1))0x0048cc70)
#define FUN_004b1e60 ((undefined4 (__stdcall *)(DWORD *, int *, int))0x004b1e60)
#define FUN_004b7890 ((int (__thiscall *)(void *, int))0x004b7890)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)
#define FUN_004f5f40 ((undefined4 (__fastcall *)(int))0x004f5f40)
#define FUN_0052b260 ((undefined4 (__fastcall *)(int *))0x0052b260)

#define LOM_SELF_00483d30 1
undefined4 __fastcall
rb_00483d30(int param_1,undefined4 unused_reg_1,undefined4 unused_stack_0,undefined4 unused_stack_4
            )

{
  int iVar1;
  int iVar2;
  void *this;
  uint uVar3;
  bool bVar4;
  uchar _fr[0x110] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_108[5];
  typedef DWORD _t_local_f3;
  typedef int _t_local_ef[59];
#define local_108 (*(_t_local_108 *)(_fr + 0x0))
#define local_f3 (*(_t_local_f3 *)(_fr + 0x15))
#define local_ef (*(_t_local_ef *)(_fr + 0x19))
  
  FUN_004f5f40(0x5ae974);
  FUN_0052b260((int *)&DAT_005cd18c);
  if (DAT_005d1e84 == (void *)0x0) {
    bVar4 = true;
  }
  else {
    iVar2 = *(int *)((int)DAT_005d1e84 + 0x390);
    iVar1 = FUN_004b7dd0((int)DAT_005d1e84);
    bVar4 = iVar2 == iVar1;
  }
  if ((bVar4) && (*(int *)(param_1 + 0x5034) == 0)) {
    iVar2 = FUN_0048c420(0x5e);
    if (iVar2 == 0) {
      FUN_0048cc70(local_108,0x5e);
      iVar2 = FUN_004b1e60(&local_f3,local_ef,1);
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 0x5034) = 1;
        uVar3 = 0;
        iVar2 = 1;
        this = DAT_005d1e84;
        while( true ) {
          if ((this == (void *)0x0) || (iVar1 = *(int *)((int)this + 0x100), iVar1 < 1)) {
            iVar1 = 1;
          }
          if (iVar1 < iVar2) break;
          if (this == (void *)0x0) {
            iVar1 = 1;
          }
          else {
            iVar1 = FUN_004b7dd0((int)this);
            this = DAT_005d1e84;
          }
          if (iVar2 != iVar1) {
            if (this == (void *)0x0) {
              iVar1 = 0;
            }
            else {
              iVar1 = FUN_004b7890(this,iVar2);
              this = DAT_005d1e84;
            }
            if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
              uVar3 = uVar3 | 1 << ((byte)iVar2 & 0x1f);
            }
          }
          iVar2 = iVar2 + 1;
        }
        *(uint *)(param_1 + 0x503c) = uVar3;
        *(uint *)(param_1 + 0x5038) = uVar3;
        FUN_00489b70(&DAT_00584ae8,local_108);
      }
    }
  }
  return 1;
#undef local_108
#undef local_f3
#undef local_ef
}
