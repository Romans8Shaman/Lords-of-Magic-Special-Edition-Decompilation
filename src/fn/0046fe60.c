/* Rebuilt from lomse.exe FUN_0046fe60 @ 0x0046fe60 (208 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055b1b0 (*(undefined4 *)0x0055b1b0)
#define DAT_00584d54 (*(undefined4 *)0x00584d54)
#define LAB_004704d0 (*(undefined *)0x004704d0) /* code label used as address */
#define LAB_00470bc0 (*(undefined *)0x00470bc0) /* code label used as address */
#define LAB_00470c30 (*(undefined *)0x00470c30) /* code label used as address */
#define Ordinal_116 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4, undefined4))0x0053387c) /* thunk -> STORM.DLL!Ordinal_116 */
#define s_Lords_of_Magic_00557c1c (*(char (*)[])0x00557c1c)

#define LOM_SELF_0046fe60 1
uint __thiscall rb_0046fe60(void *this,undefined4 param_1)

{
  int iVar1;
  char **ppcVar2;
  undefined1 **ppuVar3;
  uchar _fr[0xa8] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_9c;
  typedef int _t_local_98;
  typedef undefined4 _t_local_94;
  typedef undefined4 _t_local_90;
  typedef char * _t_local_8c[6];
  typedef undefined4 _t_local_74;
  typedef undefined1 * _t_local_50[5];
  typedef undefined1 * _t_local_3c;
  typedef undefined1 * _t_local_28;
#define local_9c (*(_t_local_9c *)(_fr + 0x4))
#define local_98 (*(_t_local_98 *)(_fr + 0x8))
#define local_94 (*(_t_local_94 *)(_fr + 0xc))
#define local_90 (*(_t_local_90 *)(_fr + 0x10))
#define local_8c (*(_t_local_8c *)(_fr + 0x14))
#define local_74 (*(_t_local_74 *)(_fr + 0x2c))
#define local_50 (*(_t_local_50 *)(_fr + 0x50))
#define local_3c (*(_t_local_3c *)(_fr + 0x64))
#define local_28 (*(_t_local_28 *)(_fr + 0x78))
  
  ppcVar2 = local_8c;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppcVar2 = (char *)0x0;
    ppcVar2 = ppcVar2 + 1;
  }
  local_8c[4] = (char *)DAT_0055b1b0;
  local_94 = 0;
  local_74 = 0x10;
  local_90 = 0;
  local_9c = 0x10;
  local_98 = (int)this + 0x104;
  ppuVar3 = local_50;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppuVar3 = (undefined1 *)0x0;
    ppuVar3 = ppuVar3 + 1;
  }
  local_50[2] = (undefined1 *)DAT_00584d54;
  local_8c[0] = (char *)0x3c;
  local_8c[1] = s_Lords_of_Magic_00557c1c;
  local_8c[3] = (char *)0x44545354;
  local_50[0] = (undefined1 *)0x50;
  local_50[3] = &LAB_004704d0;
  local_3c = &LAB_00470bc0;
  local_28 = &LAB_00470c30;
  iVar1 = Ordinal_116(param_1,local_8c,&local_9c,local_50,0);
  return (uint)(iVar1 != 0);
#undef local_9c
#undef local_98
#undef local_94
#undef local_90
#undef local_8c
#undef local_74
#undef local_50
#undef local_3c
#undef local_28
}
