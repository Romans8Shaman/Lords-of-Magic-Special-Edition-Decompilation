/* Rebuilt from lomse.exe FUN_0053ac50 @ 0x0053ac50 (420 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d6a20 (*(undefined4 *)0x005d6a20)
#define FUN_0053b4c0 ((DWORD * (__stdcall *)(void))0x0053b4c0)
#define FUN_0053f580 ((DWORD (__cdecl *)(uint, LONG, DWORD))0x0053f580)

#define LOM_SELF_0053ac50 1
DWORD __cdecl rb_0053ac50(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  DWORD DVar5;
  DWORD *pDVar6;
  char *pcVar7;
  int iVar8;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef DWORD _t_local_8;
  typedef DWORD _t_local_4;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  uVar1 = param_1[4];
  if ((int)param_1[1] < 0) {
    param_1[1] = 0;
  }
  local_4 = FUN_0053f580(uVar1,0,1);
  if ((int)local_4 < 0) {
    return 0xffffffff;
  }
  uVar2 = param_1[3];
  if ((uVar2 & 0x108) == 0) {
    return local_4 - param_1[1];
  }
  pcVar7 = (char *)*param_1;
  pcVar3 = (char *)param_1[2];
  local_8 = (int)pcVar7 - (int)pcVar3;
  if ((uVar2 & 3) == 0) {
    if ((uVar2 & 0x80) == 0) {
      pDVar6 = FUN_0053b4c0();
      *pDVar6 = 0x16;
      return 0xffffffff;
    }
  }
  else if (((*(byte *)((&DAT_005d6a20)[(int)uVar1 >> 5] + 4 + (uVar1 & 0x1f) * 0x24) & 0x80) != 0)
          && (pcVar4 = pcVar3, pcVar3 < pcVar7)) {
    do {
      if (*pcVar4 == '\n') {
        local_8 = local_8 + 1;
      }
      pcVar4 = pcVar4 + 1;
    } while (pcVar4 < pcVar7);
  }
  if (local_4 == 0) {
    return local_8;
  }
  if ((*(byte *)(param_1 + 3) & 1) == 0) goto LAB_0053adc7;
  if (param_1[1] == 0) {
    return local_4;
  }
  pcVar7 = pcVar7 + (param_1[1] - (int)pcVar3);
  iVar8 = (uVar1 & 0x1f) * 0x24;
  if ((*(byte *)(iVar8 + 4 + (&DAT_005d6a20)[(int)uVar1 >> 5]) & 0x80) != 0) {
    DVar5 = FUN_0053f580(uVar1,0,2);
    if (DVar5 == local_4) {
      pcVar4 = (char *)param_1[2];
      pcVar3 = pcVar4 + (int)pcVar7;
      for (; pcVar4 < pcVar3; pcVar4 = pcVar4 + 1) {
        if (*pcVar4 == '\n') {
          pcVar7 = pcVar7 + 1;
        }
      }
      if ((param_1[3] & 0x2000) != 0) goto LAB_0053adbe;
    }
    else {
      FUN_0053f580(uVar1,local_4,0);
      if (((pcVar7 < (char *)0x201) && ((param_1[3] & 8) != 0)) && ((param_1[3] & 0x400) == 0)) {
        pcVar7 = (char *)0x200;
      }
      else {
        pcVar7 = (char *)param_1[6];
      }
      if ((*(byte *)(iVar8 + 4 + (&DAT_005d6a20)[(int)uVar1 >> 5]) & 4) != 0) {
LAB_0053adbe:
        pcVar7 = pcVar7 + 1;
      }
    }
  }
  local_4 = local_4 - (int)pcVar7;
LAB_0053adc7:
  return local_4 + local_8;
#undef local_8
#undef local_4
}
