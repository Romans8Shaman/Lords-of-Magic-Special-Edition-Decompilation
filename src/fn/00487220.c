/* Rebuilt from lomse.exe FUN_00487220 @ 0x00487220 (319 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00556168 (*(undefined *)0x00556168)
#define DAT_00586770 (*(undefined4 *)0x00586770)
#define DAT_00586774 (*(undefined4 *)0x00586774)
#define DAT_00586778 (*(undefined4 *)0x00586778)
#define DAT_0058677c (*(undefined4 *)0x0058677c)
#define DAT_00586784 (*(undefined4 *)0x00586784)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a8080 (*(undefined *)0x005a8080)
#define DAT_005d20bc (*(undefined4 *)0x005d20bc)
#define FUN_005394d0 ((undefined4 (__cdecl *)(int *))0x005394d0)
#define FUN_00539610 ((undefined4 (__cdecl *)(LPCSTR, char *))0x00539610)
#define FUN_00539660 ((uint (__cdecl *)(char *, uint, uint, int *))0x00539660)
#define s_lom_cfg_0055b4b8 (*(char (*)[])0x0055b4b8)

#define LOM_SELF_00487220 1
undefined4 __fastcall rb_00487220(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_00539610(s_lom_cfg_0055b4b8,&DAT_00556168);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  FUN_00539660((char *)&DAT_00586770,4,1,piVar1);
  FUN_00539660((char *)&DAT_00586774,4,1,piVar1);
  FUN_00539660((char *)&DAT_00586778,4,1,piVar1);
  FUN_00539660((char *)&DAT_0058677c,4,1,piVar1);
  if (*(int *)(param_1 + 0xcc) != 0) {
    FUN_00539660((char *)(param_1 + 200),4,1,piVar1);
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 200)) {
      iVar2 = 0;
      do {
        FUN_00539660((char *)(*(int *)(param_1 + 0xcc) + 4 + iVar2),4,1,piVar1);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0xc;
      } while (iVar3 < *(int *)(param_1 + 200));
    }
  }
  FUN_00539660((char *)(param_1 + 0x28),4,1,piVar1);
  FUN_00539660(&DAT_005a8080 + DAT_005a7d8c * 0x400,4,1,piVar1);
  FUN_00539660((char *)(param_1 + 8),0x10,1,piVar1);
  FUN_00539660((char *)&DAT_00586784,4,1,piVar1);
  FUN_00539660((char *)(param_1 + 300),4,1,piVar1);
  FUN_00539660((char *)&DAT_005d20bc,4,1,piVar1);
  FUN_005394d0(piVar1);
  return 1;
}
