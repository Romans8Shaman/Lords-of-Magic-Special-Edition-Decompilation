/* Rebuilt from lomse.exe op_getunitlevelrange @ 0x0052a090 (239 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_0041bf10 ((undefined4 (__cdecl *)(void *, int *, int *))0x0041bf10)
#define FUN_004852e0 ((undefined4 (__stdcall *)(undefined4 *))0x004852e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00529e40 ((undefined4 (__thiscall *)(void *, uint, undefined4, uint *, int *))0x00529e40)

#define LOM_SELF_0052a090 1
void __cdecl rb_0052a090(void *vm)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  uint *puVar5;
  int *piVar6;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 * _t_puStack_c;
  typedef uint _t_uStack_8;
  typedef int _t_iStack_4;
#define puStack_c (*(_t_puStack_c *)(_fr + 0x4))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x8))
#define iStack_4 (*(_t_iStack_4 *)(_fr + 0xc))
  
  iVar1 = FUN_0041bf10(vm,(int *)&puStack_c,(int *)&vm);
  if (iVar1 != 0) {
    piVar6 = &iStack_4;
    puVar5 = &uStack_8;
    pvVar4 = vm;
    uVar2 = FUN_004852e0(puStack_c);
    FUN_00529e40(puStack_c + (int)vm * 0x13 + 0x31,uVar2,__BC(undefined4, pvVar4),puVar5,piVar6);
    pvVar4 = DAT_005a7b78;
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar4);
      *(undefined4 *)((int)pvVar4 + 0x90) = 0;
      *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
    }
    else {
      iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
      iVar1 = *(int *)((int)pvVar4 + 0x50);
      *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
      *(uint *)(iVar1 + 4 + iVar3 * 8) = uStack_8;
    }
    pvVar4 = DAT_005a7b78;
    if (*(int *)((int)DAT_005a7b78 + 0x54) != 0) {
      iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
      iVar1 = *(int *)((int)pvVar4 + 0x50);
      *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
      *(int *)(iVar1 + 4 + iVar3 * 8) = iStack_4;
      return;
    }
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar4);
    *(undefined4 *)((int)pvVar4 + 0x90) = 0;
    *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
  }
  return;
#undef puStack_c
#undef uStack_8
#undef iStack_4
}
