/* Rebuilt from lomse.exe FUN_0053e850 @ 0x0053e850 (215 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00539af0 ((undefined4 (__cdecl *)(undefined4 *, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4))0x00539af0)
#define FUN_00539c50 ((int (__cdecl *)(int, int, int, uint *, uint *))0x00539c50)
#define FUN_0053e9f0 ((undefined4 (__cdecl *)(PEXCEPTION_RECORD, PVOID, DWORD, undefined4, int, byte *, byte *, int *, int, PVOID))0x0053e9f0)
#define FUN_0053efa0 ((DWORD * (__stdcall *)(void))0x0053efa0)

#define LOM_SELF_0053e850 1
void __cdecl
rb_0053e850(PEXCEPTION_RECORD volatile param_1, PVOID volatile param_2, DWORD volatile param_3, undefined4 volatile param_4, int volatile param_5, int volatile param_6, int volatile param_7, PVOID volatile param_8)

{
  DWORD *pDVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_8;
  typedef uint _t_local_4;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  pDVar1 = FUN_0053efa0();
  if ((pDVar1[0x1a] != 0) &&
     (iVar2 = FUN_00539af0(&param_1->ExceptionCode,param_2,param_3,param_4,param_5,param_7,param_8),
     iVar2 != 0)) {
    return;
  }
  piVar3 = (int *)FUN_00539c50(param_5,param_7,param_6,&local_8,&local_4);
  if (local_8 < local_4) {
    do {
      if ((*piVar3 <= param_6) && (param_6 <= piVar3[1])) {
        iVar4 = piVar3[4] + piVar3[3] * 0x10;
        iVar2 = *(int *)(iVar4 + -0xc);
        if ((iVar2 == 0) || (*(char *)(iVar2 + 8) == '\0')) {
          FUN_0053e9f0(param_1,param_2,param_3,param_4,param_5,(byte *)(iVar4 + -0x10),(byte *)0x0,
                       piVar3,param_7,param_8);
        }
      }
      local_8 = local_8 + 1;
      piVar3 = piVar3 + 5;
    } while (local_8 < local_4);
  }
  return;
#undef local_8
#undef local_4
}
