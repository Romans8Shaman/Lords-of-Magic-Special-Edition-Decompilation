/* Rebuilt from lomse.exe FUN_0053a5e0 @ 0x0053a5e0 (383 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d5310 (*(LCID *)0x005d5310)
#define DAT_005d6b28 (*(int *)0x005d6b28)
#define DAT_005d6b2c (*(undefined *)0x005d6b2c)
#define FUN_0053bce0 ((undefined4 (__cdecl *)(undefined *))0x0053bce0)
#define FUN_0053c1f0 ((undefined4 (__cdecl *)(uint))0x0053c1f0)
#define FUN_0053cbb0 ((undefined4 (__cdecl *)(int))0x0053cbb0)
#define FUN_0053cc30 ((undefined4 (__cdecl *)(int))0x0053cc30)
#define FUN_0053f680 ((int (__cdecl *)(LCID, DWORD, char *, LPWSTR, LPWSTR, int, UINT, int))0x0053f680)
#define InterlockedDecrement (*(__typeof__(LONG (__stdcall *)(LONG *)) *)0x0054d1f0) /* KERNEL32.DLL!InterlockedDecrement via IAT */
#define InterlockedIncrement (*(__typeof__(LONG (__stdcall *)(LONG *)) *)0x0054d1e0) /* KERNEL32.DLL!InterlockedIncrement via IAT */

#define LOM_SELF_0053a5e0 1
char * __cdecl rb_0053a5e0(char *param_1)

{
  char cVar1;
  WCHAR WVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  LPWSTR pWVar7;
  LPWSTR pWVar8;
  LPWSTR pWVar9;
  char *pcVar10;
  bool bVar11;
  
  pWVar7 = (LPWSTR)0x0;
  if (DAT_005d5310 == 0) {
    pcVar3 = param_1;
    if (*param_1 != '\0') {
      do {
        cVar1 = *param_1;
        if (('`' < cVar1) && (cVar1 < '{')) {
          *param_1 = cVar1 + -0x20;
        }
        pcVar10 = param_1 + 1;
        param_1 = param_1 + 1;
      } while (*pcVar10 != '\0');
      return pcVar3;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_005d6b2c);
    bVar11 = DAT_005d6b28 != 0;
    if (bVar11) {
      InterlockedDecrement((LONG *)&DAT_005d6b2c);
      FUN_0053cbb0(0x13);
    }
    if (DAT_005d5310 == 0) {
      if (bVar11) {
        FUN_0053cc30(0x13);
      }
      else {
        InterlockedDecrement((LONG *)&DAT_005d6b2c);
      }
      pcVar3 = param_1;
      if (*param_1 != '\0') {
        do {
          cVar1 = *param_1;
          if (('`' < cVar1) && (cVar1 < '{')) {
            *param_1 = cVar1 + -0x20;
          }
          pcVar10 = param_1 + 1;
          param_1 = param_1 + 1;
        } while (*pcVar10 != '\0');
        return pcVar3;
      }
    }
    else {
      uVar4 = FUN_0053f680(DAT_005d5310,0x200,param_1,(LPWSTR)0xffffffff,(LPWSTR)0x0,0,0,1);
      if (((uVar4 != 0) && (pWVar7 = (LPWSTR)FUN_0053c1f0(uVar4), pWVar7 != (LPWSTR)0x0)) &&
         (iVar5 = FUN_0053f680(DAT_005d5310,0x200,param_1,(LPWSTR)0xffffffff,pWVar7,uVar4,0,1),
         iVar5 != 0)) {
        uVar4 = 0xffffffff;
        pWVar8 = pWVar7;
        do {
          pWVar9 = pWVar8;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pWVar9 = (LPWSTR)((int)pWVar8 + 1);
          WVar2 = *pWVar8;
          pWVar8 = pWVar9;
        } while ((char)WVar2 != '\0');
        uVar4 = ~uVar4;
        pcVar3 = (char *)((int)pWVar9 - uVar4);
        pcVar10 = param_1;
        for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar10 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar10 = pcVar10 + 1;
        }
      }
      if (bVar11) {
        FUN_0053cc30(0x13);
        FUN_0053bce0((undefined *)pWVar7);
        return param_1;
      }
      InterlockedDecrement((LONG *)&DAT_005d6b2c);
      FUN_0053bce0((undefined *)pWVar7);
    }
  }
  return param_1;
}
