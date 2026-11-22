/* Rebuilt from lomse.exe FUN_0053df10 @ 0x0053df10 (521 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d6a20 (*(undefined4 *)0x005d6a20)
#define FUN_0053b440 ((undefined4 (__cdecl *)(uint))0x0053b440)
#define FUN_0053b4c0 ((DWORD * (__stdcall *)(void))0x0053b4c0)
#define FUN_0053b4d0 ((DWORD * (__stdcall *)(void))0x0053b4d0)
#define FUN_0053f600 ((DWORD (__cdecl *)(uint, LONG, DWORD))0x0053f600)
#define GetLastError (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d044) /* KERNEL32.DLL!GetLastError via IAT */
#define WriteFile (*(__typeof__(BOOL (__stdcall *)(HANDLE, LPCVOID, DWORD, LPDWORD, LPOVERLAPPED)) *)0x0054d0fc) /* KERNEL32.DLL!WriteFile via IAT */

#define LOM_SELF_0053df10 1
int __cdecl rb_0053df10(uint param_1,char *param_2,uint param_3)

{
  int *piVar1;
  char cVar2;
  char *pcVar3;
  BOOL BVar4;
  DWORD *pDVar5;
  int iVar6;
  char *pcVar7;
  uchar _fr[0x428] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef DWORD _t_local_41c;
  typedef DWORD _t_local_414;
  typedef DWORD _t_local_410;
  typedef int _t_local_40c;
  typedef int * _t_local_408;
  typedef char _t_local_404[1028];
#define local_41c (*(_t_local_41c *)(_fr + 0x4))
#define local_414 (*(_t_local_414 *)(_fr + 0xc))
#define local_410 (*(_t_local_410 *)(_fr + 0x10))
#define local_40c (*(_t_local_40c *)(_fr + 0x14))
#define local_408 (*(_t_local_408 *)(_fr + 0x18))
#define local_404 (*(_t_local_404 *)(_fr + 0x1c))
  
  local_41c = 0;
  local_40c = 0;
  if (param_3 == 0) {
    return 0;
  }
  piVar1 = &DAT_005d6a20 + ((int)param_1 >> 5);
  iVar6 = (param_1 & 0x1f) * 0x24;
  local_408 = piVar1;
  if ((*(byte *)(iVar6 + 4 + *piVar1) & 0x20) != 0) {
    FUN_0053f600(param_1,0,2);
  }
  if ((*(byte *)((undefined4 *)(*piVar1 + iVar6) + 1) & 0x80) == 0) {
    BVar4 = WriteFile(*(HANDLE *)(*piVar1 + iVar6),param_2,param_3,&local_410,(LPOVERLAPPED)0x0);
    if (BVar4 == 0) {
      local_414 = GetLastError();
    }
    else {
      local_414 = 0;
      local_41c = local_410;
    }
  }
  else {
    local_414 = 0;
    pcVar7 = param_2;
    if (param_3 != 0) {
      do {
        pcVar3 = local_404;
        do {
          if (param_3 <= (uint)((int)pcVar7 - (int)param_2)) break;
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          if (cVar2 == '\n') {
            *pcVar3 = '\r';
            local_40c = local_40c + 1;
            pcVar3 = pcVar3 + 1;
          }
          *pcVar3 = cVar2;
          pcVar3 = pcVar3 + 1;
        } while ((int)pcVar3 - (int)local_404 < 0x400);
        BVar4 = WriteFile(*(HANDLE *)(iVar6 + *local_408),local_404,(int)pcVar3 - (int)local_404,
                          &local_410,(LPOVERLAPPED)0x0);
        if (BVar4 == 0) {
          local_414 = GetLastError();
          break;
        }
        local_41c = local_41c + local_410;
        if (((int)local_410 < (int)pcVar3 - (int)local_404) ||
           (param_3 <= (uint)((int)pcVar7 - (int)param_2))) break;
      } while( true );
    }
  }
  if (local_41c != 0) {
    return local_41c - local_40c;
  }
  if (local_414 != 0) {
    if (local_414 == 5) {
      pDVar5 = FUN_0053b4c0();
      *pDVar5 = 9;
      pDVar5 = FUN_0053b4d0();
      *pDVar5 = 5;
      return -1;
    }
    FUN_0053b440(local_414);
    return -1;
  }
  if (((*(byte *)(iVar6 + 4 + *local_408) & 0x40) == 0) || (*param_2 != '\x1a')) {
    pDVar5 = FUN_0053b4c0();
    *pDVar5 = 0x1c;
    pDVar5 = FUN_0053b4d0();
    *pDVar5 = 0;
    return -1;
  }
  return 0;
#undef local_41c
#undef local_414
#undef local_410
#undef local_40c
#undef local_408
#undef local_404
}
