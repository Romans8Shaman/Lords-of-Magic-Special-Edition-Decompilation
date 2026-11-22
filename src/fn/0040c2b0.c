/* Rebuilt from lomse.exe op_turnalarm @ 0x0040c2b0 (711 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aee8c (*(undefined *)0x005aee8c)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_0040bb10 ((undefined4 (__fastcall *)(int))0x0040bb10)
#define FUN_0040bb30 ((undefined4 (__stdcall *)(void))0x0040bb30)
#define FUN_0040bec0 ((undefined4 (__thiscall *)(void *, undefined4 *, int))0x0040bec0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define s_invalid_arg_00555738 (*(char (*)[])0x00555738)
#define s_too_many_args_00555744 (*(char (*)[])0x00555744)

#define LOM_SELF_0040c2b0 1
void __cdecl rb_0040c2b0(void *volatile param_1)

{
  bool bVar1;
  void *this;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uchar _fr[0x80] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_74;
  typedef uint _t_local_70;
  typedef uint _t_local_6c;
  typedef undefined4 _t_local_68;
  typedef uint _t_local_64;
  typedef undefined4 _t_local_60;
  typedef uint _t_local_5c;
  typedef uint _t_local_58;
  typedef uint _t_local_54;
  typedef uint _t_local_50;
  typedef uint _t_local_4c;
  typedef uint _t_local_48;
  typedef undefined4 _t_local_44;
  typedef uint _t_auStack_40[10];
  typedef int _t_local_18;
#define local_74 (*(_t_local_74 *)(_fr + 0x4))
#define local_70 (*(_t_local_70 *)(_fr + 0x8))
#define local_6c (*(_t_local_6c *)(_fr + 0xc))
#define local_68 (*(_t_local_68 *)(_fr + 0x10))
#define local_64 (*(_t_local_64 *)(_fr + 0x14))
#define local_60 (*(_t_local_60 *)(_fr + 0x18))
#define local_5c (*(_t_local_5c *)(_fr + 0x1c))
#define local_58 (*(_t_local_58 *)(_fr + 0x20))
#define local_54 (*(_t_local_54 *)(_fr + 0x24))
#define local_50 (*(_t_local_50 *)(_fr + 0x28))
#define local_4c (*(_t_local_4c *)(_fr + 0x2c))
#define local_48 (*(_t_local_48 *)(_fr + 0x30))
#define local_44 (*(_t_local_44 *)(_fr + 0x34))
#define auStack_40 (*(_t_auStack_40 *)(_fr + 0x38))
#define local_18 (*(_t_local_18 *)(_fr + 0x60))

  FUN_0040bb10((int)&local_5c);
  this = param_1;
  local_18 = 0;
  FUN_0040adb0(param_1,&local_64);
  iVar2 = FUN_004026a0(&local_64,&local_74,&local_70,(undefined4 *)&param_1);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  else {
    local_4c = local_74;
    FUN_0040adb0(this,&local_64);
    iVar2 = FUN_004026a0(&local_64,&local_50,&local_70,(undefined4 *)&param_1);
    if (iVar2 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
    }
    else {
      FUN_0040adb0(this,&local_64);
      iVar2 = FUN_004026a0(&local_64,&local_54,&local_70,(undefined4 *)&param_1);
      if (iVar2 == 0) {
        *(undefined4 *)((int)this + 0x90) = 0xe;
      }
      else {
        FUN_0040adb0(this,&local_64);
        iVar2 = FUN_004026a0(&local_64,&local_58,&local_70,(undefined4 *)&param_1);
        if (iVar2 == 0) {
          *(undefined4 *)((int)this + 0x90) = 0xe;
        }
        else {
          FUN_0040adb0(this,&local_64);
          iVar2 = FUN_004026a0(&local_64,&local_5c,&local_70,(undefined4 *)&param_1);
          if (iVar2 == 0) {
            *(undefined4 *)((int)this + 0x90) = 0xe;
          }
          else {
            do {
              if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
                iVar2 = *(int *)((int)this + 0x54) + 1;
                *(int *)((int)this + 0x54) = iVar2;
                local_6c = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
                local_68 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
              }
              else {
                *(undefined4 *)((int)this + 0x90) = 6;
                FUN_004d4550(this);
                *(undefined4 *)((int)this + 0x90) = 0;
                *(undefined4 *)((int)this + 0xa4) = 0;
                local_6c = 0;
                local_68 = local_60;
              }
              if ((local_6c & 0xff) == 0) goto LAB_0040c550;
              if (((local_6c & 0xff) != 5) || ((local_6c & 0x100) != 0)) {
                if (9 < local_18) {
                  FUN_004d41c0(this,s_too_many_args_00555744);
                  goto LAB_0040c550;
                }
                iVar2 = FUN_004026a0(&local_6c,auStack_40 + local_18,&local_70,(undefined4 *)&param_1);
                if (iVar2 == 0) {
                  FUN_004d41c0(this,s_invalid_arg_00555738);
                  goto LAB_0040c550;
                }
                local_18 = local_18 + 1;
              }
              if (((char)local_6c == '\x05') && ((local_6c & 0x100) == 0)) {
                bVar1 = true;
              }
              else {
                bVar1 = false;
              }
            } while (!bVar1);
            local_44 = local_68;
            local_48 = local_6c;
            uVar3 = FUN_0040bec0(&DAT_005aee8c,&local_5c,-1);
            if (*(int *)((int)this + 0x54) != 0) {
              iVar4 = *(int *)((int)this + 0x54) + -1;
              *(int *)((int)this + 0x54) = iVar4;
              iVar2 = *(int *)((int)this + 0x50);
              *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
              *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = uVar3;
              goto LAB_0040c550;
            }
            *(undefined4 *)((int)this + 0x90) = 3;
          }
        }
      }
    }
  }
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
LAB_0040c550:
  FUN_0040bb30();
  return;
#undef local_74
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
