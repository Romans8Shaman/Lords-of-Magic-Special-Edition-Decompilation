/* Rebuilt from lomse.exe FUN_0048e8a0 @ 0x0048e8a0 (254 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583610 (*(int *)0x00583610)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005a7aa4 (*(undefined4 *)0x005a7aa4)
#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_00476010 ((bool (__thiscall *)(void *, int, int, int, int))0x00476010)
#define FUN_0048ea90 ((undefined4 (__thiscall *)(void *, undefined4))0x0048ea90)
#define FUN_0048eb00 ((undefined4 (__thiscall *)(void *, undefined4))0x0048eb00)
#define FUN_0048ec90 ((undefined4 (__thiscall *)(void *, int *))0x0048ec90)
#define FUN_00493360 ((int (__thiscall *)(void *, int))0x00493360)
#define FUN_00497ac0 ((undefined4 (__thiscall *)(void *, int))0x00497ac0)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_005005f0 ((int (__thiscall *)(void *, uint))0x005005f0)

#define LOM_SELF_0048e8a0 1
undefined4 __fastcall rb_0048e8a0(void *param_1)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_10[4];
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
  
  FUN_004d09a0(DAT_005a7b78,*(uint *)((int)param_1 + 0xc),*(int **)((int)param_1 + 0x10),0);
  iVar3 = 0;
  if (0 < *(int *)((int)param_1 + 0x50)) {
    iVar4 = 0;
    do {
      pvVar1 = (void *)FUN_00493360(&DAT_005a7b50,
                                    *(int *)(*(int *)((int)param_1 + 0x4c) + 0xc + iVar4));
      if ((pvVar1 != (void *)0x0) && (*(int *)((int)pvVar1 + 0x10) != 0)) {
        bVar5 = DAT_00583610 == 0;
        if (bVar5) {
          DAT_00583610 = *(int *)((int)param_1 + 0x4c) + iVar4;
        }
        FUN_00497ac0(pvVar1,(uint)bVar5);
      }
      pvVar1 = (void *)FUN_005005f0(&DAT_00584ae8,
                                    *(uint *)(*(int *)((int)param_1 + 0x4c) + 0xc + iVar4));
      if (pvVar1 != (void *)0x0) {
        FUN_0048ea90(pvVar1,*(int *)(*(int *)((int)param_1 + 0x4c) + iVar4) +
                            *(int *)((int)param_1 + 0x3c));
        FUN_0048eb00(pvVar1,*(int *)(*(int *)((int)param_1 + 0x4c) + 4 + iVar4) +
                            *(int *)((int)param_1 + 0x40));
        rb_0048e8a0(pvVar1);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x2c;
    } while (iVar3 < *(int *)((int)param_1 + 0x50));
  }
  piVar2 = (int *)FUN_0048ec90(param_1,local_10);
  FUN_00476010(&DAT_005a7aa4,*piVar2,piVar2[1],piVar2[2],piVar2[3]);
  return 1;
#undef local_10
}
