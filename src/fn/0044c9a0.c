/* Rebuilt from lomse.exe op_savedefaultarmy @ 0x0044c9a0 (179 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00556168 (*(undefined *)0x00556168)
#define DAT_005869f4 (*(int * *)0x005869f4)
#define DAT_00586a3c (*(undefined4 *)0x00586a3c)
#define DAT_00586a40 (*(undefined4 *)0x00586a40)
#define DAT_00586a44 (*(undefined4 *)0x00586a44)
#define DAT_00586a48 (*(undefined4 *)0x00586a48)
#define DAT_00586a4c (*(undefined *)0x00586a4c)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define DAT_005d22f0 (*(undefined1 *)0x005d22f0)
#define FUN_005394d0 ((undefined4 (__cdecl *)(int *))0x005394d0)
#define FUN_00539610 ((undefined4 (__cdecl *)(LPCSTR, char *))0x00539610)
#define FUN_00539660 ((uint (__cdecl *)(char *, uint, uint, int *))0x00539660)
#define FUN_0053a090 ((int (__cdecl *)(undefined1 *, ...))0x0053a090)
#define s_custldr__dtempldr_ldr_005572f0 (*(char (*)[])0x005572f0)

#define LOM_SELF_0044c9a0 1
void __cdecl rb_0044c9a0(void * vm)

{
  int *piVar1;
  
  FUN_0053a090(&DAT_005d22f0,s_custldr__dtempldr_ldr_005572f0,
               *(uint *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
  piVar1 = (int *)FUN_00539610(&DAT_005d22f0,&DAT_00556168);
  if (piVar1 != (int *)0x0) {
    FUN_00539660(&DAT_00586a4c,0x2a0,1,piVar1);
    /* HAND: ECX = DAT_005869f4 (mov ecx,[edi]; call [vtbl+0x20]) */
    ((void (__thiscall *)(int *, int *))(**(code **)(*DAT_005869f4 + 0x20)))(DAT_005869f4, piVar1);
    FUN_00539660((char *)&DAT_00586a48,4,1,piVar1);
    FUN_00539660((char *)&DAT_00586a40,4,1,piVar1);
    FUN_00539660((char *)&DAT_00586a44,4,1,piVar1);
    FUN_00539660((char *)&DAT_00586a3c,4,1,piVar1);
    FUN_005394d0(piVar1);
  }
  return;
}
