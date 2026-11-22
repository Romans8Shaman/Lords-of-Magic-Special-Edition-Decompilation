/* Rebuilt from lomse.exe FUN_0053b880 @ 0x0053b880 (299 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053b4c0 ((DWORD * (__stdcall *)(void))0x0053b4c0)
#define FUN_0053b4d0 ((DWORD * (__stdcall *)(void))0x0053b4d0)
#define FUN_0053b9b0 ((undefined4 (__cdecl *)(uint))0x0053b9b0)
#define FUN_0053c1f0 ((undefined4 (__cdecl *)(uint))0x0053c1f0)
#define GetCurrentDirectoryA (*(__typeof__(DWORD (__stdcall *)(DWORD, LPSTR)) *)0x0054d1f4) /* KERNEL32.DLL!GetCurrentDirectoryA via IAT */
#define GetFullPathNameA (*(__typeof__(DWORD (__stdcall *)(LPCSTR, DWORD, LPSTR, LPSTR *)) *)0x0054d1fc) /* KERNEL32.DLL!GetFullPathNameA via IAT */

#define LOM_SELF_0053b880 1
char * __cdecl rb_0053b880(uint param_1,char *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  DWORD *pDVar3;
  DWORD DVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  uchar _fr[0x118] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef char _t_local_10c[4];
  typedef LPSTR _t_local_108;
  typedef CHAR _t_local_104[260];
#define local_10c (*(_t_local_10c *)(_fr + 0x4))
#define local_108 (*(_t_local_108 *)(_fr + 0x8))
#define local_104 (*(_t_local_104 *)(_fr + 0xc))
  
  if (param_1 == 0) {
    DVar4 = GetCurrentDirectoryA(0x104,local_104);
  }
  else {
    iVar2 = FUN_0053b9b0(param_1);
    if (iVar2 == 0) {
      pDVar3 = FUN_0053b4d0();
      *pDVar3 = 0xf;
      pDVar3 = FUN_0053b4c0();
      *pDVar3 = 0xd;
      return (char *)0x0;
    }
    local_10c[0] = (char)param_1 + '@';
    local_10c[1] = 0x3a;
    local_10c[2] = 0x2e;
    local_10c[3] = 0;
    DVar4 = GetFullPathNameA(local_10c,0x104,local_104,&local_108);
  }
  if ((DVar4 == 0) || (uVar5 = DVar4 + 1, 0x104 < uVar5)) {
    return (char *)0x0;
  }
  if (param_2 == (char *)0x0) {
    if ((int)uVar5 <= (int)param_3) {
      uVar5 = param_3;
    }
    param_2 = (char *)FUN_0053c1f0(uVar5);
    if (param_2 == (char *)0x0) {
      pDVar3 = FUN_0053b4c0();
      *pDVar3 = 0xc;
      return (char *)0x0;
    }
  }
  else if ((int)param_3 < (int)uVar5) {
    pDVar3 = FUN_0053b4c0();
    *pDVar3 = 0x22;
    return (char *)0x0;
  }
  uVar5 = 0xffffffff;
  pcVar7 = local_104;
  do {
    pcVar8 = pcVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar7 = pcVar8 + -uVar5;
  pcVar8 = param_2;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  return param_2;
#undef local_10c
#undef local_108
#undef local_104
}
