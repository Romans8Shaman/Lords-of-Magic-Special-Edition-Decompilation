/* Rebuilt from lomse.exe FUN_00509420 @ 0x00509420 (327 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_005091c0 ((undefined4 (__fastcall *)(undefined4 *))0x005091c0)
#define FUN_0053a090 ((int (__cdecl *)(undefined1 *, ...))0x0053a090)
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_TileSet__SelfMatch___invalid_sel_00573820 (*(char (*)[])0x00573820)

#define LOM_SELF_00509420 1
undefined4 __thiscall rb_00509420(void *this,uint in_stack_4)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  undefined4 *puVar9;
  int iVar10;
  uchar _fr[0x48] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_40;
  typedef CHAR _t_local_34[52];
#define local_40 (*(_t_local_40 *)(_fr + 0x0))
#define local_34 (*(_t_local_34 *)(_fr + 0xc))
  
  bVar3 = (byte)in_stack_4;
  puVar9 = *(undefined4 **)((int)this + 0x38);
  for (uVar4 = *(uint *)((int)this + 0x2c) & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined1 *)puVar9 = 0;
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  if (((int)in_stack_4 < 0) || (*(int *)((int)this + 0x14) <= (int)in_stack_4)) {
    FUN_0053a090(local_34,s_TileSet__SelfMatch___invalid_sel_00573820,in_stack_4);
    OutputDebugStringA(local_34);
    in_stack_4 = 0;
  }
  if (*(int *)this == 0) {
    FUN_005091c0(this);
  }
  piVar1 = (int *)((int)this + 0x30);
  iVar5 = in_stack_4 * 4;
  *piVar1 = 0;
  local_40 = *(int *)(iVar5 + *(int *)((int)this + 0x1c));
  if (local_40 < *(int *)(iVar5 + *(int *)((int)this + 0x20)) + local_40) {
    iVar6 = local_40 * 0x2c;
    do {
      iVar7 = *(int *)((int)this + 0xc);
      iVar10 = 0;
      puVar8 = (uint *)(iVar6 + 0xc + iVar7);
      do {
        if ((*puVar8 & 1 << (bVar3 & 0x1f)) == 0) break;
        iVar10 = iVar10 + 1;
        puVar8 = puVar8 + 1;
      } while (iVar10 < 8);
      if ((iVar10 == 8) && (iVar10 = 0, 0 < *(int *)(iVar6 + 4 + iVar7))) {
        do {
          iVar2 = *(int *)((int)this + 0x38);
          if (*(int *)(iVar2 + *(int *)(*(int *)(iVar6 + iVar7) + iVar10 * 4) * 4) == 0) {
            iVar7 = *(int *)(*(int *)(iVar6 + iVar7) + iVar10 * 4);
            *(int *)(iVar2 + iVar7 * 4) = *(int *)(iVar2 + iVar7 * 4) + 1;
            *(undefined4 *)(*(int *)((int)this + 0x34) + *piVar1 * 4) =
                 *(undefined4 *)(*(int *)(iVar6 + *(int *)((int)this + 0xc)) + iVar10 * 4);
            *piVar1 = *piVar1 + 1;
          }
          iVar7 = *(int *)((int)this + 0xc);
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(iVar6 + 4 + iVar7));
      }
      local_40 = local_40 + 1;
      iVar6 = iVar6 + 0x2c;
    } while (local_40 <
             *(int *)(iVar5 + *(int *)((int)this + 0x20)) +
             *(int *)(iVar5 + *(int *)((int)this + 0x1c)));
  }
  return piVar1;
#undef local_40
#undef local_34
}
