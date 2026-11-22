/* Rebuilt from lomse.exe op_clearscriptoutputfile @ 0x004d7110 (42 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00556168 (*(undefined *)0x00556168)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FUN_00505110 ((char * (__thiscall *)(void *, int, uint))0x00505110)
#define FUN_005394d0 ((undefined4 (__cdecl *)(int *))0x005394d0)
#define FUN_00539610 ((undefined4 (__cdecl *)(LPCSTR, char *))0x00539610)

#define LOM_SELF_004d7110 1
void __cdecl rb_004d7110(void)

{
  char *pcVar1;
  int *piVar2;
  
  pcVar1 = FUN_00505110(&DAT_00584ae8,1,0xffffffff);
  piVar2 = (int *)FUN_00539610(pcVar1,&DAT_00556168);
  if (piVar2 != (int *)0x0) {
    FUN_005394d0(piVar2);
  }
  return;
}
