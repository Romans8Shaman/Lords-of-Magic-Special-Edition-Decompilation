/* Rebuilt from lomse.exe FUN_00498900 @ 0x00498900 (401 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae9c4 (*(int *)0x005ae9c4)
#define DAT_005ae9c8 (*(int *)0x005ae9c8)
#define DAT_005aebd0 (*(undefined *)0x005aebd0)
#define FUN_004052d0 ((undefined4 (__thiscall *)(void *, int, int, undefined4, int, undefined1))0x004052d0)
#define FUN_0045a360 ((undefined4 (__cdecl *)(int *, int *, char))0x0045a360)
#define FUN_00498440 ((undefined4 (__thiscall *)(void *, undefined1, int, int))0x00498440)
#define FUN_00498470 ((undefined4 (__fastcall *)(int *))0x00498470)
#define FUN_00498b10 ((undefined4 (__thiscall *)(void *, undefined4 *, int))0x00498b10)
#define FUN_00498c90 ((undefined4 (__thiscall *)(void *, int))0x00498c90)
#define FUN_004a51c0 ((int (__thiscall *)(void *, int, int))0x004a51c0)

#define LOM_SELF_00498900 1
undefined4 __thiscall
rb_00498900(void *this, int volatile param_1, int volatile param_2, int volatile param_3, int volatile param_4, uint volatile param_5)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *this_00;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_18;
  typedef void * _t_local_14;
  typedef int _t_local_10;
  typedef int _t_local_c;
  typedef int _t_local_8;
  typedef int _t_local_4;
#define local_18 (*(_t_local_18 *)(_fr + 0x0))
#define local_14 (*(_t_local_14 *)(_fr + 0x4))
#define local_10 (*(_t_local_10 *)(_fr + 0x8))
#define local_c (*(_t_local_c *)(_fr + 0xc))
#define local_8 (*(_t_local_8 *)(_fr + 0x10))
#define local_4 (*(_t_local_4 *)(_fr + 0x14))
  
  iVar5 = param_4;
  iVar4 = param_1;
  if (((-1 < param_1) && (param_1 < 10)) &&
     (iVar3 = FUN_00498c90(&DAT_005aebd0,param_4), iVar3 != 0)) {
    local_14 = (void *)(iVar4 * 0x10 + (int)this);
    this_00 = (int *)((int)local_14 + 0x5e4);
    iVar4 = FUN_00498470(this_00);
    if (iVar4 == 0) {
      FUN_00498440(this_00,(char)iVar5,param_2,param_3);
      uVar2 = param_5;
      puVar1 = (uint *)*this_00;
      param_3 = *(int *)(*(int *)(&DAT_005aebd0 + iVar5 * 4) + 0xa0);
      local_10 = DAT_005ae9c4;
      local_c = DAT_005ae9c8;
      for (iVar4 = 0; (puVar1 != (uint *)0x0 && (iVar4 < param_3)); iVar4 = iVar4 + 1) {
        param_5 = *puVar1;
        *(char *)(puVar1 + 2) = (char)iVar4;
        iVar5 = FUN_00498b10(*(void **)(&DAT_005aebd0 + param_4 * 4),&local_8,iVar4);
        if (iVar5 != 0) {
          param_1 = local_8;
          local_18 = local_4;
          FUN_0045a360(&param_1,&local_18,*(char *)((int)local_14 + 0x5e8));
          iVar5 = param_2 % DAT_005ae9c4 + param_1;
          iVar3 = param_2 / DAT_005ae9c4 - local_18;
          if (iVar5 < 0) {
            iVar5 = 0;
          }
          else if (local_10 <= iVar5) {
            iVar5 = local_10 + -1;
          }
          if (iVar3 < 0) {
            iVar3 = 0;
          }
          else if (local_c <= iVar3) {
            iVar3 = local_c + -1;
          }
          iVar5 = FUN_004a51c0(&DAT_005ae958,iVar5,iVar3);
          if ((uVar2 & 0x800) == 0) {
            FUN_004052d0(&DAT_005aa12c,*(int *)(param_5 + 0x28),0xc,0xffffffff,iVar5,(char)uVar2);
          }
        }
        puVar1 = (uint *)puVar1[1];
      }
      return 1;
    }
  }
  return 0;
#undef local_18
#undef local_14
#undef local_10
#undef local_c
#undef local_8
#undef local_4
}
