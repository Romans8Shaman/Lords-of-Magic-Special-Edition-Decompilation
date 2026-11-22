/* Rebuilt from lomse.exe op_tickalarm @ 0x0040b850 (662 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aee78 (*(undefined *)0x005aee78)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_0040b0b0 ((undefined4 (__fastcall *)(int))0x0040b0b0)
#define FUN_0040b0d0 ((undefined4 (__stdcall *)(void))0x0040b0d0)
#define FUN_0040b460 ((undefined4 (__thiscall *)(void *, undefined4 *, int))0x0040b460)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define s_invalid_arg_00555738 (*(char (*)[])0x00555738)
#define s_too_many_args_00555744 (*(char (*)[])0x00555744)

#define LOM_SELF_0040b850 1
void __cdecl rb_0040b850(void *volatile param_1)

{
  bool bVar1;
  void *this;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uchar _fr[0x78] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_70;
  typedef uint _t_local_6c;
  typedef uint _t_local_68;
  typedef undefined4 _t_local_64;
  typedef uint _t_local_60;
  typedef undefined4 _t_local_5c;
  typedef uint _t_local_58;
  typedef uint _t_local_54;
  typedef uint _t_local_50;
  typedef uint _t_local_4c;
  typedef uint _t_local_48;
  typedef undefined4 _t_local_44;
  typedef uint _t_auStack_40[10];
  typedef int _t_local_18;
#define local_70 (*(_t_local_70 *)(_fr + 0x0))
#define local_6c (*(_t_local_6c *)(_fr + 0x4))
#define local_68 (*(_t_local_68 *)(_fr + 0x8))
#define local_64 (*(_t_local_64 *)(_fr + 0xc))
#define local_60 (*(_t_local_60 *)(_fr + 0x10))
#define local_5c (*(_t_local_5c *)(_fr + 0x14))
#define local_58 (*(_t_local_58 *)(_fr + 0x18))
#define local_54 (*(_t_local_54 *)(_fr + 0x1c))
#define local_50 (*(_t_local_50 *)(_fr + 0x20))
#define local_4c (*(_t_local_4c *)(_fr + 0x24))
#define local_48 (*(_t_local_48 *)(_fr + 0x28))
#define local_44 (*(_t_local_44 *)(_fr + 0x2c))
#define auStack_40 (*(_t_auStack_40 *)(_fr + 0x30))
#define local_18 (*(_t_local_18 *)(_fr + 0x58))

  FUN_0040b0b0((int)&local_58);
  this = param_1;
  local_18 = 0;
  FUN_0040adb0(param_1,&local_60);
  iVar2 = FUN_004026a0(&local_60,&local_70,&local_6c,(undefined4 *)&param_1);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  else {
    local_4c = local_70;
    FUN_0040adb0(this,&local_60);
    iVar2 = FUN_004026a0(&local_60,&local_50,&local_6c,(undefined4 *)&param_1);
    if (iVar2 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
    }
    else {
      FUN_0040adb0(this,&local_60);
      iVar2 = FUN_004026a0(&local_60,&local_70,&local_6c,(undefined4 *)&param_1);
      if (iVar2 == 0) {
        *(undefined4 *)((int)this + 0x90) = 0xe;
      }
      else {
        local_54 = local_70;
        FUN_0040adb0(this,&local_60);
        iVar2 = FUN_004026a0(&local_60,&local_70,&local_6c,(undefined4 *)&param_1);
        if (iVar2 == 0) {
          *(undefined4 *)((int)this + 0x90) = 0xe;
        }
        else {
          local_58 = local_70;
          do {
            if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
              iVar2 = *(int *)((int)this + 0x54) + 1;
              *(int *)((int)this + 0x54) = iVar2;
              local_68 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
              local_64 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
            }
            else {
              *(undefined4 *)((int)this + 0x90) = 6;
              FUN_004d4550(this);
              *(undefined4 *)((int)this + 0x90) = 0;
              *(undefined4 *)((int)this + 0xa4) = 0;
              local_68 = 0;
              local_64 = local_5c;
            }
            if ((local_68 & 0xff) == 0) goto LAB_0040bac2;
            if (((local_68 & 0xff) != 5) || ((local_68 & 0x100) != 0)) {
              if (9 < local_18) {
                FUN_004d41c0(this,s_too_many_args_00555744);
                goto LAB_0040bac2;
              }
              iVar2 = FUN_004026a0(&local_68,auStack_40 + local_18,&local_6c,(undefined4 *)&param_1);
              if (iVar2 == 0) {
                FUN_004d41c0(this,s_invalid_arg_00555738);
                goto LAB_0040bac2;
              }
              local_18 = local_18 + 1;
            }
            if (((char)local_68 == '\x05') && ((local_68 & 0x100) == 0)) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
          } while (!bVar1);
          local_44 = local_64;
          local_48 = local_68;
          uVar3 = FUN_0040b460(&DAT_005aee78,&local_58,-1);
          if (*(int *)((int)this + 0x54) != 0) {
            iVar4 = *(int *)((int)this + 0x54) + -1;
            *(int *)((int)this + 0x54) = iVar4;
            iVar2 = *(int *)((int)this + 0x50);
            *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
            *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = uVar3;
            goto LAB_0040bac2;
          }
          *(undefined4 *)((int)this + 0x90) = 3;
        }
      }
    }
  }
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
LAB_0040bac2:
  FUN_0040b0d0();
  return;
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef auStack_40
#undef local_18
}
