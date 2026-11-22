/* Rebuilt from lomse.exe op_getunithitpoints @ 0x0052a180 (130 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_0041bf10 ((undefined4 (__cdecl *)(void *, int *, int *))0x0041bf10)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00521fc0 ((int (__fastcall *)(int *))0x00521fc0)

#define LOM_SELF_0052a180 1
void __cdecl rb_0052a180(void *volatile param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  iVar3 = FUN_0041bf10(param_1,&local_4,(int *)&param_1);
  if (iVar3 != 0) {
    iVar3 = FUN_00521fc0((int *)(local_4 + 0xc4 + (int)param_1 * 0x4c));
    pvVar2 = DAT_005a7b78;
    if (*(int *)((int)DAT_005a7b78 + 0x54) != 0) {
      iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
      iVar1 = *(int *)((int)pvVar2 + 0x50);
      *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
      *(int *)(iVar1 + 4 + iVar4 * 8) = iVar3;
      return;
    }
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  }
  return;
#undef local_4
}
