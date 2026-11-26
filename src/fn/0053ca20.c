/* Rebuilt from lomse.exe FUN_0053ca20 @ 0x0053ca20 (182 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053c7f0 ((undefined1 * (__cdecl *)(undefined1 *, int, int, int *, char))0x0053c7f0)
#define FUN_0053c960 ((char * (__cdecl *)(char *, uint, int *, char))0x0053c960)
#define FUN_00544120 ((undefined4 (__cdecl *)(char *, int, int))0x00544120)
#define FUN_005441c0 ((int * (__cdecl *)(uint, undefined4, int *, char *))0x005441c0)

#define LOM_SELF_0053ca20 1
void __cdecl rb_0053ca20(uint *param_1,char *param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char cVar2;
  char *pcVar3;
  uchar _fr[0x30] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_28;
  typedef int _t_local_24;
  typedef char _t_local_18[24];
#define local_28 (*(_t_local_28 *)(_fr + 0x0))
#define local_24 (*(_t_local_24 *)(_fr + 0x4))
#define local_18 (*(_t_local_18 *)(_fr + 0x10))
  
  FUN_005441c0(*param_1,param_1[1],&local_28,local_18);
  iVar1 = local_24 + -1;
  pcVar3 = param_2 + (local_28 == 0x2d);
  FUN_00544120(pcVar3,param_3,(int)&local_28);
  /* FIX (spelltest 2026-11-25): the original keeps decpt-1 in a register (53ca76 lea eax,[ecx-1]) and
   * does not write it back to the STRFLT; writing it back shifted %g's decimal point (56 -> "5.6"). */
  iVar2 = local_24 + -1;
  if ((iVar2 < -4) || ((int)param_3 <= iVar2)) {
    FUN_0053c7f0(param_2,param_3,param_4,&local_28,'\x01');
    return;
  }
  if (iVar1 < iVar2) {
    cVar2 = *pcVar3;
    while (cVar2 != '\0') {
      cVar2 = pcVar3[1];
      pcVar3 = pcVar3 + 1;
    }
    pcVar3[-1] = '\0';
  }
  FUN_0053c960(param_2,param_3,&local_28,'\x01');
  return;
#undef local_28
#undef local_24
#undef local_18
}
