/* Rebuilt from lomse.exe op_memorystatistics @ 0x004d7590 (585 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0058787c (*(undefined4 *)0x0058787c)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_004d1dd0 ((undefined4 (__thiscall *)(void *, undefined4))0x004d1dd0)
#define FUN_0053a090 ((int (__cdecl *)(undefined1 *, ...))0x0053a090)
#define PTR_s_GraphicPage_0055e7f0 (*(void * *)0x0055e7f0)
#define PTR_s_GraphicPage_0055e928 (*(void * *)0x0055e928)
#define s___30s__10d_005725f4 (*(char (*)[])0x005725f4)

#define LOM_SELF_004d7590 1
void __cdecl rb_004d7590(void)

{
  undefined **ppuVar1;
  uchar _fr[0xd0] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined1 _t_auStack_c8[200];
#define auStack_c8 (*(_t_auStack_c8 *)(_fr + 0x0))
  
  ppuVar1 = &PTR_s_GraphicPage_0055e7f0;
  do {
    FUN_0053a090(auStack_c8,s___30s__10d_005725f4,(uint)*ppuVar1,*(undefined4 *)ppuVar1[1]);
    FUN_004d1dd0(DAT_005a7b78,auStack_c8);
    ppuVar1 = ppuVar1 + 2;
  } while (ppuVar1 < &PTR_s_GraphicPage_0055e928);
  FUN_0053a090(auStack_c8,s___30s__10d_005725f4,0x5725ec,DAT_0058787c);
  FUN_004d1dd0(DAT_005a7b78,auStack_c8);
  FUN_0053a090(auStack_c8,s___30s__10d_005725f4,0x55e144,*(undefined4 *)((int)DAT_005a7b78 + 0xa7c))
  ;
  FUN_004d1dd0(DAT_005a7b78,auStack_c8);
  FUN_0053a090(auStack_c8,s___30s__10d_005725f4,0x55e14c,*(undefined4 *)((int)DAT_005a7b78 + 0xa80))
  ;
  FUN_004d1dd0(DAT_005a7b78,auStack_c8);
  FUN_0053a090(auStack_c8,s___30s__10d_005725f4,0x55e154,*(undefined4 *)((int)DAT_005a7b78 + 0xa84))
  ;
  FUN_004d1dd0(DAT_005a7b78,auStack_c8);
  FUN_0053a090(auStack_c8,s___30s__10d_005725f4,0x5725dc,*(undefined4 *)((int)DAT_005a7b78 + 0xa88))
  ;
  FUN_004d1dd0(DAT_005a7b78,auStack_c8);
  FUN_0053a090(auStack_c8,s___30s__10d_005725f4,0x5725d0,*(undefined4 *)((int)DAT_005a7b78 + 0xa8c))
  ;
  FUN_004d1dd0(DAT_005a7b78,auStack_c8);
  FUN_0053a090(auStack_c8,s___30s__10d_005725f4,0x5725c8,*(undefined4 *)((int)DAT_005a7b78 + 0xa90))
  ;
  FUN_004d1dd0(DAT_005a7b78,auStack_c8);
  FUN_0053a090(auStack_c8,s___30s__10d_005725f4,0x55e0fc,*(undefined4 *)((int)DAT_005a7b78 + 0xa94))
  ;
  FUN_004d1dd0(DAT_005a7b78,auStack_c8);
  FUN_0053a090(auStack_c8,s___30s__10d_005725f4,0x55de90,*(undefined4 *)((int)DAT_005a7b78 + 0xa98))
  ;
  FUN_004d1dd0(DAT_005a7b78,auStack_c8);
  FUN_0053a090(auStack_c8,s___30s__10d_005725f4,0x5725b8,*(undefined4 *)((int)DAT_005a7b78 + 0xa9c))
  ;
  FUN_004d1dd0(DAT_005a7b78,auStack_c8);
  return;
#undef auStack_c8
}
