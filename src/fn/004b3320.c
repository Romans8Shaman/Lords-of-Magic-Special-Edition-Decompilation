/* Rebuilt from lomse.exe FUN_004b3320 @ 0x004b3320 (608 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055aef0 (*(undefined *)0x0055aef0)
#define DAT_0055aef8 (*(undefined *)0x0055aef8)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005867bc (*(int * *)0x005867bc)
#define FUN_004fe6e0 ((undefined4 (__thiscall *)(void *, LPCSTR))0x004fe6e0)
#define FUN_005394d0 ((undefined4 (__cdecl *)(int *))0x005394d0)
#define FUN_005397f0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005397f0)
#define FUN_0053a140 ((int (__cdecl *)(int *, int, DWORD))0x0053a140)
#define FUN_00548e10 ((DWORD (__cdecl *)(uint))0x00548e10)
#define FUN_00548ec0 ((undefined4 (__cdecl *)(int))0x00548ec0)
#define _strncmp ((int (__cdecl *)(char *, char *, size_t))0x0053aa30)

#define LOM_SELF_004b3320 1
undefined4 __thiscall rb_004b3320(void *this, LPCSTR volatile param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  DWORD DVar4;
  uint uVar5;
  uchar _fr[0x48] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef char _t_local_3e[2];
  typedef char _t_local_3c[4];
  typedef int _t_local_38;
  typedef uint _t_local_34;
  typedef int _t_local_30;
  typedef uint _t_local_2c;
  typedef char _t_local_28[4];
  typedef undefined2 _t_local_24;
  typedef undefined2 _t_uStack_22;
  typedef int _t_local_20;
  typedef int _t_local_1c;
  typedef undefined4 _t_local_18;
  typedef undefined4 _t_local_14;
  typedef undefined4 _t_local_10;
  typedef undefined4 _t_local_c;
  typedef undefined4 _t_local_8;
  typedef undefined2 * _t_local_4;
#define local_3e (*(_t_local_3e *)(_fr + 0x2))
#define local_3c (*(_t_local_3c *)(_fr + 0x4))
#define local_38 (*(_t_local_38 *)(_fr + 0x8))
#define local_34 (*(_t_local_34 *)(_fr + 0xc))
#define local_30 (*(_t_local_30 *)(_fr + 0x10))
#define local_2c (*(_t_local_2c *)(_fr + 0x14))
#define local_28 (*(_t_local_28 *)(_fr + 0x18))
#define local_24 (*(_t_local_24 *)(_fr + 0x1c))
#define uStack_22 (*(_t_uStack_22 *)(_fr + 0x1e))
#define local_20 (*(_t_local_20 *)(_fr + 0x20))
#define local_1c (*(_t_local_1c *)(_fr + 0x24))
#define local_18 (*(_t_local_18 *)(_fr + 0x28))
#define local_14 (*(_t_local_14 *)(_fr + 0x2c))
#define local_10 (*(_t_local_10 *)(_fr + 0x30))
#define local_c (*(_t_local_c *)(_fr + 0x34))
#define local_8 (*(_t_local_8 *)(_fr + 0x38))
#define _local_24 (*(undefined4 *)(_fr + 0x1c))
#define local_4 (*(_t_local_4 *)(_fr + 0x3c))
  
  if (DAT_005867bc == (int *)0x0) {
    return 0;
  }
  if (*(int *)((int)this + 4) != 0) {
    return 0;
  }
  piVar2 = (int *)FUN_004fe6e0(&DAT_00584ae8,param_1);
  *(int **)((int)this + 4) = piVar2;
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  FUN_0053a140(piVar2,0xc,1);
  piVar2 = *(int **)((int)this + 4);
  bVar1 = *(byte *)(piVar2 + 3);
  do {
    if ((bVar1 & 0x10) != 0) {
LAB_004b34a2:
      _local_24 = CONCAT22((short)local_34,1);
      uVar5 = (int)((local_2c & 0xffff) * (local_34 & 0xffff)) >> 3;
      local_18 = CONCAT22((short)local_2c,(short)uVar5);
      local_20 = local_30;
      local_1c = local_30 * (uVar5 & 0xffff);
      local_c = *(undefined4 *)((int)this + 0x14);
      local_4 = &local_24;
      local_14 = 0x14;
      local_10 = 0xe0;
      local_8 = 0;
      iVar3 = ((undefined4 (__stdcall *)(__typeof__(DAT_005867bc), __typeof__(&local_14), __typeof__(this), __typeof__(0)))(**(code **)(*DAT_005867bc + 0xc)))(DAT_005867bc,&local_14,this,0);
      if (iVar3 == 0) {
        *(undefined4 *)((int)this + 8) = 0;
        return 1;
      }
      if (*(int **)((int)this + 4) != (int *)0x0) {
        FUN_005394d0(*(int **)((int)this + 4));
        *(undefined4 *)((int)this + 4) = 0;
      }
      return 0;
    }
    FUN_005397f0(local_3c,4,1,piVar2);
    FUN_005397f0((char *)&local_38,4,1,*(int **)((int)this + 4));
    iVar3 = _strncmp(local_3c,&DAT_0055aef8,3);
    if (iVar3 == 0) {
      FUN_005397f0((char *)&param_1,2,1,*(int **)((int)this + 4));
      FUN_005397f0((char *)&local_34,2,1,*(int **)((int)this + 4));
      FUN_005397f0((char *)&local_30,4,1,*(int **)((int)this + 4));
      FUN_005397f0(local_28,4,1,*(int **)((int)this + 4));
      FUN_005397f0(local_3e,2,1,*(int **)((int)this + 4));
      FUN_005397f0((char *)&local_2c,2,1,*(int **)((int)this + 4));
      iVar3 = local_38 + -0x10;
    }
    else {
      iVar3 = _strncmp(local_3c,&DAT_0055aef0,4);
      if (iVar3 == 0) {
        uVar5 = FUN_00548ec0(*(int *)((int)this + 4));
        DVar4 = FUN_00548e10(uVar5);
        *(DWORD *)((int)this + 0x10) = DVar4;
        goto LAB_004b34a2;
      }
      iVar3 = local_38;
    }
    FUN_0053a140(*(int **)((int)this + 4),iVar3,1);
    piVar2 = *(int **)((int)this + 4);
    bVar1 = *(byte *)(piVar2 + 3);
  } while( true );
#undef local_3e
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef uStack_22
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_10
#undef local_c
#undef local_8
#undef local_4
#undef _local_24
}
